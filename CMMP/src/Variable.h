#pragma once 

#include "Type.h"
#include "Expression.h"
#include <iostream>
using namespace std;

class Variable : public Expression{
	public :
		Variable(Type t, string n);
		virtual ~Variable(void);
		string getName(void) const{return name;};
	protected :
		string name;
};