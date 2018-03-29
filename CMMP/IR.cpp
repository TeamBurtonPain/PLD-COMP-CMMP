#include "IR.h"

#include "utilCMMP.h"

/////////////////////
// INSTR
/////////////////////

IRInstr::IRInstr(BasicBlock *bb_, Operation op, Type t, vector<string> params_)
:bb(bb_), op(op), t(t){
    for(auto i : params_){
        params.push_back(i);
    }
}

void IRInstr::gen_asm(ostream &o)
{
    string registers[6] = {"%rdi", "%rsi", "%rdx", "%rcx", "%r8", "%r9"};
    switch (op)
    {
    case IRInstr::Operation::ldconst:
        int val = params[1][0];
        o << utilCMMP::Indent(1) << "movq" << utilCMMP::Indent(1) << "$" << val << 
                utilCMMP::Indent(1) << bb->cfg->IR_reg_to_asm(params[0]) << endl;
        
        break;
    case IRInstr::Operation::add:
        break;
    case IRInstr::Operation::sub:
        break;
    case IRInstr::Operation::mul:
        break;
    case IRInstr::Operation::rmem:
        break;
    case IRInstr::Operation::wmem:
        break;
    case IRInstr::Operation::call:
        string func_name = params[0];
        string ret = params[1];
        //TODO : case ret != ""

        /* 
        - (for integer parameters) the next available register of the sequence 
        %rdi, %rsi, %rdx, %rcx, %r8 and %r9 is used.
        - Once all registers are assigned, the arguments are passed in memory. 
        They are pushed on the stack in reversed (right-to-left) order
        */
        /* 6 premiers paramètres */
        num_param = 0;
        nb_param = prams.size() - 2;
        while(num_param < 6 && num_param < nb_param){
            string curr_reg = registers[num_param];
            o << utilCMMP::Indent(1) << "movq" << utilCMMP::Indent(1) << 
                bb->cfg->IR_reg_to_asm(params[2+i]) << utilCMMP::Indent(1) << 
                curr_reg << endl;
            ++num_param;
        }
        if(num_param == 6 && nb_param > 6){//rem : redondant mais sécurité
            for(auto p = params.rend(); num_param < nb_param; ++num_param, ++p){
                //TODO : Plus de 6 params ? -> push dans l'ordre inverse + pop ensuite ??
                ++num_param;
            }
        }

        break;
    case IRInstr::Operation::cmp_eq:
        break;
    case IRInstr::Operation::cmp_lt:
        break;
    case IRInstr::Operation::cmp_le:
        break;
    }
}

/////////////////////
// BASIC BLOCK
/////////////////////

BasicBlock::BasicBlock(CFG *cfg, string entry_label):cfg(cfg), label(entry_label)
{
    exit_true = exit_false = nullptr;

}

//TODO
void BasicBlock::add_IRInstr(IRInstr::Operation op, Type t, vector<string> params){
    IRInstr *instr = new IRInstr(this, op, t, params);
    instrs.push_back(instr);
}

/////////////////////
// CFG
/////////////////////
CFG::CFG(Funct *f) : ast(f), nextFreeSymbolIndex(-8)
{
    for (auto v : f->findVarDeclarations())
    {
        add_to_symbol_table(v->getName(), v->getType());
    }
    ast->buildIR(this);
}

void CFG::gen_asm(ostream &o)
{
    gen_asm_prologue(o);
    for(auto bb : bbs){
        bb->gen_asm(o);
    }
    gen_asm_epilogue(o);
}

string CFG::IR_reg_to_asm(string reg)
{
    if (get_var_index(reg) != 0)
    {
        stringstream ss;
        ss << get_var_index(reg) << "(%rbp)";
        return ss.str();
    }
    else
    {
        return "$(unkown)"; //TODO : à voir ?
    }
}
//TODO : récupérer les paramètres de la fonction ?
void CFG::gen_asm_prologue(ostream &o)
{

    o << utilCMMP::Indent(1) << ".text" << endl;
    o << utilCMMP::Indent(1) << ".globl" << utilCMMP::Indent(1) << ast->getName() << endl;
    o << utilCMMP::Indent(1) << ".type" << utilCMMP::Indent(1) << ast->getName() << ", @function" << endl;

    o << ast->getName() << ":" << endl;
    o << utilCMMP::Indent(1) << "pushq" << utilCMMP::Indent(1) << "%rbp" << endl;
    o << utilCMMP::Indent(1) << "movq" << utilCMMP::Indent(1) << "%rsp, %rbp" << endl;
    int sp_pos = nextFreeSymbolIndex;
    if (sp_pos % 16 != 0)
    {
        sp_pos -= 16+(sp_pos % 16);
    }
    if (sp_pos < 0 && nextFreeSymbolIndex != -8)
    {
        o << utilCMMP::Indent(1) << "subq" << utilCMMP::Indent(1) << "$" << nextFreeSymbolIndex << ", %rsp" << endl;
    }
}
void CFG::gen_asm_epilogue(ostream &o)
{
    o << utilCMMP::Indent(1) << "movq" << utilCMMP::Indent(1) << "%rbp, %rsp" << endl;
    o << utilCMMP::Indent(1) << "popq" << utilCMMP::Indent(1) << "%rbp" << endl;
    o << utilCMMP::Indent(1) << "ret" << endl;
}

// symbol table methods
void CFG::add_to_symbol_table(string name, Type t)
{ //TODO : des vérifs à faire ?
    SymbolType[name] = t;
    SymbolIndex[name] = nextFreeSymbolIndex;
    nextFreeSymbolIndex -= 8; //TODO : meileure gestion mémoire ?
}
string CFG::create_new_tempvar(Type t){
    string name = "var_" + std::to_string(nextFreeSymbolIndex);
    add_to_symbol_table(name, t);
    return name;
}

int CFG::get_var_index(string name)
{
    if (SymbolIndex.find(name) != SymbolIndex.end())
    {
        return SymbolIndex[name];
    }
    else
    {
        return 0;
    }
}
Type CFG::get_var_type(string name)
{
    if (SymbolType.find(name) != SymbolType.end())
    {
        return SymbolType[name];
    }
    else
    {
        return Type::UNKNOWN;
    }
}

void CFG::add_bb(BasicBlock * bb){
    bbs.push_back(bb);
    current_bb = bb;
}

string CFG::new_BB_name(){
    if(current_bb == nullptr){
        nextBBnumber = 0;
    }
    return "bb_"+ std::to_string(nextBBnumber++);
}