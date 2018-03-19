#pragma once

#include "CommonTypes.h"
#include "Affectation.h"
#include "Operators.h"

class BinaryAffectation : public Affectation{
    public:
        BinaryAffectation(Type, Variable& leftValue, OpBinaryAffectation, Expression& rightValue);
        virtual ~BinaryAffectation(void);
    protected: 
        OpBinaryAffectation op;
        ptr<Expression> expr2;
};