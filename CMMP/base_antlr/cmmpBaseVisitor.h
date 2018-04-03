
// Generated from base_antlr/cmmp.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "cmmpVisitor.h"


/**
 * This class provides an empty implementation of cmmpVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  cmmpBaseVisitor : public cmmpVisitor {
public:

  virtual antlrcpp::Any visitAxiome(cmmpParser::AxiomeContext *ctx) override {
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

  virtual antlrcpp::Any visitControlif(cmmpParser::ControlifContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitControlwhile(cmmpParser::ControlwhileContext *ctx) override {
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

  virtual antlrcpp::Any visitInsReturn(cmmpParser::InsReturnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMembreGauche(cmmpParser::MembreGaucheContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEListe(cmmpParser::EListeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPar(cmmpParser::ParContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdd(cmmpParser::AddContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSub(cmmpParser::SubContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPre(cmmpParser::PreContext *ctx) override {
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

  virtual antlrcpp::Any visitAffectation(cmmpParser::AffectationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDiv(cmmpParser::DivContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNeg(cmmpParser::NegContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNot(cmmpParser::NotContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPost(cmmpParser::PostContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAnd(cmmpParser::AndContext *ctx) override {
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

  virtual antlrcpp::Any visitIncr(cmmpParser::IncrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDecr(cmmpParser::DecrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEq(cmmpParser::EqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNeq(cmmpParser::NeqContext *ctx) override {
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

  virtual antlrcpp::Any visitAff(cmmpParser::AffContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAddaff(cmmpParser::AddaffContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubaff(cmmpParser::SubaffContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultaff(cmmpParser::MultaffContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDivaff(cmmpParser::DivaffContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModaff(cmmpParser::ModaffContext *ctx) override {
    return visitChildren(ctx);
  }


};

