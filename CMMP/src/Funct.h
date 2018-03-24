#pragma once

#include "CommonTypes.h"
#include <deque>
#include <iostream>
#include "Block.h"
#include "VarContainer.h"
#include "Variable.h"
#include "Instruction.h"

class Funct : public VarContainer
{
  public:
	Funct(Type returnType, string name);
	virtual ~Funct(void);
	Type getType(void) const { return returnType; }
	string getName(void) const { return name; }
	void addVariable(VariableDeclaration *);
	void setBlock(Block *);

  protected:
	hashmap<string, VariableDeclaration *> parameters;
	Block *instructions;
	Type returnType;
	string name;
	//id(signature)
};