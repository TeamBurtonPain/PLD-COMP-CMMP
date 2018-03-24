#pragma once

#include "Instruction.h"
#include "Block.h"
#include "Expression.h"
#include <deque>

using namespace std;

class Condition : public Instruction
{
  public:
	Condition(Expression *condition, Instruction *ifInstruction, Instruction *elseInstruction);
	Condition(Expression *condition, Instruction *ifInstruction);
	virtual ~Condition(void);

  protected:
	Expression *test;
	Instruction *instruction;
	Instruction *elseInstruction = NULL;
};