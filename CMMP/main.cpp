#include <iostream>

#include "antlr4-runtime.h"

#include "cmmpLexer.h"
#include "cmmpParser.h"
#include "BuildCMMP.h"
#include "Program.h"


using namespace std;
using namespace antlr4;

int main(){
	Program* p;

	ANTLRFileStream input("../Ex_Test_Backend/6-While.cmmp");
	cmmpLexer lexer(&input);

	//convert the input into tokens
	CommonTokenStream tokens(&lexer);
	
	/*//write out tokens
	tokens.fill();
	for (auto token : tokens.getTokens()) {
		std::cout << token->toString() << std::endl;
	}*/
	
	//make a tree corresponding to the read tokens for this grammar
	cmmpParser parser(&tokens);
	tree::ParseTree* tree = parser.axiome();

	//write out the tree
    std::cout << tree->toStringTree(&parser) << std::endl << std::endl;

	BuildCMMP visitor;
	p = (Program*)visitor.visit(tree);

    cin.get();
	//destroy p...
    return 0;

}