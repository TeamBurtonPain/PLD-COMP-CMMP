#pragma once

#include <deque>
#include <unordered_map>
#include <iostream>
#include "Variable.h"
#include "Instruction.h"
using namespace std;

class Function{
	public : 
		Function(void);
		virtual ~Function(void);

	protected :
		unordered_map <string, *Variable> vars;
		unordered_map <string, *Variable> params;
		deque <Instruction> instructions;
		//id(signature)
}