
// Generated from cmmp.g4 by ANTLR 4.7.1


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


//----------------- AxiomeContext ------------------------------------------------------------------

cmmpParser::AxiomeContext::AxiomeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cmmpParser::ProgrammeContext* cmmpParser::AxiomeContext::programme() {
  return getRuleContext<cmmpParser::ProgrammeContext>(0);
}


size_t cmmpParser::AxiomeContext::getRuleIndex() const {
  return cmmpParser::RuleAxiome;
}

void cmmpParser::AxiomeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAxiome(this);
}

void cmmpParser::AxiomeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAxiome(this);
}


antlrcpp::Any cmmpParser::AxiomeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitAxiome(this);
  else
    return visitor->visitChildren(this);
}

cmmpParser::AxiomeContext* cmmpParser::axiome() {
  AxiomeContext *_localctx = _tracker.createInstance<AxiomeContext>(_ctx, getState());
  enterRule(_localctx, 0, cmmpParser::RuleAxiome);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(42);
    programme();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgrammeContext ------------------------------------------------------------------

cmmpParser::ProgrammeContext::ProgrammeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t cmmpParser::ProgrammeContext::getRuleIndex() const {
  return cmmpParser::RuleProgramme;
}

void cmmpParser::ProgrammeContext::copyFrom(ProgrammeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- IncludeContext ------------------------------------------------------------------

cmmpParser::ProgrammeContext* cmmpParser::IncludeContext::programme() {
  return getRuleContext<cmmpParser::ProgrammeContext>(0);
}

tree::TerminalNode* cmmpParser::IncludeContext::Include() {
  return getToken(cmmpParser::Include, 0);
}

cmmpParser::IncludeContext::IncludeContext(ProgrammeContext *ctx) { copyFrom(ctx); }

void cmmpParser::IncludeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInclude(this);
}
void cmmpParser::IncludeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInclude(this);
}

antlrcpp::Any cmmpParser::IncludeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitInclude(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DeclVarContext ------------------------------------------------------------------

cmmpParser::ProgrammeContext* cmmpParser::DeclVarContext::programme() {
  return getRuleContext<cmmpParser::ProgrammeContext>(0);
}

cmmpParser::DeclarationVarListeContext* cmmpParser::DeclVarContext::declarationVarListe() {
  return getRuleContext<cmmpParser::DeclarationVarListeContext>(0);
}

cmmpParser::DeclVarContext::DeclVarContext(ProgrammeContext *ctx) { copyFrom(ctx); }

void cmmpParser::DeclVarContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclVar(this);
}
void cmmpParser::DeclVarContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclVar(this);
}

antlrcpp::Any cmmpParser::DeclVarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitDeclVar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DefFoncContext ------------------------------------------------------------------

cmmpParser::ProgrammeContext* cmmpParser::DefFoncContext::programme() {
  return getRuleContext<cmmpParser::ProgrammeContext>(0);
}

cmmpParser::DefinitionFonctionContext* cmmpParser::DefFoncContext::definitionFonction() {
  return getRuleContext<cmmpParser::DefinitionFonctionContext>(0);
}

cmmpParser::DefFoncContext::DefFoncContext(ProgrammeContext *ctx) { copyFrom(ctx); }

void cmmpParser::DefFoncContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefFonc(this);
}
void cmmpParser::DefFoncContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefFonc(this);
}

antlrcpp::Any cmmpParser::DefFoncContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitDefFonc(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EofContext ------------------------------------------------------------------

cmmpParser::EofContext::EofContext(ProgrammeContext *ctx) { copyFrom(ctx); }

void cmmpParser::EofContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEof(this);
}
void cmmpParser::EofContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEof(this);
}

antlrcpp::Any cmmpParser::EofContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitEof(this);
  else
    return visitor->visitChildren(this);
}
cmmpParser::ProgrammeContext* cmmpParser::programme() {
  ProgrammeContext *_localctx = _tracker.createInstance<ProgrammeContext>(_ctx, getState());
  enterRule(_localctx, 2, cmmpParser::RuleProgramme);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(53);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<ProgrammeContext *>(_tracker.createInstance<cmmpParser::IncludeContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(44);
      match(cmmpParser::Include);
      setState(45);
      programme();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<ProgrammeContext *>(_tracker.createInstance<cmmpParser::DeclVarContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(46);
      declarationVarListe();
      setState(47);
      programme();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<ProgrammeContext *>(_tracker.createInstance<cmmpParser::DefFoncContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(49);
      definitionFonction();
      setState(50);
      programme();
      break;
    }

    case 4: {
      _localctx = dynamic_cast<ProgrammeContext *>(_tracker.createInstance<cmmpParser::EofContext>(_localctx));
      enterOuterAlt(_localctx, 4);

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
  enterRule(_localctx, 4, cmmpParser::RuleBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(55);
    match(cmmpParser::T__0);
    setState(59);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << cmmpParser::T__0)
      | (1ULL << cmmpParser::T__5)
      | (1ULL << cmmpParser::T__7)
      | (1ULL << cmmpParser::T__9)
      | (1ULL << cmmpParser::T__10)
      | (1ULL << cmmpParser::T__11)
      | (1ULL << cmmpParser::T__12)
      | (1ULL << cmmpParser::Cst)
      | (1ULL << cmmpParser::Type)
      | (1ULL << cmmpParser::Var))) != 0)) {
      setState(56);
      instruction();
      setState(61);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(62);
    match(cmmpParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationVarListeContext ------------------------------------------------------------------

cmmpParser::DeclarationVarListeContext::DeclarationVarListeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cmmpParser::DeclarationVarListeContext::Type() {
  return getToken(cmmpParser::Type, 0);
}

std::vector<cmmpParser::DeclarationVarContext *> cmmpParser::DeclarationVarListeContext::declarationVar() {
  return getRuleContexts<cmmpParser::DeclarationVarContext>();
}

cmmpParser::DeclarationVarContext* cmmpParser::DeclarationVarListeContext::declarationVar(size_t i) {
  return getRuleContext<cmmpParser::DeclarationVarContext>(i);
}


size_t cmmpParser::DeclarationVarListeContext::getRuleIndex() const {
  return cmmpParser::RuleDeclarationVarListe;
}

void cmmpParser::DeclarationVarListeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationVarListe(this);
}

void cmmpParser::DeclarationVarListeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationVarListe(this);
}


