#include <iostream>

#include "antlr4-runtime.h"

#include "cmmpLexer.h"
#include "cmmpParser.h"
#include "BuildCMMP.h"
#include "Program.h"
#include "utilCMMP.h"

using namespace std;
using namespace antlr4;

int main()
{
	Program *p;

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
	tree::ParseTree *tree = parser.axiome();

	/*
	//write out the tree
    std::cout << tree->toStringTree(&parser) << std::endl << std::endl;
*/

	//use our custom visitor
	BuildCMMP visitor;

	//get the final object returned by the visit of the tree
	p = (Program *)visitor.visit(tree);


	//analyse statique -a
	uint errors = 0;
	//set VarCalls and FunctCalls a ref to the true var/funct
	errors += utilCMMP::linkFunctions(p);
	errors += utilCMMP::linkVariables(p, true); //if -a => use true

	if (!errors)
	{
		//now every var and funct has a type

		//TODO typer toutes les expressions intermédiaires

		//On peut aussi simplifier les constantes et operations entre constantes (si on a -o)
	}

	cin.get();
	delete (p);

	return 0;
}