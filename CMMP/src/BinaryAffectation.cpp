#include "BinaryAffectation.h"

BinaryAffectation::BinaryAffectation(Type t, VariableCall *leftValue, OpBinaryAffectation op, Expression *rightValue)
    : Affectation(t, leftValue), op(op), expr2(rightValue)
{
} 
BinaryAffectation::~BinaryAffectation(void)
{
    if (expr2)
        delete (expr2);
}

vector<FunctionCall *> BinaryAffectation::findFunctionCalls(void){
    return expr2->findFunctionCalls();
}

vector<VariableCall *> BinaryAffectation::findVarCalls(void){
    vector<VariableCall *> v = expr2->findVarCalls();
    vector<VariableCall *> subList = leftValue->findVarCalls();
    v.insert(v.end(), subList.begin(), subList.end());
    return v;
}
