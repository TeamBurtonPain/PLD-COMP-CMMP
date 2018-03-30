#include "testFront.h"
namespace testFront{

    testReturnFront testFront(string filename){
        Program *p;
        ANTLRFileStream input(filename);
        cmmpLexer lexer(&input);
        CommonTokenStream tokens(&lexer);
        cmmpParser parser(&tokens);
        tree::ParseTree *tree = parser.axiome();
        BuildCMMP visitor;
        p = (Program *)visitor.visit(tree);

        //analyse statique -a
        uint errors = 0;
        uint warnings = 0;
        bool staticCheck = true; //option -a

        testReturnFront ret;
        ret.n_error_linkFunctions = utilCMMP::linkFunctions(p);

        ret.n_error_linkVariables = utilCMMP::linkVariables(p, staticCheck);

        if (staticCheck)
        {
            ret.n_warning_checkUnused = utilCMMP::checkUnusedVar(p);
        }
        ret.n_error_type = utilCMMP::setTypesAuto(p);

        return ret;
    }
}


