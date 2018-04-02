#pragma once
#include "BinaryAffectation.h"
#include "BinaryExpr.h"
#include "Block.h"
#include "cmmpBaseVisitor.h"
#include "Condition.h"
#include "Expression.h"
#include "FunctionCall.h"
#include "Loop.h"
#include "Operators.h"
#include "Program.h"
#include "UnaryAffectation.h"
#include "UnaryExpr.h"
#include "VariableCall.h"
#include "VariableDeclarations.h"
#include "Const.h"

class BuildCMMP : public cmmpBaseVisitor
{
  public:
	BuildCMMP();
	virtual ~BuildCMMP();

	/// <summary>
	/// Visits the axiome.
	/// </summary>
	/// <param name="ctx">The context.</param>
	/// <returns>The program object representing the C program in input</returns>
	virtual antlrcpp::Any visitAxiome(cmmpParser::AxiomeContext *ctx) override
	{
		return (Program *)visit(ctx->programme());
	}

	//visite d'une déclaration de variables globales
	virtual antlrcpp::Any visitDeclVar(cmmpParser::DeclVarContext *ctx) override
	{
		//on récupère le programme par le noeu visité avant
		Program *p = (Program *)visit(ctx->programme());
		//on récupère l'objet (liste de) déclaration de variavbleS
		VariableDeclarations *vds = (VariableDeclarations *)(visit(ctx->declarationVarListe()));

		vector<VariableDeclaration *> vectorDecl = vds->getDecla();
		//on décompose la déclaration de variableS en plusieurs déclarations de 1 variable
		for (uint i = 0; i < vectorDecl.size(); i++)
		{
			vectorDecl[i]->setParent(p);
			p->addVariable(vectorDecl[i]);
		}
		delete (vds);
		vectorDecl.clear();

		return p;
	}

	//On recupere Program dans le contexte et on lui ajoute les fonctions
	virtual antlrcpp::Any visitDefFonc(cmmpParser::DefFoncContext *ctx) override
	{
		Program *p = (Program *)visit(ctx->programme());

		Funct *f = (Funct *)visit(ctx->definitionFonction());
		f->setParent(p);
		if (!f->getName().compare("main"))
			p->setMainFunction(f);
		else
			p->addFunction(f);

		return p;
	}

	//Arrive a la eof, il n'y a plus de contexte, on cree l'instance de Program
	virtual antlrcpp::Any visitEof(cmmpParser::EofContext *ctx __attribute__((unused))) override
	{
		return new Program();
	}

	//A la visite d'un Block, on l'instancie, on note les variables d'un coté et les instructions d'un autre
	virtual antlrcpp::Any visitBlock(cmmpParser::BlockContext *ctx) override
	{
		//on crée le block
		Block *b = new Block();

		for (uint i = 0; i < ctx->instruction().size(); i++)
		{
			//C-OUT
			/*
			cout << "l" << ctx->instruction(i)->start->getLine() << "- "
				 << ctx->instruction(i)->getText() << endl;
				 */
			//on récupère les instructions
			Instruction *instr = (Instruction *)(visit(ctx->instruction(i)));
			//si c'est une déclaration de variables
			VariableDeclarations *vds = dynamic_cast<VariableDeclarations *>(instr);
			if (vds)
			{
				vector<VariableDeclaration *> vectorDecl = vds->getDecla();
				//on décompose la déclaration de variableS en plusieurs déclarations de 1 variable
				for (uint i = 0; i < vectorDecl.size(); i++)
				{
					//qu'on ajoute au block actuel
					vectorDecl[i]->setParent(b);
					b->addVariable(vectorDecl[i]);
				}
				//et on supprime l'objet liste de déclarations qui n'est plus utile
				delete (vds);
				vectorDecl.clear();
			}
			//sinon c'est une instruction normale, qu'on ajoute.
			else
			{
				instr->setParent(b);
				b->addInstruction(instr);
			}
		}
		return b;
	}

	//Visite d'une ligne déclarant une ou plusieurs variables
	virtual antlrcpp::Any visitDeclarationVarListe(cmmpParser::DeclarationVarListeContext *ctx) override
	{
		//on crée la liste qu'on va retourner
		VariableDeclarations *list = new VariableDeclarations();
		//même type pour tout le monde
		Type t = TypeUtil::getTypeFromString(ctx->Type()->getText());
		for (uint i = 0; i < ctx->declarationVar().size(); i++)
		{
			//on crée la déclaration de chacune de ces variables de la liste
			VariableDeclaration *varDecla = (VariableDeclaration *)visit(ctx->declarationVar(i));
			varDecla->setType(t);
			list->addDecla(varDecla);
		}
		return list;
	}

