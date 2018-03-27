#pragma once

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

    class Indent 
    {
        public:
            Indent(int nb):n(nb){}
            int n;
    };
}
std::ostream& operator<<(std::ostream& stream, const utilCMMP::Indent &ws);