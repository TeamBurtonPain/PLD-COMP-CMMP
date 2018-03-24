#pragma once

#include "Affectation.h"
#include "VariableCall.h"
#include "Operators.h"

class UnaryAffectation : public Affectation
{
public:
  UnaryAffectation(Type t, VariableCall *leftValue, OpUnaryAffectation, bool isPre);
  virtual ~UnaryAffectation(void);

protected:
  OpUnaryAffectation op;
  bool isPre;
};