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

errorReturns Affectation::setTypeAuto(){
    type = leftValue->getType();

    errorReturns errors;
    errors.errors = 0;
    errors.warnings = 0;

    return errors;
}