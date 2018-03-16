#pragma once

#include "CommonTypes.h"
#include "Instruction.h"
#include "Variable.h"
#include <deque>

class Block : public Instruction
{
public:
	Block();
	virtual ~Block(void);
protected:
	hashmap<string, *Variable>;
	deque<Instruction> instructions;
};