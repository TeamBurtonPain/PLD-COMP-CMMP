#pragma once

class FunctionCall;

#include "CommonTypes.h"
#include "Type.h"
#include "Instruction.h"
#include <vector>

//classe abstraite
class Expression : public Instruction
{
  public:
	Expression(Type t);
	virtual ~Expression(void) = 0;
	Type getType(void) { return type; };
	void setType(Type t) { type = t; };

	virtual vector<FunctionCall *> findFunctionCalls(void);

  protected:
	Type type;
};