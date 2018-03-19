#pragma once

#include <array>
#include "CommonTypes.h"
#include "Funct.h"
#include "Expression.h"

class FunctionCall : public Expression{
    public :
        FunctionCall(Funct function);
        virtual ~FunctionCall(void);

    protected :
        ptr<Funct> function;
        Expression* arguments; //pointeur ? cf pour faire ça proprement
};