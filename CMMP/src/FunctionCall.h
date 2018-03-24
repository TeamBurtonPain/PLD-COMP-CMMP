#pragma once

#include <vector>
#include "CommonTypes.h"
#include "Funct.h"
#include "Expression.h"

class FunctionCall : public Expression
{
public:
  FunctionCall(Type t, string n);
  virtual ~FunctionCall(void);
  void addArg(Expression *);

  string getName(void){return name;};
  virtual vector<FunctionCall *> findFunctionCalls(void);
  virtual vector<VariableCall *> findVarCalls(void);

protected:
  Funct *function = NULL;
  string name;
  vector<Expression *> arguments;
};