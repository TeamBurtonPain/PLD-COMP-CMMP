
// Generated from cmmp.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "cmmpParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by cmmpParser.
 */
class  cmmpVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by cmmpParser.
   */
    virtual antlrcpp::Any visitProgramme(cmmpParser::ProgrammeContext *context) = 0;

    virtual antlrcpp::Any visitBlock(cmmpParser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationVar(cmmpParser::DeclarationVarContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationVarSimple(cmmpParser::DeclarationVarSimpleContext *context) = 0;

    virtual antlrcpp::Any visitVarSimple(cmmpParser::VarSimpleContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationTableau(cmmpParser::DeclarationTableauContext *context) = 0;

    virtual antlrcpp::Any visitDefinitionFonction(cmmpParser::DefinitionFonctionContext *context) = 0;

    virtual antlrcpp::Any visitParamDefinitionList(cmmpParser::ParamDefinitionListContext *context) = 0;

    virtual antlrcpp::Any visitParamDefinition(cmmpParser::ParamDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitStructureControl(cmmpParser::StructureControlContext *context) = 0;

    virtual antlrcpp::Any visitInstruction(cmmpParser::InstructionContext *context) = 0;

    virtual antlrcpp::Any visitMembreGauche(cmmpParser::MembreGaucheContext *context) = 0;

    virtual antlrcpp::Any visitEListe(cmmpParser::EListeContext *context) = 0;

    virtual antlrcpp::Any visitPar(cmmpParser::ParContext *context) = 0;

    virtual antlrcpp::Any visitAdd(cmmpParser::AddContext *context) = 0;

    virtual antlrcpp::Any visitSub(cmmpParser::SubContext *context) = 0;

    virtual antlrcpp::Any visitEg(cmmpParser::EgContext *context) = 0;

    virtual antlrcpp::Any visitMult(cmmpParser::MultContext *context) = 0;

    virtual antlrcpp::Any visitMod(cmmpParser::ModContext *context) = 0;

    virtual antlrcpp::Any visitOr(cmmpParser::OrContext *context) = 0;

    virtual antlrcpp::Any visitConst(cmmpParser::ConstContext *context) = 0;

    virtual antlrcpp::Any visitLt(cmmpParser::LtContext *context) = 0;

    virtual antlrcpp::Any visitGt(cmmpParser::GtContext *context) = 0;

    virtual antlrcpp::Any visitAffectation(cmmpParser::AffectationContext *context) = 0;

    virtual antlrcpp::Any visitPreinc(cmmpParser::PreincContext *context) = 0;

    virtual antlrcpp::Any visitDiv(cmmpParser::DivContext *context) = 0;

    virtual antlrcpp::Any visitPostinc(cmmpParser::PostincContext *context) = 0;

    virtual antlrcpp::Any visitNeg(cmmpParser::NegContext *context) = 0;

    virtual antlrcpp::Any visitNot(cmmpParser::NotContext *context) = 0;

    virtual antlrcpp::Any visitPredecr(cmmpParser::PredecrContext *context) = 0;

    virtual antlrcpp::Any visitAnd(cmmpParser::AndContext *context) = 0;

    virtual antlrcpp::Any visitPostdecr(cmmpParser::PostdecrContext *context) = 0;

    virtual antlrcpp::Any visitFunction(cmmpParser::FunctionContext *context) = 0;

    virtual antlrcpp::Any visitVariable(cmmpParser::VariableContext *context) = 0;

    virtual antlrcpp::Any visitGte(cmmpParser::GteContext *context) = 0;

    virtual antlrcpp::Any visitLte(cmmpParser::LteContext *context) = 0;


};

