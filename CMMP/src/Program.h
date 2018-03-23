#pragma once

#include "CommonTypes.h"
#include <iostream>
#include "Variable.h"
#include "Funct.h"

class Program : public VarContainer {
	public : 
		Program(void);
		virtual ~Program(void);

		void addVariable(ptr<VariableDeclaration>);
		void setMainFunction(ptr<Funct> mainF);
		void addFunction(ptr<Funct> f);

	protected : 
		hashmap <string, ptr<VariableDeclaration>> variables;
		ptr<Funct> mainFunction; 
		hashmap <string, ptr<Funct>> otherFunctions; 

};

