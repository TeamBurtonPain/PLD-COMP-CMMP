#pragma once

#include "Instruction.h"
#include "Block.h"
#include "Expression.h"
#include <deque>

using namespace std;

class Condition : public Instruction
{
public:
	Condition(const Expression &condition, const Instruction &ifInstruction, const Instruction &elseInstruction);
	virtual ~Condition(void);
protected:
	ptr<const Expression> test;
	ptr<const Instruction> instruction;
	ptr<const Instruction> elseInstruction;
};