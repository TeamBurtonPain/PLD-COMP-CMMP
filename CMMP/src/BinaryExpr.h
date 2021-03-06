#pragma once

#include "CommonTypes.h"
#include "Operators.h"
#include "Expression.h"
#include "FunctionCall.h"
#include "VariableCall.h"

class BinaryExpr : public Expression
{
public:
  BinaryExpr(Type, Expression *expr1, BinaryOp op, Expression *expr2);
  virtual ~BinaryExpr(void);

  Expression *getExpression1(void) { return expr1; }
  Expression *getExpression2(void) { return expr2; }

  virtual vector<FunctionCall *> findFunctionCalls(void);
  virtual vector<VariableCall *> findVarCalls(void);

  virtual errorReturns setTypeAuto(void);

  virtual string buildIR(CFG *cfg);

protected:
  Expression *expr1;
  BinaryOp op;
  Expression *expr2;
};
