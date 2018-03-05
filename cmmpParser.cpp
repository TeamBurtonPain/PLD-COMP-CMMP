
// Generated from /home/doudou/Documents/INSA/4IF/PLD COMP/PLD-COMP-CMMP/cmmp.g4 by ANTLR 4.7.1


#include "cmmpListener.h"
#include "cmmpVisitor.h"

#include "cmmpParser.h"


using namespace antlrcpp;
using namespace antlr4;

cmmpParser::cmmpParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

cmmpParser::~cmmpParser() {
  delete _interpreter;
}

std::string cmmpParser::getGrammarFileName() const {
  return "cmmp.g4";
}

const std::vector<std::string>& cmmpParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& cmmpParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgrammeContext ------------------------------------------------------------------

cmmpParser::ProgrammeContext::ProgrammeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> cmmpParser::ProgrammeContext::Include() {
  return getTokens(cmmpParser::Include);
}

tree::TerminalNode* cmmpParser::ProgrammeContext::Include(size_t i) {
  return getToken(cmmpParser::Include, i);
}

std::vector<cmmpParser::DeclarationVarContext *> cmmpParser::ProgrammeContext::declarationVar() {
  return getRuleContexts<cmmpParser::DeclarationVarContext>();
}

cmmpParser::DeclarationVarContext* cmmpParser::ProgrammeContext::declarationVar(size_t i) {
  return getRuleContext<cmmpParser::DeclarationVarContext>(i);
}

std::vector<cmmpParser::DefinitionFonctionContext *> cmmpParser::ProgrammeContext::definitionFonction() {
  return getRuleContexts<cmmpParser::DefinitionFonctionContext>();
}

cmmpParser::DefinitionFonctionContext* cmmpParser::ProgrammeContext::definitionFonction(size_t i) {
  return getRuleContext<cmmpParser::DefinitionFonctionContext>(i);
}


size_t cmmpParser::ProgrammeContext::getRuleIndex() const {
  return cmmpParser::RuleProgramme;
}

void cmmpParser::ProgrammeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgramme(this);
}

void cmmpParser::ProgrammeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgramme(this);
}


antlrcpp::Any cmmpParser::ProgrammeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitProgramme(this);
  else
    return visitor->visitChildren(this);
}

cmmpParser::ProgrammeContext* cmmpParser::programme() {
  ProgrammeContext *_localctx = _tracker.createInstance<ProgrammeContext>(_ctx, getState());
  enterRule(_localctx, 0, cmmpParser::RuleProgramme);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(31);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == cmmpParser::Include) {
      setState(28);
      match(cmmpParser::Include);
      setState(33);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(37);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(34);
        declarationVar(); 
      }
      setState(39);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    }
    setState(41); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(40);
      definitionFonction();
      setState(43); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == cmmpParser::Type);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

cmmpParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<cmmpParser::InstructionContext *> cmmpParser::BlockContext::instruction() {
  return getRuleContexts<cmmpParser::InstructionContext>();
}

cmmpParser::InstructionContext* cmmpParser::BlockContext::instruction(size_t i) {
  return getRuleContext<cmmpParser::InstructionContext>(i);
}


size_t cmmpParser::BlockContext::getRuleIndex() const {
  return cmmpParser::RuleBlock;
}

void cmmpParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void cmmpParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


antlrcpp::Any cmmpParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

cmmpParser::BlockContext* cmmpParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 2, cmmpParser::RuleBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(45);
    match(cmmpParser::T__0);
    setState(49);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << cmmpParser::T__0)
      | (1ULL << cmmpParser::T__3)
      | (1ULL << cmmpParser::T__7)
      | (1ULL << cmmpParser::T__9)
      | (1ULL << cmmpParser::T__11)
      | (1ULL << cmmpParser::T__12)
      | (1ULL << cmmpParser::T__13)
      | (1ULL << cmmpParser::T__14)
      | (1ULL << cmmpParser::Cst)
      | (1ULL << cmmpParser::Var))) != 0)) {
      setState(46);
      instruction();
      setState(51);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(52);
    match(cmmpParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationVarContext ------------------------------------------------------------------

cmmpParser::DeclarationVarContext::DeclarationVarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cmmpParser::DeclarationVarSimpleContext* cmmpParser::DeclarationVarContext::declarationVarSimple() {
  return getRuleContext<cmmpParser::DeclarationVarSimpleContext>(0);
}

cmmpParser::DeclarationTableauContext* cmmpParser::DeclarationVarContext::declarationTableau() {
  return getRuleContext<cmmpParser::DeclarationTableauContext>(0);
}


size_t cmmpParser::DeclarationVarContext::getRuleIndex() const {
  return cmmpParser::RuleDeclarationVar;
}

void cmmpParser::DeclarationVarContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationVar(this);
}

void cmmpParser::DeclarationVarContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationVar(this);
}


antlrcpp::Any cmmpParser::DeclarationVarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitDeclarationVar(this);
  else
    return visitor->visitChildren(this);
}

cmmpParser::DeclarationVarContext* cmmpParser::declarationVar() {
  DeclarationVarContext *_localctx = _tracker.createInstance<DeclarationVarContext>(_ctx, getState());
  enterRule(_localctx, 4, cmmpParser::RuleDeclarationVar);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(56);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(54);
      declarationVarSimple();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(55);
      declarationTableau();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationVarSimpleContext ------------------------------------------------------------------

cmmpParser::DeclarationVarSimpleContext::DeclarationVarSimpleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cmmpParser::DeclarationVarSimpleContext::Type() {
  return getToken(cmmpParser::Type, 0);
}

std::vector<cmmpParser::VarSimpleContext *> cmmpParser::DeclarationVarSimpleContext::varSimple() {
  return getRuleContexts<cmmpParser::VarSimpleContext>();
}

cmmpParser::VarSimpleContext* cmmpParser::DeclarationVarSimpleContext::varSimple(size_t i) {
  return getRuleContext<cmmpParser::VarSimpleContext>(i);
}


size_t cmmpParser::DeclarationVarSimpleContext::getRuleIndex() const {
  return cmmpParser::RuleDeclarationVarSimple;
}

void cmmpParser::DeclarationVarSimpleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationVarSimple(this);
}

void cmmpParser::DeclarationVarSimpleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationVarSimple(this);
}


antlrcpp::Any cmmpParser::DeclarationVarSimpleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitDeclarationVarSimple(this);
  else
    return visitor->visitChildren(this);
}

cmmpParser::DeclarationVarSimpleContext* cmmpParser::declarationVarSimple() {
  DeclarationVarSimpleContext *_localctx = _tracker.createInstance<DeclarationVarSimpleContext>(_ctx, getState());
  enterRule(_localctx, 6, cmmpParser::RuleDeclarationVarSimple);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(58);
    match(cmmpParser::Type);
    setState(59);
    varSimple();
    setState(64);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == cmmpParser::T__2) {
      setState(60);
      match(cmmpParser::T__2);
      setState(61);
      varSimple();
      setState(66);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(67);
    match(cmmpParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarSimpleContext ------------------------------------------------------------------

cmmpParser::VarSimpleContext::VarSimpleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cmmpParser::VarSimpleContext::Var() {
  return getToken(cmmpParser::Var, 0);
}

cmmpParser::ExprContext* cmmpParser::VarSimpleContext::expr() {
  return getRuleContext<cmmpParser::ExprContext>(0);
}


size_t cmmpParser::VarSimpleContext::getRuleIndex() const {
  return cmmpParser::RuleVarSimple;
}

void cmmpParser::VarSimpleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarSimple(this);
}

void cmmpParser::VarSimpleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarSimple(this);
}


