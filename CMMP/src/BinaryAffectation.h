#pragma once

#include "CommonTypes.h"
#include "Affectation.h"
#include "Operators.h"

class BinaryAffectation : public Affectation
{
public:
  BinaryAffectation(Type, Variable *leftValue, OpBinaryAffectation, Expression *rightValue);
  virtual ~BinaryAffectation(void);

  Expression *getExpression(void) { return expr2; };
  
	virtual vector<FunctionCall *> findFunctionCalls(void);

protected:
  OpBinaryAffectation op;
  Expression *expr2;
};