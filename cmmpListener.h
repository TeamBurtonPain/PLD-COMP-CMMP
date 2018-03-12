
// Generated from cmmp.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "cmmpParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by cmmpParser.
 */
class  cmmpListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterInclude(cmmpParser::IncludeContext *ctx) = 0;
  virtual void exitInclude(cmmpParser::IncludeContext *ctx) = 0;

  virtual void enterDeclVar(cmmpParser::DeclVarContext *ctx) = 0;
  virtual void exitDeclVar(cmmpParser::DeclVarContext *ctx) = 0;

  virtual void enterDefFonc(cmmpParser::DefFoncContext *ctx) = 0;
  virtual void exitDefFonc(cmmpParser::DefFoncContext *ctx) = 0;

  virtual void enterBlock(cmmpParser::BlockContext *ctx) = 0;
  virtual void exitBlock(cmmpParser::BlockContext *ctx) = 0;

  virtual void enterDeclarationVarListe(cmmpParser::DeclarationVarListeContext *ctx) = 0;
  virtual void exitDeclarationVarListe(cmmpParser::DeclarationVarListeContext *ctx) = 0;

  virtual void enterDeclarationVar(cmmpParser::DeclarationVarContext *ctx) = 0;
  virtual void exitDeclarationVar(cmmpParser::DeclarationVarContext *ctx) = 0;

  virtual void enterVarSimple(cmmpParser::VarSimpleContext *ctx) = 0;
  virtual void exitVarSimple(cmmpParser::VarSimpleContext *ctx) = 0;

  virtual void enterVarTableau(cmmpParser::VarTableauContext *ctx) = 0;
  virtual void exitVarTableau(cmmpParser::VarTableauContext *ctx) = 0;

  virtual void enterDefinitionFonction(cmmpParser::DefinitionFonctionContext *ctx) = 0;
  virtual void exitDefinitionFonction(cmmpParser::DefinitionFonctionContext *ctx) = 0;

  virtual void enterParamDefinitionList(cmmpParser::ParamDefinitionListContext *ctx) = 0;
  virtual void exitParamDefinitionList(cmmpParser::ParamDefinitionListContext *ctx) = 0;

  virtual void enterParamDefinition(cmmpParser::ParamDefinitionContext *ctx) = 0;
  virtual void exitParamDefinition(cmmpParser::ParamDefinitionContext *ctx) = 0;

  virtual void enterStructureControl(cmmpParser::StructureControlContext *ctx) = 0;
  virtual void exitStructureControl(cmmpParser::StructureControlContext *ctx) = 0;

  virtual void enterInstruction(cmmpParser::InstructionContext *ctx) = 0;
  virtual void exitInstruction(cmmpParser::InstructionContext *ctx) = 0;

  virtual void enterMembreGauche(cmmpParser::MembreGaucheContext *ctx) = 0;
  virtual void exitMembreGauche(cmmpParser::MembreGaucheContext *ctx) = 0;

  virtual void enterEListe(cmmpParser::EListeContext *ctx) = 0;
  virtual void exitEListe(cmmpParser::EListeContext *ctx) = 0;

  virtual void enterAugmentedExpr(cmmpParser::AugmentedExprContext *ctx) = 0;
  virtual void exitAugmentedExpr(cmmpParser::AugmentedExprContext *ctx) = 0;

  virtual void enterMidAffectation(cmmpParser::MidAffectationContext *ctx) = 0;
  virtual void exitMidAffectation(cmmpParser::MidAffectationContext *ctx) = 0;

  virtual void enterEndAffectation(cmmpParser::EndAffectationContext *ctx) = 0;
  virtual void exitEndAffectation(cmmpParser::EndAffectationContext *ctx) = 0;

  virtual void enterPar(cmmpParser::ParContext *ctx) = 0;
  virtual void exitPar(cmmpParser::ParContext *ctx) = 0;

  virtual void enterAdd(cmmpParser::AddContext *ctx) = 0;
  virtual void exitAdd(cmmpParser::AddContext *ctx) = 0;

  virtual void enterSub(cmmpParser::SubContext *ctx) = 0;
  virtual void exitSub(cmmpParser::SubContext *ctx) = 0;

  virtual void enterMult(cmmpParser::MultContext *ctx) = 0;
  virtual void exitMult(cmmpParser::MultContext *ctx) = 0;

  virtual void enterMod(cmmpParser::ModContext *ctx) = 0;
  virtual void exitMod(cmmpParser::ModContext *ctx) = 0;

  virtual void enterOr(cmmpParser::OrContext *ctx) = 0;
  virtual void exitOr(cmmpParser::OrContext *ctx) = 0;

  virtual void enterConst(cmmpParser::ConstContext *ctx) = 0;
  virtual void exitConst(cmmpParser::ConstContext *ctx) = 0;

  virtual void enterPreinc(cmmpParser::PreincContext *ctx) = 0;
  virtual void exitPreinc(cmmpParser::PreincContext *ctx) = 0;

  virtual void enterDiv(cmmpParser::DivContext *ctx) = 0;
  virtual void exitDiv(cmmpParser::DivContext *ctx) = 0;

  virtual void enterPostinc(cmmpParser::PostincContext *ctx) = 0;
  virtual void exitPostinc(cmmpParser::PostincContext *ctx) = 0;

  virtual void enterNot(cmmpParser::NotContext *ctx) = 0;
  virtual void exitNot(cmmpParser::NotContext *ctx) = 0;

  virtual void enterPredecr(cmmpParser::PredecrContext *ctx) = 0;
  virtual void exitPredecr(cmmpParser::PredecrContext *ctx) = 0;

  virtual void enterAnd(cmmpParser::AndContext *ctx) = 0;
  virtual void exitAnd(cmmpParser::AndContext *ctx) = 0;

  virtual void enterPostdecr(cmmpParser::PostdecrContext *ctx) = 0;
  virtual void exitPostdecr(cmmpParser::PostdecrContext *ctx) = 0;

  virtual void enterFunction(cmmpParser::FunctionContext *ctx) = 0;
  virtual void exitFunction(cmmpParser::FunctionContext *ctx) = 0;

  virtual void enterComparaison(cmmpParser::ComparaisonContext *ctx) = 0;
  virtual void exitComparaison(cmmpParser::ComparaisonContext *ctx) = 0;

  virtual void enterVariable(cmmpParser::VariableContext *ctx) = 0;
  virtual void exitVariable(cmmpParser::VariableContext *ctx) = 0;

  virtual void enterVarTab(cmmpParser::VarTabContext *ctx) = 0;
  virtual void exitVarTab(cmmpParser::VarTabContext *ctx) = 0;

  virtual void enterFunctionCall(cmmpParser::FunctionCallContext *ctx) = 0;
  virtual void exitFunctionCall(cmmpParser::FunctionCallContext *ctx) = 0;

  virtual void enterOpComparaison(cmmpParser::OpComparaisonContext *ctx) = 0;
  virtual void exitOpComparaison(cmmpParser::OpComparaisonContext *ctx) = 0;

  virtual void enterOpAffectation(cmmpParser::OpAffectationContext *ctx) = 0;
  virtual void exitOpAffectation(cmmpParser::OpAffectationContext *ctx) = 0;


};

