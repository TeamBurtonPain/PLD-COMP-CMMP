#pragma once

#include "CommonTypes.h"
#include "VarContainer.h"
#include "Parent.h"
#include <vector>
#include "IRNode.h"

class FunctionCall;
class ReturnInstr;
class VariableCall;
class Instruction : public Parent, public IRNode
{
  public:
	Instruction(void);
	virtual ~Instruction(void) = 0;
	void setParent(Parent *);
	Parent *getParent(void);

	virtual vector<FunctionCall *> findFunctionCalls(void) = 0;
	virtual vector<VariableCall *> findVarCalls(void) = 0;
	virtual vector<VariableDeclaration *> findVarDeclarations(void);
	virtual vector<ReturnInstr *> findReturns(void);

	virtual uint setTypeAuto(void);

	virtual string BuildIR(CFG *cfg) = 0;

  protected:
	Parent *parent = NULL;
};