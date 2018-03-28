#pragma once

#include "CommonTypes.h"
#include "Instruction.h"
#include "VariableDeclaration.h"
#include <deque>
#include "FunctionCall.h"
#include "VariableCall.h"
#include "IRNode.h"

class VariableDeclaration;

class Block : public Instruction, public VarContainer, public IRNode
{
public:
	Block(void);
	virtual ~Block(void);

	void addVariable(VariableDeclaration *);
	void addInstruction(Instruction *);

	hashmap<string, VariableDeclaration *> &getVariables(void) { return variables; }
	deque<Instruction *> &getInstructions(void) { return instructions; }

	virtual vector<FunctionCall *> findFunctionCalls(void);
	virtual vector<VariableCall *> findVarCalls(void);
	virtual vector<VariableDeclaration *> findVarDeclarations(void);
	virtual vector<ReturnInstr *> findReturns(void);

	virtual uint setTypeAuto(void);
	
	virtual string BuildIR(CFG *cfg);

protected:
	hashmap<string, VariableDeclaration *> variables;
	deque<Instruction *> instructions;
};