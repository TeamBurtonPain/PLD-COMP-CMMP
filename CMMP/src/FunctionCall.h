#pragma once

#include <vector>
#include "CommonTypes.h"
#include "Funct.h"
#include "Expression.h"

class Funct;

class FunctionCall : public Expression
{
public:
  FunctionCall(Type t, string n);
  virtual ~FunctionCall(void);

  void addArg(Expression *);
  vector<Expression *> &getArgs(void) { return arguments; }

  void setType(Type t) { type = t; }

  void setReference(Funct *f) { function = f; }
  Funct *getReference(void) { return function; }

  string getName(void) { return name; }
  virtual vector<FunctionCall *> findFunctionCalls(void);
  virtual vector<VariableCall *> findVarCalls(void);

  virtual uint setTypeAuto(void);

  virtual string buildIR(CFG *cfg) {return "";} //TODO : à modifier

protected:
  Funct *function = NULL;
  string name;
  vector<Expression *> arguments;
};