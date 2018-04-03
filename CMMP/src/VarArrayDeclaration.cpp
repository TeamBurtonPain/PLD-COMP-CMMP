#include "VarArrayDeclaration.h"

VarArrayDeclaration::VarArrayDeclaration(Type t, string n, uint l, uint c, uint size) : VariableDeclaration(t, n, l, c), size(size) {}
VarArrayDeclaration::~VarArrayDeclaration(void){}