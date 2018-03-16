#pragma once 

#include "Type.h"
#include <iostream>
using namespace std;

class Variable{
	public :
		Variable(Type t, string n);
		virtual ~Variable(void);
	protected :
		Type type;
		string name;
};