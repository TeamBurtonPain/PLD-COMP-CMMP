#pragma once

#include <vector>
#include "CommonTypes.h"
#include "VarContainer.h"

#include "Parent.h"
#include "IRNode.h"

class FunctionCall;
class ReturnInstr;
class VariableCall;
class Instruction : public Parent, public IRNode
{
public:
	Instruction(void);
	virtual ~Instruction(void);
	void setParent(Parent *);
	Parent *getParent(void);

	virtual vector<FunctionCall *> findFunctionCalls(void) = 0;
	virtual vector<VariableCall *> findVarCalls(void) = 0;
	virtual vector<VariableDeclaration *> findVarDeclarations(void);
	virtual vector<ReturnInstr *> findReturns(void);

	virtual errorReturns setTypeAuto(void);

	virtual string buildIR(CFG *cfg) = 0;

protected:
	Parent *parent = NULL;
};