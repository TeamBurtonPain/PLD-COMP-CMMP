#pragma once

#include "CommonTypes.h"
#include "Affectation.h"
#include "Operators.h"
#include "FunctionCall.h"

class VariableCall;

class BinaryAffectation : public Affectation
{
public:
  BinaryAffectation(Type, VariableCall *leftValue, OpBinaryAffectation, Expression *rightValue);
  virtual ~BinaryAffectation(void);

  Expression *getExpression(void) { return expr2; }
  
	virtual vector<FunctionCall *> findFunctionCalls(void);
	virtual vector<VariableCall *> findVarCalls(void);

protected:
  OpBinaryAffectation op;
  Expression *expr2;
};
