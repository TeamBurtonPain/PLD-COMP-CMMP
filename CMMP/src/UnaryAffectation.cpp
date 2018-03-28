#include "UnaryAffectation.h"

UnaryAffectation::UnaryAffectation(Type t, VariableCall *leftValue, OpUnaryAffectation op, bool isPre)
    : Affectation(t, leftValue), op(op), isPre(isPre)
{
}
UnaryAffectation::~UnaryAffectation(void)
{
}


//TODO
  string UnaryAffectation::buildIR(CFG *cfg){
      return "";
  }