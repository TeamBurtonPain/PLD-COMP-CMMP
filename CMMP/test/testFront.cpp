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
            ret.n_error_checkUnused = utilCMMP::checkUnusedVar(p);
        }
        ret.n_error_type = utilCMMP::setTypesAuto(p);

        return ret;
    }
}

//code généré par gen_test.py
namespace{
	TEST(testFront, VALID){
		testFront::testReturnFront no_error;
		EXPECT_EQ(testFront::testFront("ValidPrograms/22_OperatorIncPre.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/50_CharConst.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/13_OperatorMod.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/20_OperatorRightShift.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/15_OperatorOr.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/04_OperatorMinus.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/58_MultipleVarDeclarations.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/38_ArithmeticExpression.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/06_OperatorMult.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/34_OperatorBitOrAssign.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/44_IfElseIf.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/07_OperatorInf.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/19_OperatorLeftShift.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/01_SimpleDeclaration.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/12_OperatorDiff.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/23_OperatorDecPost.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/27_OperatorComp.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/54_FunctionCallCustom.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/10_OperatorGeq.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/28_OperatorPlusAssign.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/02_IncludeStdint.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/39_ArithmeticExpressionWithPar.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/05_OperatorDiv.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/26_OperatorXor.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/52_Int64Dec.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/29_OperatorMinusAssign.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/25_OperatorNot.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/47_ArrayUse.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/03_OperatorPlus.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/37_Par.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/11_OperatorEqu.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/08_OperatorSup.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/14_OperatorAnd.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/16_OperatorBOr.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/31_OperatorDivAssign.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/51_CharConstSpecial.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/42_While.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/59_MixedDeclarationsInitializations.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/32_OperatorModAssign.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/41_IfElse.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/36_OperatorComma.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/33_OperatorBitAndAssign.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/57_VarInitialization.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/46_ArrayDec.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/30_OperatorMultAssign.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/40_If.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/53_FunctionCallPutChar.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/09_OperatorLeq.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/17_OperatorBAnd.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/21_OperatorIncPost.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/18_OperatorNeg.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/55_Return.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/24_OperatorDecPre.c"),no_error);
		EXPECT_EQ(testFront::testFront("ValidPrograms/35_OperatorBitXorAssign.c"),no_error);
	}
}
