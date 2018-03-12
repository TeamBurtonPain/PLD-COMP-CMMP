#pragma once

#include <unordered_map>
#include <iostream>
#include "Variable.h"
#include "Function.h"
using namespace std;

class Programme {
	public : 
		Programme(void);
		virtual ~Programme(void);

	protected : 
		unordered_map <string, *variable> vars;
		*Function mainFunction;
		unordered_map <string, *Function> otherFunctions; 

};

