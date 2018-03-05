
// Generated from cmmp.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "cmmpParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by cmmpParser.
 */
class  cmmpListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgramme(cmmpParser::ProgrammeContext *ctx) = 0;
  virtual void exitProgramme(cmmpParser::ProgrammeContext *ctx) = 0;

  virtual void enterBlock(cmmpParser::BlockContext *ctx) = 0;
  virtual void exitBlock(cmmpParser::BlockContext *ctx) = 0;

  virtual void enterDeclarationVar(cmmpParser::DeclarationVarContext *ctx) = 0;
  virtual void exitDeclarationVar(cmmpParser::DeclarationVarContext *ctx) = 0;

  virtual void enterDeclarationVarSimple(cmmpParser::DeclarationVarSimpleContext *ctx) = 0;
  virtual void exitDeclarationVarSimple(cmmpParser::DeclarationVarSimpleContext *ctx) = 0;

  virtual void enterVarSimple(cmmpParser::VarSimpleContext *ctx) = 0;
  virtual void exitVarSimple(cmmpParser::VarSimpleContext *ctx) = 0;

  virtual void enterDeclarationTableau(cmmpParser::DeclarationTableauContext *ctx) = 0;
  virtual void exitDeclarationTableau(cmmpParser::DeclarationTableauContext *ctx) = 0;

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

  virtual void enterPar(cmmpParser::ParContext *ctx) = 0;
  virtual void exitPar(cmmpParser::ParContext *ctx) = 0;

  virtual void enterAdd(cmmpParser::AddContext *ctx) = 0;
  virtual void exitAdd(cmmpParser::AddContext *ctx) = 0;

  virtual void enterSub(cmmpParser::SubContext *ctx) = 0;
  virtual void exitSub(cmmpParser::SubContext *ctx) = 0;

  virtual void enterEg(cmmpParser::EgContext *ctx) = 0;
  virtual void exitEg(cmmpParser::EgContext *ctx) = 0;

  virtual void enterMult(cmmpParser::MultContext *ctx) = 0;
  virtual void exitMult(cmmpParser::MultContext *ctx) = 0;

  virtual void enterMod(cmmpParser::ModContext *ctx) = 0;
  virtual void exitMod(cmmpParser::ModContext *ctx) = 0;

  virtual void enterOr(cmmpParser::OrContext *ctx) = 0;
  virtual void exitOr(cmmpParser::OrContext *ctx) = 0;

  virtual void enterConst(cmmpParser::ConstContext *ctx) = 0;
  virtual void exitConst(cmmpParser::ConstContext *ctx) = 0;

  virtual void enterLt(cmmpParser::LtContext *ctx) = 0;
  virtual void exitLt(cmmpParser::LtContext *ctx) = 0;

  virtual void enterGt(cmmpParser::GtContext *ctx) = 0;
  virtual void exitGt(cmmpParser::GtContext *ctx) = 0;

  virtual void enterAffectation(cmmpParser::AffectationContext *ctx) = 0;
  virtual void exitAffectation(cmmpParser::AffectationContext *ctx) = 0;

  virtual void enterPreinc(cmmpParser::PreincContext *ctx) = 0;
  virtual void exitPreinc(cmmpParser::PreincContext *ctx) = 0;

  virtual void enterDiv(cmmpParser::DivContext *ctx) = 0;
  virtual void exitDiv(cmmpParser::DivContext *ctx) = 0;

  virtual void enterPostinc(cmmpParser::PostincContext *ctx) = 0;
  virtual void exitPostinc(cmmpParser::PostincContext *ctx) = 0;

  virtual void enterNeg(cmmpParser::NegContext *ctx) = 0;
  virtual void exitNeg(cmmpParser::NegContext *ctx) = 0;

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

  virtual void enterVariable(cmmpParser::VariableContext *ctx) = 0;
  virtual void exitVariable(cmmpParser::VariableContext *ctx) = 0;

  virtual void enterGte(cmmpParser::GteContext *ctx) = 0;
  virtual void exitGte(cmmpParser::GteContext *ctx) = 0;

  virtual void enterLte(cmmpParser::LteContext *ctx) = 0;
  virtual void exitLte(cmmpParser::LteContext *ctx) = 0;


};

