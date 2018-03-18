#include <iostream>

#include "antlr4-runtime.h"

#include "cmmpLexer.h"
#include "cmmpParser.h"


using namespace std;
using namespace antlr4;

int main(){
	ANTLRFileStream input("..\\Ex_Test_Backend\\6-While.cmmp");
	cmmpLexer lexer(&input);

	CommonTokenStream tokens(&lexer);

	tokens.fill();
	for (auto token : tokens.getTokens()) {
		std::cout << token->toString() << std::endl;
	}

	cmmpParser parser(&tokens);
	tree::ParseTree* tree = parser.expr();


    std::cout << tree->toStringTree(&parser) << std::endl << std::endl;

    cin.get();
    return 0;

}