antlrcpp::Any cmmpParser::VarSimpleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitVarSimple(this);
  else
    return visitor->visitChildren(this);
}

cmmpParser::VarSimpleContext* cmmpParser::varSimple() {
  VarSimpleContext *_localctx = _tracker.createInstance<VarSimpleContext>(_ctx, getState());
  enterRule(_localctx, 8, cmmpParser::RuleVarSimple);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(69);
    match(cmmpParser::Var);
    setState(71);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << cmmpParser::T__7)
      | (1ULL << cmmpParser::T__12)
      | (1ULL << cmmpParser::T__13)
      | (1ULL << cmmpParser::T__14)
      | (1ULL << cmmpParser::Cst)
      | (1ULL << cmmpParser::Var))) != 0)) {
      setState(70);
      expr(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationTableauContext ------------------------------------------------------------------

cmmpParser::DeclarationTableauContext::DeclarationTableauContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cmmpParser::DeclarationTableauContext::Type() {
  return getToken(cmmpParser::Type, 0);
}

tree::TerminalNode* cmmpParser::DeclarationTableauContext::Var() {
  return getToken(cmmpParser::Var, 0);
}

cmmpParser::ExprContext* cmmpParser::DeclarationTableauContext::expr() {
  return getRuleContext<cmmpParser::ExprContext>(0);
}

cmmpParser::EListeContext* cmmpParser::DeclarationTableauContext::eListe() {
  return getRuleContext<cmmpParser::EListeContext>(0);
}


size_t cmmpParser::DeclarationTableauContext::getRuleIndex() const {
  return cmmpParser::RuleDeclarationTableau;
}

void cmmpParser::DeclarationTableauContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationTableau(this);
}

void cmmpParser::DeclarationTableauContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationTableau(this);
}


antlrcpp::Any cmmpParser::DeclarationTableauContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitDeclarationTableau(this);
  else
    return visitor->visitChildren(this);
}

cmmpParser::DeclarationTableauContext* cmmpParser::declarationTableau() {
  DeclarationTableauContext *_localctx = _tracker.createInstance<DeclarationTableauContext>(_ctx, getState());
  enterRule(_localctx, 10, cmmpParser::RuleDeclarationTableau);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(73);
    match(cmmpParser::Type);
    setState(74);
    match(cmmpParser::Var);
    setState(75);
    match(cmmpParser::T__4);
    setState(76);
    expr(0);
    setState(77);
    match(cmmpParser::T__5);
    setState(82);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cmmpParser::T__6) {
      setState(78);
      match(cmmpParser::T__6);
      setState(79);
      eListe();
      setState(80);
      match(cmmpParser::T__1);
    }
    setState(84);
    match(cmmpParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefinitionFonctionContext ------------------------------------------------------------------

cmmpParser::DefinitionFonctionContext::DefinitionFonctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cmmpParser::DefinitionFonctionContext::Type() {
  return getToken(cmmpParser::Type, 0);
}

tree::TerminalNode* cmmpParser::DefinitionFonctionContext::Var() {
  return getToken(cmmpParser::Var, 0);
}

cmmpParser::BlockContext* cmmpParser::DefinitionFonctionContext::block() {
  return getRuleContext<cmmpParser::BlockContext>(0);
}

cmmpParser::ParamDefinitionListContext* cmmpParser::DefinitionFonctionContext::paramDefinitionList() {
  return getRuleContext<cmmpParser::ParamDefinitionListContext>(0);
}


size_t cmmpParser::DefinitionFonctionContext::getRuleIndex() const {
  return cmmpParser::RuleDefinitionFonction;
}

void cmmpParser::DefinitionFonctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefinitionFonction(this);
}

void cmmpParser::DefinitionFonctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefinitionFonction(this);
}


antlrcpp::Any cmmpParser::DefinitionFonctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitDefinitionFonction(this);
  else
    return visitor->visitChildren(this);
}

cmmpParser::DefinitionFonctionContext* cmmpParser::definitionFonction() {
  DefinitionFonctionContext *_localctx = _tracker.createInstance<DefinitionFonctionContext>(_ctx, getState());
  enterRule(_localctx, 12, cmmpParser::RuleDefinitionFonction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(86);
    match(cmmpParser::Type);
    setState(87);
    match(cmmpParser::Var);
    setState(88);
    match(cmmpParser::T__7);
    setState(90);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cmmpParser::Type) {
      setState(89);
      paramDefinitionList();
    }
    setState(92);
    match(cmmpParser::T__8);
    setState(93);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamDefinitionListContext ------------------------------------------------------------------

cmmpParser::ParamDefinitionListContext::ParamDefinitionListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<cmmpParser::ParamDefinitionContext *> cmmpParser::ParamDefinitionListContext::paramDefinition() {
  return getRuleContexts<cmmpParser::ParamDefinitionContext>();
}

cmmpParser::ParamDefinitionContext* cmmpParser::ParamDefinitionListContext::paramDefinition(size_t i) {
  return getRuleContext<cmmpParser::ParamDefinitionContext>(i);
}


size_t cmmpParser::ParamDefinitionListContext::getRuleIndex() const {
  return cmmpParser::RuleParamDefinitionList;
}

void cmmpParser::ParamDefinitionListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParamDefinitionList(this);
}

void cmmpParser::ParamDefinitionListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParamDefinitionList(this);
}


antlrcpp::Any cmmpParser::ParamDefinitionListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitParamDefinitionList(this);
  else
    return visitor->visitChildren(this);
}

cmmpParser::ParamDefinitionListContext* cmmpParser::paramDefinitionList() {
  ParamDefinitionListContext *_localctx = _tracker.createInstance<ParamDefinitionListContext>(_ctx, getState());
  enterRule(_localctx, 14, cmmpParser::RuleParamDefinitionList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(95);
    paramDefinition();
    setState(100);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == cmmpParser::T__2) {
      setState(96);
      match(cmmpParser::T__2);
      setState(97);
      paramDefinition();
      setState(102);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamDefinitionContext ------------------------------------------------------------------

cmmpParser::ParamDefinitionContext::ParamDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cmmpParser::ParamDefinitionContext::Type() {
  return getToken(cmmpParser::Type, 0);
}

tree::TerminalNode* cmmpParser::ParamDefinitionContext::Var() {
  return getToken(cmmpParser::Var, 0);
}


size_t cmmpParser::ParamDefinitionContext::getRuleIndex() const {
  return cmmpParser::RuleParamDefinition;
}

void cmmpParser::ParamDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParamDefinition(this);
}

void cmmpParser::ParamDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParamDefinition(this);
}


antlrcpp::Any cmmpParser::ParamDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitParamDefinition(this);
  else
    return visitor->visitChildren(this);
}

