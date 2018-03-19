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
		Type getType(void){return returnType;}

	protected :
		hashmap <string, ptr<Variable>> variables;
		hashmap <string, ptr<Variable>> parameters;
		deque <Instruction> instructions;
		Type returnType;
		//id(signature)
};