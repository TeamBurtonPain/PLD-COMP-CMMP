#pragma once

#include "CommonTypes.h"
#include "Type.h"
#include "Instruction.h"
#include <vector>

class FunctionCall;
class VariableCall;
//classe abstraite
class Expression : public Instruction
{
public:
	Expression(Type t);
	virtual ~Expression(void) = 0;
	Type getType(void) { return type; }
	void setType(Type t) { type = t; }

	virtual vector<FunctionCall *> findFunctionCalls(void);
	virtual vector<VariableCall *> findVarCalls(void);

protected:
	Type type;
};