cmmpParser::ParamDefinitionContext* cmmpParser::paramDefinition() {
  ParamDefinitionContext *_localctx = _tracker.createInstance<ParamDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 16, cmmpParser::RuleParamDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(103);
    match(cmmpParser::Type);
    setState(105);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cmmpParser::Var) {
      setState(104);
      match(cmmpParser::Var);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructureControlContext ------------------------------------------------------------------

cmmpParser::StructureControlContext::StructureControlContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cmmpParser::ExprContext* cmmpParser::StructureControlContext::expr() {
  return getRuleContext<cmmpParser::ExprContext>(0);
}

std::vector<cmmpParser::InstructionContext *> cmmpParser::StructureControlContext::instruction() {
  return getRuleContexts<cmmpParser::InstructionContext>();
}

cmmpParser::InstructionContext* cmmpParser::StructureControlContext::instruction(size_t i) {
  return getRuleContext<cmmpParser::InstructionContext>(i);
}


size_t cmmpParser::StructureControlContext::getRuleIndex() const {
  return cmmpParser::RuleStructureControl;
}

void cmmpParser::StructureControlContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructureControl(this);
}

void cmmpParser::StructureControlContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructureControl(this);
}


antlrcpp::Any cmmpParser::StructureControlContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitStructureControl(this);
  else
    return visitor->visitChildren(this);
}

cmmpParser::StructureControlContext* cmmpParser::structureControl() {
  StructureControlContext *_localctx = _tracker.createInstance<StructureControlContext>(_ctx, getState());
  enterRule(_localctx, 18, cmmpParser::RuleStructureControl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(120);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case cmmpParser::T__9: {
        enterOuterAlt(_localctx, 1);
        setState(107);
        match(cmmpParser::T__9);
        setState(108);
        expr(0);
        setState(109);
        match(cmmpParser::T__8);
        setState(110);
        instruction();
        setState(113);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
        case 1: {
          setState(111);
          match(cmmpParser::T__10);
          setState(112);
          instruction();
          break;
        }

        }
        break;
      }

      case cmmpParser::T__11: {
        enterOuterAlt(_localctx, 2);
        setState(115);
        match(cmmpParser::T__11);
        setState(116);
        expr(0);
        setState(117);
        match(cmmpParser::T__8);
        setState(118);
        instruction();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstructionContext ------------------------------------------------------------------

cmmpParser::InstructionContext::InstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cmmpParser::BlockContext* cmmpParser::InstructionContext::block() {
  return getRuleContext<cmmpParser::BlockContext>(0);
}

cmmpParser::ExprContext* cmmpParser::InstructionContext::expr() {
  return getRuleContext<cmmpParser::ExprContext>(0);
}

cmmpParser::StructureControlContext* cmmpParser::InstructionContext::structureControl() {
  return getRuleContext<cmmpParser::StructureControlContext>(0);
}


size_t cmmpParser::InstructionContext::getRuleIndex() const {
  return cmmpParser::RuleInstruction;
}

void cmmpParser::InstructionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInstruction(this);
}

void cmmpParser::InstructionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInstruction(this);
}


antlrcpp::Any cmmpParser::InstructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitInstruction(this);
  else
    return visitor->visitChildren(this);
}

cmmpParser::InstructionContext* cmmpParser::instruction() {
  InstructionContext *_localctx = _tracker.createInstance<InstructionContext>(_ctx, getState());
  enterRule(_localctx, 20, cmmpParser::RuleInstruction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(128);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case cmmpParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(122);
        block();
        break;
      }

      case cmmpParser::T__3:
      case cmmpParser::T__7:
      case cmmpParser::T__12:
      case cmmpParser::T__13:
      case cmmpParser::T__14:
      case cmmpParser::Cst:
      case cmmpParser::Var: {
        enterOuterAlt(_localctx, 2);
        setState(124);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << cmmpParser::T__7)
          | (1ULL << cmmpParser::T__12)
          | (1ULL << cmmpParser::T__13)
          | (1ULL << cmmpParser::T__14)
          | (1ULL << cmmpParser::Cst)
          | (1ULL << cmmpParser::Var))) != 0)) {
          setState(123);
          expr(0);
        }
        setState(126);
        match(cmmpParser::T__3);
        break;
      }

      case cmmpParser::T__9:
      case cmmpParser::T__11: {
        enterOuterAlt(_localctx, 3);
        setState(127);
        structureControl();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MembreGaucheContext ------------------------------------------------------------------

cmmpParser::MembreGaucheContext::MembreGaucheContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cmmpParser::MembreGaucheContext::Var() {
  return getToken(cmmpParser::Var, 0);
}

cmmpParser::ExprContext* cmmpParser::MembreGaucheContext::expr() {
  return getRuleContext<cmmpParser::ExprContext>(0);
}


size_t cmmpParser::MembreGaucheContext::getRuleIndex() const {
  return cmmpParser::RuleMembreGauche;
}

void cmmpParser::MembreGaucheContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMembreGauche(this);
}

void cmmpParser::MembreGaucheContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMembreGauche(this);
}


antlrcpp::Any cmmpParser::MembreGaucheContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitMembreGauche(this);
  else
    return visitor->visitChildren(this);
}

cmmpParser::MembreGaucheContext* cmmpParser::membreGauche() {
  MembreGaucheContext *_localctx = _tracker.createInstance<MembreGaucheContext>(_ctx, getState());
  enterRule(_localctx, 22, cmmpParser::RuleMembreGauche);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(136);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(130);
      match(cmmpParser::Var);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(131);
      match(cmmpParser::Var);
      setState(132);
      match(cmmpParser::T__4);
      setState(133);
      expr(0);
      setState(134);
      match(cmmpParser::T__5);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EListeContext ------------------------------------------------------------------

cmmpParser::EListeContext::EListeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<cmmpParser::ExprContext *> cmmpParser::EListeContext::expr() {
  return getRuleContexts<cmmpParser::ExprContext>();
}

cmmpParser::ExprContext* cmmpParser::EListeContext::expr(size_t i) {
  return getRuleContext<cmmpParser::ExprContext>(i);
}


size_t cmmpParser::EListeContext::getRuleIndex() const {
  return cmmpParser::RuleEListe;
}

void cmmpParser::EListeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEListe(this);
}

void cmmpParser::EListeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEListe(this);
}


antlrcpp::Any cmmpParser::EListeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitEListe(this);
  else
    return visitor->visitChildren(this);
}

cmmpParser::EListeContext* cmmpParser::eListe() {
  EListeContext *_localctx = _tracker.createInstance<EListeContext>(_ctx, getState());
  enterRule(_localctx, 24, cmmpParser::RuleEListe);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(138);
    expr(0);
    setState(143);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == cmmpParser::T__2) {
      setState(139);
      match(cmmpParser::T__2);
      setState(140);
      expr(0);
      setState(145);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

cmmpParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t cmmpParser::ExprContext::getRuleIndex() const {
  return cmmpParser::RuleExpr;
}

void cmmpParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ParContext ------------------------------------------------------------------

cmmpParser::ExprContext* cmmpParser::ParContext::expr() {
  return getRuleContext<cmmpParser::ExprContext>(0);
}

cmmpParser::ParContext::ParContext(ExprContext *ctx) { copyFrom(ctx); }

void cmmpParser::ParContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPar(this);
}
void cmmpParser::ParContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPar(this);
}

