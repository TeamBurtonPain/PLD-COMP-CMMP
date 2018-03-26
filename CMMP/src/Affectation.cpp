#include "Affectation.h"

Affectation::Affectation(Type t, VariableCall *v) : Expression(t), leftValue(v)
{
}

Affectation::~Affectation(void)
{
    if (leftValue)
        delete (leftValue);
}

vector<VariableCall *> Affectation::findVarCalls(void)
{
    return leftValue->findVarCalls();
}

uint Affectation::setTypeAuto(){
    type = leftValue->getType();
    return 0;
}