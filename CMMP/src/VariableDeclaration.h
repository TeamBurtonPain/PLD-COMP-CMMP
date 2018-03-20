#pragma once

#include "Variable.h"

class VariableDeclaration : public Variable{
    public: 
		VariableDeclaration(Type t, string n, uint l);
		virtual ~VariableDeclaration(void);
    protected:
};