#pragma once

#include "Expression.h"
#include "Variable.h"

class VariableDeclaration : public Variable{
    public: 
		VariableDeclaration(Type t, string name, uint line, uint col, Expression& value);
		VariableDeclaration(Type t, string name, uint line, uint col);
		virtual ~VariableDeclaration(void);
    protected:
    ptr<Expression> value;
};