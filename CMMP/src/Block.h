#pragma once

#include "CommonTypes.h"
#include "Instruction.h"
#include "Variable.h"
#include <deque>

class Variable;

class Block : public Instruction
{
	public:
		Block(void);
		virtual ~Block(void);

		void addVariable(Variable&);
		void addInstruction(Instruction&);

	protected:
		hashmap<string, ptr<Variable> > variables;
		deque<ptr<Instruction> > instructions;
};