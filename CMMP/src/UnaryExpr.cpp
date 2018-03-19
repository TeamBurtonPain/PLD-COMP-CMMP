#include "UnaryExpr.h"

UnaryExpr::UnaryExpr(Type t, const Expression &e1, UnaryOp ope):
    Expression(t), expression(&e1), op(ope){
}

UnaryExpr::~UnaryExpr(void){

}