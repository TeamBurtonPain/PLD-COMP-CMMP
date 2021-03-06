#pragma once

#include <deque>
#include "CommonTypes.h"
#include "Block.h"
#include "VarContainer.h"
#include "Variable.h"
#include "Instruction.h"
#include "ReturnInstr.h"

#include "Parent.h"
#include "IRNode.h"

class Block;

//TODO : il peut y avoir plusieurs instructions de retour !
class Funct : public VarContainer, public Parent, public IRNode
{
  public:
	Funct(Type returnType, string name);
	virtual ~Funct(void);

	Type getType(void) const { return returnType; }

	string getName(void) const { return name; }

	void addVariable(VariableDeclaration *);
	hashmap<string, VariableDeclaration *> &getVariables(void);
	vector<VariableDeclaration *> &getVariablesInVector(void) { return parameters; }
	uint getArgCount(void);

	void setBlock(Block *);
	Block *getBlock(void) { return instructions; }
	/*
	void setReturn(ReturnInstr *r) { returnExpr = r; }
	ReturnInstr *getReturn(void) { return returnExpr; }
*/
	void setParent(Parent *p) { parent = p; }
	Parent *getParent(void) { return parent; }

	virtual vector<FunctionCall *> findFunctionCalls(void);
	virtual vector<VariableCall *> findVarCalls(void);
	virtual vector<VariableDeclaration *> findVarDeclarations(void);
	virtual vector<ReturnInstr *> findReturns(void);

	virtual errorReturns setTypeAuto(void);

	virtual string buildIR(CFG *cfg);

  protected:
	vector<VariableDeclaration *> parameters;
	hashmap<string, VariableDeclaration *> paramInMap; //redundonante :'(
	Block *instructions = nullptr;
	Type returnType;
	vector<ReturnInstr *> returnExpr;
	string name;
	Parent *parent = nullptr;
};
