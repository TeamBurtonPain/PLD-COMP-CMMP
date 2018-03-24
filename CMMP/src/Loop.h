#pragma once

#include "Instruction.h"
#include "Expression.h"
#include "Block.h"

using namespace std;

class Loop : public Instruction
{
  public:
	Loop(Expression *finalTest, Instruction *i);
	virtual ~Loop(void);

	Expression *getExpression(void) { return finalTest; };
	Instruction *getInstruction(void) { return instruction; };

	virtual vector<FunctionCall *> findFunctionCalls(void);
	virtual vector<VariableCall *> findVarCalls(void);

  protected:
	Expression *finalTest;
	Instruction *instruction;
};