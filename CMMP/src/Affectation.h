#pragma once

#include "CommonTypes.h"
#include "Expression.h"
#include "Variable.h"

class Affectation : public Expression{
    public:
        Affectation(Type, Variable &);
        ~Affectation(void);
    protected: 
        ptr<Variable> leftValue;
};