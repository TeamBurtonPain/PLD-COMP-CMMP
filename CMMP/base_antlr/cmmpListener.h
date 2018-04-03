
// Generated from base_antlr/cmmp.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "cmmpParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by cmmpParser.
 */
class  cmmpListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterAxiome(cmmpParser::AxiomeContext *ctx) = 0;
  virtual void exitAxiome(cmmpParser::AxiomeContext *ctx) = 0;

  virtual void enterDeclVar(cmmpParser::DeclVarContext *ctx) = 0;
  virtual void exitDeclVar(cmmpParser::DeclVarContext *ctx) = 0;

  virtual void enterDefFonc(cmmpParser::DefFoncContext *ctx) = 0;
  virtual void exitDefFonc(cmmpParser::DefFoncContext *ctx) = 0;

  virtual void enterEof(cmmpParser::EofContext *ctx) = 0;
  virtual void exitEof(cmmpParser::EofContext *ctx) = 0;

  virtual void enterBlock(cmmpParser::BlockContext *ctx) = 0;
  virtual void exitBlock(cmmpParser::BlockContext *ctx) = 0;

  virtual void enterDeclarationVarListe(cmmpParser::DeclarationVarListeContext *ctx) = 0;
  virtual void exitDeclarationVarListe(cmmpParser::DeclarationVarListeContext *ctx) = 0;

  virtual void enterSimpleVar(cmmpParser::SimpleVarContext *ctx) = 0;
  virtual void exitSimpleVar(cmmpParser::SimpleVarContext *ctx) = 0;

  virtual void enterTabVar(cmmpParser::TabVarContext *ctx) = 0;
  virtual void exitTabVar(cmmpParser::TabVarContext *ctx) = 0;

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

  virtual void enterControlif(cmmpParser::ControlifContext *ctx) = 0;
  virtual void exitControlif(cmmpParser::ControlifContext *ctx) = 0;

  virtual void enterControlwhile(cmmpParser::ControlwhileContext *ctx) = 0;
  virtual void exitControlwhile(cmmpParser::ControlwhileContext *ctx) = 0;

  virtual void enterInsBlock(cmmpParser::InsBlockContext *ctx) = 0;
  virtual void exitInsBlock(cmmpParser::InsBlockContext *ctx) = 0;

  virtual void enterInsExpr(cmmpParser::InsExprContext *ctx) = 0;
  virtual void exitInsExpr(cmmpParser::InsExprContext *ctx) = 0;

  virtual void enterInsDeclVar(cmmpParser::InsDeclVarContext *ctx) = 0;
  virtual void exitInsDeclVar(cmmpParser::InsDeclVarContext *ctx) = 0;

  virtual void enterInsControl(cmmpParser::InsControlContext *ctx) = 0;
  virtual void exitInsControl(cmmpParser::InsControlContext *ctx) = 0;

  virtual void enterInsReturn(cmmpParser::InsReturnContext *ctx) = 0;
  virtual void exitInsReturn(cmmpParser::InsReturnContext *ctx) = 0;

  virtual void enterMembreGauche(cmmpParser::MembreGaucheContext *ctx) = 0;
  virtual void exitMembreGauche(cmmpParser::MembreGaucheContext *ctx) = 0;

  virtual void enterEListe(cmmpParser::EListeContext *ctx) = 0;
  virtual void exitEListe(cmmpParser::EListeContext *ctx) = 0;

  virtual void enterPar(cmmpParser::ParContext *ctx) = 0;
  virtual void exitPar(cmmpParser::ParContext *ctx) = 0;

  virtual void enterAdd(cmmpParser::AddContext *ctx) = 0;
  virtual void exitAdd(cmmpParser::AddContext *ctx) = 0;

  virtual void enterSub(cmmpParser::SubContext *ctx) = 0;
  virtual void exitSub(cmmpParser::SubContext *ctx) = 0;

  virtual void enterPre(cmmpParser::PreContext *ctx) = 0;
  virtual void exitPre(cmmpParser::PreContext *ctx) = 0;

  virtual void enterMult(cmmpParser::MultContext *ctx) = 0;
  virtual void exitMult(cmmpParser::MultContext *ctx) = 0;

  virtual void enterMod(cmmpParser::ModContext *ctx) = 0;
  virtual void exitMod(cmmpParser::ModContext *ctx) = 0;

  virtual void enterOr(cmmpParser::OrContext *ctx) = 0;
  virtual void exitOr(cmmpParser::OrContext *ctx) = 0;

  virtual void enterConst(cmmpParser::ConstContext *ctx) = 0;
  virtual void exitConst(cmmpParser::ConstContext *ctx) = 0;

  virtual void enterAffectation(cmmpParser::AffectationContext *ctx) = 0;
  virtual void exitAffectation(cmmpParser::AffectationContext *ctx) = 0;

  virtual void enterDiv(cmmpParser::DivContext *ctx) = 0;
  virtual void exitDiv(cmmpParser::DivContext *ctx) = 0;

  virtual void enterNeg(cmmpParser::NegContext *ctx) = 0;
  virtual void exitNeg(cmmpParser::NegContext *ctx) = 0;

  virtual void enterNot(cmmpParser::NotContext *ctx) = 0;
  virtual void exitNot(cmmpParser::NotContext *ctx) = 0;

  virtual void enterPost(cmmpParser::PostContext *ctx) = 0;
  virtual void exitPost(cmmpParser::PostContext *ctx) = 0;

  virtual void enterAnd(cmmpParser::AndContext *ctx) = 0;
  virtual void exitAnd(cmmpParser::AndContext *ctx) = 0;

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

  virtual void enterIncr(cmmpParser::IncrContext *ctx) = 0;
  virtual void exitIncr(cmmpParser::IncrContext *ctx) = 0;

  virtual void enterDecr(cmmpParser::DecrContext *ctx) = 0;
  virtual void exitDecr(cmmpParser::DecrContext *ctx) = 0;

  virtual void enterEq(cmmpParser::EqContext *ctx) = 0;
  virtual void exitEq(cmmpParser::EqContext *ctx) = 0;

  virtual void enterNeq(cmmpParser::NeqContext *ctx) = 0;
  virtual void exitNeq(cmmpParser::NeqContext *ctx) = 0;

  virtual void enterInf(cmmpParser::InfContext *ctx) = 0;
  virtual void exitInf(cmmpParser::InfContext *ctx) = 0;

  virtual void enterSup(cmmpParser::SupContext *ctx) = 0;
  virtual void exitSup(cmmpParser::SupContext *ctx) = 0;

  virtual void enterInfeq(cmmpParser::InfeqContext *ctx) = 0;
  virtual void exitInfeq(cmmpParser::InfeqContext *ctx) = 0;

  virtual void enterSupeq(cmmpParser::SupeqContext *ctx) = 0;
  virtual void exitSupeq(cmmpParser::SupeqContext *ctx) = 0;

  virtual void enterAff(cmmpParser::AffContext *ctx) = 0;
  virtual void exitAff(cmmpParser::AffContext *ctx) = 0;

  virtual void enterAddaff(cmmpParser::AddaffContext *ctx) = 0;
  virtual void exitAddaff(cmmpParser::AddaffContext *ctx) = 0;

  virtual void enterSubaff(cmmpParser::SubaffContext *ctx) = 0;
  virtual void exitSubaff(cmmpParser::SubaffContext *ctx) = 0;

  virtual void enterMultaff(cmmpParser::MultaffContext *ctx) = 0;
  virtual void exitMultaff(cmmpParser::MultaffContext *ctx) = 0;

  virtual void enterDivaff(cmmpParser::DivaffContext *ctx) = 0;
  virtual void exitDivaff(cmmpParser::DivaffContext *ctx) = 0;

  virtual void enterModaff(cmmpParser::ModaffContext *ctx) = 0;
  virtual void exitModaff(cmmpParser::ModaffContext *ctx) = 0;


};

