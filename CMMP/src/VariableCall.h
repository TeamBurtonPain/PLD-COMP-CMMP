#pragma once

#include <vector>
#include "Variable.h"

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

	virtual string buildIR(CFG *cfg);
	virtual string buildIRRead(CFG *cfg);
	virtual string buildIRWrite(CFG *cfg);

  protected:
	string code_name;
	VariableDeclaration *ref = NULL;
	bool read = false;
	bool write = false;
};