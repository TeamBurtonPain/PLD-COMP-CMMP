#pragma once

#include "Type.h"
#include "Expression.h"

class Variable : public Expression
{
  public:
	Variable(Type t, string n, uint l, uint c);
	virtual ~Variable(void) = 0;
	string getName(void) const { return name; }
	string getCodeName(void) const { return code_name; }
	void setCodeName(string str) const { code_name = str; }
	uint getLine(void) { return line; }
	uint getColumn(void) { return column; }

  protected:
	string name;
	string code_name;
	uint line;
	uint column;
};