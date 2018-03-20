
// Generated from base_antlr/cmmp.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "cmmpListener.h"


/**
 * This class provides an empty implementation of cmmpListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  cmmpBaseListener : public cmmpListener {
public:

  virtual void enterAxiome(cmmpParser::AxiomeContext * /*ctx*/) override { }
  virtual void exitAxiome(cmmpParser::AxiomeContext * /*ctx*/) override { }

  virtual void enterDeclVar(cmmpParser::DeclVarContext * /*ctx*/) override { }
  virtual void exitDeclVar(cmmpParser::DeclVarContext * /*ctx*/) override { }

  virtual void enterDefFonc(cmmpParser::DefFoncContext * /*ctx*/) override { }
  virtual void exitDefFonc(cmmpParser::DefFoncContext * /*ctx*/) override { }

  virtual void enterEof(cmmpParser::EofContext * /*ctx*/) override { }
  virtual void exitEof(cmmpParser::EofContext * /*ctx*/) override { }

  virtual void enterBlock(cmmpParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(cmmpParser::BlockContext * /*ctx*/) override { }

  virtual void enterDeclarationVarListe(cmmpParser::DeclarationVarListeContext * /*ctx*/) override { }
  virtual void exitDeclarationVarListe(cmmpParser::DeclarationVarListeContext * /*ctx*/) override { }

  virtual void enterSimpleVar(cmmpParser::SimpleVarContext * /*ctx*/) override { }
  virtual void exitSimpleVar(cmmpParser::SimpleVarContext * /*ctx*/) override { }

  virtual void enterTabVar(cmmpParser::TabVarContext * /*ctx*/) override { }
  virtual void exitTabVar(cmmpParser::TabVarContext * /*ctx*/) override { }

  virtual void enterVarSimple(cmmpParser::VarSimpleContext * /*ctx*/) override { }
  virtual void exitVarSimple(cmmpParser::VarSimpleContext * /*ctx*/) override { }

  virtual void enterVarTableau(cmmpParser::VarTableauContext * /*ctx*/) override { }
  virtual void exitVarTableau(cmmpParser::VarTableauContext * /*ctx*/) override { }

  virtual void enterDefinitionFonction(cmmpParser::DefinitionFonctionContext * /*ctx*/) override { }
  virtual void exitDefinitionFonction(cmmpParser::DefinitionFonctionContext * /*ctx*/) override { }

  virtual void enterParamDefinitionList(cmmpParser::ParamDefinitionListContext * /*ctx*/) override { }
  virtual void exitParamDefinitionList(cmmpParser::ParamDefinitionListContext * /*ctx*/) override { }

  virtual void enterParamDefinition(cmmpParser::ParamDefinitionContext * /*ctx*/) override { }
  virtual void exitParamDefinition(cmmpParser::ParamDefinitionContext * /*ctx*/) override { }

  virtual void enterControlwhile(cmmpParser::ControlwhileContext * /*ctx*/) override { }
  virtual void exitControlwhile(cmmpParser::ControlwhileContext * /*ctx*/) override { }

  virtual void enterControlif(cmmpParser::ControlifContext * /*ctx*/) override { }
  virtual void exitControlif(cmmpParser::ControlifContext * /*ctx*/) override { }

  virtual void enterInsBlock(cmmpParser::InsBlockContext * /*ctx*/) override { }
  virtual void exitInsBlock(cmmpParser::InsBlockContext * /*ctx*/) override { }

  virtual void enterInsExpr(cmmpParser::InsExprContext * /*ctx*/) override { }
  virtual void exitInsExpr(cmmpParser::InsExprContext * /*ctx*/) override { }

  virtual void enterInsDeclVar(cmmpParser::InsDeclVarContext * /*ctx*/) override { }
  virtual void exitInsDeclVar(cmmpParser::InsDeclVarContext * /*ctx*/) override { }

  virtual void enterInsControl(cmmpParser::InsControlContext * /*ctx*/) override { }
  virtual void exitInsControl(cmmpParser::InsControlContext * /*ctx*/) override { }

  virtual void enterMembreGauche(cmmpParser::MembreGaucheContext * /*ctx*/) override { }
  virtual void exitMembreGauche(cmmpParser::MembreGaucheContext * /*ctx*/) override { }

  virtual void enterEListe(cmmpParser::EListeContext * /*ctx*/) override { }
  virtual void exitEListe(cmmpParser::EListeContext * /*ctx*/) override { }

  virtual void enterPar(cmmpParser::ParContext * /*ctx*/) override { }
  virtual void exitPar(cmmpParser::ParContext * /*ctx*/) override { }

  virtual void enterAdd(cmmpParser::AddContext * /*ctx*/) override { }
  virtual void exitAdd(cmmpParser::AddContext * /*ctx*/) override { }

  virtual void enterSub(cmmpParser::SubContext * /*ctx*/) override { }
  virtual void exitSub(cmmpParser::SubContext * /*ctx*/) override { }

  virtual void enterPre(cmmpParser::PreContext * /*ctx*/) override { }
  virtual void exitPre(cmmpParser::PreContext * /*ctx*/) override { }

  virtual void enterMult(cmmpParser::MultContext * /*ctx*/) override { }
  virtual void exitMult(cmmpParser::MultContext * /*ctx*/) override { }

  virtual void enterMod(cmmpParser::ModContext * /*ctx*/) override { }
  virtual void exitMod(cmmpParser::ModContext * /*ctx*/) override { }

  virtual void enterOr(cmmpParser::OrContext * /*ctx*/) override { }
  virtual void exitOr(cmmpParser::OrContext * /*ctx*/) override { }

  virtual void enterConst(cmmpParser::ConstContext * /*ctx*/) override { }
  virtual void exitConst(cmmpParser::ConstContext * /*ctx*/) override { }

  virtual void enterAffectation(cmmpParser::AffectationContext * /*ctx*/) override { }
  virtual void exitAffectation(cmmpParser::AffectationContext * /*ctx*/) override { }

  virtual void enterDiv(cmmpParser::DivContext * /*ctx*/) override { }
  virtual void exitDiv(cmmpParser::DivContext * /*ctx*/) override { }

  virtual void enterNeg(cmmpParser::NegContext * /*ctx*/) override { }
  virtual void exitNeg(cmmpParser::NegContext * /*ctx*/) override { }

  virtual void enterNot(cmmpParser::NotContext * /*ctx*/) override { }
  virtual void exitNot(cmmpParser::NotContext * /*ctx*/) override { }

  virtual void enterPost(cmmpParser::PostContext * /*ctx*/) override { }
  virtual void exitPost(cmmpParser::PostContext * /*ctx*/) override { }

  virtual void enterAnd(cmmpParser::AndContext * /*ctx*/) override { }
  virtual void exitAnd(cmmpParser::AndContext * /*ctx*/) override { }

  virtual void enterFunction(cmmpParser::FunctionContext * /*ctx*/) override { }
  virtual void exitFunction(cmmpParser::FunctionContext * /*ctx*/) override { }

  virtual void enterComparaison(cmmpParser::ComparaisonContext * /*ctx*/) override { }
  virtual void exitComparaison(cmmpParser::ComparaisonContext * /*ctx*/) override { }

  virtual void enterVariable(cmmpParser::VariableContext * /*ctx*/) override { }
  virtual void exitVariable(cmmpParser::VariableContext * /*ctx*/) override { }

  virtual void enterVarTab(cmmpParser::VarTabContext * /*ctx*/) override { }
  virtual void exitVarTab(cmmpParser::VarTabContext * /*ctx*/) override { }

  virtual void enterFunctionCall(cmmpParser::FunctionCallContext * /*ctx*/) override { }
  virtual void exitFunctionCall(cmmpParser::FunctionCallContext * /*ctx*/) override { }

  virtual void enterIncr(cmmpParser::IncrContext * /*ctx*/) override { }
  virtual void exitIncr(cmmpParser::IncrContext * /*ctx*/) override { }

  virtual void enterDecr(cmmpParser::DecrContext * /*ctx*/) override { }
  virtual void exitDecr(cmmpParser::DecrContext * /*ctx*/) override { }

  virtual void enterInf(cmmpParser::InfContext * /*ctx*/) override { }
  virtual void exitInf(cmmpParser::InfContext * /*ctx*/) override { }

  virtual void enterSup(cmmpParser::SupContext * /*ctx*/) override { }
  virtual void exitSup(cmmpParser::SupContext * /*ctx*/) override { }

  virtual void enterInfeq(cmmpParser::InfeqContext * /*ctx*/) override { }
  virtual void exitInfeq(cmmpParser::InfeqContext * /*ctx*/) override { }

  virtual void enterSupeq(cmmpParser::SupeqContext * /*ctx*/) override { }
  virtual void exitSupeq(cmmpParser::SupeqContext * /*ctx*/) override { }

  virtual void enterEq(cmmpParser::EqContext * /*ctx*/) override { }
  virtual void exitEq(cmmpParser::EqContext * /*ctx*/) override { }

  virtual void enterNeq(cmmpParser::NeqContext * /*ctx*/) override { }
  virtual void exitNeq(cmmpParser::NeqContext * /*ctx*/) override { }

  virtual void enterAff(cmmpParser::AffContext * /*ctx*/) override { }
  virtual void exitAff(cmmpParser::AffContext * /*ctx*/) override { }

  virtual void enterAddaff(cmmpParser::AddaffContext * /*ctx*/) override { }
  virtual void exitAddaff(cmmpParser::AddaffContext * /*ctx*/) override { }

  virtual void enterSubaff(cmmpParser::SubaffContext * /*ctx*/) override { }
  virtual void exitSubaff(cmmpParser::SubaffContext * /*ctx*/) override { }

  virtual void enterMultaff(cmmpParser::MultaffContext * /*ctx*/) override { }
  virtual void exitMultaff(cmmpParser::MultaffContext * /*ctx*/) override { }

  virtual void enterDivaff(cmmpParser::DivaffContext * /*ctx*/) override { }
  virtual void exitDivaff(cmmpParser::DivaffContext * /*ctx*/) override { }

  virtual void enterModaff(cmmpParser::ModaffContext * /*ctx*/) override { }
  virtual void exitModaff(cmmpParser::ModaffContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