	virtual antlrcpp::Any visitSimpleVar(cmmpParser::SimpleVarContext *ctx) override
	{
		return (VariableDeclaration *)visit(ctx->varSimple());
	}

	//TODO later
	//TODO on a pas la structure de données pour les tableaux right now
	virtual antlrcpp::Any visitTabVar(cmmpParser::TabVarContext *ctx) override
	{
		return visitChildren(ctx);
	}

	//crée la déclaration d'une variable non tableau
	virtual antlrcpp::Any visitVarSimple(cmmpParser::VarSimpleContext *ctx) override
	{
		VariableDeclaration *v = new VariableDeclaration(
			Type::UNKNOWN,
			ctx->Var()->getText(),
			ctx->start->getLine(),
			ctx->start->getCharPositionInLine());
		//si on trouve une initialisation avec la déclaration
		if (ctx->expr() != NULL)
		{
			Expression *e = visit(ctx->expr());
			e->setParent(v);
			v->setExpression(e);
			v->setInit(true);
		}

		return v;
	}

	//TODO later
	//on a pas la structure de données pour les tableaux right now
	virtual antlrcpp::Any visitVarTableau(cmmpParser::VarTableauContext *ctx) override
	{
		return visitChildren(ctx);
	}

	//instancie et complete la fonction
	virtual antlrcpp::Any visitDefinitionFonction(cmmpParser::DefinitionFonctionContext *ctx) override
	{
		//nouvelle fonction
		Funct *f = new Funct(
			TypeUtil::getTypeFromString(ctx->Type()->getText()),
			ctx->Var()->getText());
		//Si on lit des paramètres entre parenthèses
		if (ctx->paramDefinitionList())
		{
			vector<VariableDeclaration *> *listParams = (vector<VariableDeclaration *> *)visit(ctx->paramDefinitionList());

			for (uint i = 0; i < listParams->size(); i++)
			{
				(*listParams)[i]->setParent(f);
				f->addVariable((*listParams)[i]);
			}
			//on supprime le vecteur (mais pas les objets pointés)
			delete (listParams);
		}
		//les instructions de la fonction sont lues dans le block la suivant
		Block *b = visit(ctx->block());
		f->setBlock(b);
		b->setParent(f);

		return f;
	}

	//renvoie un vector* de VariableDeclaration*, s'il n'y a qu'un seul parametre et de type void, l'ignorer
	//passe par la visite de ctx->paramDefinition
	virtual antlrcpp::Any visitParamDefinitionList(cmmpParser::ParamDefinitionListContext *ctx) override
	{
		vector<VariableDeclaration *> *list = new vector<VariableDeclaration *>();

		//dans le cas : function(void)
		if (ctx->paramDefinition().size() == 1 && ctx->paramDefinition(0)->getText() == "void")
			return list;

		for (uint i = 0; i < ctx->paramDefinition().size(); i++)
		{
			list->push_back(
				(VariableDeclaration *)visit(ctx->paramDefinition(i)));
		}
		return list;
	}

	//cree une VariableDeclaration en cohérence avec le paramètre lu. Elle n'a pas de valeur par défaut.
	virtual antlrcpp::Any visitParamDefinition(cmmpParser::ParamDefinitionContext *ctx) override
	{
		VariableDeclaration *vd = new VariableDeclaration(
			TypeUtil::getTypeFromString(ctx->Type()->getText()),
			ctx->Var()->getText(),
			ctx->start->getLine(),
			ctx->start->getCharPositionInLine());
		vd->setInit(true); //considéré comme initialisé (pas d'erreur si on lit cette valeur)
		return vd;
	}

	//if(expression) instruction else instructionn
	virtual antlrcpp::Any visitControlif(cmmpParser::ControlifContext *ctx) override
	{
		Condition *c;
		//Si on ne lit qu'une instruction, on est sur un if
		if (ctx->instruction().size() < 2)
		{
			Expression *e = visit(ctx->expr());
			Instruction *i = visit(ctx->instruction(0));
			c = new Condition(e, i);
			e->setParent(c);
			i->setParent(c);
		}
		//Si on en lit 2, on est sur un if/else
		else
		{
			Expression *e = visit(ctx->expr());
			Instruction *i0 = visit(ctx->instruction(0));
			Instruction *i1 = visit(ctx->instruction(1));
			c = new Condition(e, i0, i1);
			e->setParent(c);
			i0->setParent(c);
			i1->setParent(c);
		}

		return (Instruction *)c;
	}
	//while(expression) instruction
	virtual antlrcpp::Any visitControlwhile(cmmpParser::ControlwhileContext *ctx) override
	{
		Expression *e = visit(ctx->expr());
		Instruction *i = visit(ctx->instruction());
		Instruction *ret = new Loop(e, i);
		e->setParent(ret);
		i->setParent(ret);
		return ret;
	}

