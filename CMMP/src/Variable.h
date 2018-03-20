#pragma once 

#include "Type.h"
#include "Expression.h"

class Variable : public Expression{
	public :
		Variable(Type t, string n, uint l);
		virtual ~Variable(void);
		string getName(void) const{return name;};
		uint getLine(void){return line;};
	protected :
		string name;
		uint line;
};