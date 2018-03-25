#pragma once

#include "CommonTypes.h"
#include <deque>
#include <iostream>
#include "Block.h"
#include "VarContainer.h"
#include "Variable.h"
#include "Instruction.h"
#include "ReturnInstr.h"

class Funct : public VarContainer
{
  public:
	Funct(Type returnType, string name);
	virtual ~Funct(void);
	Type getType(void) const { return returnType; }
	string getName(void) const { return name; }
	void addVariable(VariableDeclaration *);
	hashmap<string, VariableDeclaration *>& getParams(void){return parameters;};
	uint getArgCount(void);
	void setBlock(Block *);
	Block* getBlock(void){return instructions;};
	void setReturn(ReturnInstr* r){returnExpr = r;};
	ReturnInstr* getReturn(void){return returnExpr;};

	virtual vector<FunctionCall *> findFunctionCalls(void);
	virtual vector<VariableCall *> findVarCalls(void);
	virtual vector<ReturnInstr *> findReturns(void);

  protected:
	hashmap<string, VariableDeclaration *> parameters;
	Block *instructions=NULL;
	Type returnType;
	ReturnInstr* returnExpr=NULL;
	string name;
	//id(signature)
};