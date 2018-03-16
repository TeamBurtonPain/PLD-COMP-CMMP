#pragma once

#include "Instruction.h"
#include "Block.h"
#include "Expression.h"
#include <deque>

using namespace std;

class Condition : public Instruction
{
public:
	Condition();
	virtual ~Condition(void);
protected:
	Expression *test;
	Block instruction;
	deque<Instruction> elseInstruction
};