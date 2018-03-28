#include "IR.h"

#include "utilCMMP.h"

/////////////////////
// INSTR
/////////////////////

void IRInstr::gen_asm(ostream &o)
{
    string registers[] = {"", "", ""};
    switch (op)
    {
    case IRInstr::Operation::ldconst:
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
    nextFreeSymbolIndex -= 8;
}
string CFG::create_new_tempvar(Type t) { return ""; } //TODO
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

string CFG::new_BB_name(){
    if(current_bb == nullptr){
        nextBBnumber = 0;
    }
    return "bb_"+ std::to_string(nextBBnumber++);
}