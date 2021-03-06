
// Generated from base_antlr/cmmp.g4 by ANTLR 4.7.1

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
    virtual antlrcpp::Any visitAxiome(cmmpParser::AxiomeContext *context) = 0;

    virtual antlrcpp::Any visitDeclVar(cmmpParser::DeclVarContext *context) = 0;

    virtual antlrcpp::Any visitDefFonc(cmmpParser::DefFoncContext *context) = 0;

    virtual antlrcpp::Any visitEof(cmmpParser::EofContext *context) = 0;

    virtual antlrcpp::Any visitBlock(cmmpParser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationVarListe(cmmpParser::DeclarationVarListeContext *context) = 0;

    virtual antlrcpp::Any visitSimpleVar(cmmpParser::SimpleVarContext *context) = 0;

    virtual antlrcpp::Any visitTabVar(cmmpParser::TabVarContext *context) = 0;

    virtual antlrcpp::Any visitVarSimple(cmmpParser::VarSimpleContext *context) = 0;

    virtual antlrcpp::Any visitVarTableau(cmmpParser::VarTableauContext *context) = 0;

    virtual antlrcpp::Any visitDefinitionFonction(cmmpParser::DefinitionFonctionContext *context) = 0;

    virtual antlrcpp::Any visitParamDefinitionList(cmmpParser::ParamDefinitionListContext *context) = 0;

    virtual antlrcpp::Any visitParamDefinition(cmmpParser::ParamDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitControlif(cmmpParser::ControlifContext *context) = 0;

    virtual antlrcpp::Any visitControlwhile(cmmpParser::ControlwhileContext *context) = 0;

    virtual antlrcpp::Any visitInsBlock(cmmpParser::InsBlockContext *context) = 0;

    virtual antlrcpp::Any visitInsExpr(cmmpParser::InsExprContext *context) = 0;

    virtual antlrcpp::Any visitInsDeclVar(cmmpParser::InsDeclVarContext *context) = 0;

    virtual antlrcpp::Any visitInsControl(cmmpParser::InsControlContext *context) = 0;

    virtual antlrcpp::Any visitInsReturn(cmmpParser::InsReturnContext *context) = 0;

    virtual antlrcpp::Any visitMembreGauche(cmmpParser::MembreGaucheContext *context) = 0;

    virtual antlrcpp::Any visitEListe(cmmpParser::EListeContext *context) = 0;

    virtual antlrcpp::Any visitPar(cmmpParser::ParContext *context) = 0;

    virtual antlrcpp::Any visitPre(cmmpParser::PreContext *context) = 0;

    virtual antlrcpp::Any visitConst(cmmpParser::ConstContext *context) = 0;

    virtual antlrcpp::Any visitBinmul(cmmpParser::BinmulContext *context) = 0;

    virtual antlrcpp::Any visitBinadd(cmmpParser::BinaddContext *context) = 0;

    virtual antlrcpp::Any visitAffectation(cmmpParser::AffectationContext *context) = 0;

    virtual antlrcpp::Any visitLogical(cmmpParser::LogicalContext *context) = 0;

    virtual antlrcpp::Any visitNeg(cmmpParser::NegContext *context) = 0;

    virtual antlrcpp::Any visitNot(cmmpParser::NotContext *context) = 0;

    virtual antlrcpp::Any visitPost(cmmpParser::PostContext *context) = 0;

    virtual antlrcpp::Any visitFunction(cmmpParser::FunctionContext *context) = 0;

    virtual antlrcpp::Any visitComparaison(cmmpParser::ComparaisonContext *context) = 0;

    virtual antlrcpp::Any visitVariable(cmmpParser::VariableContext *context) = 0;

    virtual antlrcpp::Any visitVarTab(cmmpParser::VarTabContext *context) = 0;

    virtual antlrcpp::Any visitFunctionCall(cmmpParser::FunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitAnd(cmmpParser::AndContext *context) = 0;

    virtual antlrcpp::Any visitOr(cmmpParser::OrContext *context) = 0;

    virtual antlrcpp::Any visitDiv(cmmpParser::DivContext *context) = 0;

    virtual antlrcpp::Any visitMult(cmmpParser::MultContext *context) = 0;

    virtual antlrcpp::Any visitMod(cmmpParser::ModContext *context) = 0;

    virtual antlrcpp::Any visitSub(cmmpParser::SubContext *context) = 0;

    virtual antlrcpp::Any visitAdd(cmmpParser::AddContext *context) = 0;

    virtual antlrcpp::Any visitIncr(cmmpParser::IncrContext *context) = 0;

    virtual antlrcpp::Any visitDecr(cmmpParser::DecrContext *context) = 0;

    virtual antlrcpp::Any visitEq(cmmpParser::EqContext *context) = 0;

    virtual antlrcpp::Any visitNeq(cmmpParser::NeqContext *context) = 0;

    virtual antlrcpp::Any visitInf(cmmpParser::InfContext *context) = 0;

    virtual antlrcpp::Any visitSup(cmmpParser::SupContext *context) = 0;

    virtual antlrcpp::Any visitInfeq(cmmpParser::InfeqContext *context) = 0;

    virtual antlrcpp::Any visitSupeq(cmmpParser::SupeqContext *context) = 0;

    virtual antlrcpp::Any visitAff(cmmpParser::AffContext *context) = 0;

    virtual antlrcpp::Any visitAddaff(cmmpParser::AddaffContext *context) = 0;

    virtual antlrcpp::Any visitSubaff(cmmpParser::SubaffContext *context) = 0;

    virtual antlrcpp::Any visitMultaff(cmmpParser::MultaffContext *context) = 0;

    virtual antlrcpp::Any visitDivaff(cmmpParser::DivaffContext *context) = 0;

    virtual antlrcpp::Any visitModaff(cmmpParser::ModaffContext *context) = 0;


};

