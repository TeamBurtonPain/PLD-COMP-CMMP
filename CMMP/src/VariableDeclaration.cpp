#include "VariableDeclaration.h"


VariableDeclaration::VariableDeclaration(Type t, string n, uint l):Variable(t,n,l){}
VariableDeclaration::VariableDeclaration(Type t, string n, uint l, Expression& v):Variable(t,n,l), value(&v){}
VariableDeclaration::~VariableDeclaration(void){}