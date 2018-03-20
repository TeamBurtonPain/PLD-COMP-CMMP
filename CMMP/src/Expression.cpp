#include "Expression.h"

Expression::Expression(Type t): type(t){}

Expression::~Expression(void){}

void Expression::setParent(VarContainer& p){
    parent = ptr<VarContainer>(&p);
}

ptr<VarContainer> Expression::getParent(void){
    return parent;
}