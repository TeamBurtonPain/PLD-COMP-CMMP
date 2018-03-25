#pragma once

#include "Variable.h"

class VariableCall : public Variable {
	public:
		VariableCall(Type t, string n, uint l, uint c);
		virtual ~VariableCall(void);
		void setReference(VariableDeclaration*){};
		VariableDeclaration* getReference(void){return ref;};
	protected:
		VariableDeclaration* ref = NULL;
};