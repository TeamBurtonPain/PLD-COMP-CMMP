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

        testReturnFront(){
            n_errors = 0;
            n_error_linkFunctions = 0;
            n_error_linkVariables = 0;
            n_warning_checkUnused = 0;
            n_error_type = 0;
            n_warning_type = 0;
        }

        uint n_errors;
        uint n_error_linkFunctions;
        uint n_error_linkVariables;
        uint n_warning_checkUnused;
        uint n_error_type;
        uint n_warning_type;
    };

    testReturnFront testFront(string filename);
} 