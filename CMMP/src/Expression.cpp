#include "Expression.h"

Expression::Expression(Type t) : type(t) {}

Expression::~Expression(void) {}

vector<FunctionCall *> Expression::findFunctionCalls(void){
    vector<FunctionCall *> v;
    return v;
}

vector<VariableCall *> Expression::findVarCalls(void){
    vector<VariableCall *> v;
    return v;
}
