#include "ReturnInstr.h"

ReturnInstr::ReturnInstr(Expression *e) : expr(e)
{
}

ReturnInstr::~ReturnInstr(void)
{
}

vector<FunctionCall *> ReturnInstr::findFunctionCalls(void)
{
    vector<FunctionCall *> v;
    return v;
}
vector<VariableCall *> ReturnInstr::findVarCalls(void)
{
    vector<VariableCall *> v;
    return v;
}
vector<ReturnInstr *> ReturnInstr::findReturns(void)
{
    vector<ReturnInstr *> v;
    v.push_back(this);
    return v;
}