antlrcpp::Any cmmpParser::DeclarationVarListeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitDeclarationVarListe(this);
  else
    return visitor->visitChildren(this);
}

cmmpParser::DeclarationVarListeContext* cmmpParser::declarationVarListe() {
  DeclarationVarListeContext *_localctx = _tracker.createInstance<DeclarationVarListeContext>(_ctx, getState());
  enterRule(_localctx, 6, cmmpParser::RuleDeclarationVarListe);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(64);
    match(cmmpParser::Type);
    setState(65);
    declarationVar();
    setState(70);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == cmmpParser::T__2) {
      setState(66);
      match(cmmpParser::T__2);
      setState(67);
      declarationVar();
      setState(72);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(73);
    match(cmmpParser::T__3);
   
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

cmmpParser::VarSimpleContext* cmmpParser::DeclarationVarContext::varSimple() {
  return getRuleContext<cmmpParser::VarSimpleContext>(0);
}

cmmpParser::VarTableauContext* cmmpParser::DeclarationVarContext::varTableau() {
  return getRuleContext<cmmpParser::VarTableauContext>(0);
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
  enterRule(_localctx, 8, cmmpParser::RuleDeclarationVar);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(77);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(75);
      varSimple();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(76);
      varTableau();
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

//----------------- VarSimpleContext ------------------------------------------------------------------

cmmpParser::VarSimpleContext::VarSimpleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cmmpParser::VarSimpleContext::Var() {
  return getToken(cmmpParser::Var, 0);
}

cmmpParser::AugmentedExprContext* cmmpParser::VarSimpleContext::augmentedExpr() {
  return getRuleContext<cmmpParser::AugmentedExprContext>(0);
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
  enterRule(_localctx, 10, cmmpParser::RuleVarSimple);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(79);
    match(cmmpParser::Var);
    setState(82);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cmmpParser::T__4) {
      setState(80);
      match(cmmpParser::T__4);
      setState(81);
      augmentedExpr();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarTableauContext ------------------------------------------------------------------

cmmpParser::VarTableauContext::VarTableauContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cmmpParser::VarTabContext* cmmpParser::VarTableauContext::varTab() {
  return getRuleContext<cmmpParser::VarTabContext>(0);
}

cmmpParser::EListeContext* cmmpParser::VarTableauContext::eListe() {
  return getRuleContext<cmmpParser::EListeContext>(0);
}


size_t cmmpParser::VarTableauContext::getRuleIndex() const {
  return cmmpParser::RuleVarTableau;
}

void cmmpParser::VarTableauContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarTableau(this);
}

void cmmpParser::VarTableauContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarTableau(this);
}


antlrcpp::Any cmmpParser::VarTableauContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitVarTableau(this);
  else
    return visitor->visitChildren(this);
}

