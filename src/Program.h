#pragma once

#include <unordered_map>
#include <iostream>
#include "Variable.h"
#include "Function.h"

using namespace std;
using hashmap = unordered_map;

class Programme {
	public : 
		Programme(void);
		virtual ~Programme(void);

	protected : 
		hashmap <string, *variable> vars;
		*Function mainFunction;
		hashmap <string, *Function> otherFunctions; 

};

