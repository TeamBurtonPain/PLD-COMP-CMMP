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
 

class BuildCMMP :
	public cmmpBaseVisitor
{ 
public:
	BuildCMMP();
	virtual ~BuildCMMP();

	virtual antlrcpp::Any visitAxiome(cmmpParser::AxiomeContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitDeclVar(cmmpParser::DeclVarContext *ctx) override {
		Program* p = (Program*) visit(ctx->programme());
		/*
		//get list of vars
		//add it to the programm
		//the the programm as their parent
		*/
		return p;
	}

	virtual antlrcpp::Any visitDefFonc(cmmpParser::DefFoncContext *ctx) override {
		Program* p = (Program*) visit(ctx->programme());

		Funct* f = (Funct*) visit(ctx->definitionFonction());
		if(f->getName().compare("main"))
			p->setMainFunction(*f);
		else
			p->addFunction(*f);

		return p;
	}
	
  	virtual antlrcpp::Any visitEof(cmmpParser::EofContext *ctx) override {
		return new Program();
	}

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

	virtual antlrcpp::Any visitDefinitionFonction(cmmpParser::DefinitionFonctionContext *ctx) override {
		Funct* f = new Funct(
			TypeUtil::getTypeFromString(ctx->Type()->getText()),
			ctx->Var()->getText()
		);
		//TODO addVar pour chacun de ses parametres
		f->setBlock(
			*((Block*)visit(ctx->block()))
		);
		return f;
	}
	//TODO
	virtual antlrcpp::Any visitInsBlock(cmmpParser::InsBlockContext *ctx) override {
		return (Instruction*) new Variable(Type::CHAR,"test",1);
	}
	//TODO
	virtual antlrcpp::Any visitInsExpr(cmmpParser::InsExprContext *ctx) override {
		return (Instruction*) new Variable(Type::CHAR,"test",1);
	}
	//TODO
  	virtual antlrcpp::Any visitInsDeclVar(cmmpParser::InsDeclVarContext *ctx) override {
		return (Instruction*) new VariableDeclaration(Type::CHAR,"test",1);
	}
	//TODO
	virtual antlrcpp::Any visitInsControl(cmmpParser::InsControlContext *ctx) override {
		return (Instruction*) new Variable(Type::CHAR,"test",1);
	}


	virtual antlrcpp::Any visitAffectation(cmmpParser::AffectationContext *ctx) override {

  		return (Instruction*)
			new BinaryAffectation(
				((Expression*) visit(ctx->membreGauche()))->getType(),
				*((Variable*) visit(ctx->membreGauche())),
				(OpBinaryAffectation) visit(ctx->opAffectation()),
				*((Expression*) visit(ctx->expr()))
			);
	}

	virtual antlrcpp::Any visitAdd(cmmpParser::AddContext *ctx) override {
		return (Expression*)
			new BinaryExpr(
				((Expression*) visit(ctx->expr(0)))->getType(), //return type, possibilité de le travailler un peu plus
				*((Expression*) visit(ctx->expr(0))),
				BinaryOp::ADD,
				*((Expression*) visit(ctx->expr(1)))
			);
	}

	virtual antlrcpp::Any visitSub(cmmpParser::SubContext *ctx) override {
		return (Expression*)
			new BinaryExpr(
				((Expression*) visit(ctx->expr(0)))->getType(), //return type, possibilité de le travailler un peu plus
				*((Expression*) visit(ctx->expr(0))),
				BinaryOp::SUB,
				*((Expression*) visit(ctx->expr(1)))
			);
	}

	virtual antlrcpp::Any visitPre(cmmpParser::PreContext *ctx) override {
		return new UnaryAffectation(Type::UNKNOWN, *((Variable*)visit(ctx->membreGauche())), visit(ctx->opUnaryAffectation()), true);
	}

	virtual antlrcpp::Any visitPost(cmmpParser::PostContext *ctx) override {
		
		return new UnaryAffectation(Type::UNKNOWN,*((Variable*) visit(ctx->membreGauche())), visit(ctx->opUnaryAffectation()), false);
	}

	virtual antlrcpp::Any visitIncr(cmmpParser::IncrContext *ctx) override {
		return OpUnaryAffectation::INCR;
	}

	virtual antlrcpp::Any visitDecr(cmmpParser::DecrContext *ctx) override {
		return OpUnaryAffectation::DECR;
	}

	virtual antlrcpp::Any visitNot(cmmpParser::NotContext *ctx) override {
		return (Expression*)
			new UnaryExpr(
			((Expression*)ctx->expr())->getType(),
				*((Expression*)visit(ctx->expr())),
				UnaryOp::NOT);
	}

	virtual antlrcpp::Any visitEq(cmmpParser::EqContext *ctx) override {
		return new BinaryOp(
				BinaryOp::EQ
			);
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

