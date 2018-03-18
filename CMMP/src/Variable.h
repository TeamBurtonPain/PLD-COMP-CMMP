#pragma once 

#include "Type.h"
#include "Expression.h"
#include <iostream>
using namespace std;

class Variable : public Expression{
	public :
		Variable(Type t, string n);
		virtual ~Variable(void);
	protected :
		string name;
};