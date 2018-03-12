#pragma once

#include <deque>
#include <unordered_map>
#include <iostream>
#include "Variable.h"
#include "Instruction.h"

using namespace std;
using hashmap = unordered_map;

class Function{
	public : 
		Function(void);
		virtual ~Function(void);

	protected :
		hashmap <string, *Variable> vars;
		hashmap <string, *Variable> params;
		deque <Instruction> instructions;
		//id(signature)
}