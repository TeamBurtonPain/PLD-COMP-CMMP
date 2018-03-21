#pragma once

#include "Instruction.h"
#include "Block.h"
#include "Expression.h"
#include <deque>

using namespace std;

class Condition : public Instruction
{
public:
	Condition(Expression &condition, Instruction &ifInstruction, Instruction &elseInstruction);
	Condition(Expression &condition, Instruction &ifInstruction);
	virtual ~Condition(void);
protected:
	ptr<Expression> test;
	ptr<Instruction> instruction;
	ptr<Instruction> elseInstruction;
};