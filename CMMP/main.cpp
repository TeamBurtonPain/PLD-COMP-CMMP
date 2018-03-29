#include <iostream>

#include "antlr4-runtime.h"

#include "cmmpLexer.h"
#include "cmmpParser.h"
#include "BuildCMMP.h"
#include "Program.h"
#include "utilCMMP.h"

using namespace std;
using namespace antlr4;

//TODO implentation des []

int main()
{
	string filename = "test/5_2.c";
	//string filename = "../Ex_Test_Backend/6-While.cmmp";
	Program *p;

	//NB pour l'executer vous pouvez avoir besoin de changer les / en double antislash
	ANTLRFileStream input(filename);
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
	uint warnings = 0;
	bool staticCheck = true; //option -a

	//set VarCalls and FunctCalls a ref to the true var/funct
	errors += utilCMMP::linkFunctions(p);

	errors += utilCMMP::linkVariables(p, staticCheck);

	if (staticCheck)
	{
		warnings += utilCMMP::checkUnusedVar(p);
	}
	errors += utilCMMP::setTypesAuto(p);

	cout<<"Errors encoutered : "<<errors<<". Warnings : "<<warnings<<endl;

////////////////////////
// FIN DU FRONT
///////////////////////

	CFG cfg_main(p->getMainFunction());
	ofstream filestream(filename+".s");
	cfg_main.gen_asm(filestream);
	cin.get();
	filestream.close();
	delete (p);

	return 0;
}