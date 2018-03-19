#include "FunctionCall.h"

FunctionCall::FunctionCall(const Funct function):Expression(function.getType()){}

FunctionCall::~FunctionCall(void){
}

void FunctionCall::addArg(Expression & argument){ 
    arguments.push_back(ptr<Expression>(&argument));
}