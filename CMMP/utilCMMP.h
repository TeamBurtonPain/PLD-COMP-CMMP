#include <iostream>
#include <vector>
#include "Program.h"
#include "BinaryAffectation.h"
#include "BinaryExpr.h"
#include "UnaryExpr.h"
#include "FunctionCall.h"
#include "VarContainer.h"

using namespace std;

namespace utilCMMP
{
uint linkFunctions(Program *);
uint linkVariables(Program *, bool warnings); // -a => warnings = true
uint checkUnusedVar(Program *);
uint setTypesAuto(Program *);
}