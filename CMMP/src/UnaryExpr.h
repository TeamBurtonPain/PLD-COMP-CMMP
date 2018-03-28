#pragma once

#include "Expression.h"
#include "Operators.h"

class UnaryExpr : public Expression
{
public:
  UnaryExpr(Type t, Expression *e, UnaryOp op);
  virtual ~UnaryExpr(void);

  Expression *getExpression(void) { return expression; }

  virtual vector<FunctionCall *> findFunctionCalls(void);
  virtual vector<VariableCall *> findVarCalls(void);

  virtual uint setTypeAuto(void);

  virtual string buildIR(CFG *cfg);

protected:
  Expression *expression;
  UnaryOp op;
};