antlrcpp::Any cmmpParser::ParContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitPar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddContext ------------------------------------------------------------------

std::vector<cmmpParser::ExprContext *> cmmpParser::AddContext::expr() {
  return getRuleContexts<cmmpParser::ExprContext>();
}

cmmpParser::ExprContext* cmmpParser::AddContext::expr(size_t i) {
  return getRuleContext<cmmpParser::ExprContext>(i);
}

cmmpParser::AddContext::AddContext(ExprContext *ctx) { copyFrom(ctx); }

void cmmpParser::AddContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdd(this);
}
void cmmpParser::AddContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdd(this);
}

antlrcpp::Any cmmpParser::AddContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitAdd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SubContext ------------------------------------------------------------------

std::vector<cmmpParser::ExprContext *> cmmpParser::SubContext::expr() {
  return getRuleContexts<cmmpParser::ExprContext>();
}

cmmpParser::ExprContext* cmmpParser::SubContext::expr(size_t i) {
  return getRuleContext<cmmpParser::ExprContext>(i);
}

cmmpParser::SubContext::SubContext(ExprContext *ctx) { copyFrom(ctx); }

void cmmpParser::SubContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSub(this);
}
void cmmpParser::SubContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSub(this);
}

antlrcpp::Any cmmpParser::SubContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitSub(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EgContext ------------------------------------------------------------------

std::vector<cmmpParser::ExprContext *> cmmpParser::EgContext::expr() {
  return getRuleContexts<cmmpParser::ExprContext>();
}

cmmpParser::ExprContext* cmmpParser::EgContext::expr(size_t i) {
  return getRuleContext<cmmpParser::ExprContext>(i);
}

cmmpParser::EgContext::EgContext(ExprContext *ctx) { copyFrom(ctx); }

void cmmpParser::EgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEg(this);
}
void cmmpParser::EgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEg(this);
}

antlrcpp::Any cmmpParser::EgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitEg(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultContext ------------------------------------------------------------------

std::vector<cmmpParser::ExprContext *> cmmpParser::MultContext::expr() {
  return getRuleContexts<cmmpParser::ExprContext>();
}

cmmpParser::ExprContext* cmmpParser::MultContext::expr(size_t i) {
  return getRuleContext<cmmpParser::ExprContext>(i);
}

cmmpParser::MultContext::MultContext(ExprContext *ctx) { copyFrom(ctx); }

void cmmpParser::MultContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMult(this);
}
void cmmpParser::MultContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMult(this);
}

antlrcpp::Any cmmpParser::MultContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitMult(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ModContext ------------------------------------------------------------------

std::vector<cmmpParser::ExprContext *> cmmpParser::ModContext::expr() {
  return getRuleContexts<cmmpParser::ExprContext>();
}

cmmpParser::ExprContext* cmmpParser::ModContext::expr(size_t i) {
  return getRuleContext<cmmpParser::ExprContext>(i);
}

cmmpParser::ModContext::ModContext(ExprContext *ctx) { copyFrom(ctx); }

void cmmpParser::ModContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMod(this);
}
void cmmpParser::ModContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMod(this);
}

antlrcpp::Any cmmpParser::ModContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitMod(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OrContext ------------------------------------------------------------------

std::vector<cmmpParser::ExprContext *> cmmpParser::OrContext::expr() {
  return getRuleContexts<cmmpParser::ExprContext>();
}

cmmpParser::ExprContext* cmmpParser::OrContext::expr(size_t i) {
  return getRuleContext<cmmpParser::ExprContext>(i);
}

cmmpParser::OrContext::OrContext(ExprContext *ctx) { copyFrom(ctx); }

void cmmpParser::OrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOr(this);
}
void cmmpParser::OrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOr(this);
}

antlrcpp::Any cmmpParser::OrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitOr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstContext ------------------------------------------------------------------

tree::TerminalNode* cmmpParser::ConstContext::Cst() {
  return getToken(cmmpParser::Cst, 0);
}

cmmpParser::ConstContext::ConstContext(ExprContext *ctx) { copyFrom(ctx); }

void cmmpParser::ConstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConst(this);
}
void cmmpParser::ConstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConst(this);
}

antlrcpp::Any cmmpParser::ConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitConst(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LtContext ------------------------------------------------------------------

std::vector<cmmpParser::ExprContext *> cmmpParser::LtContext::expr() {
  return getRuleContexts<cmmpParser::ExprContext>();
}

cmmpParser::ExprContext* cmmpParser::LtContext::expr(size_t i) {
  return getRuleContext<cmmpParser::ExprContext>(i);
}

cmmpParser::LtContext::LtContext(ExprContext *ctx) { copyFrom(ctx); }

void cmmpParser::LtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLt(this);
}
void cmmpParser::LtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLt(this);
}

antlrcpp::Any cmmpParser::LtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitLt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- GtContext ------------------------------------------------------------------

std::vector<cmmpParser::ExprContext *> cmmpParser::GtContext::expr() {
  return getRuleContexts<cmmpParser::ExprContext>();
}

cmmpParser::ExprContext* cmmpParser::GtContext::expr(size_t i) {
  return getRuleContext<cmmpParser::ExprContext>(i);
}

cmmpParser::GtContext::GtContext(ExprContext *ctx) { copyFrom(ctx); }

void cmmpParser::GtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGt(this);
}
void cmmpParser::GtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGt(this);
}

antlrcpp::Any cmmpParser::GtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitGt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AffectationContext ------------------------------------------------------------------

cmmpParser::MembreGaucheContext* cmmpParser::AffectationContext::membreGauche() {
  return getRuleContext<cmmpParser::MembreGaucheContext>(0);
}

tree::TerminalNode* cmmpParser::AffectationContext::OpAffectation() {
  return getToken(cmmpParser::OpAffectation, 0);
}

cmmpParser::ExprContext* cmmpParser::AffectationContext::expr() {
  return getRuleContext<cmmpParser::ExprContext>(0);
}

cmmpParser::AffectationContext::AffectationContext(ExprContext *ctx) { copyFrom(ctx); }

void cmmpParser::AffectationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAffectation(this);
}
void cmmpParser::AffectationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAffectation(this);
}

antlrcpp::Any cmmpParser::AffectationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitAffectation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PreincContext ------------------------------------------------------------------

cmmpParser::ExprContext* cmmpParser::PreincContext::expr() {
  return getRuleContext<cmmpParser::ExprContext>(0);
}

cmmpParser::PreincContext::PreincContext(ExprContext *ctx) { copyFrom(ctx); }

void cmmpParser::PreincContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreinc(this);
}
void cmmpParser::PreincContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreinc(this);
}

antlrcpp::Any cmmpParser::PreincContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitPreinc(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DivContext ------------------------------------------------------------------

std::vector<cmmpParser::ExprContext *> cmmpParser::DivContext::expr() {
  return getRuleContexts<cmmpParser::ExprContext>();
}

cmmpParser::ExprContext* cmmpParser::DivContext::expr(size_t i) {
  return getRuleContext<cmmpParser::ExprContext>(i);
}

cmmpParser::DivContext::DivContext(ExprContext *ctx) { copyFrom(ctx); }

void cmmpParser::DivContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDiv(this);
}
void cmmpParser::DivContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDiv(this);
}

