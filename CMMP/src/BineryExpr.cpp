#include "BinaryExpr.h"

BinaryExpr::BinaryExpr(Type t, Expression& expr1, OpBinaryAffectation op, Expression& expr2)
    :Expression(t), expr1(&expr1), op(op), expr2(&expr2){

}
BinaryExpr::~BinaryExpr(void){}