	virtual antlrcpp::Any visitInsBlock(cmmpParser::InsBlockContext *ctx) override
	{
		return (Instruction *)(Block *)visit(ctx->block());
	}

	virtual antlrcpp::Any visitInsExpr(cmmpParser::InsExprContext *ctx) override
	{
		return (Instruction *)((Expression *)(visit(ctx->expr())));
	}

	virtual antlrcpp::Any visitInsDeclVar(cmmpParser::InsDeclVarContext *ctx) override
	{
		return (Instruction *)(VariableDeclarations *)visit(ctx->declarationVarListe());
	}

	virtual antlrcpp::Any visitInsControl(cmmpParser::InsControlContext *ctx) override
	{
		return (Instruction *)(visit(ctx->structureControl()));
	}

	virtual antlrcpp::Any visitInsReturn(cmmpParser::InsReturnContext *ctx) override
	{
		Expression *e = visit(ctx->expr());
		Instruction *ret = new ReturnInstr(e);
		e->setParent(ret);
		return ret;
	}

	//TODO later
	//TODO la structure si c'est un tableau n'est pas encore prête...
	virtual antlrcpp::Any visitMembreGauche(cmmpParser::MembreGaucheContext *ctx) override
	{
		VariableCall *v = new VariableCall(Type::UNKNOWN, ctx->Var()->getText(), ctx->start->getLine(), ctx->start->getCharPositionInLine());
		v->setRead(true);
		return v;
	}

	//renvoie un vector* de Expression*
	virtual antlrcpp::Any visitEListe(cmmpParser::EListeContext *ctx) override
	{
		vector<Expression *> *list = new vector<Expression *>();

		for (uint i = 0; i < ctx->expr().size(); i++)
		{
			list->push_back(
				(Expression *)visit(ctx->expr(i)));
		}
		return list;
	}
	// ( expr )
	virtual antlrcpp::Any visitPar(cmmpParser::ParContext *ctx) override
	{
		return (Expression *)visit(ctx->expr());
	}
	// expr + expr
	virtual antlrcpp::Any visitAdd(cmmpParser::AddContext *ctx) override
	{
		Expression *e0 = visit(ctx->expr(0));
		Expression *e1 = visit(ctx->expr(1));
		Expression *ret = new BinaryExpr(
			Type::UNKNOWN,
			e0,
			BinaryOp::ADD,
			e1);
		e0->setParent(ret);
		e1->setParent(ret);
		return ret;
	}
	// expr - expr
	virtual antlrcpp::Any visitSub(cmmpParser::SubContext *ctx) override
	{
		Expression *e0 = visit(ctx->expr(0));
		Expression *e1 = visit(ctx->expr(1));
		Expression *ret = new BinaryExpr(
			Type::UNKNOWN,
			e0,
			BinaryOp::SUB,
			e1);
		e0->setParent(ret);
		e1->setParent(ret);
		return ret;
	}
	// expr * expr
	virtual antlrcpp::Any visitMult(cmmpParser::MultContext *ctx) override
	{
		Expression *e0 = visit(ctx->expr(0));
		Expression *e1 = visit(ctx->expr(1));
		Expression *ret = new BinaryExpr(
			Type::UNKNOWN,
			e0,
			BinaryOp::MULT,
			e1);
		e0->setParent(ret);
		e1->setParent(ret);
		return ret;
	}
	//expr % expr
	virtual antlrcpp::Any visitMod(cmmpParser::ModContext *ctx) override
	{
		Expression *e0 = visit(ctx->expr(0));
		Expression *e1 = visit(ctx->expr(1));
		Expression *ret = new BinaryExpr(
			Type::UNKNOWN,
			e0,
			BinaryOp::MOD,
			e1);
		e0->setParent(ret);
		e1->setParent(ret);
		return ret;
	}
	//expr || expr
	virtual antlrcpp::Any visitOr(cmmpParser::OrContext *ctx) override
	{
		Expression *e0 = visit(ctx->expr(0));
		Expression *e1 = visit(ctx->expr(1));
		Expression *ret = new BinaryExpr(
			Type::UNKNOWN,
			e0,
			BinaryOp::OR,
			e1);
		e0->setParent(ret);
		e1->setParent(ret);
		return ret;
	}