cmmpParser::VarTableauContext* cmmpParser::varTableau() {
  VarTableauContext *_localctx = _tracker.createInstance<VarTableauContext>(_ctx, getState());
  enterRule(_localctx, 12, cmmpParser::RuleVarTableau);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(84);
    varTab();
    setState(90);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cmmpParser::T__4) {
      setState(85);
      match(cmmpParser::T__4);
      setState(86);
      match(cmmpParser::T__0);
      setState(87);
      eListe();
      setState(88);
      match(cmmpParser::T__1);
    }
   
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
  enterRule(_localctx, 14, cmmpParser::RuleDefinitionFonction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(92);
    match(cmmpParser::Type);
    setState(93);
    match(cmmpParser::Var);
    setState(94);
    match(cmmpParser::T__5);
    setState(96);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cmmpParser::Type) {
      setState(95);
      paramDefinitionList();
    }
    setState(98);
    match(cmmpParser::T__6);
    setState(99);
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
  enterRule(_localctx, 16, cmmpParser::RuleParamDefinitionList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(101);
    paramDefinition();
    setState(106);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == cmmpParser::T__2) {
      setState(102);
      match(cmmpParser::T__2);
      setState(103);
      paramDefinition();
      setState(108);
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
  enterRule(_localctx, 18, cmmpParser::RuleParamDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(109);
    match(cmmpParser::Type);
    setState(111);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cmmpParser::Var) {
      setState(110);
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

cmmpParser::AugmentedExprContext* cmmpParser::StructureControlContext::augmentedExpr() {
  return getRuleContext<cmmpParser::AugmentedExprContext>(0);
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
  enterRule(_localctx, 20, cmmpParser::RuleStructureControl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(128);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case cmmpParser::T__7: {
        enterOuterAlt(_localctx, 1);
        setState(113);
        match(cmmpParser::T__7);
        setState(114);
        match(cmmpParser::T__5);
        setState(115);
        augmentedExpr();
        setState(116);
        match(cmmpParser::T__6);
        setState(117);
        instruction();
        setState(120);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
        case 1: {
          setState(118);
          match(cmmpParser::T__8);
          setState(119);
          instruction();
          break;
        }

        }
        break;
      }

      case cmmpParser::T__9: {
        enterOuterAlt(_localctx, 2);
        setState(122);
        match(cmmpParser::T__9);
        setState(123);
        match(cmmpParser::T__5);
        setState(124);
        augmentedExpr();
        setState(125);
        match(cmmpParser::T__6);
        setState(126);
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

cmmpParser::AugmentedExprContext* cmmpParser::InstructionContext::augmentedExpr() {
  return getRuleContext<cmmpParser::AugmentedExprContext>(0);
}

cmmpParser::DeclarationVarListeContext* cmmpParser::InstructionContext::declarationVarListe() {
  return getRuleContext<cmmpParser::DeclarationVarListeContext>(0);
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
  enterRule(_localctx, 22, cmmpParser::RuleInstruction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(136);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case cmmpParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(130);
        block();
        break;
      }

      case cmmpParser::T__5:
      case cmmpParser::T__10:
      case cmmpParser::T__11:
      case cmmpParser::T__12:
      case cmmpParser::Cst:
      case cmmpParser::Var: {
        enterOuterAlt(_localctx, 2);
        setState(131);
        augmentedExpr();
        setState(132);
        match(cmmpParser::T__3);
        break;
      }

      case cmmpParser::Type: {
        enterOuterAlt(_localctx, 3);
        setState(134);
        declarationVarListe();
        break;
      }

      case cmmpParser::T__7:
      case cmmpParser::T__9: {
        enterOuterAlt(_localctx, 4);
        setState(135);
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

cmmpParser::VarTabContext* cmmpParser::MembreGaucheContext::varTab() {
  return getRuleContext<cmmpParser::VarTabContext>(0);
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
  enterRule(_localctx, 24, cmmpParser::RuleMembreGauche);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(140);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(138);
      match(cmmpParser::Var);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(139);
      varTab();
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

std::vector<cmmpParser::AugmentedExprContext *> cmmpParser::EListeContext::augmentedExpr() {
  return getRuleContexts<cmmpParser::AugmentedExprContext>();
}

cmmpParser::AugmentedExprContext* cmmpParser::EListeContext::augmentedExpr(size_t i) {
  return getRuleContext<cmmpParser::AugmentedExprContext>(i);
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
  enterRule(_localctx, 26, cmmpParser::RuleEListe);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(142);
    augmentedExpr();
    setState(147);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == cmmpParser::T__2) {
      setState(143);
      match(cmmpParser::T__2);
      setState(144);
      augmentedExpr();
      setState(149);
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

//----------------- AugmentedExprContext ------------------------------------------------------------------

cmmpParser::AugmentedExprContext::AugmentedExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cmmpParser::AffectationContext* cmmpParser::AugmentedExprContext::affectation() {
  return getRuleContext<cmmpParser::AffectationContext>(0);
}

cmmpParser::ExprContext* cmmpParser::AugmentedExprContext::expr() {
  return getRuleContext<cmmpParser::ExprContext>(0);
}


size_t cmmpParser::AugmentedExprContext::getRuleIndex() const {
  return cmmpParser::RuleAugmentedExpr;
}

void cmmpParser::AugmentedExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAugmentedExpr(this);
}

void cmmpParser::AugmentedExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAugmentedExpr(this);
}


antlrcpp::Any cmmpParser::AugmentedExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitAugmentedExpr(this);
  else
    return visitor->visitChildren(this);
}

cmmpParser::AugmentedExprContext* cmmpParser::augmentedExpr() {
  AugmentedExprContext *_localctx = _tracker.createInstance<AugmentedExprContext>(_ctx, getState());
  enterRule(_localctx, 28, cmmpParser::RuleAugmentedExpr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(152);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(150);
      affectation();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(151);
      expr(0);
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

//----------------- AffectationContext ------------------------------------------------------------------

cmmpParser::AffectationContext::AffectationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t cmmpParser::AffectationContext::getRuleIndex() const {
  return cmmpParser::RuleAffectation;
}

void cmmpParser::AffectationContext::copyFrom(AffectationContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- MidAffectationContext ------------------------------------------------------------------

cmmpParser::MembreGaucheContext* cmmpParser::MidAffectationContext::membreGauche() {
  return getRuleContext<cmmpParser::MembreGaucheContext>(0);
}

cmmpParser::OpAffectationContext* cmmpParser::MidAffectationContext::opAffectation() {
  return getRuleContext<cmmpParser::OpAffectationContext>(0);
}

cmmpParser::AffectationContext* cmmpParser::MidAffectationContext::affectation() {
  return getRuleContext<cmmpParser::AffectationContext>(0);
}

cmmpParser::MidAffectationContext::MidAffectationContext(AffectationContext *ctx) { copyFrom(ctx); }

void cmmpParser::MidAffectationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMidAffectation(this);
}
void cmmpParser::MidAffectationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMidAffectation(this);
}

antlrcpp::Any cmmpParser::MidAffectationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitMidAffectation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EndAffectationContext ------------------------------------------------------------------

cmmpParser::MembreGaucheContext* cmmpParser::EndAffectationContext::membreGauche() {
  return getRuleContext<cmmpParser::MembreGaucheContext>(0);
}

cmmpParser::OpAffectationContext* cmmpParser::EndAffectationContext::opAffectation() {
  return getRuleContext<cmmpParser::OpAffectationContext>(0);
}

cmmpParser::ExprContext* cmmpParser::EndAffectationContext::expr() {
  return getRuleContext<cmmpParser::ExprContext>(0);
}

cmmpParser::EndAffectationContext::EndAffectationContext(AffectationContext *ctx) { copyFrom(ctx); }

void cmmpParser::EndAffectationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEndAffectation(this);
}
void cmmpParser::EndAffectationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEndAffectation(this);
}

antlrcpp::Any cmmpParser::EndAffectationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitEndAffectation(this);
  else
    return visitor->visitChildren(this);
}
cmmpParser::AffectationContext* cmmpParser::affectation() {
  AffectationContext *_localctx = _tracker.createInstance<AffectationContext>(_ctx, getState());
  enterRule(_localctx, 30, cmmpParser::RuleAffectation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(162);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<cmmpParser::MidAffectationContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(154);
      membreGauche();
      setState(155);
      opAffectation();
      setState(156);
      affectation();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<cmmpParser::EndAffectationContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(158);
      membreGauche();
      setState(159);
      opAffectation();
      setState(160);
      expr(0);
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

cmmpParser::FunctionCallContext* cmmpParser::FunctionContext::functionCall() {
  return getRuleContext<cmmpParser::FunctionCallContext>(0);
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
//----------------- ComparaisonContext ------------------------------------------------------------------

std::vector<cmmpParser::ExprContext *> cmmpParser::ComparaisonContext::expr() {
  return getRuleContexts<cmmpParser::ExprContext>();
}

cmmpParser::ExprContext* cmmpParser::ComparaisonContext::expr(size_t i) {
  return getRuleContext<cmmpParser::ExprContext>(i);
}

cmmpParser::OpComparaisonContext* cmmpParser::ComparaisonContext::opComparaison() {
  return getRuleContext<cmmpParser::OpComparaisonContext>(0);
}

cmmpParser::ComparaisonContext::ComparaisonContext(ExprContext *ctx) { copyFrom(ctx); }

void cmmpParser::ComparaisonContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparaison(this);
}
void cmmpParser::ComparaisonContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparaison(this);
}

antlrcpp::Any cmmpParser::ComparaisonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitComparaison(this);
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

cmmpParser::ExprContext* cmmpParser::expr() {
   return expr(0);
}

cmmpParser::ExprContext* cmmpParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  cmmpParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  cmmpParser::ExprContext *previousContext = _localctx;
  size_t startState = 32;
  enterRecursionRule(_localctx, 32, cmmpParser::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(178);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ParContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(165);
      match(cmmpParser::T__5);
      setState(166);
      expr(0);
      setState(167);
      match(cmmpParser::T__6);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<NotContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(169);
      match(cmmpParser::T__10);
      setState(170);
      expr(16);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<PreincContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(171);
      match(cmmpParser::T__11);
      setState(172);
      expr(15);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<PredecrContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(173);
      match(cmmpParser::T__12);
      setState(174);
      expr(14);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<ConstContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(175);
      match(cmmpParser::Cst);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<VariableContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(176);
      membreGauche();
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<FunctionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(177);
      functionCall();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(211);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(209);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MultContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(180);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(181);
          match(cmmpParser::T__13);
          setState(182);
          expr(12);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<DivContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(183);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(184);
          match(cmmpParser::T__14);
          setState(185);
          expr(11);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ModContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(186);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(187);
          match(cmmpParser::T__15);
          setState(188);
          expr(10);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<AddContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(189);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(190);
          match(cmmpParser::T__16);
          setState(191);
          expr(9);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<SubContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(192);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(193);
          match(cmmpParser::T__17);
          setState(194);
          expr(8);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<AndContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(195);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(196);
          match(cmmpParser::T__18);
          setState(197);
          expr(7);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<OrContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(198);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(199);
          match(cmmpParser::T__19);
          setState(200);
          expr(6);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<ComparaisonContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(201);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(202);
          opComparaison();
          setState(203);
          expr(5);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<PostincContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(205);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(206);
          match(cmmpParser::T__11);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<PostdecrContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(207);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(208);
          match(cmmpParser::T__12);
          break;
        }

        } 
      }
      setState(213);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- VarTabContext ------------------------------------------------------------------

cmmpParser::VarTabContext::VarTabContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cmmpParser::VarTabContext::Var() {
  return getToken(cmmpParser::Var, 0);
}

cmmpParser::ExprContext* cmmpParser::VarTabContext::expr() {
  return getRuleContext<cmmpParser::ExprContext>(0);
}


size_t cmmpParser::VarTabContext::getRuleIndex() const {
  return cmmpParser::RuleVarTab;
}

void cmmpParser::VarTabContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarTab(this);
}

void cmmpParser::VarTabContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarTab(this);
}


