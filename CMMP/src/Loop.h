#pragma once

#include "Instruction.h"
#include "Expression.h"
#include "Block.h"

using namespace std;

class Loop : public Instruction
{
public:
	Loop(Expression* finalTest, Instruction* i);
	virtual ~Loop(void);
protected:
	Expression* finalTest;
	Instruction* instruction;
};