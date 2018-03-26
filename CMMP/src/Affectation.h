#pragma once

#include "CommonTypes.h"
#include "Expression.h"
#include "VariableCall.h"

class Affectation : public Expression
{
public:
  Affectation(Type, VariableCall *);
  virtual ~Affectation(void) = 0;

  virtual vector<VariableCall *> findVarCalls(void);

	virtual uint setTypeAuto(void);
	
protected:
  VariableCall *leftValue;
};