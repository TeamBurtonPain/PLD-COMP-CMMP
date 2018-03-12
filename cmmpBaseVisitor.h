
// Generated from cmmp.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "cmmpVisitor.h"


/**
 * This class provides an empty implementation of cmmpVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  cmmpBaseVisitor : public cmmpVisitor {
public:

  virtual antlrcpp::Any visitProgramme(cmmpParser::ProgrammeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock(cmmpParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclarationVarListe(cmmpParser::DeclarationVarListeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclarationVar(cmmpParser::DeclarationVarContext *ctx) override {
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

  virtual antlrcpp::Any visitInstruction(cmmpParser::InstructionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMembreGauche(cmmpParser::MembreGaucheContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEListe(cmmpParser::EListeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAugmentedExpr(cmmpParser::AugmentedExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMidAffectation(cmmpParser::MidAffectationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEndAffectation(cmmpParser::EndAffectationContext *ctx) override {
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

  virtual antlrcpp::Any visitOpComparaison(cmmpParser::OpComparaisonContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOpAffectation(cmmpParser::OpAffectationContext *ctx) override {
    return visitChildren(ctx);
  }


};

