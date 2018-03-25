#pragma once

#include "Variable.h"
#include <vector>

class VariableCall : public Variable
{
  public:
	VariableCall(Type t, string n, uint l, uint c);
	virtual ~VariableCall(void);
	void setReference(VariableDeclaration *){};
	VariableDeclaration *getReference(void) { return ref; };

	virtual vector<VariableCall *> findVarCalls(void);

  protected:
	VariableDeclaration *ref = NULL;
};