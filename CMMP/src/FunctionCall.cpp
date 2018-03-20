#include "FunctionCall.h"

FunctionCall::FunctionCall(Type t, string n):Expression(t), name(n){}

FunctionCall::~FunctionCall(void){
}

void FunctionCall::addArg(Expression & argument){ 
    arguments.push_back(ptr<Expression>(&argument));
}