#pragma once

#include "CommonTypes.h"
#include <iostream>
#include "Variable.h"
#include "Funct.h"

class Program : public VarContainer {
	public : 
		Program(void);
		virtual ~Program(void);

		void addVariable(Variable&);
		void setMainFunction(Funct &mainF);
		void addFunction(Funct &f);

	protected : 
		hashmap <string, ptr<Variable>> variables;
		ptr<Funct> mainFunction; 
		hashmap <string, ptr<Funct>> otherFunctions; 

};

