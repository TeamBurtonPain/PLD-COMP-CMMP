#pragma once

#include "CommonTypes.h"
#include <iostream>
#include "Variable.h"
#include "Funct.h"

class Program {
	public : 
		Program(void);
		virtual ~Program(void);

	protected : 
		hashmap <string, *Variable> vars;
		Funct *mainFunction;
		hashmap <string, *Funct> otherFunctions; 

};

