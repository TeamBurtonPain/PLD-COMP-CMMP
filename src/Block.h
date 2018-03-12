#pragma once

#include "Instruction.h"
#include "Variable.h"
#include <deque>
#include <unordered_map>

using hashmap = unordered_map;
using namespace std;

class Block : public Instruction
{
public:
	Block();
	virtual ~Block() = 0;
protected:
	hashmap<string, *Variable>;
	deque<Instruction> instructions;
}