#pragma once 

#include "Type.h"
#include "Expression.h"

class Variable : public Expression{
	public :
		Variable(Type t, string n);
		virtual ~Variable(void);
		string getName(void) const{return name;};
	protected :
		string name;
};