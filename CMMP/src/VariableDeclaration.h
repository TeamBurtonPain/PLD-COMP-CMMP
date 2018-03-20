#pragma once

#include "Expression.h"
#include "Variable.h"

class VariableDeclaration : public Variable{
    public: 
		VariableDeclaration(Type t, string name, uint line, Expression& value);
		VariableDeclaration(Type t, string name, uint line);
		virtual ~VariableDeclaration(void);
    protected:
    ptr<Expression> value;
};