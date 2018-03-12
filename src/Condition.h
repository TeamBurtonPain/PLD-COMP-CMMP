#pragma once

#include "Instruction.h"
#include "Block.h"
#include "Expression.h"
#include <deque>

using namespace std;

class Condition
{
public:
	Condition();
	virtual ~Condition() = 0;
protected:
	Expression *test;
	Block instruction;
	deque<Instruction> elseInstruction
}