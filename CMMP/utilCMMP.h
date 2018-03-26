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
            Indent(int n):n(n){}
            int n;
    };


    std::ostream& operator<<(std::ostream& stream, const Indent &ws)
    {
        for(int i = 0; i < ws.n; i++)
        {
            stream << "\t";
        }
        return stream;
    }
}