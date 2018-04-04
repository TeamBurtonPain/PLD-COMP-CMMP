#pragma once

#include "CommonTypes.h"
#include "Affectation.h"
#include "Operators.h"
#include "FunctionCall.h"
#include "VarArrayCall.h"

class VariableCall;

class BinaryAffectation : public Affectation
{
public:
  BinaryAffectation(Type, VariableCall *leftValue, OpBinaryAffectation, Expression *rightValue);
  virtual ~BinaryAffectation(void);

  Expression *getExpression(void) { return expr2; }

  virtual vector<FunctionCall *> findFunctionCalls(void);
  virtual vector<VariableCall *> findVarCalls(void);

	virtual errorReturns setTypeAuto(void);

  virtual string buildIR(CFG *cfg);
	
protected:
  OpBinaryAffectation op;
  Expression *expr2;
};
