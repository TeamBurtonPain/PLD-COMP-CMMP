#pragma once
#include "cmmpBaseVisitor.h"


class BuildCMMP :
	public cmmpBaseVisitor
{
public:
	BuildCMMP();
	virtual ~BuildCMMP();

	virtual antlrcpp::Any visitAxiome(cmmpParser::AxiomeContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitInclude(cmmpParser::IncludeContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitDeclVar(cmmpParser::DeclVarContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitDefFonc(cmmpParser::DefFoncContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitEof(cmmpParser::EofContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitBlock(cmmpParser::BlockContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitDeclarationVarListe(cmmpParser::DeclarationVarListeContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitSimpleVar(cmmpParser::SimpleVarContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitTabVar(cmmpParser::TabVarContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitVarSimple(cmmpParser::VarSimpleContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitVarTableau(cmmpParser::VarTableauContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitDefinitionFonction(cmmpParser::DefinitionFonctionContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitParamDefinitionList(cmmpParser::ParamDefinitionListContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitParamDefinition(cmmpParser::ParamDefinitionContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitStructureControl(cmmpParser::StructureControlContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitInsBlock(cmmpParser::InsBlockContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitInsExpr(cmmpParser::InsExprContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitInsDeclVar(cmmpParser::InsDeclVarContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitInsControl(cmmpParser::InsControlContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitMembreGauche(cmmpParser::MembreGaucheContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitEListe(cmmpParser::EListeContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitExprAff(cmmpParser::ExprAffContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitSimpleExpr(cmmpParser::SimpleExprContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitMidAffectation(cmmpParser::MidAffectationContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitEndAffectation(cmmpParser::EndAffectationContext *ctx) override {
		return (Instruction*)
			new BinaryAffectation(
				(Variable*) visit(ctx->membreGauche()),
				(AffectationBinaryOp) visit(ctx->opAffectation()),
				(Expression*) visit(ctx->expr())
			);
	}

	virtual antlrcpp::Any visitPar(cmmpParser::ParContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitAdd(cmmpParser::AddContext *ctx) override {
		return (Expression*)
			new BinaryExpr(
				(Expression*) visit(ctx->expr(0)),
				BinaryOp.ADD,
				(Expression*) visit(ctx->expr(2))
			);
	}

	virtual antlrcpp::Any visitSub(cmmpParser::SubContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitMult(cmmpParser::MultContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitMod(cmmpParser::ModContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitOr(cmmpParser::OrContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitConst(cmmpParser::ConstContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitPreinc(cmmpParser::PreincContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitDiv(cmmpParser::DivContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitPostinc(cmmpParser::PostincContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitNot(cmmpParser::NotContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitPredecr(cmmpParser::PredecrContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitAnd(cmmpParser::AndContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitPostdecr(cmmpParser::PostdecrContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitFunction(cmmpParser::FunctionContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitComparaison(cmmpParser::ComparaisonContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitVariable(cmmpParser::VariableContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitVarTab(cmmpParser::VarTabContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitFunctionCall(cmmpParser::FunctionCallContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitInf(cmmpParser::InfContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitSup(cmmpParser::SupContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitInfeq(cmmpParser::InfeqContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitSupeq(cmmpParser::SupeqContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitEq(cmmpParser::EqContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitNeq(cmmpParser::NeqContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitAff(cmmpParser::AffContext *ctx) override {
		return OpBinaryAffectation.AFF;
	}

	virtual antlrcpp::Any visitAddaff(cmmpParser::AddaffContext *ctx) override {
		return OpBinaryAffectation.ADDAFF;
	}

	virtual antlrcpp::Any visitSubaff(cmmpParser::SubaffContext *ctx) override {
		return OpBinaryAffectation.SUBAFF;
	}

	virtual antlrcpp::Any visitMultaff(cmmpParser::MultaffContext *ctx) override {
		return OpBinaryAffectation.MULTAFF;
	}

	virtual antlrcpp::Any visitDivaff(cmmpParser::DivaffContext *ctx) override {
		return OpBinaryAffectation.DIVAFF;
	}

	virtual antlrcpp::Any visitModaff(cmmpParser::ModaffContext *ctx) override {
		return OpBinaryAffectation.MODAFF;
	}
};

