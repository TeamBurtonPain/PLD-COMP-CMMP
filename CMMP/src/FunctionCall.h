#pragma once

#include <vector>
#include "CommonTypes.h"
#include "Funct.h"
#include "Expression.h"

class FunctionCall : public Expression{
    public :
        FunctionCall(Type t, string n);
        virtual ~FunctionCall(void);
        void addArg(Expression*);

    protected :
        Funct* function = NULL;
        string name;
        vector<Expression*> arguments;
};