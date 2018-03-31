#include "gtest/gtest.h"
#include "antlr4-runtime.h"

#include "cmmpLexer.h"
#include "cmmpParser.h"
#include "BuildCMMP.h"
#include "Program.h"
#include "utilCMMP.h"

using namespace std;
using namespace antlr4;

namespace testFront{
    class testReturnFront{
        public:

        testReturnFront(){}

        bool operator==(const testReturnFront & t)const{
            return n_errors==t.n_errors && n_error_linkFunctions==t.n_error_linkFunctions && 
                n_error_linkVariables==t.n_error_linkVariables && n_error_type==t.n_error_type &&
                n_error_checkUnused == t.n_error_checkUnused;
        }

        errorReturns n_errors;
        errorReturns n_error_linkFunctions;
        errorReturns n_error_linkVariables;
        errorReturns n_error_checkUnused;
        errorReturns n_error_type;
    };

    testReturnFront testFront(string filename);
} 