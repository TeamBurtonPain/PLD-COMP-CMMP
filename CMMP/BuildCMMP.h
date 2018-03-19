#pragma once
#include "BinaryAffectation.h"
#include "BinaryExpr.h"
#include "cmmpBaseVisitor.h"
#include "Expression.h"
#include "Operators.h"
#include "UnaryAffectation.h"
#include "UnaryExpr.h"
#include "Variable.h"


class BuildCMMP :
	public cmmpBaseVisitor
{
public:
	BuildCMMP();
	virtual ~BuildCMMP();

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

	virtual antlrcpp::Any visitPreinc(cmmpParser::PreincContext *ctx) override {
		return (Expression*)
			new UnaryAffectation(
				((Variable*) ctx->expr())->getType(),
				*((Variable*) visit(ctx->expr())), //Erreur dans la grammaire, c'est bien un membreGauche et pas une expr qu'il faut
				OpUnaryAffectation::INCR,
				true 
			);
	}

	virtual antlrcpp::Any visitPostinc(cmmpParser::PostincContext *ctx) override {
		return (Expression*)
			new UnaryAffectation(
				((Variable*) ctx->expr())->getType(),
				*((Variable*) visit(ctx->expr())), //Erreur dans la grammaire, c'est bien un membreGauche et pas une expr qu'il faut
				OpUnaryAffectation::INCR,
				false 
			);
	}

	virtual antlrcpp::Any visitNot(cmmpParser::NotContext *ctx) override {
		return (Expression*)
			new UnaryExpr(
				((Expression*) ctx->expr())->getType(),
				*((Expression*)visit(ctx->expr())),
				UnaryOp::NOT);

	}

	virtual antlrcpp::Any visitPredecr(cmmpParser::PredecrContext *ctx) override {
		return (Expression*)
			new UnaryAffectation(
				((Variable*) ctx->expr())->getType(),
				*((Variable*) visit(ctx->expr())), //Erreur dans la grammaire, c'est bien un membreGauche et pas une expr qu'il faut
				OpUnaryAffectation::DECR,
				true 
			);
	}

	virtual antlrcpp::Any visitPostdecr(cmmpParser::PostdecrContext *ctx) override {
		return (Expression*)
			new UnaryAffectation(
				((Variable*) ctx->expr())->getType(),
				*((Variable*) visit(ctx->expr())), //Erreur dans la grammaire, c'est bien un membreGauche et pas une expr qu'il faut
				OpUnaryAffectation::DECR,
				false 
			);
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

