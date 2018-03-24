#pragma once

#include "CommonTypes.h"
#include "Type.h"
#include "Expression.h"
#include "Operators.h"

class UnaryExpr : public Expression{
    public :
        UnaryExpr(Type t, Expression* e, UnaryOp op);
        virtual ~UnaryExpr(void);
    
    protected : 
        Expression* expression;
        UnaryOp op;
};