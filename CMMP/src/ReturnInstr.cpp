#include "ReturnInstr.h"

ReturnInstr::ReturnInstr(Expression *e) : expr(e)
{
}

ReturnInstr::~ReturnInstr(void)
{
    delete (expr);
}

vector<FunctionCall *> ReturnInstr::findFunctionCalls(void)
{
    vector<FunctionCall *> list;
    if (expr)
    {
        vector<FunctionCall *> subList = expr->findFunctionCalls();
        list.insert(list.end(), subList.begin(), subList.end());
    }

    return list;
}
vector<VariableCall *> ReturnInstr::findVarCalls(void)
{
    vector<VariableCall *> list;
    if (expr)
    {
        vector<VariableCall *> subList = expr->findVarCalls();
        list.insert(list.end(), subList.begin(), subList.end());
    }

    return list;
}
vector<ReturnInstr *> ReturnInstr::findReturns(void)
{
    vector<ReturnInstr *> v;
    v.push_back(this);
    return v;
}


string ReturnInstr::buildIR(CFG *cfg)
{
    if(expr != nullptr){
        string var = expr->buildIR(cfg);
        cfg->current_bb->add_IRInstr(IRInstr::Operation::ret, cfg->ast->getType(), {var}) ;  
    }
    return "";
}