	//TODO (pas prio) checker
	virtual antlrcpp::Any visitConst(cmmpParser::ConstContext *ctx) override
	{

		//cout << ctx->start->getLine() << " - CONST " << ctx->Cst()->getText() << endl;
		string cst = ctx->Cst()->getText();
		switch (cst[0])
		{
		case ('\''):
		{ //it's a char
			char val = 'a';
			if (cst.size() == 3)
			{
				val = cst[1];
			}
			else //cst[1]='\'
			{
				map<char, int> ascii_code = {{'b', 8}, {'t', 9}, {'n', 10}, {'v', 11}, {'f', 12}, {'r', 13}, {'\\', 92}, {'\'', 39}}; //map des caractères courants à échapper
				if (ascii_code.find(cst[2]) != ascii_code.end())
				{
					val = char(ascii_code[cst[2]]);
				}
				else if (cst[2] >= '0' && cst[2] <= '9')
				{
					std::size_t idx = 0;
					
					string num_s = cst.substr(2, cst.size() - 1 - 2); // 1 pour le ' final et 2 pour les '\ initiaux
					
					int num = std::stoi(num_s, &idx, 8); //The fuck on lit de l'octal
					val = char(num);
				}
				else
				{			   // cas particuliers de caractères à échapper
					val = '?'; //unkown
				}
			}
			return (Expression *)(new Const<char>(Type::CHAR, val));
		}
		case ('"'):
		{ //it's a string
			string val = cst.substr(1, cst.size() - 2);
			return (Expression *)(new Const<string>(Type::CHAR, val)); //TODO future : string = char[] ?
		}
		default:
		{
			int64_t val = stol(cst);
			return (Expression *)(new Const<int64_t>(Type::INT32, val));
		}
		}
	}
	// membreGauche opAffectation expr
	virtual antlrcpp::Any visitAffectation(cmmpParser::AffectationContext *ctx) override
	{
		VariableCall *vc = visit(ctx->membreGauche());
		Expression *e = visit(ctx->expr());
		Expression *ret = new BinaryAffectation(
			Type::UNKNOWN,
			vc,
			(OpBinaryAffectation)visit(ctx->opAffectation()),
			e);
		vc->setParent(ret);
		vc->setWrite(true);
		vc->setRead(false);
		e->setParent(ret);
		return ret;
	}
	// expr / expr
	virtual antlrcpp::Any visitDiv(cmmpParser::DivContext *ctx) override
	{
		Expression *e0 = visit(ctx->expr(0));
		Expression *e1 = visit(ctx->expr(1));
		Expression *ret = new BinaryExpr(
			Type::UNKNOWN,
			e0,
			BinaryOp::DIV,
			e1);
		e0->setParent(ret);
		e1->setParent(ret);
		return ret;
	}
	// - expr
	virtual antlrcpp::Any visitNeg(cmmpParser::NegContext *ctx) override
	{
		Expression *e = visit(ctx->expr());
		Expression *ret = new UnaryExpr(
			Type::UNKNOWN,
			e,
			UnaryOp::MINUS);
		e->setParent(ret);
		return ret;
	}
	// ! expr
	virtual antlrcpp::Any visitNot(cmmpParser::NotContext *ctx) override
	{
		Expression *e = visit(ctx->expr());
		Expression *ret = new UnaryExpr(
			Type::UNKNOWN,
			e,
			UnaryOp::NOT);
		e->setParent(ret);
		return ret;
	}
	// opAffect membreGauche
	virtual antlrcpp::Any visitPre(cmmpParser::PreContext *ctx) override
	{
		VariableCall *vc = visit(ctx->membreGauche());
		Expression *ret = new UnaryAffectation(
			Type::UNKNOWN,
			vc,
			visit(ctx->opUnaryAffectation()),
			true);
		vc->setParent(ret);
		vc->setWrite(true);
		return ret;
	}
	// membreGauche opAffect
	virtual antlrcpp::Any visitPost(cmmpParser::PostContext *ctx) override
	{
		VariableCall *vc = visit(ctx->membreGauche());
		Expression *ret = new UnaryAffectation(
			Type::UNKNOWN,
			vc,
			visit(ctx->opUnaryAffectation()),
			false);
		vc->setParent(ret);
		vc->setWrite(true);
		return ret;
	}
	// expr && expr
	virtual antlrcpp::Any visitAnd(cmmpParser::AndContext *ctx) override
	{
		Expression *e0 = visit(ctx->expr(0));
		Expression *e1 = visit(ctx->expr(1));
		Expression *ret = new BinaryExpr(
			Type::UNKNOWN,
			e0,
			BinaryOp::AND,
			e1);
		e0->setParent(ret);
		e1->setParent(ret);
		return ret;
	}

