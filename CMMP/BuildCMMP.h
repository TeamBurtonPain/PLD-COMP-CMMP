#pragma once
#include "BinaryAffectation.h"
#include "BinaryExpr.h"
#include "cmmpBaseVisitor.h"
#include "Expression.h"
#include "Operators.h"
#include "Program.h"
#include "UnaryAffectation.h"
#include "UnaryExpr.h"
#include "Variable.h"
#include "VariableDeclaration.h"
#include "Const.h"


class BuildCMMP :
	public cmmpBaseVisitor
{ 
public:
	BuildCMMP();
	virtual ~BuildCMMP();

	//TODO complex 
	//TODO vérifier le nouvel délire de parent pour toutes les instructions (histoire de variables et de portées)

	//TODO izi
	//TODO un peu de formalisme, on récupère la visite de ctx->programme qui est de type Program* et on le return direct
	virtual antlrcpp::Any visitAxiome(cmmpParser::AxiomeContext *ctx) override {
		return visitChildren(ctx);
	}

	//TODO
	//On recupere Program dans le contexte et on lui ajoute les variables
	virtual antlrcpp::Any visitDeclVar(cmmpParser::DeclVarContext *ctx) override {
		Program* p = (Program*) visit(ctx->programme());
		/*
		//get list of vars
		//add it to the programm
		//the the programm as their parent
		*/
		return p;
	}

	//On recupere Program dans le contexte et on lui ajoute les fonctions
	virtual antlrcpp::Any visitDefFonc(cmmpParser::DefFoncContext *ctx) override {
		Program* p = (Program*) visit(ctx->programme());

		Funct* f = (Funct*) visit(ctx->definitionFonction());
		if(f->getName().compare("main"))
			p->setMainFunction(*f);
		else
			p->addFunction(*f);

		return p;
	}
	
	//Arrive a la eof, il n'y a plus de contexte, on cree l'instance de Program
  	virtual antlrcpp::Any visitEof(cmmpParser::EofContext *ctx) override {
		return new Program();
	}

	//TODO après implémenttion de Declaration Variable, il faudra s'assurer qu'elle enregistre bien la valeur initialisée dans l'objet VariableDeclaration et supprimer le commentaire plus bas dans la méthode
	//A la visite d'un Block, on l'instancie, on note les variables d'un coté et les instructions d'un autre

	//TODO 2 set le block actuel comme parent de l'instruction
	virtual antlrcpp::Any visitBlock(cmmpParser::BlockContext *ctx) override {
		Block* b = new Block();

		for(uint i=0 ; i<ctx->instruction().size() ; i++){
			cout<<"l"<<ctx->instruction(i)->start->getLine()<<"- "
			<<ctx->instruction(i)->getText()<<endl;
			Instruction* instr = (Instruction*)(visit(ctx->instruction(i)));

			VariableDeclaration* vd = dynamic_cast<VariableDeclaration*>(instr);
			if(vd){
				b->addVariable(*vd);
				//faut faire un truc pour garder la valeur initialisée
			}else{
				b->addInstruction(*instr);
			}
		}
		return b;
	}

	//TODO s'inspirer du traitement de visitParamDefinitionList
	//renvoie un vector* de VariableDeclaration* avec leur valeur d'initialisation si c'est le cas
	virtual antlrcpp::Any visitDeclarationVarListe(cmmpParser::DeclarationVarListeContext *ctx) override {
		return visitChildren(ctx);
	}

	//TODO izi
	//TODO juste du formel, on retourne le resultat de la visite de ctx->varSimple() (VariableDeclaration*)
	virtual antlrcpp::Any visitSimpleVar(cmmpParser::SimpleVarContext *ctx) override {
		return visitChildren(ctx);
	}

	//TODO later
	//TODO on a pas la structure de données pour les tableaux right now
	virtual antlrcpp::Any visitTabVar(cmmpParser::TabVarContext *ctx) override {
		return visitChildren(ctx);
	}

	//TODO izi
	//TODO construire l'objet VariableDeclaration* à retourner avec sa valeur par défaut il elle existe
	//TODO s'inspirer de visitParamDefinition
	virtual antlrcpp::Any visitVarSimple(cmmpParser::VarSimpleContext *ctx) override {
		return visitChildren(ctx);
	}

	//TODO later
	//on a pas la structure de données pour les tableaux right now
	virtual antlrcpp::Any visitVarTableau(cmmpParser::VarTableauContext *ctx) override {
		return visitChildren(ctx);
	}

	//TODO @thibault : t'es capable de me dire la mem leak si je passe par vector<> au lieu de ptr<vector<> > ici ??
	//instancie et complete la fonction
	virtual antlrcpp::Any visitDefinitionFonction(cmmpParser::DefinitionFonctionContext *ctx) override {
		Funct* f = new Funct(
			TypeUtil::getTypeFromString(ctx->Type()->getText()),
			ctx->Var()->getText()
		);
		//c'est chelou mais sans ptr autour de tout ça j'ai des leaks
		ptr<vector<ptr<VariableDeclaration> > > listParams = ptr<vector<ptr<VariableDeclaration> > > ((vector<ptr<VariableDeclaration> >*)visit(ctx->paramDefinitionList()));
		
		for(int i=0; i<listParams->size();i++){
			cout<<(*listParams)[i]->getName()<<endl;
			f->addVariable(*(*listParams)[i]);
		}

		f->setBlock(
			*((Block*)visit(ctx->block()))
		);
		return f;
	}

	//renvoie un vector* de VariableDeclaration*, s'il n'y a qu'un seul parametre et de type void, l'ignorer
	//passe par la visite de ctx->paramDefinition
	virtual antlrcpp::Any visitParamDefinitionList(cmmpParser::ParamDefinitionListContext *ctx) override {
		vector<ptr<VariableDeclaration> >*list = new vector<ptr<VariableDeclaration> >();
		
		//if only param is void
		if(ctx->paramDefinition().size()==1 && ctx->paramDefinition(0)->getText()=="void")
			return list;

		for(uint i=0 ; i<ctx->paramDefinition().size() ; i++){
			list->push_back(
				ptr<VariableDeclaration>((VariableDeclaration*) visit(ctx->paramDefinition(i)) )
			);
		}
		return list;
	}

	//cree une VariableDeclaration en cohérence avec le paramètre lu. Elle n'a pas de valeur par défaut.
	virtual antlrcpp::Any visitParamDefinition(cmmpParser::ParamDefinitionContext *ctx) override {
		return (VariableDeclaration*) new VariableDeclaration(
			TypeUtil::getTypeFromString(ctx->Type()->getText()),
			ctx->Var()->getText(),
			ctx->start->getLine()
			);
	}


	virtual antlrcpp::Any visitControlwhile(cmmpParser::ControlwhileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitControlif(cmmpParser::ControlifContext *ctx) override {
    return visitChildren(ctx);
  }

	//TODO izi
	//TODO là c'était la création d'une variable pour tester...
	//TODO retourner le résultat de la visite de ctx->block(), attention a bien le cast en (Instruction*)
	virtual antlrcpp::Any visitInsBlock(cmmpParser::InsBlockContext *ctx) override {
		return (Instruction*) new Variable(Type::CHAR,"test",1);
	}

	//TODO izi
	//TODO retourner le résultat de la visite de ctx->expr(), attention a bien le cast en (Instruction*)
	virtual antlrcpp::Any visitInsExpr(cmmpParser::InsExprContext *ctx) override {
		return (Instruction*)((Expression*)(visit(ctx->expr())));
	}
	
	//TODO complex
	//TODO relou a cause du fait que ça soit une liste, faut faire gaffe à tout chopper
	//TODO retourner le résultat de la visite de ctx->declarationVarListe(), attention a bien le cast en (Instruction*)
	virtual antlrcpp::Any visitInsDeclVar(cmmpParser::InsDeclVarContext *ctx) override {
		return (Instruction*) new Variable(Type::CHAR,"test",1);
	}
	
	//TODO izi
	//TODO retourner le résultat de la visite de ctx->structureControl(), attention a bien le cast en (Instruction*)
	virtual antlrcpp::Any visitInsControl(cmmpParser::InsControlContext *ctx) override {
		return (Instruction*) ((Expression*)(new Variable(Type::CHAR,"test",1)));
	}

	//TODO later
	//TODO la structure si c'est un tableau n'est pas encore prête...
	virtual antlrcpp::Any visitMembreGauche(cmmpParser::MembreGaucheContext *ctx) override {
		return new Variable(Type::UNKNOWN, ctx->Var()->getText(), ctx->start->getLine());
	}

	//TODO s'inspirer du traitement de visitParamDefinitionList
	//renvoie un vector* de Expression* 
	virtual antlrcpp::Any visitEListe(cmmpParser::EListeContext *ctx) override {
		return visitChildren(ctx);		
	}

	//TODO izi
	//TODO rretourner le résultat de la visite de ctx->expr()
	virtual antlrcpp::Any visitPar(cmmpParser::ParContext *ctx) override {
		return visitChildren(ctx);
	}

	//TODO pour le type de l'expression binaire on peut faire plus propre
	//TODO soit un switch case ici, un peu dégueu,
	//TODO soit une méthode statique dans TypeUtil qui prend 2 types de param et donne le type du résultat

	//TODO 55 simplification : si les deux membres sont des constantes, on peut créer une nouvelle constante
	virtual antlrcpp::Any visitAdd(cmmpParser::AddContext *ctx) override {
		return (Expression*)
			new BinaryExpr(
				((Expression*) visit(ctx->expr(0)))->getType(), //return type, possibilité de le travailler un peu plus
				*((Expression*) visit(ctx->expr(0))),
				BinaryOp::ADD,
				*((Expression*) visit(ctx->expr(1)))
			);
	}

	//TODO cf TODO visitAdd
	//TODO 55 simplification : si les deux membres sont des constantes, on peut créer une nouvelle constante
	virtual antlrcpp::Any visitSub(cmmpParser::SubContext *ctx) override {
		return (Expression*)
			new BinaryExpr(
				((Expression*) visit(ctx->expr(0)))->getType(), //return type, possibilité de le travailler un peu plus
				*((Expression*) visit(ctx->expr(0))),
				BinaryOp::SUB,
				*((Expression*) visit(ctx->expr(1)))
			);
	}

	//TODO écrire code, cd visitAdd
	//TODO 2 cf TODO visitAdd
	//TODO 55 simplification : si les deux membres sont des constantes, on peut créer une nouvelle constante
	virtual antlrcpp::Any visitMult(cmmpParser::MultContext *ctx) override {
		return (Expression*)
			new BinaryExpr(
			((Expression*)visit(ctx->expr(0)))->getType(), //return type, possibilité de le travailler un peu plus
				*((Expression*)visit(ctx->expr(0))),
				BinaryOp::MULT,
				*((Expression*)visit(ctx->expr(1)))
			);
	}

	//TODO écrire code, cd visitAdd
	//TODO 2 cf TODO visitAdd
	//TODO 55 simplification : si les deux membres sont des constantes, on peut créer une nouvelle constante
	virtual antlrcpp::Any visitMod(cmmpParser::ModContext *ctx) override {
		return (Expression*)
			new BinaryExpr(
			((Expression*)visit(ctx->expr(0)))->getType(), //return type, possibilité de le travailler un peu plus
				*((Expression*)visit(ctx->expr(0))),
				BinaryOp::MOD,
				*((Expression*)visit(ctx->expr(1)))
			);
	}

	//TODO écrire code, cd visitAdd
	//TODO 2 cf TODO visitAdd
	//TODO 55 simplification : si les deux membres sont des constantes, on peut créer une nouvelle constante
	virtual antlrcpp::Any visitOr(cmmpParser::OrContext *ctx) override {
		return (Expression*)
			new BinaryExpr(
			((Expression*)visit(ctx->expr(0)))->getType(), //return type, possibilité de le travailler un peu plus
				*((Expression*)visit(ctx->expr(0))),
				BinaryOp::OR,
				*((Expression*)visit(ctx->expr(1)))
			);
	}

	//TODO écrire code, cd visitAdd
	virtual antlrcpp::Any visitConst(cmmpParser::ConstContext *ctx) override {
		cout << ctx->start->getLine() << " - CONST " << ctx->Cst()->getText() << endl;
		string cst = ctx->Cst()->getText();
		switch(cst[0])
		{
		case('\''):
			{//it's a char
				char val='a';
				if (cst.size() == 3)
				{
					val = cst[1];
				}
				else //cst[1]='\'
				{
					map<char, int> ascii_code = {{'b',8},{'t',9},{'n',10},{ 'v',11 },{ 'f',12 },{ 'r',13 }};
					if (ascii_code.find(cst[2]) != ascii_code.end())
					{
						val = char(ascii_code[cst[2]]);
					}
					else if(cst[2] >= 0 && cst[2] <= 9)
					{
						string num_s = cst.substr(2, cst.size() - 1 - 2); // 1 pour le ' final et 2 pour le '\ initiaux
						int num = std::stoi(num_s);
						val = char(num);
					}
					else
					{// à faire : ", ', \ et c'est tout je crois
						val = '?'; //unkown
					}
				}
				return (Expression*)(new Const<char>(Type::CHAR, val));
			}
		case('\"'):
			{//it's a string
				string val = cst.substr(1, cst.size() - 2);
				return (Expression*)(new Const<string>(Type::CHAR, val));	//TODO future : string = char[] ?
			}
		default:
			{
				int64_t val = stol(cst);
				return (Expression*)(new Const<int64_t>(Type::INT32, val));
			}
		}
	}

	//TODO checker

	//TODO later
	//TODO vérifier la compatibilité avec les tableaux et cast en (Expression *) (je crois)
	virtual antlrcpp::Any visitAffectation(cmmpParser::AffectationContext *ctx) override {
		return (Expression*)
			new BinaryAffectation(
			((Variable*)visit(ctx->membreGauche()))->getType(),
				*((Variable*)visit(ctx->membreGauche())),
				(OpBinaryAffectation)visit(ctx->opAffectation()),
				*((Expression*)visit(ctx->expr()))
			);
	}

	//TODO écrire code, cd visitAdd
	//TODO 2 cf TODO visitAdd
	//TODO 55 simplification : si les deux membres sont des constantes, on peut créer une nouvelle constante
	virtual antlrcpp::Any visitDiv(cmmpParser::DivContext *ctx) override {
		return visitChildren(ctx);
	}

	//TODO écrire code, cd visitAdd
	//TODO 55 simplification : si c'est une constante, on peut juste changer sa valeur et la return
	virtual antlrcpp::Any visitNeg(cmmpParser::NegContext *ctx) override {
		return visitChildren(ctx);
	}

	//TODO 55 simplification : si c'est une constante, on peut juste changer sa valeur et la return
	virtual antlrcpp::Any visitNot(cmmpParser::NotContext *ctx) override {
		return (Expression*)
			new UnaryExpr(
			((Expression*)ctx->expr())->getType(),
				*((Expression*)visit(ctx->expr())),
				UnaryOp::NOT);
	}

	//TODO cf TODO visitAdd à propos du type et  cast en (Expression *)
	virtual antlrcpp::Any visitPre(cmmpParser::PreContext *ctx) override {
		return new UnaryAffectation(Type::UNKNOWN, *((Variable*)visit(ctx->membreGauche())), visit(ctx->opUnaryAffectation()), true);
	}

	//TODO cf TODO visitAdd à propos du type et  cast en (Expression *)
	virtual antlrcpp::Any visitPost(cmmpParser::PostContext *ctx) override {
		return new UnaryAffectation(Type::UNKNOWN, *((Variable*)visit(ctx->membreGauche())), visit(ctx->opUnaryAffectation()), false);
	}

	//TODO écrire code, cd visitAdd
	//TODO 2 cf TODO visitAdd
	//TODO 55 simplification : si les deux membres sont des constantes, on peut créer une nouvelle constante
	virtual antlrcpp::Any visitAnd(cmmpParser::AndContext *ctx) override {
		return visitChildren(ctx);
	}

	//TODO izi
	//TODO retourner l'objet obtenu par la visite de ctx->functionCall() et le cast en (Expression *)
	virtual antlrcpp::Any visitFunction(cmmpParser::FunctionContext *ctx) override {
		return visitChildren(ctx);
	}

	//TODO écrire code, cd visitAdd
	//TODO 2 cf TODO visitAdd
	//TODO 55 simplification : si les deux membres sont des constantes, on peut créer une nouvelle constante
	virtual antlrcpp::Any visitComparaison(cmmpParser::ComparaisonContext *ctx) override {
		return visitChildren(ctx);
	}

	//TODO izi
	//TODO retourner l'objet obtenu par la visite de ctx->membreGauche() et le cast en (Expression *)
	virtual antlrcpp::Any visitVariable(cmmpParser::VariableContext *ctx) override {
		return visitChildren(ctx);
	}

	//TODO later
	//pas pret lel deso
	virtual antlrcpp::Any visitVarTab(cmmpParser::VarTabContext *ctx) override {
		return visitChildren(ctx);
	}

	//TODO creer l'objet FunctionCall, avec le type UNKNOWN a priori et avec le bon nom
	//TODO utiliser addArg sur l'objet pour lui ajouter les paramètres lus dans ctx->eListe()
	virtual antlrcpp::Any visitFunctionCall(cmmpParser::FunctionCallContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitIncr(cmmpParser::IncrContext *ctx) override {
		return OpUnaryAffectation::INCR;
	}

	virtual antlrcpp::Any visitDecr(cmmpParser::DecrContext *ctx) override {
		return OpUnaryAffectation::DECR;
	}

	//TODO izi izi
	//TODO retourne le bon BinaryOp correspondant
	virtual antlrcpp::Any visitInf(cmmpParser::InfContext *ctx) override {
		return visitChildren(ctx);
	}

	//TODO izi izi
	//TODO retourne le bon BinaryOp correspondant
	virtual antlrcpp::Any visitSup(cmmpParser::SupContext *ctx) override {
		return visitChildren(ctx);
	}

	//TODO izi izi
	//TODO retourne le bon BinaryOp correspondant
	virtual antlrcpp::Any visitInfeq(cmmpParser::InfeqContext *ctx) override {
		return visitChildren(ctx);
	}

	//TODO izi izi
	//TODO retourne le bon BinaryOp correspondant
	virtual antlrcpp::Any visitSupeq(cmmpParser::SupeqContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitEq(cmmpParser::EqContext *ctx) override {
		return BinaryOp::EQ;
	}

	//TODO izi izi
	//TODO retourne le bon BinaryOp correspondant
	virtual antlrcpp::Any visitNeq(cmmpParser::NeqContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitAff(cmmpParser::AffContext *ctx) override {
		return OpBinaryAffectation::AFF;
	}

	virtual antlrcpp::Any visitAddaff(cmmpParser::AddaffContext *ctx) override {
		return OpBinaryAffectation::ADDAFF;
	}

	virtual antlrcpp::Any visitSubaff(cmmpParser::SubaffContext *ctx) override {
		return OpBinaryAffectation::SUBAFF;
	}

	virtual antlrcpp::Any visitMultaff(cmmpParser::MultaffContext *ctx) override {
		return OpBinaryAffectation::MULTAFF;
	}

	virtual antlrcpp::Any visitDivaff(cmmpParser::DivaffContext *ctx) override {
		return OpBinaryAffectation::DIVAFF;
	}

	virtual antlrcpp::Any visitModaff(cmmpParser::ModaffContext *ctx) override {
		return OpBinaryAffectation::MODAFF;
	}
};

