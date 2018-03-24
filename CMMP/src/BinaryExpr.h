#pragma once

#include "CommonTypes.h"
#include "Operators.h"
#include "Expression.h"

class BinaryExpr : public Expression{
    public:
        BinaryExpr(Type, Expression* expr1, BinaryOp op, Expression* expr2);
        virtual ~BinaryExpr(void);
    protected:
        Expression* expr1;
        BinaryOp op;
        Expression* expr2;
};