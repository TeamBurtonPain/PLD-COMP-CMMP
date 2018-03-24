#include "ReturnInstr.h"

ReturnInstr::ReturnInstr(Expression *e) : expr(e)
{
}

ReturnInstr::~ReturnInstr(void)
{
}

vector<ReturnInstr *> ReturnInstr::findReturns(void){
    vector<ReturnInstr *> v;
    v.push_back(this);
    return v;
}