#include <iostream>
#include <vector>
#include "Program.h"
#include "BinaryAffectation.h"
#include "BinaryExpr.h"
#include "UnaryExpr.h"
#include "FunctionCall.h"
using namespace std;

namespace utilCMMP
{
int linkFunctions(Program *);
int linkVariables(Program *, bool warnings); // -a => warnings = true
int checkUnusedVar(Program *);
}