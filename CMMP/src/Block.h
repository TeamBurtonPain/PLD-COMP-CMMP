#pragma once

#include "CommonTypes.h"
#include "Instruction.h"
#include "VariableDeclaration.h"
#include <deque>

class VariableDeclaration;

class Block : public Instruction, public VarContainer
{
  public:
	Block(void);
	virtual ~Block(void);

	void addVariable(VariableDeclaration *);
	void addInstruction(Instruction *);

  protected:
	hashmap<string, VariableDeclaration *> variables;
	deque<Instruction *> instructions;
};