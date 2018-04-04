#include "VariableDeclaration.h"

VariableDeclaration::VariableDeclaration(Type t, string n, uint l, uint c)
    : type(t), name(n), line(l), column(c) {}
VariableDeclaration::~VariableDeclaration(void)
{
    if (value)
        delete value;
}
vector<FunctionCall *> VariableDeclaration::findFunctionCalls(void)
{
    vector<FunctionCall *> v;

    if (value)
    {
        vector<FunctionCall *> subList = value->findFunctionCalls();
        v.insert(v.end(), subList.begin(), subList.end());
    }
    return v;
}

vector<VariableDeclaration *> VariableDeclaration::findVarDeclarations(void)
{
    vector<VariableDeclaration *> v;
    v.push_back(this);
    return v;
}

vector<VariableCall *> VariableDeclaration::findVarCalls(void)
{
    vector<VariableCall *> v;

    if (value)
    {
        vector<VariableCall *> subList = value->findVarCalls();
        v.insert(v.end(), subList.begin(), subList.end());
    }
    return v;
}

void VariableDeclaration::setParent(Parent *p)
{
    Instruction::setParent(p);

    Block *b = dynamic_cast<Block *>(p);
    if (b)
    {
        code_name = to_string(b->getNum()) + name;
    }
    else
    {
        code_name = name;
    }
}

string VariableDeclaration::buildIR(CFG *cfg)
{
    if(value != nullptr){
        string var = value->buildIR(cfg);
        //TODO ULTRA IMPORTANT
        int offset = cfg->get_var_index(name);
        string off = cfg->create_new_tempvar(Type::INT64);
        cfg->current_bb->add_IRInstr(IRInstr::Operation::ldconst, Type::INT64, {off, to_string(offset)});
        cfg->current_bb->add_IRInstr(IRInstr::Operation::add, Type::INT64, {off, "%rbp", off});
        cfg->current_bb->add_IRInstr(IRInstr::Operation::wmem, type, {off, var});
        return name;//dunno if useful ?
    }
    return "";
}

string VariableDeclaration::buildIRParam(CFG *cfg, int i)
{
    stringstream ss;
    ss << i;
    cfg->current_bb->add_IRInstr(IRInstr::Operation::wparam, type, {name, ss.str()});
    return name;//dunno if useful ?

}