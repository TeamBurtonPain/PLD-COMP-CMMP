#pragma once

#include "Instruction.h"
#include "Block.h"
#include "Expression.h"
#include <deque>

using namespace std;

class Condition : public Instruction
{
public:
	Condition(void);
	virtual ~Condition(void);
protected:
	ptr<Expression> test;
	Block instructions;
	deque<Instruction> elseInstructions;  //TODO un block ici non ??
};