antlrcpp::Any cmmpParser::VarTabContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitVarTab(this);
  else
    return visitor->visitChildren(this);
}

cmmpParser::VarTabContext* cmmpParser::varTab() {
  VarTabContext *_localctx = _tracker.createInstance<VarTabContext>(_ctx, getState());
  enterRule(_localctx, 34, cmmpParser::RuleVarTab);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(214);
    match(cmmpParser::Var);
    setState(215);
    match(cmmpParser::T__20);
    setState(216);
    expr(0);
    setState(217);
    match(cmmpParser::T__21);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionCallContext ------------------------------------------------------------------

cmmpParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cmmpParser::FunctionCallContext::Var() {
  return getToken(cmmpParser::Var, 0);
}

cmmpParser::EListeContext* cmmpParser::FunctionCallContext::eListe() {
  return getRuleContext<cmmpParser::EListeContext>(0);
}


size_t cmmpParser::FunctionCallContext::getRuleIndex() const {
  return cmmpParser::RuleFunctionCall;
}

void cmmpParser::FunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCall(this);
}

void cmmpParser::FunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCall(this);
}


antlrcpp::Any cmmpParser::FunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitFunctionCall(this);
  else
    return visitor->visitChildren(this);
}

cmmpParser::FunctionCallContext* cmmpParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 36, cmmpParser::RuleFunctionCall);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(219);
    match(cmmpParser::Var);
    setState(220);
    match(cmmpParser::T__5);
    setState(222);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << cmmpParser::T__5)
      | (1ULL << cmmpParser::T__10)
      | (1ULL << cmmpParser::T__11)
      | (1ULL << cmmpParser::T__12)
      | (1ULL << cmmpParser::Cst)
      | (1ULL << cmmpParser::Var))) != 0)) {
      setState(221);
      eListe();
    }
    setState(224);
    match(cmmpParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OpComparaisonContext ------------------------------------------------------------------

cmmpParser::OpComparaisonContext::OpComparaisonContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t cmmpParser::OpComparaisonContext::getRuleIndex() const {
  return cmmpParser::RuleOpComparaison;
}

void cmmpParser::OpComparaisonContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOpComparaison(this);
}

