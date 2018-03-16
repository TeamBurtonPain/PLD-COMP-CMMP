#pragma once

#include "CommonTypes.h"
#include <deque>
#include <iostream>
#include "Variable.h"
#include "Instruction.h"

class Funct{
	public : 
		Funct(void);
		virtual ~Funct(void);

	protected :
		hashmap <string, *Variable> vars;
		hashmap <string, *Variable> params;
		deque <Instruction> instructions;
		//id(signature)
};