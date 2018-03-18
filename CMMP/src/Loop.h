#pragma once

#include "Instruction.h"
#include "Expression.h"
#include "Block.h"

using namespace std;

class Loop : public Instruction
{
public:
	Loop(void);
	virtual ~Loop(void) = 0;
protected:
	ptr<Expression> finalTest;
	Block instructions;
};