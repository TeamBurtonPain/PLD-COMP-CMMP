#pragma once

#include "Expression.h"
#include "FunctionCall.h"

class VariableDeclaration : public Instruction
{
public:
  VariableDeclaration(Type t, string name, uint line, uint col);
  virtual ~VariableDeclaration(void);

  string getName(void) const { return name; }
  string getCodeName(void) const { return code_name; }
  Type getType(void) { return type; }
  void setType(Type t) { type = t; }
  uint getLine(void) { return line; }
  uint getColumn(void) { return column; }
  void setExpression(Expression *v)
  {
    value = v;
    init = true;
  }
  Expression *getExpression(void) { return value; }

  bool isUsed(void) { return used; }
  bool isInit(void) { return init; }
  void setUsed(bool b) { used = b; }
  void setInit(bool b) { init = b; }

  virtual vector<FunctionCall *> findFunctionCalls(void);
  virtual vector<VariableDeclaration *> findVarDeclarations(void);
  virtual vector<VariableCall *> findVarCalls(void);

  virtual string buildIR(CFG *cfg);
  virtual string buildIRParam(CFG *cfg, int i);

  virtual void setParent(Parent *) override;

protected:
  Type type;
  string name;
  string code_name;
  uint line;
  uint column;
  Expression *value = NULL;
  bool init = false;
  bool used = false;
};
