#pragma once

#include "Instruction.h"
#include "Expression.h"
#include "Block.h"

using namespace std;

class Loop : public Instruction
{
public:
	Loop(const Expression &finalTest, const Instruction& i);
	virtual ~Loop(void) = 0;
protected:
	ptr<const Expression> finalTest;
	ptr<const Instruction> instruction;
};