#pragma once

#include "Expression.h"

class Variable : public Expression
{
  public:
	Variable(Type t, string n, uint l, uint c);
	virtual ~Variable(void) = 0;
	string getName(void) const { return name; }
	uint getLine(void) { return line; }
	uint getColumn(void) { return column; }

	virtual string buildIR(CFG *cfg) {return "";} //TODO : à modifier

  protected:
	string name;
	uint line;
	uint column;
};