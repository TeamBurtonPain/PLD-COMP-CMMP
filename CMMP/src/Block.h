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

	hashmap<string, VariableDeclaration *> getVariables(void) { return variables; };
	deque<Instruction *> getInstructions(void) { return instructions; };

	virtual vector<FunctionCall *> findFunctionCalls(void);

protected:
	hashmap<string, VariableDeclaration *> variables;
	deque<Instruction *> instructions;
};