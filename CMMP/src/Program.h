#pragma once

#include "CommonTypes.h"
#include <iostream>
#include "Variable.h"
#include "Funct.h"

class Program : public VarContainer {
	public : 
		Program(void);
		virtual ~Program(void);

		void addVariable(VariableDeclaration*);
		void setMainFunction(Funct* mainF);
		void addFunction(Funct* f);

	protected : 
		hashmap <string, VariableDeclaration*> variables;
		Funct* mainFunction = NULL; 
		hashmap <string, Funct*> otherFunctions; 

};

