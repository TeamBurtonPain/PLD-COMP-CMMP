#pragma once

#include "Instruction.h"
#include "Variable.h"
#include <deque>
#include <unordered_map>

using namespace std;

class Block
{
public:
	Block();
	virtual ~Block() = 0;
protected:
	unordered_map<string, *Variable>;
	deque<Instruction> instructions;
}