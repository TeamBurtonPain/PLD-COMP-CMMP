#include "VariableDeclaration.h"


VariableDeclaration::VariableDeclaration(Type t, string n, uint l, uint c)
    :type(t),name(n),line(l),column(c){}
VariableDeclaration::VariableDeclaration(Type t, string n, uint l, uint c, Expression& v)
    :type(t),name(n),line(l),column(c), value(&v){}
VariableDeclaration::~VariableDeclaration(void){}