antlrcpp::Any cmmpParser::DivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitDiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PostincContext ------------------------------------------------------------------

cmmpParser::ExprContext* cmmpParser::PostincContext::expr() {
  return getRuleContext<cmmpParser::ExprContext>(0);
}

cmmpParser::PostincContext::PostincContext(ExprContext *ctx) { copyFrom(ctx); }

void cmmpParser::PostincContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostinc(this);
}
void cmmpParser::PostincContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostinc(this);
}

antlrcpp::Any cmmpParser::PostincContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitPostinc(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NegContext ------------------------------------------------------------------

std::vector<cmmpParser::ExprContext *> cmmpParser::NegContext::expr() {
  return getRuleContexts<cmmpParser::ExprContext>();
}

cmmpParser::ExprContext* cmmpParser::NegContext::expr(size_t i) {
  return getRuleContext<cmmpParser::ExprContext>(i);
}

cmmpParser::NegContext::NegContext(ExprContext *ctx) { copyFrom(ctx); }

void cmmpParser::NegContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNeg(this);
}
void cmmpParser::NegContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNeg(this);
}

antlrcpp::Any cmmpParser::NegContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitNeg(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NotContext ------------------------------------------------------------------

cmmpParser::ExprContext* cmmpParser::NotContext::expr() {
  return getRuleContext<cmmpParser::ExprContext>(0);
}

cmmpParser::NotContext::NotContext(ExprContext *ctx) { copyFrom(ctx); }

void cmmpParser::NotContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNot(this);
}
void cmmpParser::NotContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNot(this);
}

antlrcpp::Any cmmpParser::NotContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitNot(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PredecrContext ------------------------------------------------------------------

cmmpParser::ExprContext* cmmpParser::PredecrContext::expr() {
  return getRuleContext<cmmpParser::ExprContext>(0);
}

cmmpParser::PredecrContext::PredecrContext(ExprContext *ctx) { copyFrom(ctx); }

void cmmpParser::PredecrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPredecr(this);
}
void cmmpParser::PredecrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPredecr(this);
}

antlrcpp::Any cmmpParser::PredecrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitPredecr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AndContext ------------------------------------------------------------------

std::vector<cmmpParser::ExprContext *> cmmpParser::AndContext::expr() {
  return getRuleContexts<cmmpParser::ExprContext>();
}

cmmpParser::ExprContext* cmmpParser::AndContext::expr(size_t i) {
  return getRuleContext<cmmpParser::ExprContext>(i);
}

cmmpParser::AndContext::AndContext(ExprContext *ctx) { copyFrom(ctx); }

void cmmpParser::AndContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnd(this);
}
void cmmpParser::AndContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnd(this);
}

antlrcpp::Any cmmpParser::AndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitAnd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PostdecrContext ------------------------------------------------------------------

cmmpParser::ExprContext* cmmpParser::PostdecrContext::expr() {
  return getRuleContext<cmmpParser::ExprContext>(0);
}

cmmpParser::PostdecrContext::PostdecrContext(ExprContext *ctx) { copyFrom(ctx); }

void cmmpParser::PostdecrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostdecr(this);
}
void cmmpParser::PostdecrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostdecr(this);
}

antlrcpp::Any cmmpParser::PostdecrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitPostdecr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FunctionContext ------------------------------------------------------------------

tree::TerminalNode* cmmpParser::FunctionContext::Var() {
  return getToken(cmmpParser::Var, 0);
}

cmmpParser::ParamDefinitionListContext* cmmpParser::FunctionContext::paramDefinitionList() {
  return getRuleContext<cmmpParser::ParamDefinitionListContext>(0);
}

cmmpParser::FunctionContext::FunctionContext(ExprContext *ctx) { copyFrom(ctx); }

void cmmpParser::FunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction(this);
}
void cmmpParser::FunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction(this);
}

antlrcpp::Any cmmpParser::FunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitFunction(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VariableContext ------------------------------------------------------------------

cmmpParser::MembreGaucheContext* cmmpParser::VariableContext::membreGauche() {
  return getRuleContext<cmmpParser::MembreGaucheContext>(0);
}

cmmpParser::VariableContext::VariableContext(ExprContext *ctx) { copyFrom(ctx); }

void cmmpParser::VariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable(this);
}
void cmmpParser::VariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable(this);
}

antlrcpp::Any cmmpParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}
//----------------- GteContext ------------------------------------------------------------------

std::vector<cmmpParser::ExprContext *> cmmpParser::GteContext::expr() {
  return getRuleContexts<cmmpParser::ExprContext>();
}

cmmpParser::ExprContext* cmmpParser::GteContext::expr(size_t i) {
  return getRuleContext<cmmpParser::ExprContext>(i);
}

cmmpParser::GteContext::GteContext(ExprContext *ctx) { copyFrom(ctx); }

void cmmpParser::GteContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGte(this);
}
void cmmpParser::GteContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGte(this);
}

antlrcpp::Any cmmpParser::GteContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitGte(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LteContext ------------------------------------------------------------------

std::vector<cmmpParser::ExprContext *> cmmpParser::LteContext::expr() {
  return getRuleContexts<cmmpParser::ExprContext>();
}

cmmpParser::ExprContext* cmmpParser::LteContext::expr(size_t i) {
  return getRuleContext<cmmpParser::ExprContext>(i);
}

cmmpParser::LteContext::LteContext(ExprContext *ctx) { copyFrom(ctx); }

void cmmpParser::LteContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLte(this);
}
void cmmpParser::LteContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLte(this);
}

antlrcpp::Any cmmpParser::LteContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitLte(this);
  else
    return visitor->visitChildren(this);
}

cmmpParser::ExprContext* cmmpParser::expr() {
   return expr(0);
}