void cmmpParser::OpComparaisonContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOpComparaison(this);
}


antlrcpp::Any cmmpParser::OpComparaisonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitOpComparaison(this);
  else
    return visitor->visitChildren(this);
}

cmmpParser::OpComparaisonContext* cmmpParser::opComparaison() {
  OpComparaisonContext *_localctx = _tracker.createInstance<OpComparaisonContext>(_ctx, getState());
  enterRule(_localctx, 38, cmmpParser::RuleOpComparaison);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(226);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << cmmpParser::T__22)
      | (1ULL << cmmpParser::T__23)
      | (1ULL << cmmpParser::T__24)
      | (1ULL << cmmpParser::T__25)
      | (1ULL << cmmpParser::T__26)
      | (1ULL << cmmpParser::T__27))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OpAffectationContext ------------------------------------------------------------------

cmmpParser::OpAffectationContext::OpAffectationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t cmmpParser::OpAffectationContext::getRuleIndex() const {
  return cmmpParser::RuleOpAffectation;
}

void cmmpParser::OpAffectationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOpAffectation(this);
}

void cmmpParser::OpAffectationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cmmpListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOpAffectation(this);
}


antlrcpp::Any cmmpParser::OpAffectationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cmmpVisitor*>(visitor))
    return parserVisitor->visitOpAffectation(this);
  else
    return visitor->visitChildren(this);
}

cmmpParser::OpAffectationContext* cmmpParser::opAffectation() {
  OpAffectationContext *_localctx = _tracker.createInstance<OpAffectationContext>(_ctx, getState());
  enterRule(_localctx, 40, cmmpParser::RuleOpAffectation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(228);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << cmmpParser::T__4)
      | (1ULL << cmmpParser::T__28)
      | (1ULL << cmmpParser::T__29)
      | (1ULL << cmmpParser::T__30)
      | (1ULL << cmmpParser::T__31)
      | (1ULL << cmmpParser::T__32))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
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
    case 16: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool cmmpParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 11);
    case 1: return precpred(_ctx, 10);
    case 2: return precpred(_ctx, 9);
    case 3: return precpred(_ctx, 8);
    case 4: return precpred(_ctx, 7);
    case 5: return precpred(_ctx, 6);
    case 6: return precpred(_ctx, 5);
    case 7: return precpred(_ctx, 4);
    case 8: return precpred(_ctx, 13);
    case 9: return precpred(_ctx, 12);

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
  "axiome", "programme", "block", "declarationVarListe", "declarationVar", 
  "varSimple", "varTableau", "definitionFonction", "paramDefinitionList", 
  "paramDefinition", "structureControl", "instruction", "membreGauche", 
  "eListe", "augmentedExpr", "affectation", "expr", "varTab", "functionCall", 
  "opComparaison", "opAffectation"
};

std::vector<std::string> cmmpParser::_literalNames = {
  "", "'{'", "'}'", "','", "';'", "'='", "'('", "')'", "'if'", "'else '", 
  "'while'", "'!'", "'++'", "'--'", "'*'", "'/'", "'%'", "'+'", "'-'", "'&&'", 
  "'||'", "'['", "']'", "'<'", "'>'", "'<='", "'>='", "'=='", "'!='", "'+='", 
  "'-='", "'*='", "'/='", "'%='", "", "'#include'"
};

