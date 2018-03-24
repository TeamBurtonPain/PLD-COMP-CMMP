#include "FunctionCall.h"

FunctionCall::FunctionCall(Type t, string n):Expression(t), name(n){}

FunctionCall::~FunctionCall(void){
    for (vector<Expression*>::const_iterator it = arguments.begin(); it != arguments.end(); ++it)
    {
        delete *it;
    }
    arguments.clear();

    if (function) delete function;
}

void FunctionCall::addArg(Expression* argument){ 
    arguments.push_back(argument);
}