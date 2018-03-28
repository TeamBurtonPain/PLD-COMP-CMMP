#pragma once

#include "Affectation.h"
#include "VariableCall.h"
#include "Operators.h"

class UnaryAffectation : public Affectation
{
public:
  UnaryAffectation(Type t, VariableCall *leftValue, OpUnaryAffectation, bool isPre);
  virtual ~UnaryAffectation(void);

  virtual string buildIR(CFG *cfg) { return ""; } //TODO : à modifier

protected:
  OpUnaryAffectation op;
  bool isPre;
};