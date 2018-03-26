#pragma once

#include "Instruction.h"
#include "Block.h"
#include "Expression.h"
#include "FunctionCall.h"
#include <deque>
#include <vector>
#include "VariableCall.h"

using namespace std;

class Condition : public Instruction
{
public:
	Condition(Expression *condition, Instruction *ifInstruction, Instruction *elseInstruction);
	Condition(Expression *condition, Instruction *ifInstruction);
	virtual ~Condition(void);

	Expression *getTest(void) { return test; }
	Instruction *getIfInstr(void) { return instruction; }
	Instruction *getElseInstr(void) { return elseInstruction; }

	virtual vector<FunctionCall *> findFunctionCalls(void);
	virtual vector<VariableCall *> findVarCalls(void);
	virtual vector<VariableDeclaration *> findVarDeclarations(void);
	virtual vector<ReturnInstr *> findReturns(void);

	virtual uint setTypeAuto(void);
	
protected:
	Expression *test;
	Instruction *instruction;
	Instruction *elseInstruction = NULL;
};