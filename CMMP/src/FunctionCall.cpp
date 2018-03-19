#include "FunctionCall.h"

FunctionCall::FunctionCall(const Funct function):Expression(function.getType()){}

FunctionCall::~FunctionCall(void){
    //nettoyer la cible du pointeur 'arguments'
}

void FunctionCall::addArg(const Expression & argument){
    //TODO
}