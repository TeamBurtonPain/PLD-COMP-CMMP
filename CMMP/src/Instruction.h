#pragma once

#include "CommonTypes.h"
#include "VarContainer.h"
#include <vector>

class FunctionCall;
class ReturnInstr;
class VariableCall;
class Instruction
{
public:
	Instruction(void);
	virtual ~Instruction(void) = 0;
	void setParent(VarContainer *);
	VarContainer *getParent(void);

	virtual vector<FunctionCall *> findFunctionCalls(void)=0;
	virtual vector<VariableCall *> findVarCalls(void)=0;
	virtual vector<ReturnInstr *> findReturns(void);

protected:
	VarContainer *parent = NULL;
};