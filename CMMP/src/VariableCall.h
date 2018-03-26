#pragma once

#include "Variable.h"
#include <vector>

class VariableCall : public Variable
{
public:
	VariableCall(Type t, string n, uint l, uint c);
	virtual ~VariableCall(void);

	void setReference(VariableDeclaration *r) { ref = r; }
	VariableDeclaration *getReference(void) { return ref; }
	virtual vector<VariableCall *> findVarCalls(void);

	bool isRead(void) { return read; }
	bool isWrite(void) { return write; }
	void setRead(bool b) { read = b; }
	void setWrite(bool b) { write = b; }

protected:
	VariableDeclaration *ref = NULL;
	bool read = false;
	bool write = false;
};