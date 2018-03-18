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
		hashmap <string, ptr<Variable>> vars;
		ptr<Funct> mainFunction; 
		hashmap <string, ptr<Funct>> otherFunctions; 

};

