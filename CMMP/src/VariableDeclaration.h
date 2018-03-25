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
  void setExpression(Expression *v)
  {
    value = v;
    init = true;
  };
  Expression *getExpression(void) { return value; };

  bool isUsed(void) { return used; };
  bool isInit(void) { return init; };
  void setUsed(bool b) { used = b; };
  void setInit(bool b) { init = b; };

  virtual vector<FunctionCall *> findFunctionCalls(void);
  virtual vector<VariableCall *> findVarCalls(void);

protected:
  Type type;
  string name;
  uint line;
  uint column;
  Expression *value = NULL;
  bool init = false;
  bool used = false;
};