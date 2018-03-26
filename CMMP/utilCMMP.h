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
int linkFunctions(Program *);
int linkVariables(Program *, bool warnings); // -a => warnings = true
int checkUnusedVar(Program *);

struct Indent 
{
    Indent(int n):n(n){}
    int n;
};
using Indent = struct Indent;

std::ostream& operator<<(std::ostream& stream, const Indent &ws)
{
    for(int i = 0; i < ws.n; i++)
    {
        stream << "\t";
    }
    return stream;
}
}