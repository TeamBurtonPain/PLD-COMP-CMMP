#pragma once

#include <vector>
#include "CommonTypes.h"
#include "Funct.h"
#include "Expression.h"

class FunctionCall : public Expression{
    public :
        FunctionCall(const Funct function);
        virtual ~FunctionCall(void);
        void addArg(const Expression&);

    protected :
        ptr<Funct> function;
        vector<Expression> arguments;
};