	virtual antlrcpp::Any visitFunction(cmmpParser::FunctionContext *ctx) override
	{
		return (Expression *)(FunctionCall *)visit(ctx->functionCall());
	}
	// expr opComparaison expr
	virtual antlrcpp::Any visitComparaison(cmmpParser::ComparaisonContext *ctx) override
	{
		Expression *e0 = visit(ctx->expr(0));
		Expression *e1 = visit(ctx->expr(1));
		Expression *ret = new BinaryExpr(
			Type::UNKNOWN,
			e0,
			(BinaryOp)visit(ctx->opComparaison()),
			e1);
		e0->setParent(ret);
		e1->setParent(ret);
		return ret;
	}
	//Une variable lue ailleur que dans une délaration est un appel de variable
	virtual antlrcpp::Any visitVariable(cmmpParser::VariableContext *ctx) override
	{
		return (Expression *)(VariableCall *)visit(ctx->membreGauche());
	}

	//TODO later
	//pas pret lel deso
	virtual antlrcpp::Any visitVarTab(cmmpParser::VarTabContext *ctx) override
	{
		return visitChildren(ctx);
	}
	// Appel de fonction
	virtual antlrcpp::Any visitFunctionCall(cmmpParser::FunctionCallContext *ctx) override
	{
		//On crée l'objet Appel à la fonction
		FunctionCall *f = new FunctionCall(Type::UNKNOWN, ctx->Var()->getText());
		// Si on a des arguments, on les ajoute
		if (ctx->eListe())
		{
			vector<Expression *> *listExprs = (vector<Expression *> *)visit(ctx->eListe());

			for (uint i = 0; i < listExprs->size(); i++)
			{
				(*listExprs)[i]->setParent(f);
				f->addArg((*listExprs)[i]);
			}
			delete (listExprs);
		}
		return f;
	}
	
	virtual antlrcpp::Any visitIncr(cmmpParser::IncrContext *ctx __attribute__((unused))) override
	{
		return OpUnaryAffectation::INCR;
	}

	virtual antlrcpp::Any visitDecr(cmmpParser::DecrContext *ctx __attribute__((unused))) override
	{
		return OpUnaryAffectation::DECR;
	}

	virtual antlrcpp::Any visitInf(cmmpParser::InfContext *ctx __attribute__((unused))) override
	{
		return BinaryOp::INF;
	}

	virtual antlrcpp::Any visitSup(cmmpParser::SupContext *ctx __attribute__((unused))) override
	{
		return BinaryOp::SUP;
	}

	virtual antlrcpp::Any visitInfeq(cmmpParser::InfeqContext *ctx __attribute__((unused))) override
	{
		return BinaryOp::INFEQ;
	}

	virtual antlrcpp::Any visitSupeq(cmmpParser::SupeqContext *ctx __attribute__((unused))) override
	{
		return BinaryOp::SUPEQ;
	}

	virtual antlrcpp::Any visitEq(cmmpParser::EqContext *ctx __attribute__((unused))) override
	{
		return BinaryOp::EQ;
	}

	virtual antlrcpp::Any visitNeq(cmmpParser::NeqContext *ctx __attribute__((unused))) override
	{
		return BinaryOp::NEQ;
	}

	virtual antlrcpp::Any visitAff(cmmpParser::AffContext *ctx __attribute__((unused))) override
	{
		return OpBinaryAffectation::AFF;
	}

	virtual antlrcpp::Any visitAddaff(cmmpParser::AddaffContext *ctx __attribute__((unused))) override
	{
		return OpBinaryAffectation::ADDAFF;
	}

	virtual antlrcpp::Any visitSubaff(cmmpParser::SubaffContext *ctx __attribute__((unused))) override
	{
		return OpBinaryAffectation::SUBAFF;
	}

	virtual antlrcpp::Any visitMultaff(cmmpParser::MultaffContext *ctx __attribute__((unused))) override
	{
		return OpBinaryAffectation::MULTAFF;
	}

	virtual antlrcpp::Any visitDivaff(cmmpParser::DivaffContext *ctx __attribute__((unused))) override
	{
		return OpBinaryAffectation::DIVAFF;
	}

	virtual antlrcpp::Any visitModaff(cmmpParser::ModaffContext *ctx __attribute__((unused))) override
	{
		return OpBinaryAffectation::MODAFF;
	}
};
