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
	
	string filename = "test/5_8_4.c";
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
	if (!p->getMainFunction())
		return 1;

	//analyse statique -a
	errorReturns errors;
	errors.errors = 0;
	errors.warnings = 0;

	bool staticCheck = true; //option -a

	//set VarCalls and FunctCalls a ref to the true var/funct
	sumErrors(errors, utilCMMP::linkFunctions(p));

	sumErrors(errors, utilCMMP::linkVariables(p, staticCheck));

	if (staticCheck)
	{
		sumErrors(errors, utilCMMP::checkUnusedVar(p));
	}
	sumErrors(errors, utilCMMP::setTypesAuto(p));

	cout << "Errors encoutered : " << errors.errors << ". Warnings : " << errors.warnings << endl;

	////////////////////////
	// FIN DU FRONT
	///////////////////////
	
	if(errors.errors == 0){
		CFG *cfg_main = new CFG(p->getMainFunction());
		ofstream filestream(filename + ".s");
		cfg_main->gen_asm(filestream);
		filestream.close();
		delete (cfg_main);

		for(auto f : p->getFunctions()){
			if(f.first != "main"){
				CFG *cfg = new CFG(f.second);
				ofstream filestream(filename + ".s", ios_base::app);
				cfg->gen_asm(filestream);
				filestream.close();
				delete (cfg);
			}
		}
	}
	cin.get();
	delete (p);
	
	return 0;
}