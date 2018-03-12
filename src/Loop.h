#pragma once

#include "Instruction.h"
#include "Expression.h"
#include "Block.h"

using namespace std;

class Loop
{
public:
	Loop();
	virtual ~Loop() = 0;
protected:
	Expression * finalTest;
	Block instruction;
}