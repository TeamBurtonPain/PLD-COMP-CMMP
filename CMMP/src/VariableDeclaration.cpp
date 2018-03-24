#include "VariableDeclaration.h"

VariableDeclaration::VariableDeclaration(Type t, string n, uint l, uint c)
    : type(t), name(n), line(l), column(c) {}
VariableDeclaration::~VariableDeclaration(void)
{
    if (value)
        delete value;
}
vector<FunctionCall *> VariableDeclaration::findFunctionCalls(void){
    vector<FunctionCall *> v;
    
    if(value)
    {
        vector<FunctionCall *> subList = value->findFunctionCalls();
        v.insert(v.end(), subList.begin(), subList.end());
    }
    return v;
}

vector<VariableCall *> VariableDeclaration::findVarCalls(void){
    vector<VariableCall *> v;
    
    if(value)
    {
        vector<VariableCall *> subList = value->findVarCalls();
        v.insert(v.end(), subList.begin(), subList.end());
    }
    return v;
}
