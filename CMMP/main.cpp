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

	//TODO pour l'executer vous pouvez avoir besoin de changer les / en double antislash
	ANTLRFileStream input("../Ex_Test_Backend/6-While.cmmp");
	cmmpLexer lexer(&input);

	//convert the input into tokens
	CommonTokenStream tokens(&lexer);
	
/*
	//write out tokens
	tokens.fill();
	for (auto token : tokens.getTokens()) {
		std::cout << token->toString() << std::endl;
	}
*/
	
	//make a tree corresponding to the read tokens for this grammar
	cmmpParser parser(&tokens);
	tree::ParseTree* tree = parser.axiome();

/*
	//write out the tree
    std::cout << tree->toStringTree(&parser) << std::endl << std::endl;
*/

	//use our custom visitor
	BuildCMMP visitor;
	//get the final object returned by the visit of the tree
	p = (Program*)visitor.visit(tree);

	//TODO later : faire les links des fonctions
	//TODO later : verification de la coherence des types des variables et si elles sont declarées
	//TODO later : avec le type des variables on devrait pouvoir définir le type de tout maintenant

    cin.get();
	delete(p);

    return 0;

}