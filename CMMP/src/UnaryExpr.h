#pragma once

#include "CommonTypes.h"
#include "Type.h"
#include "Expression.h"
#include "Operators.h"

class UnaryExpr : public Expression{
    public :
        UnaryExpr(Type t, const Expression &e, UnaryOp op);
        virtual ~UnaryExpr(void);
    
    protected : 
        ptr<const Expression> expression;
        UnaryOp op;
};