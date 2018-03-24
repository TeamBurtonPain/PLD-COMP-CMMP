#pragma once

#include "CommonTypes.h"
#include "VarContainer.h"
#include <vector>

class FunctionCall;

class Instruction
{
public:
	Instruction(void);
	virtual ~Instruction(void) = 0;
	void setParent(VarContainer *);
	VarContainer *getParent(void);

	virtual vector<FunctionCall *> findFunctionCalls(void)=0;

protected:
	VarContainer *parent = NULL;
};