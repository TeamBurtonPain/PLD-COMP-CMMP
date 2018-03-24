#include "BinaryAffectation.h"

BinaryAffectation::BinaryAffectation(Type t, Variable *leftValue, OpBinaryAffectation op, Expression *rightValue)
    : Affectation(t, leftValue), op(op), expr2(rightValue)
{
}
BinaryAffectation::~BinaryAffectation(void)
{
    if (expr2)
        delete (expr2);
}