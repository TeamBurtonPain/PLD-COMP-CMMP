#pragma once

#include "CommonTypes.h"
#include <deque>
#include <iostream>
#include "Variable.h"
#include "Instruction.h"

class Funct{
	public : 
		Funct(Type returnType);
		virtual ~Funct(void);
		Type getType(void)const{return returnType;}
		void addVariable(string, Variable&);
		void addParameter(string, Variable&);
		void addInstruction(Instruction&);

	protected :
		hashmap <string, ptr<Variable> > variables;
		hashmap <string, ptr<Variable> > parameters;
		deque <Instruction> instructions;
		Type returnType;
		//id(signature)
};