std::vector<std::string> cmmpParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "Include", 
  "InvariantInclude", "Lib", "Cst", "PositiveInt", "Int", "Char", "String", 
  "Type", "Var", "WhiteSpace", "NewLine", "BlockComment", "LineComment", 
  "EOFT"
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
    0x3, 0x32, 0xe9, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 0x9, 
    0x15, 0x4, 0x16, 0x9, 0x16, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x5, 0x3, 0x38, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x3c, 0xa, 0x4, 
    0xc, 0x4, 0xe, 0x4, 0x3f, 0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x47, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 
    0x4a, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x50, 
    0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x55, 0xa, 0x7, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x5d, 
    0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x63, 0xa, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 
    0xa, 0x6b, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x6e, 0xb, 0xa, 0x3, 0xb, 0x3, 
    0xb, 0x5, 0xb, 0x72, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x7b, 0xa, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x83, 0xa, 0xc, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 
    0x8b, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x8f, 0xa, 0xe, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0x94, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x97, 
    0xb, 0xf, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x9b, 0xa, 0x10, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x5, 0x11, 0xa5, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0xb5, 0xa, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 0xd4, 0xa, 0x12, 0xc, 0x12, 
    0xe, 0x12, 0xd7, 0xb, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0xe1, 0xa, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 
    0x16, 0x2, 0x3, 0x22, 0x17, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 
    0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 
    0x2a, 0x2, 0x4, 0x3, 0x2, 0x19, 0x1e, 0x4, 0x2, 0x7, 0x7, 0x1f, 0x23, 
    0x2, 0xf8, 0x2, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x4, 0x37, 0x3, 0x2, 0x2, 
    0x2, 0x6, 0x39, 0x3, 0x2, 0x2, 0x2, 0x8, 0x42, 0x3, 0x2, 0x2, 0x2, 0xa, 
    0x4f, 0x3, 0x2, 0x2, 0x2, 0xc, 0x51, 0x3, 0x2, 0x2, 0x2, 0xe, 0x56, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x12, 0x67, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x16, 0x82, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x8e, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0x90, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x9a, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0xa4, 0x3, 0x2, 0x2, 0x2, 0x22, 0xb4, 0x3, 0x2, 0x2, 0x2, 0x24, 
    0xd8, 0x3, 0x2, 0x2, 0x2, 0x26, 0xdd, 0x3, 0x2, 0x2, 0x2, 0x28, 0xe4, 
    0x3, 0x2, 0x2, 0x2, 0x2a, 0xe6, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2d, 0x5, 
    0x4, 0x3, 0x2, 0x2d, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2f, 0x7, 0x24, 
    0x2, 0x2, 0x2f, 0x38, 0x5, 0x4, 0x3, 0x2, 0x30, 0x31, 0x5, 0x8, 0x5, 
    0x2, 0x31, 0x32, 0x5, 0x4, 0x3, 0x2, 0x32, 0x38, 0x3, 0x2, 0x2, 0x2, 
    0x33, 0x34, 0x5, 0x10, 0x9, 0x2, 0x34, 0x35, 0x5, 0x4, 0x3, 0x2, 0x35, 
    0x38, 0x3, 0x2, 0x2, 0x2, 0x36, 0x38, 0x3, 0x2, 0x2, 0x2, 0x37, 0x2e, 
    0x3, 0x2, 0x2, 0x2, 0x37, 0x30, 0x3, 0x2, 0x2, 0x2, 0x37, 0x33, 0x3, 
    0x2, 0x2, 0x2, 0x37, 0x36, 0x3, 0x2, 0x2, 0x2, 0x38, 0x5, 0x3, 0x2, 
    0x2, 0x2, 0x39, 0x3d, 0x7, 0x3, 0x2, 0x2, 0x3a, 0x3c, 0x5, 0x18, 0xd, 
    0x2, 0x3b, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3f, 0x3, 0x2, 0x2, 0x2, 
    0x3d, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x3e, 
    0x40, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x40, 0x41, 
    0x7, 0x4, 0x2, 0x2, 0x41, 0x7, 0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x7, 
    0x2c, 0x2, 0x2, 0x43, 0x48, 0x5, 0xa, 0x6, 0x2, 0x44, 0x45, 0x7, 0x5, 
    0x2, 0x2, 0x45, 0x47, 0x5, 0xa, 0x6, 0x2, 0x46, 0x44, 0x3, 0x2, 0x2, 
    0x2, 0x47, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x48, 0x46, 0x3, 0x2, 0x2, 0x2, 
    0x48, 0x49, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4a, 
    0x48, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4c, 0x7, 0x6, 0x2, 0x2, 0x4c, 0x9, 
    0x3, 0x2, 0x2, 0x2, 0x4d, 0x50, 0x5, 0xc, 0x7, 0x2, 0x4e, 0x50, 0x5, 
    0xe, 0x8, 0x2, 0x4f, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x4e, 0x3, 0x2, 
    0x2, 0x2, 0x50, 0xb, 0x3, 0x2, 0x2, 0x2, 0x51, 0x54, 0x7, 0x2d, 0x2, 
    0x2, 0x52, 0x53, 0x7, 0x7, 0x2, 0x2, 0x53, 0x55, 0x5, 0x1e, 0x10, 0x2, 
    0x54, 0x52, 0x3, 0x2, 0x2, 0x2, 0x54, 0x55, 0x3, 0x2, 0x2, 0x2, 0x55, 
    0xd, 0x3, 0x2, 0x2, 0x2, 0x56, 0x5c, 0x5, 0x24, 0x13, 0x2, 0x57, 0x58, 
    0x7, 0x7, 0x2, 0x2, 0x58, 0x59, 0x7, 0x3, 0x2, 0x2, 0x59, 0x5a, 0x5, 
    0x1c, 0xf, 0x2, 0x5a, 0x5b, 0x7, 0x4, 0x2, 0x2, 0x5b, 0x5d, 0x3, 0x2, 
    0x2, 0x2, 0x5c, 0x57, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x3, 0x2, 0x2, 
    0x2, 0x5d, 0xf, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5f, 0x7, 0x2c, 0x2, 0x2, 
    0x5f, 0x60, 0x7, 0x2d, 0x2, 0x2, 0x60, 0x62, 0x7, 0x8, 0x2, 0x2, 0x61, 
    0x63, 0x5, 0x12, 0xa, 0x2, 0x62, 0x61, 0x3, 0x2, 0x2, 0x2, 0x62, 0x63, 
    0x3, 0x2, 0x2, 0x2, 0x63, 0x64, 0x3, 0x2, 0x2, 0x2, 0x64, 0x65, 0x7, 
    0x9, 0x2, 0x2, 0x65, 0x66, 0x5, 0x6, 0x4, 0x2, 0x66, 0x11, 0x3, 0x2, 
    0x2, 0x2, 0x67, 0x6c, 0x5, 0x14, 0xb, 0x2, 0x68, 0x69, 0x7, 0x5, 0x2, 
    0x2, 0x69, 0x6b, 0x5, 0x14, 0xb, 0x2, 0x6a, 0x68, 0x3, 0x2, 0x2, 0x2, 
    0x6b, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x6c, 
    0x6d, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x13, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6c, 
    0x3, 0x2, 0x2, 0x2, 0x6f, 0x71, 0x7, 0x2c, 0x2, 0x2, 0x70, 0x72, 0x7, 
    0x2d, 0x2, 0x2, 0x71, 0x70, 0x3, 0x2, 0x2, 0x2, 0x71, 0x72, 0x3, 0x2, 
    0x2, 0x2, 0x72, 0x15, 0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 0x7, 0xa, 0x2, 
    0x2, 0x74, 0x75, 0x7, 0x8, 0x2, 0x2, 0x75, 0x76, 0x5, 0x1e, 0x10, 0x2, 
    0x76, 0x77, 0x7, 0x9, 0x2, 0x2, 0x77, 0x7a, 0x5, 0x18, 0xd, 0x2, 0x78, 
    0x79, 0x7, 0xb, 0x2, 0x2, 0x79, 0x7b, 0x5, 0x18, 0xd, 0x2, 0x7a, 0x78, 
    0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x83, 0x3, 
    0x2, 0x2, 0x2, 0x7c, 0x7d, 0x7, 0xc, 0x2, 0x2, 0x7d, 0x7e, 0x7, 0x8, 
    0x2, 0x2, 0x7e, 0x7f, 0x5, 0x1e, 0x10, 0x2, 0x7f, 0x80, 0x7, 0x9, 0x2, 
    0x2, 0x80, 0x81, 0x5, 0x18, 0xd, 0x2, 0x81, 0x83, 0x3, 0x2, 0x2, 0x2, 
    0x82, 0x73, 0x3, 0x2, 0x2, 0x2, 0x82, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x83, 
    0x17, 0x3, 0x2, 0x2, 0x2, 0x84, 0x8b, 0x5, 0x6, 0x4, 0x2, 0x85, 0x86, 
    0x5, 0x1e, 0x10, 0x2, 0x86, 0x87, 0x7, 0x6, 0x2, 0x2, 0x87, 0x8b, 0x3, 
    0x2, 0x2, 0x2, 0x88, 0x8b, 0x5, 0x8, 0x5, 0x2, 0x89, 0x8b, 0x5, 0x16, 
    0xc, 0x2, 0x8a, 0x84, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x85, 0x3, 0x2, 0x2, 
    0x2, 0x8a, 0x88, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x89, 0x3, 0x2, 0x2, 0x2, 
    0x8b, 0x19, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8f, 0x7, 0x2d, 0x2, 0x2, 0x8d, 
    0x8f, 0x5, 0x24, 0x13, 0x2, 0x8e, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8d, 
    0x3, 0x2, 0x2, 0x2, 0x8f, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x90, 0x95, 0x5, 
    0x1e, 0x10, 0x2, 0x91, 0x92, 0x7, 0x5, 0x2, 0x2, 0x92, 0x94, 0x5, 0x1e, 
    0x10, 0x2, 0x93, 0x91, 0x3, 0x2, 0x2, 0x2, 0x94, 0x97, 0x3, 0x2, 0x2, 
    0x2, 0x95, 0x93, 0x3, 0x2, 0x2, 0x2, 0x95, 0x96, 0x3, 0x2, 0x2, 0x2, 
    0x96, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x97, 0x95, 0x3, 0x2, 0x2, 0x2, 0x98, 
    0x9b, 0x5, 0x20, 0x11, 0x2, 0x99, 0x9b, 0x5, 0x22, 0x12, 0x2, 0x9a, 
    0x98, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x99, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x1f, 
    0x3, 0x2, 0x2, 0x2, 0x9c, 0x9d, 0x5, 0x1a, 0xe, 0x2, 0x9d, 0x9e, 0x5, 
    0x2a, 0x16, 0x2, 0x9e, 0x9f, 0x5, 0x20, 0x11, 0x2, 0x9f, 0xa5, 0x3, 
    0x2, 0x2, 0x2, 0xa0, 0xa1, 0x5, 0x1a, 0xe, 0x2, 0xa1, 0xa2, 0x5, 0x2a, 
    0x16, 0x2, 0xa2, 0xa3, 0x5, 0x22, 0x12, 0x2, 0xa3, 0xa5, 0x3, 0x2, 0x2, 
    0x2, 0xa4, 0x9c, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa0, 0x3, 0x2, 0x2, 0x2, 
    0xa5, 0x21, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa7, 0x8, 0x12, 0x1, 0x2, 0xa7, 
    0xa8, 0x7, 0x8, 0x2, 0x2, 0xa8, 0xa9, 0x5, 0x22, 0x12, 0x2, 0xa9, 0xaa, 
    0x7, 0x9, 0x2, 0x2, 0xaa, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xab, 0xac, 0x7, 
    0xd, 0x2, 0x2, 0xac, 0xb5, 0x5, 0x22, 0x12, 0x12, 0xad, 0xae, 0x7, 0xe, 
    0x2, 0x2, 0xae, 0xb5, 0x5, 0x22, 0x12, 0x11, 0xaf, 0xb0, 0x7, 0xf, 0x2, 
    0x2, 0xb0, 0xb5, 0x5, 0x22, 0x12, 0x10, 0xb1, 0xb5, 0x7, 0x27, 0x2, 
    0x2, 0xb2, 0xb5, 0x5, 0x1a, 0xe, 0x2, 0xb3, 0xb5, 0x5, 0x26, 0x14, 0x2, 
    0xb4, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xab, 0x3, 0x2, 0x2, 0x2, 0xb4, 
    0xad, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb1, 
    0x3, 0x2, 0x2, 0x2, 0xb4, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb3, 0x3, 
    0x2, 0x2, 0x2, 0xb5, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 0xc, 0xd, 
    0x2, 0x2, 0xb7, 0xb8, 0x7, 0x10, 0x2, 0x2, 0xb8, 0xd4, 0x5, 0x22, 0x12, 
    0xe, 0xb9, 0xba, 0xc, 0xc, 0x2, 0x2, 0xba, 0xbb, 0x7, 0x11, 0x2, 0x2, 
    0xbb, 0xd4, 0x5, 0x22, 0x12, 0xd, 0xbc, 0xbd, 0xc, 0xb, 0x2, 0x2, 0xbd, 
    0xbe, 0x7, 0x12, 0x2, 0x2, 0xbe, 0xd4, 0x5, 0x22, 0x12, 0xc, 0xbf, 0xc0, 
    0xc, 0xa, 0x2, 0x2, 0xc0, 0xc1, 0x7, 0x13, 0x2, 0x2, 0xc1, 0xd4, 0x5, 
    0x22, 0x12, 0xb, 0xc2, 0xc3, 0xc, 0x9, 0x2, 0x2, 0xc3, 0xc4, 0x7, 0x14, 
    0x2, 0x2, 0xc4, 0xd4, 0x5, 0x22, 0x12, 0xa, 0xc5, 0xc6, 0xc, 0x8, 0x2, 
    0x2, 0xc6, 0xc7, 0x7, 0x15, 0x2, 0x2, 0xc7, 0xd4, 0x5, 0x22, 0x12, 0x9, 
    0xc8, 0xc9, 0xc, 0x7, 0x2, 0x2, 0xc9, 0xca, 0x7, 0x16, 0x2, 0x2, 0xca, 
    0xd4, 0x5, 0x22, 0x12, 0x8, 0xcb, 0xcc, 0xc, 0x6, 0x2, 0x2, 0xcc, 0xcd, 
    0x5, 0x28, 0x15, 0x2, 0xcd, 0xce, 0x5, 0x22, 0x12, 0x7, 0xce, 0xd4, 
    0x3, 0x2, 0x2, 0x2, 0xcf, 0xd0, 0xc, 0xf, 0x2, 0x2, 0xd0, 0xd4, 0x7, 
    0xe, 0x2, 0x2, 0xd1, 0xd2, 0xc, 0xe, 0x2, 0x2, 0xd2, 0xd4, 0x7, 0xf, 
    0x2, 0x2, 0xd3, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xb9, 0x3, 0x2, 0x2, 
    0x2, 0xd3, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xbf, 0x3, 0x2, 0x2, 0x2, 
    0xd3, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xd3, 
    0xc8, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xcf, 
    0x3, 0x2, 0x2, 0x2, 0xd3, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd7, 0x3, 
    0x2, 0x2, 0x2, 0xd5, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd6, 0x3, 0x2, 
    0x2, 0x2, 0xd6, 0x23, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd5, 0x3, 0x2, 0x2, 
    0x2, 0xd8, 0xd9, 0x7, 0x2d, 0x2, 0x2, 0xd9, 0xda, 0x7, 0x17, 0x2, 0x2, 
    0xda, 0xdb, 0x5, 0x22, 0x12, 0x2, 0xdb, 0xdc, 0x7, 0x18, 0x2, 0x2, 0xdc, 
    0x25, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xde, 0x7, 0x2d, 0x2, 0x2, 0xde, 0xe0, 
    0x7, 0x8, 0x2, 0x2, 0xdf, 0xe1, 0x5, 0x1c, 0xf, 0x2, 0xe0, 0xdf, 0x3, 
    0x2, 0x2, 0x2, 0xe0, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xe2, 0x3, 0x2, 
    0x2, 0x2, 0xe2, 0xe3, 0x7, 0x9, 0x2, 0x2, 0xe3, 0x27, 0x3, 0x2, 0x2, 
    0x2, 0xe4, 0xe5, 0x9, 0x2, 0x2, 0x2, 0xe5, 0x29, 0x3, 0x2, 0x2, 0x2, 
    0xe6, 0xe7, 0x9, 0x3, 0x2, 0x2, 0xe7, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x16, 
    0x37, 0x3d, 0x48, 0x4f, 0x54, 0x5c, 0x62, 0x6c, 0x71, 0x7a, 0x82, 0x8a, 
    0x8e, 0x95, 0x9a, 0xa4, 0xb4, 0xd3, 0xd5, 0xe0, 
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
