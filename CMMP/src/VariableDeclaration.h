#pragma once

#include "Expression.h"

class VariableDeclaration : public Instruction
{
public:
  VariableDeclaration(Type t, string name, uint line, uint col);
  virtual ~VariableDeclaration(void);

  string getName(void) const { return name; };
  Type getType(void) { return type; };
  void setType(Type t) { type = t; };
  uint getLine(void) { return line; };
  uint getColumn(void) { return column; };
  void setExpression(Expression *v) { value = v; };
  Expression *getExpression(void) { return value; };
  
	virtual vector<FunctionCall *> findFunctionCalls(void);

protected:
  Type type;
  string name;
  uint line;
  uint column;
  Expression *value = NULL;
};