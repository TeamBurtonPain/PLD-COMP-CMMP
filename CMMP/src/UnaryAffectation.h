#pragma once

#include "Affectation.h"
#include "VariableCall.h"
#include "Operators.h"
#include "VarArrayCall.h"

class UnaryAffectation : public Affectation
{
public:
  UnaryAffectation(Type t, VariableCall *leftValue, OpUnaryAffectation, bool isPre);
  virtual ~UnaryAffectation(void);

  virtual string buildIR(CFG *cfg);

protected:
  OpUnaryAffectation op;
  bool isPre;
};