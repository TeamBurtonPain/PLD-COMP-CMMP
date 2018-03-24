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

	virtual antlrcpp::Any visitAxiome(cmmpParser::AxiomeContext *ctx) override
	{
		return (Program *)visit(ctx->programme());
	}

	virtual antlrcpp::Any visitDeclVar(cmmpParser::DeclVarContext *ctx) override
	{
		Program *p = (Program *)visit(ctx->programme());

		VariableDeclarations *vds = (VariableDeclarations *)(visit(ctx->declarationVarListe()));

		vector<VariableDeclaration *> vectorDecl = vds->getDecla();
		for (int i = 0; i < vectorDecl.size(); i++)
		{
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
		if (!f->getName().compare("main"))
			p->setMainFunction(f);
		else
			p->addFunction(f);

		return p;
	}

	//Arrive a la eof, il n'y a plus de contexte, on cree l'instance de Program
	virtual antlrcpp::Any visitEof(cmmpParser::EofContext *ctx) override
	{
		return new Program();
	}

	//A la visite d'un Block, on l'instancie, on note les variables d'un coté et les instructions d'un autre
	virtual antlrcpp::Any visitBlock(cmmpParser::BlockContext *ctx) override
	{
		Block *b = new Block();

		for (uint i = 0; i < ctx->instruction().size(); i++)
		{
			//C-OUT
			cout << "l" << ctx->instruction(i)->start->getLine() << "- "
				 << ctx->instruction(i)->getText() << endl;
			Instruction *instr = (Instruction *)(visit(ctx->instruction(i)));
			instr->setParent(b);

			VariableDeclarations *vds = dynamic_cast<VariableDeclarations *>(instr);
			if (vds)
			{
				vector<VariableDeclaration *> vectorDecl = vds->getDecla();
				for (int i = 0; i < vectorDecl.size(); i++)
				{
					b->addVariable(vectorDecl[i]);
				}
				delete (vds);
				vectorDecl.clear();
			}
			else
			{
				instr->setParent(b);
				b->addInstruction(instr);
			}
		}
		return b;
	}

	virtual antlrcpp::Any visitDeclarationVarListe(cmmpParser::DeclarationVarListeContext *ctx) override
	{
		VariableDeclarations *list = new VariableDeclarations();

		Type t = TypeUtil::getTypeFromString(ctx->Type()->getText());
		for (uint i = 0; i < ctx->declarationVar().size(); i++)
		{
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

	virtual antlrcpp::Any visitVarSimple(cmmpParser::VarSimpleContext *ctx) override
	{
		VariableDeclaration *v = new VariableDeclaration(
			Type::UNKNOWN,
			ctx->Var()->getText(),
			ctx->start->getLine(),
			ctx->start->getCharPositionInLine());

		if (ctx->expr() != NULL)
			v->setExpression(
				(Expression *)visit(ctx->expr()));

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
		Funct *f = new Funct(
			TypeUtil::getTypeFromString(ctx->Type()->getText()),
			ctx->Var()->getText());
		if (ctx->paramDefinitionList())
		{
			vector<VariableDeclaration *> *listParams = (vector<VariableDeclaration *> *)visit(ctx->paramDefinitionList());

			for (uint i = 0; i < listParams->size(); i++)
			{
				f->addVariable((*listParams)[i]);
			}
			delete (listParams);
		}

		f->setBlock(
			(Block *)visit(ctx->block()));
		return f;
	}

	//renvoie un vector* de VariableDeclaration*, s'il n'y a qu'un seul parametre et de type void, l'ignorer
	//passe par la visite de ctx->paramDefinition
	virtual antlrcpp::Any visitParamDefinitionList(cmmpParser::ParamDefinitionListContext *ctx) override
	{
		vector<VariableDeclaration *> *list = new vector<VariableDeclaration *>();

		//if we have : function(void)
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
		return (VariableDeclaration *)new VariableDeclaration(
			TypeUtil::getTypeFromString(ctx->Type()->getText()),
			ctx->Var()->getText(),
			ctx->start->getLine(),
			ctx->start->getCharPositionInLine());
	}

	//TODO todo échanger avec dessous quand titi aura modifié la grammaire
	virtual antlrcpp::Any visitControlwhile(cmmpParser::ControlwhileContext *ctx) override
	{
		Condition *c;
		if (ctx->instruction().size() < 2)
			c = new Condition(
				(Expression *)visit(ctx->expr()),
				(Instruction *)visit(ctx->instruction(0)));
		else
			c = new Condition(
				(Expression *)visit(ctx->expr()),
				(Instruction *)visit(ctx->instruction(0)),
				(Instruction *)visit(ctx->instruction(1)));

		return (Instruction *)c;
	}

	//TODO todo échanger avec dessus quand titi aura modifié la grammaire
	virtual antlrcpp::Any visitControlif(cmmpParser::ControlifContext *ctx) override
	{
		return (Instruction *)new Loop(
			(Expression *)visit(ctx->expr()),
			(Instruction *)visit(ctx->instruction()));
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

	//TODO later
	//TODO la structure si c'est un tableau n'est pas encore prête...
	virtual antlrcpp::Any visitMembreGauche(cmmpParser::MembreGaucheContext *ctx) override
	{
		return new VariableCall(Type::UNKNOWN, ctx->Var()->getText(), ctx->start->getLine(), ctx->start->getCharPositionInLine());
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

	virtual antlrcpp::Any visitPar(cmmpParser::ParContext *ctx) override
	{
		return (Expression *)visit(ctx->expr());
	}

	virtual antlrcpp::Any visitAdd(cmmpParser::AddContext *ctx) override
	{
		return (Expression *)new BinaryExpr(
			Type::UNKNOWN,
			(Expression *)visit(ctx->expr(0)),
			BinaryOp::ADD,
			(Expression *)visit(ctx->expr(1)));
	}

	virtual antlrcpp::Any visitSub(cmmpParser::SubContext *ctx) override
	{
		return (Expression *)new BinaryExpr(
			Type::UNKNOWN,
			(Expression *)visit(ctx->expr(0)),
			BinaryOp::SUB,
			(Expression *)visit(ctx->expr(1)));
	}

	virtual antlrcpp::Any visitMult(cmmpParser::MultContext *ctx) override
	{
		return (Expression *)new BinaryExpr(
			Type::UNKNOWN,
			(Expression *)visit(ctx->expr(0)),
			BinaryOp::MULT,
			(Expression *)visit(ctx->expr(1)));
	}

	virtual antlrcpp::Any visitMod(cmmpParser::ModContext *ctx) override
	{
		return (Expression *)new BinaryExpr(
			Type::UNKNOWN,
			(Expression *)visit(ctx->expr(0)),
			BinaryOp::MOD,
			(Expression *)visit(ctx->expr(1)));
	}

	virtual antlrcpp::Any visitOr(cmmpParser::OrContext *ctx) override
	{
		return (Expression *)new BinaryExpr(
			Type::UNKNOWN,
			(Expression *)visit(ctx->expr(0)),
			BinaryOp::OR,
			(Expression *)visit(ctx->expr(1)));
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
				else if (cst[2] >= 0 && cst[2] <= 9)
				{
					string num_s = cst.substr(2, cst.size() - 1 - 2); // 1 pour le ' final et 2 pour les '\ initiaux
					int num = std::stoi(num_s);
					val = char(num);
				}
				else
				{			   // cas particuliers de caractères à échapper
					val = '?'; //unkown
				}
			}
			return (Expression *)(new Const<char>(Type::CHAR, val));
		}
		case ('\"'):
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

	virtual antlrcpp::Any visitAffectation(cmmpParser::AffectationContext *ctx) override
	{
		return (Expression *)new BinaryAffectation(
			Type::UNKNOWN,
			(VariableCall *)visit(ctx->membreGauche()),
			(OpBinaryAffectation)visit(ctx->opAffectation()),
			(Expression *)visit(ctx->expr()));
	}

	virtual antlrcpp::Any visitDiv(cmmpParser::DivContext *ctx) override
	{
		return (Expression *)new BinaryExpr(
			Type::UNKNOWN,
			(Expression *)visit(ctx->expr(0)),
			BinaryOp::DIV,
			(Expression *)visit(ctx->expr(1)));
		;
	}

	virtual antlrcpp::Any visitNeg(cmmpParser::NegContext *ctx) override
	{
		return (Expression *)new UnaryExpr(
			Type::UNKNOWN,
			(Expression *)visit(ctx->expr()),
			UnaryOp::MINUS);
	}

	virtual antlrcpp::Any visitNot(cmmpParser::NotContext *ctx) override
	{
		return (Expression *)new UnaryExpr(
			Type::UNKNOWN,
			(Expression *)visit(ctx->expr()),
			UnaryOp::NOT);
	}

	virtual antlrcpp::Any visitPre(cmmpParser::PreContext *ctx) override
	{
		return (Expression *)new UnaryAffectation(
			Type::UNKNOWN,
			(Variable *)visit(ctx->membreGauche()),
			visit(ctx->opUnaryAffectation()),
			true);
	}

	virtual antlrcpp::Any visitPost(cmmpParser::PostContext *ctx) override
	{
		return (Expression *)new UnaryAffectation(
			Type::UNKNOWN,
			(Variable *)visit(ctx->membreGauche()),
			visit(ctx->opUnaryAffectation()),
			true);
	}

	virtual antlrcpp::Any visitAnd(cmmpParser::AndContext *ctx) override
	{
		return (Expression *)new BinaryExpr(
			Type::UNKNOWN,
			(Expression *)visit(ctx->expr(0)),
			BinaryOp::AND,
			(Expression *)visit(ctx->expr(1)));
	}

	virtual antlrcpp::Any visitFunction(cmmpParser::FunctionContext *ctx) override
	{
		return (Expression *)(FunctionCall *)visit(ctx->functionCall());
	}

	virtual antlrcpp::Any visitComparaison(cmmpParser::ComparaisonContext *ctx) override
	{
		return (Expression *)new BinaryExpr(
			Type::UNKNOWN,
			(Expression *)visit(ctx->expr(0)),
			(BinaryOp)visit(ctx->opComparaison()),
			(Expression *)visit(ctx->expr(1)));
	}

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

	virtual antlrcpp::Any visitFunctionCall(cmmpParser::FunctionCallContext *ctx) override
	{
		FunctionCall *f = new FunctionCall(Type::UNKNOWN, ctx->Var()->getText());
		if (ctx->eListe())
		{
			vector<Expression *> *listExprs = (vector<Expression *> *)visit(ctx->eListe());

			for (uint i = 0; i < listExprs->size(); i++)
			{
				f->addArg((*listExprs)[i]);
			}
			delete (listExprs);
		}
		return f;
	}

	virtual antlrcpp::Any visitIncr(cmmpParser::IncrContext *ctx) override
	{
		return OpUnaryAffectation::INCR;
	}

	virtual antlrcpp::Any visitDecr(cmmpParser::DecrContext *ctx) override
	{
		return OpUnaryAffectation::DECR;
	}

	virtual antlrcpp::Any visitInf(cmmpParser::InfContext *ctx) override
	{
		return BinaryOp::INF;
	}

	virtual antlrcpp::Any visitSup(cmmpParser::SupContext *ctx) override
	{
		return BinaryOp::SUP;
	}

	virtual antlrcpp::Any visitInfeq(cmmpParser::InfeqContext *ctx) override
	{
		return BinaryOp::INFEQ;
	}

	virtual antlrcpp::Any visitSupeq(cmmpParser::SupeqContext *ctx) override
	{
		return BinaryOp::SUPEQ;
	}

	virtual antlrcpp::Any visitEq(cmmpParser::EqContext *ctx) override
	{
		return BinaryOp::EQ;
	}

	virtual antlrcpp::Any visitNeq(cmmpParser::NeqContext *ctx) override
	{
		return BinaryOp::NEQ;
	}

	virtual antlrcpp::Any visitAff(cmmpParser::AffContext *ctx) override
	{
		return OpBinaryAffectation::AFF;
	}

	virtual antlrcpp::Any visitAddaff(cmmpParser::AddaffContext *ctx) override
	{
		return OpBinaryAffectation::ADDAFF;
	}

	virtual antlrcpp::Any visitSubaff(cmmpParser::SubaffContext *ctx) override
	{
		return OpBinaryAffectation::SUBAFF;
	}

	virtual antlrcpp::Any visitMultaff(cmmpParser::MultaffContext *ctx) override
	{
		return OpBinaryAffectation::MULTAFF;
	}

	virtual antlrcpp::Any visitDivaff(cmmpParser::DivaffContext *ctx) override
	{
		return OpBinaryAffectation::DIVAFF;
	}

	virtual antlrcpp::Any visitModaff(cmmpParser::ModaffContext *ctx) override
	{
		return OpBinaryAffectation::MODAFF;
	}
};