cmmpParser::ExprContext* cmmpParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  cmmpParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  cmmpParser::ExprContext *previousContext = _localctx;
  size_t startState = 26;
  enterRecursionRule(_localctx, 26, cmmpParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(169);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<VariableContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(147);
      membreGauche();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<FunctionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(148);
      match(cmmpParser::Var);
      setState(149);
      match(cmmpParser::T__7);
      setState(151);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == cmmpParser::Type) {
        setState(150);
        paramDefinitionList();
      }
      setState(153);
      match(cmmpParser::T__8);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ParContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(154);
      match(cmmpParser::T__7);
      setState(155);
      expr(0);
      setState(156);
      match(cmmpParser::T__8);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<NotContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(158);
      match(cmmpParser::T__12);
      setState(159);
      expr(20);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<PreincContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(160);
      match(cmmpParser::T__13);
      setState(161);
      expr(19);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<PredecrContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(162);
      match(cmmpParser::T__14);
      setState(163);
      expr(18);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<AffectationContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(164);
      membreGauche();
      setState(165);
      match(cmmpParser::OpAffectation);
      setState(166);
      expr(2);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<ConstContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(168);
      match(cmmpParser::Cst);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(216);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(214);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MultContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(171);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(172);
          match(cmmpParser::T__15);
          setState(173);
          expr(16);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<DivContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(174);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(175);
          match(cmmpParser::T__16);
          setState(176);
          expr(15);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ModContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(177);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(178);
          match(cmmpParser::T__17);
          setState(179);
          expr(14);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<AddContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(180);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(181);
          match(cmmpParser::T__18);
          setState(182);
          expr(13);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<SubContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(183);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(184);
          match(cmmpParser::T__19);
          setState(185);
          expr(12);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<AndContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(186);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(187);
          match(cmmpParser::T__20);
          setState(188);
          expr(11);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<OrContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(189);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(190);
          match(cmmpParser::T__21);
          setState(191);
          expr(10);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<LtContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(192);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(193);
          match(cmmpParser::T__22);
          setState(194);
          expr(9);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<LteContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(195);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(196);
          match(cmmpParser::T__23);
          setState(197);
          expr(8);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<GtContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(198);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(199);
          match(cmmpParser::T__24);
          setState(200);
          expr(7);
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<GteContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(201);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(202);
          match(cmmpParser::T__25);
          setState(203);
          expr(6);
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<EgContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(204);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(205);
          match(cmmpParser::T__26);
          setState(206);
          expr(5);
          break;
        }

        case 13: {
          auto newContext = _tracker.createInstance<NegContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(207);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(208);
          match(cmmpParser::T__27);
          setState(209);
          expr(4);
          break;
        }

        case 14: {
          auto newContext = _tracker.createInstance<PostincContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(210);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(211);
          match(cmmpParser::T__13);
          break;
        }

        case 15: {
          auto newContext = _tracker.createInstance<PostdecrContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(212);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(213);
          match(cmmpParser::T__14);
          break;
        }

        } 
      }
      setState(218);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool cmmpParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 13: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool cmmpParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 15);
    case 1: return precpred(_ctx, 14);
    case 2: return precpred(_ctx, 13);
    case 3: return precpred(_ctx, 12);
    case 4: return precpred(_ctx, 11);
    case 5: return precpred(_ctx, 10);
    case 6: return precpred(_ctx, 9);
    case 7: return precpred(_ctx, 8);
    case 8: return precpred(_ctx, 7);
    case 9: return precpred(_ctx, 6);
    case 10: return precpred(_ctx, 5);
    case 11: return precpred(_ctx, 4);
    case 12: return precpred(_ctx, 3);
    case 13: return precpred(_ctx, 17);
    case 14: return precpred(_ctx, 16);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> cmmpParser::_decisionToDFA;
atn::PredictionContextCache cmmpParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN cmmpParser::_atn;
std::vector<uint16_t> cmmpParser::_serializedATN;

std::vector<std::string> cmmpParser::_ruleNames = {
  "programme", "block", "declarationVar", "declarationVarSimple", "varSimple", 
  "declarationTableau", "definitionFonction", "paramDefinitionList", "paramDefinition", 
  "structureControl", "instruction", "membreGauche", "eListe", "expr"
};

std::vector<std::string> cmmpParser::_literalNames = {
  "", "'{'", "'}'", "','", "';'", "'['", "']'", "'={'", "'('", "')'", "'if('", 
  "'else '", "'while('", "'!'", "'++'", "'--'", "'*'", "'/'", "'%'", "'+'", 
  "'-'", "'&&'", "'||'", "'<'", "'<='", "'>'", "'>='", "'=='", "'!='", "", 
  "'#include'"
};

std::vector<std::string> cmmpParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "Include", "InvariantInclude", 
  "Lib", "Cst", "PositiveInt", "Int", "Char", "String", "Type", "OpAffectation", 
  "Var", "WhiteSpace", "NewLine", "BlockComment", "LineComment"
};

dfa::Vocabulary cmmpParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> cmmpParser::_tokenNames;

cmmpParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x2d, 0xde, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x3, 0x2, 0x7, 0x2, 0x20, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 
    0x23, 0xb, 0x2, 0x3, 0x2, 0x7, 0x2, 0x26, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 
    0x29, 0xb, 0x2, 0x3, 0x2, 0x6, 0x2, 0x2c, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 
    0x2d, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x32, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 
    0x35, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x3b, 
    0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x41, 0xa, 
    0x5, 0xc, 0x5, 0xe, 0x5, 0x44, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 
    0x3, 0x6, 0x5, 0x6, 0x4a, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x55, 
    0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x5, 0x8, 0x5d, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x7, 0x9, 0x65, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x68, 0xb, 
    0x9, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x6c, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x74, 0xa, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x7b, 0xa, 0xb, 
    0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x7f, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 
    0xc, 0x83, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x5, 0xd, 0x8b, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 
    0xe, 0x90, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x93, 0xb, 0xe, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x9a, 0xa, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x5, 0xf, 0xac, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0xd9, 0xa, 0xf, 
    0xc, 0xf, 0xe, 0xf, 0xdc, 0xb, 0xf, 0x3, 0xf, 0x2, 0x3, 0x1c, 0x10, 
    0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 
    0x1c, 0x2, 0x2, 0x2, 0xf8, 0x2, 0x21, 0x3, 0x2, 0x2, 0x2, 0x4, 0x2f, 
    0x3, 0x2, 0x2, 0x2, 0x6, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x8, 0x3c, 0x3, 0x2, 
    0x2, 0x2, 0xa, 0x47, 0x3, 0x2, 0x2, 0x2, 0xc, 0x4b, 0x3, 0x2, 0x2, 0x2, 
    0xe, 0x58, 0x3, 0x2, 0x2, 0x2, 0x10, 0x61, 0x3, 0x2, 0x2, 0x2, 0x12, 
    0x69, 0x3, 0x2, 0x2, 0x2, 0x14, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x16, 0x82, 
    0x3, 0x2, 0x2, 0x2, 0x18, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x8c, 0x3, 
    0x2, 0x2, 0x2, 0x1c, 0xab, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x20, 0x7, 0x1f, 
    0x2, 0x2, 0x1f, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x20, 0x23, 0x3, 0x2, 0x2, 
    0x2, 0x21, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x21, 0x22, 0x3, 0x2, 0x2, 0x2, 
    0x22, 0x27, 0x3, 0x2, 0x2, 0x2, 0x23, 0x21, 0x3, 0x2, 0x2, 0x2, 0x24, 
    0x26, 0x5, 0x6, 0x4, 0x2, 0x25, 0x24, 0x3, 0x2, 0x2, 0x2, 0x26, 0x29, 
    0x3, 0x2, 0x2, 0x2, 0x27, 0x25, 0x3, 0x2, 0x2, 0x2, 0x27, 0x28, 0x3, 
    0x2, 0x2, 0x2, 0x28, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x29, 0x27, 0x3, 0x2, 
    0x2, 0x2, 0x2a, 0x2c, 0x5, 0xe, 0x8, 0x2, 0x2b, 0x2a, 0x3, 0x2, 0x2, 
    0x2, 0x2c, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2b, 0x3, 0x2, 0x2, 0x2, 
    0x2d, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2f, 
    0x33, 0x7, 0x3, 0x2, 0x2, 0x30, 0x32, 0x5, 0x16, 0xc, 0x2, 0x31, 0x30, 
    0x3, 0x2, 0x2, 0x2, 0x32, 0x35, 0x3, 0x2, 0x2, 0x2, 0x33, 0x31, 0x3, 
    0x2, 0x2, 0x2, 0x33, 0x34, 0x3, 0x2, 0x2, 0x2, 0x34, 0x36, 0x3, 0x2, 
    0x2, 0x2, 0x35, 0x33, 0x3, 0x2, 0x2, 0x2, 0x36, 0x37, 0x7, 0x4, 0x2, 
    0x2, 0x37, 0x5, 0x3, 0x2, 0x2, 0x2, 0x38, 0x3b, 0x5, 0x8, 0x5, 0x2, 
    0x39, 0x3b, 0x5, 0xc, 0x7, 0x2, 0x3a, 0x38, 0x3, 0x2, 0x2, 0x2, 0x3a, 
    0x39, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x7, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3d, 
    0x7, 0x27, 0x2, 0x2, 0x3d, 0x42, 0x5, 0xa, 0x6, 0x2, 0x3e, 0x3f, 0x7, 
    0x5, 0x2, 0x2, 0x3f, 0x41, 0x5, 0xa, 0x6, 0x2, 0x40, 0x3e, 0x3, 0x2, 
    0x2, 0x2, 0x41, 0x44, 0x3, 0x2, 0x2, 0x2, 0x42, 0x40, 0x3, 0x2, 0x2, 
    0x2, 0x42, 0x43, 0x3, 0x2, 0x2, 0x2, 0x43, 0x45, 0x3, 0x2, 0x2, 0x2, 
    0x44, 0x42, 0x3, 0x2, 0x2, 0x2, 0x45, 0x46, 0x7, 0x6, 0x2, 0x2, 0x46, 
    0x9, 0x3, 0x2, 0x2, 0x2, 0x47, 0x49, 0x7, 0x29, 0x2, 0x2, 0x48, 0x4a, 
    0x5, 0x1c, 0xf, 0x2, 0x49, 0x48, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4a, 0x3, 
    0x2, 0x2, 0x2, 0x4a, 0xb, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4c, 0x7, 0x27, 
    0x2, 0x2, 0x4c, 0x4d, 0x7, 0x29, 0x2, 0x2, 0x4d, 0x4e, 0x7, 0x7, 0x2, 
    0x2, 0x4e, 0x4f, 0x5, 0x1c, 0xf, 0x2, 0x4f, 0x54, 0x7, 0x8, 0x2, 0x2, 
    0x50, 0x51, 0x7, 0x9, 0x2, 0x2, 0x51, 0x52, 0x5, 0x1a, 0xe, 0x2, 0x52, 
    0x53, 0x7, 0x4, 0x2, 0x2, 0x53, 0x55, 0x3, 0x2, 0x2, 0x2, 0x54, 0x50, 
    0x3, 0x2, 0x2, 0x2, 0x54, 0x55, 0x3, 0x2, 0x2, 0x2, 0x55, 0x56, 0x3, 
    0x2, 0x2, 0x2, 0x56, 0x57, 0x7, 0x6, 0x2, 0x2, 0x57, 0xd, 0x3, 0x2, 
    0x2, 0x2, 0x58, 0x59, 0x7, 0x27, 0x2, 0x2, 0x59, 0x5a, 0x7, 0x29, 0x2, 
    0x2, 0x5a, 0x5c, 0x7, 0xa, 0x2, 0x2, 0x5b, 0x5d, 0x5, 0x10, 0x9, 0x2, 
    0x5c, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5d, 
    0x5e, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5f, 0x7, 0xb, 0x2, 0x2, 0x5f, 0x60, 
    0x5, 0x4, 0x3, 0x2, 0x60, 0xf, 0x3, 0x2, 0x2, 0x2, 0x61, 0x66, 0x5, 
    0x12, 0xa, 0x2, 0x62, 0x63, 0x7, 0x5, 0x2, 0x2, 0x63, 0x65, 0x5, 0x12, 
    0xa, 0x2, 0x64, 0x62, 0x3, 0x2, 0x2, 0x2, 0x65, 0x68, 0x3, 0x2, 0x2, 
    0x2, 0x66, 0x64, 0x3, 0x2, 0x2, 0x2, 0x66, 0x67, 0x3, 0x2, 0x2, 0x2, 
    0x67, 0x11, 0x3, 0x2, 0x2, 0x2, 0x68, 0x66, 0x3, 0x2, 0x2, 0x2, 0x69, 
    0x6b, 0x7, 0x27, 0x2, 0x2, 0x6a, 0x6c, 0x7, 0x29, 0x2, 0x2, 0x6b, 0x6a, 
    0x3, 0x2, 0x2, 0x2, 0x6b, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x13, 0x3, 
    0x2, 0x2, 0x2, 0x6d, 0x6e, 0x7, 0xc, 0x2, 0x2, 0x6e, 0x6f, 0x5, 0x1c, 
    0xf, 0x2, 0x6f, 0x70, 0x7, 0xb, 0x2, 0x2, 0x70, 0x73, 0x5, 0x16, 0xc, 
    0x2, 0x71, 0x72, 0x7, 0xd, 0x2, 0x2, 0x72, 0x74, 0x5, 0x16, 0xc, 0x2, 
    0x73, 0x71, 0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 0x3, 0x2, 0x2, 0x2, 0x74, 
    0x7b, 0x3, 0x2, 0x2, 0x2, 0x75, 0x76, 0x7, 0xe, 0x2, 0x2, 0x76, 0x77, 
    0x5, 0x1c, 0xf, 0x2, 0x77, 0x78, 0x7, 0xb, 0x2, 0x2, 0x78, 0x79, 0x5, 
    0x16, 0xc, 0x2, 0x79, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x6d, 0x3, 0x2, 
    0x2, 0x2, 0x7a, 0x75, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x15, 0x3, 0x2, 0x2, 
    0x2, 0x7c, 0x83, 0x5, 0x4, 0x3, 0x2, 0x7d, 0x7f, 0x5, 0x1c, 0xf, 0x2, 
    0x7e, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x7f, 
    0x80, 0x3, 0x2, 0x2, 0x2, 0x80, 0x83, 0x7, 0x6, 0x2, 0x2, 0x81, 0x83, 
    0x5, 0x14, 0xb, 0x2, 0x82, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x82, 0x7e, 0x3, 
    0x2, 0x2, 0x2, 0x82, 0x81, 0x3, 0x2, 0x2, 0x2, 0x83, 0x17, 0x3, 0x2, 
    0x2, 0x2, 0x84, 0x8b, 0x7, 0x29, 0x2, 0x2, 0x85, 0x86, 0x7, 0x29, 0x2, 
    0x2, 0x86, 0x87, 0x7, 0x7, 0x2, 0x2, 0x87, 0x88, 0x5, 0x1c, 0xf, 0x2, 
    0x88, 0x89, 0x7, 0x8, 0x2, 0x2, 0x89, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8a, 
    0x84, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x85, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x19, 
    0x3, 0x2, 0x2, 0x2, 0x8c, 0x91, 0x5, 0x1c, 0xf, 0x2, 0x8d, 0x8e, 0x7, 
    0x5, 0x2, 0x2, 0x8e, 0x90, 0x5, 0x1c, 0xf, 0x2, 0x8f, 0x8d, 0x3, 0x2, 
    0x2, 0x2, 0x90, 0x93, 0x3, 0x2, 0x2, 0x2, 0x91, 0x8f, 0x3, 0x2, 0x2, 
    0x2, 0x91, 0x92, 0x3, 0x2, 0x2, 0x2, 0x92, 0x1b, 0x3, 0x2, 0x2, 0x2, 
    0x93, 0x91, 0x3, 0x2, 0x2, 0x2, 0x94, 0x95, 0x8, 0xf, 0x1, 0x2, 0x95, 
    0xac, 0x5, 0x18, 0xd, 0x2, 0x96, 0x97, 0x7, 0x29, 0x2, 0x2, 0x97, 0x99, 
    0x7, 0xa, 0x2, 0x2, 0x98, 0x9a, 0x5, 0x10, 0x9, 0x2, 0x99, 0x98, 0x3, 
    0x2, 0x2, 0x2, 0x99, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 0x3, 0x2, 
    0x2, 0x2, 0x9b, 0xac, 0x7, 0xb, 0x2, 0x2, 0x9c, 0x9d, 0x7, 0xa, 0x2, 
    0x2, 0x9d, 0x9e, 0x5, 0x1c, 0xf, 0x2, 0x9e, 0x9f, 0x7, 0xb, 0x2, 0x2, 
    0x9f, 0xac, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa1, 0x7, 0xf, 0x2, 0x2, 0xa1, 
    0xac, 0x5, 0x1c, 0xf, 0x16, 0xa2, 0xa3, 0x7, 0x10, 0x2, 0x2, 0xa3, 0xac, 
    0x5, 0x1c, 0xf, 0x15, 0xa4, 0xa5, 0x7, 0x11, 0x2, 0x2, 0xa5, 0xac, 0x5, 
    0x1c, 0xf, 0x14, 0xa6, 0xa7, 0x5, 0x18, 0xd, 0x2, 0xa7, 0xa8, 0x7, 0x28, 
    0x2, 0x2, 0xa8, 0xa9, 0x5, 0x1c, 0xf, 0x4, 0xa9, 0xac, 0x3, 0x2, 0x2, 
    0x2, 0xaa, 0xac, 0x7, 0x22, 0x2, 0x2, 0xab, 0x94, 0x3, 0x2, 0x2, 0x2, 
    0xab, 0x96, 0x3, 0x2, 0x2, 0x2, 0xab, 0x9c, 0x3, 0x2, 0x2, 0x2, 0xab, 
    0xa0, 0x3, 0x2, 0x2, 0x2, 0xab, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xab, 0xa4, 
    0x3, 0x2, 0x2, 0x2, 0xab, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xab, 0xaa, 0x3, 
    0x2, 0x2, 0x2, 0xac, 0xda, 0x3, 0x2, 0x2, 0x2, 0xad, 0xae, 0xc, 0x11, 
    0x2, 0x2, 0xae, 0xaf, 0x7, 0x12, 0x2, 0x2, 0xaf, 0xd9, 0x5, 0x1c, 0xf, 
    0x12, 0xb0, 0xb1, 0xc, 0x10, 0x2, 0x2, 0xb1, 0xb2, 0x7, 0x13, 0x2, 0x2, 
    0xb2, 0xd9, 0x5, 0x1c, 0xf, 0x11, 0xb3, 0xb4, 0xc, 0xf, 0x2, 0x2, 0xb4, 
    0xb5, 0x7, 0x14, 0x2, 0x2, 0xb5, 0xd9, 0x5, 0x1c, 0xf, 0x10, 0xb6, 0xb7, 
    0xc, 0xe, 0x2, 0x2, 0xb7, 0xb8, 0x7, 0x15, 0x2, 0x2, 0xb8, 0xd9, 0x5, 
    0x1c, 0xf, 0xf, 0xb9, 0xba, 0xc, 0xd, 0x2, 0x2, 0xba, 0xbb, 0x7, 0x16, 
    0x2, 0x2, 0xbb, 0xd9, 0x5, 0x1c, 0xf, 0xe, 0xbc, 0xbd, 0xc, 0xc, 0x2, 
    0x2, 0xbd, 0xbe, 0x7, 0x17, 0x2, 0x2, 0xbe, 0xd9, 0x5, 0x1c, 0xf, 0xd, 
    0xbf, 0xc0, 0xc, 0xb, 0x2, 0x2, 0xc0, 0xc1, 0x7, 0x18, 0x2, 0x2, 0xc1, 
    0xd9, 0x5, 0x1c, 0xf, 0xc, 0xc2, 0xc3, 0xc, 0xa, 0x2, 0x2, 0xc3, 0xc4, 
    0x7, 0x19, 0x2, 0x2, 0xc4, 0xd9, 0x5, 0x1c, 0xf, 0xb, 0xc5, 0xc6, 0xc, 
    0x9, 0x2, 0x2, 0xc6, 0xc7, 0x7, 0x1a, 0x2, 0x2, 0xc7, 0xd9, 0x5, 0x1c, 
    0xf, 0xa, 0xc8, 0xc9, 0xc, 0x8, 0x2, 0x2, 0xc9, 0xca, 0x7, 0x1b, 0x2, 
    0x2, 0xca, 0xd9, 0x5, 0x1c, 0xf, 0x9, 0xcb, 0xcc, 0xc, 0x7, 0x2, 0x2, 
    0xcc, 0xcd, 0x7, 0x1c, 0x2, 0x2, 0xcd, 0xd9, 0x5, 0x1c, 0xf, 0x8, 0xce, 
    0xcf, 0xc, 0x6, 0x2, 0x2, 0xcf, 0xd0, 0x7, 0x1d, 0x2, 0x2, 0xd0, 0xd9, 
    0x5, 0x1c, 0xf, 0x7, 0xd1, 0xd2, 0xc, 0x5, 0x2, 0x2, 0xd2, 0xd3, 0x7, 
    0x1e, 0x2, 0x2, 0xd3, 0xd9, 0x5, 0x1c, 0xf, 0x6, 0xd4, 0xd5, 0xc, 0x13, 
    0x2, 0x2, 0xd5, 0xd9, 0x7, 0x10, 0x2, 0x2, 0xd6, 0xd7, 0xc, 0x12, 0x2, 
    0x2, 0xd7, 0xd9, 0x7, 0x11, 0x2, 0x2, 0xd8, 0xad, 0x3, 0x2, 0x2, 0x2, 
    0xd8, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xd8, 
    0xb6, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xbc, 
    0x3, 0x2, 0x2, 0x2, 0xd8, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xc2, 0x3, 
    0x2, 0x2, 0x2, 0xd8, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xc8, 0x3, 0x2, 
    0x2, 0x2, 0xd8, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xce, 0x3, 0x2, 0x2, 
    0x2, 0xd8, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd4, 0x3, 0x2, 0x2, 0x2, 
    0xd8, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xda, 
    0xd8, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xdb, 0x1d, 
    0x3, 0x2, 0x2, 0x2, 0xdc, 0xda, 0x3, 0x2, 0x2, 0x2, 0x17, 0x21, 0x27, 
    0x2d, 0x33, 0x3a, 0x42, 0x49, 0x54, 0x5c, 0x66, 0x6b, 0x73, 0x7a, 0x7e, 
    0x82, 0x8a, 0x91, 0x99, 0xab, 0xd8, 0xda, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

cmmpParser::Initializer cmmpParser::_init;
