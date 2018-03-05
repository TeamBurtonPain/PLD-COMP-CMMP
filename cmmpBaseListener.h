
// Generated from /home/doudou/Documents/INSA/4IF/PLD COMP/PLD-COMP-CMMP/cmmp.g4 by ANTLR 4.7.1

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

  virtual void enterProgramme(cmmpParser::ProgrammeContext * /*ctx*/) override { }
  virtual void exitProgramme(cmmpParser::ProgrammeContext * /*ctx*/) override { }

  virtual void enterBlock(cmmpParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(cmmpParser::BlockContext * /*ctx*/) override { }

  virtual void enterDeclarationVar(cmmpParser::DeclarationVarContext * /*ctx*/) override { }
  virtual void exitDeclarationVar(cmmpParser::DeclarationVarContext * /*ctx*/) override { }

  virtual void enterDeclarationVarSimple(cmmpParser::DeclarationVarSimpleContext * /*ctx*/) override { }
  virtual void exitDeclarationVarSimple(cmmpParser::DeclarationVarSimpleContext * /*ctx*/) override { }

  virtual void enterVarSimple(cmmpParser::VarSimpleContext * /*ctx*/) override { }
  virtual void exitVarSimple(cmmpParser::VarSimpleContext * /*ctx*/) override { }

  virtual void enterDeclarationTableau(cmmpParser::DeclarationTableauContext * /*ctx*/) override { }
  virtual void exitDeclarationTableau(cmmpParser::DeclarationTableauContext * /*ctx*/) override { }

  virtual void enterDefinitionFonction(cmmpParser::DefinitionFonctionContext * /*ctx*/) override { }
  virtual void exitDefinitionFonction(cmmpParser::DefinitionFonctionContext * /*ctx*/) override { }

  virtual void enterParamDefinitionList(cmmpParser::ParamDefinitionListContext * /*ctx*/) override { }
  virtual void exitParamDefinitionList(cmmpParser::ParamDefinitionListContext * /*ctx*/) override { }

  virtual void enterParamDefinition(cmmpParser::ParamDefinitionContext * /*ctx*/) override { }
  virtual void exitParamDefinition(cmmpParser::ParamDefinitionContext * /*ctx*/) override { }

  virtual void enterStructureControl(cmmpParser::StructureControlContext * /*ctx*/) override { }
  virtual void exitStructureControl(cmmpParser::StructureControlContext * /*ctx*/) override { }

  virtual void enterInstruction(cmmpParser::InstructionContext * /*ctx*/) override { }
  virtual void exitInstruction(cmmpParser::InstructionContext * /*ctx*/) override { }

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

  virtual void enterEg(cmmpParser::EgContext * /*ctx*/) override { }
  virtual void exitEg(cmmpParser::EgContext * /*ctx*/) override { }

  virtual void enterMult(cmmpParser::MultContext * /*ctx*/) override { }
  virtual void exitMult(cmmpParser::MultContext * /*ctx*/) override { }

  virtual void enterMod(cmmpParser::ModContext * /*ctx*/) override { }
  virtual void exitMod(cmmpParser::ModContext * /*ctx*/) override { }

  virtual void enterOr(cmmpParser::OrContext * /*ctx*/) override { }
  virtual void exitOr(cmmpParser::OrContext * /*ctx*/) override { }

  virtual void enterConst(cmmpParser::ConstContext * /*ctx*/) override { }
  virtual void exitConst(cmmpParser::ConstContext * /*ctx*/) override { }

  virtual void enterLt(cmmpParser::LtContext * /*ctx*/) override { }
  virtual void exitLt(cmmpParser::LtContext * /*ctx*/) override { }

  virtual void enterGt(cmmpParser::GtContext * /*ctx*/) override { }
  virtual void exitGt(cmmpParser::GtContext * /*ctx*/) override { }

  virtual void enterAffectation(cmmpParser::AffectationContext * /*ctx*/) override { }
  virtual void exitAffectation(cmmpParser::AffectationContext * /*ctx*/) override { }

  virtual void enterPreinc(cmmpParser::PreincContext * /*ctx*/) override { }
  virtual void exitPreinc(cmmpParser::PreincContext * /*ctx*/) override { }

  virtual void enterDiv(cmmpParser::DivContext * /*ctx*/) override { }
  virtual void exitDiv(cmmpParser::DivContext * /*ctx*/) override { }

  virtual void enterPostinc(cmmpParser::PostincContext * /*ctx*/) override { }
  virtual void exitPostinc(cmmpParser::PostincContext * /*ctx*/) override { }

  virtual void enterNeg(cmmpParser::NegContext * /*ctx*/) override { }
  virtual void exitNeg(cmmpParser::NegContext * /*ctx*/) override { }

  virtual void enterNot(cmmpParser::NotContext * /*ctx*/) override { }
  virtual void exitNot(cmmpParser::NotContext * /*ctx*/) override { }

  virtual void enterPredecr(cmmpParser::PredecrContext * /*ctx*/) override { }
  virtual void exitPredecr(cmmpParser::PredecrContext * /*ctx*/) override { }

  virtual void enterAnd(cmmpParser::AndContext * /*ctx*/) override { }
  virtual void exitAnd(cmmpParser::AndContext * /*ctx*/) override { }

  virtual void enterPostdecr(cmmpParser::PostdecrContext * /*ctx*/) override { }
  virtual void exitPostdecr(cmmpParser::PostdecrContext * /*ctx*/) override { }

  virtual void enterFunction(cmmpParser::FunctionContext * /*ctx*/) override { }
  virtual void exitFunction(cmmpParser::FunctionContext * /*ctx*/) override { }

  virtual void enterVariable(cmmpParser::VariableContext * /*ctx*/) override { }
  virtual void exitVariable(cmmpParser::VariableContext * /*ctx*/) override { }

  virtual void enterGte(cmmpParser::GteContext * /*ctx*/) override { }
  virtual void exitGte(cmmpParser::GteContext * /*ctx*/) override { }

  virtual void enterLte(cmmpParser::LteContext * /*ctx*/) override { }
  virtual void exitLte(cmmpParser::LteContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

