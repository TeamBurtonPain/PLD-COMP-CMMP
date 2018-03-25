#pragma once

#include "CommonTypes.h"
#include <iostream>
#include "Variable.h"
#include "Funct.h"

class Program : public VarContainer, public Parent
{
public:
	Program(void);
	virtual ~Program(void);

	void addVariable(VariableDeclaration *);
	hashmap<string, VariableDeclaration *>& getVariables(void){return variables;}

	void setMainFunction(Funct *mainF);
	Funct *getMainFunction(void) { return mainFunction; }

	void addFunction(Funct *f);
	hashmap<string, Funct *>& getFunctions(void){return otherFunctions;}

	Parent* getParent(void){return NULL;}

	virtual vector<FunctionCall *> findFunctionCalls(void);
	virtual vector<VariableCall *> findVarCalls(void);
	virtual vector<VariableDeclaration *> findVarDeclarations(void);

protected:
	hashmap<string, VariableDeclaration *> variables;
	Funct *mainFunction = NULL;
	hashmap<string, Funct *> otherFunctions;
};
