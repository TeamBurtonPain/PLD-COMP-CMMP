// Generated from /home/doudou/Documents/INSA/4IF/PLD COMP/PLD-COMP-CMMP/cmmp.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class cmmpLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, T__10=11, T__11=12, T__12=13, T__13=14, T__14=15, T__15=16, T__16=17, 
		T__17=18, T__18=19, T__19=20, T__20=21, T__21=22, Include=23, InvariantInclude=24, 
		Lib=25, Cst=26, PositiveInt=27, Int=28, Char=29, String=30, Type=31, OpComparaison=32, 
		OpAffectation=33, Var=34, WhiteSpace=35, NewLine=36, BlockComment=37, 
		LineComment=38;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	public static final String[] ruleNames = {
		"T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
		"T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "T__15", "T__16", 
		"T__17", "T__18", "T__19", "T__20", "T__21", "Include", "InvariantInclude", 
		"Lib", "Cst", "PositiveInt", "Int", "Char", "String", "Type", "OpComparaison", 
		"OpAffectation", "Var", "WhiteSpace", "NewLine", "BlockComment", "LineComment", 
		"Digit", "Alpha", "AlphaNum"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'{'", "'}'", "','", "';'", "'='", "'('", "')'", "'if'", "'else '", 
		"'while'", "'!'", "'++'", "'--'", "'*'", "'/'", "'%'", "'+'", "'-'", "'&&'", 
		"'||'", "'['", "']'", null, "'#include'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, null, null, null, null, null, null, null, null, null, null, null, 
		null, null, null, null, null, null, null, null, null, null, null, "Include", 
		"InvariantInclude", "Lib", "Cst", "PositiveInt", "Int", "Char", "String", 
		"Type", "OpComparaison", "OpAffectation", "Var", "WhiteSpace", "NewLine", 
		"BlockComment", "LineComment"
	};
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}


	public cmmpLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "cmmp.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2(\u0139\b\1\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\3\2\3\2"+
		"\3\3\3\3\3\4\3\4\3\5\3\5\3\6\3\6\3\7\3\7\3\b\3\b\3\t\3\t\3\t\3\n\3\n\3"+
		"\n\3\n\3\n\3\n\3\13\3\13\3\13\3\13\3\13\3\13\3\f\3\f\3\r\3\r\3\r\3\16"+
		"\3\16\3\16\3\17\3\17\3\20\3\20\3\21\3\21\3\22\3\22\3\23\3\23\3\24\3\24"+
		"\3\24\3\25\3\25\3\25\3\26\3\26\3\27\3\27\3\30\3\30\3\30\3\31\3\31\3\31"+
		"\3\31\3\31\3\31\3\31\3\31\3\31\3\32\3\32\7\32\u009d\n\32\f\32\16\32\u00a0"+
		"\13\32\3\32\3\32\3\32\7\32\u00a5\n\32\f\32\16\32\u00a8\13\32\3\32\5\32"+
		"\u00ab\n\32\3\33\3\33\3\33\5\33\u00b0\n\33\3\34\6\34\u00b3\n\34\r\34\16"+
		"\34\u00b4\3\35\5\35\u00b8\n\35\3\35\3\35\3\36\3\36\3\36\3\36\5\36\u00c0"+
		"\n\36\3\36\5\36\u00c3\n\36\3\36\3\36\3\37\3\37\7\37\u00c9\n\37\f\37\16"+
		"\37\u00cc\13\37\3\37\3\37\3 \3 \3 \3 \3 \3 \3 \3 \3 \3 \3 \3 \3 \3 \3"+
		" \3 \3 \3 \3 \3 \3 \3 \5 \u00e6\n \3!\3!\3!\3!\3!\3!\3!\3!\3!\5!\u00f1"+
		"\n!\3\"\3\"\3\"\3\"\3\"\3\"\3\"\3\"\3\"\3\"\3\"\5\"\u00fe\n\"\3#\3#\7"+
		"#\u0102\n#\f#\16#\u0105\13#\3$\6$\u0108\n$\r$\16$\u0109\3$\3$\3%\3%\5"+
		"%\u0110\n%\3%\5%\u0113\n%\3%\3%\3&\3&\3&\3&\7&\u011b\n&\f&\16&\u011e\13"+
		"&\3&\3&\3&\3&\3&\3\'\3\'\3\'\3\'\7\'\u0129\n\'\f\'\16\'\u012c\13\'\3\'"+
		"\3\'\3\'\3\'\3(\3(\3)\3)\3*\3*\5*\u0138\n*\7\u009e\u00a6\u00ca\u011c\u012a"+
		"\2+\3\3\5\4\7\5\t\6\13\7\r\b\17\t\21\n\23\13\25\f\27\r\31\16\33\17\35"+
		"\20\37\21!\22#\23%\24\'\25)\26+\27-\30/\31\61\32\63\33\65\34\67\359\36"+
		";\37= ?!A\"C#E$G%I&K\'M(O\2Q\2S\2\3\2\t\3\2))\3\2^^\7\2))^^ppttvv\4\2"+
		">>@@\4\2\13\13\"\"\3\2\62;\5\2C\\aac|\2\u0152\2\3\3\2\2\2\2\5\3\2\2\2"+
		"\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\2\21\3"+
		"\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3\2\2\2\2\33\3\2\2"+
		"\2\2\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2\2\2#\3\2\2\2\2%\3\2\2\2\2\'\3\2"+
		"\2\2\2)\3\2\2\2\2+\3\2\2\2\2-\3\2\2\2\2/\3\2\2\2\2\61\3\2\2\2\2\63\3\2"+
		"\2\2\2\65\3\2\2\2\2\67\3\2\2\2\29\3\2\2\2\2;\3\2\2\2\2=\3\2\2\2\2?\3\2"+
		"\2\2\2A\3\2\2\2\2C\3\2\2\2\2E\3\2\2\2\2G\3\2\2\2\2I\3\2\2\2\2K\3\2\2\2"+
		"\2M\3\2\2\2\3U\3\2\2\2\5W\3\2\2\2\7Y\3\2\2\2\t[\3\2\2\2\13]\3\2\2\2\r"+
		"_\3\2\2\2\17a\3\2\2\2\21c\3\2\2\2\23f\3\2\2\2\25l\3\2\2\2\27r\3\2\2\2"+
		"\31t\3\2\2\2\33w\3\2\2\2\35z\3\2\2\2\37|\3\2\2\2!~\3\2\2\2#\u0080\3\2"+
		"\2\2%\u0082\3\2\2\2\'\u0084\3\2\2\2)\u0087\3\2\2\2+\u008a\3\2\2\2-\u008c"+
		"\3\2\2\2/\u008e\3\2\2\2\61\u0091\3\2\2\2\63\u00aa\3\2\2\2\65\u00af\3\2"+
		"\2\2\67\u00b2\3\2\2\29\u00b7\3\2\2\2;\u00bb\3\2\2\2=\u00c6\3\2\2\2?\u00e5"+
		"\3\2\2\2A\u00f0\3\2\2\2C\u00fd\3\2\2\2E\u00ff\3\2\2\2G\u0107\3\2\2\2I"+
		"\u0112\3\2\2\2K\u0116\3\2\2\2M\u0124\3\2\2\2O\u0131\3\2\2\2Q\u0133\3\2"+
		"\2\2S\u0137\3\2\2\2UV\7}\2\2V\4\3\2\2\2WX\7\177\2\2X\6\3\2\2\2YZ\7.\2"+
		"\2Z\b\3\2\2\2[\\\7=\2\2\\\n\3\2\2\2]^\7?\2\2^\f\3\2\2\2_`\7*\2\2`\16\3"+
		"\2\2\2ab\7+\2\2b\20\3\2\2\2cd\7k\2\2de\7h\2\2e\22\3\2\2\2fg\7g\2\2gh\7"+
		"n\2\2hi\7u\2\2ij\7g\2\2jk\7\"\2\2k\24\3\2\2\2lm\7y\2\2mn\7j\2\2no\7k\2"+
		"\2op\7n\2\2pq\7g\2\2q\26\3\2\2\2rs\7#\2\2s\30\3\2\2\2tu\7-\2\2uv\7-\2"+
		"\2v\32\3\2\2\2wx\7/\2\2xy\7/\2\2y\34\3\2\2\2z{\7,\2\2{\36\3\2\2\2|}\7"+
		"\61\2\2} \3\2\2\2~\177\7\'\2\2\177\"\3\2\2\2\u0080\u0081\7-\2\2\u0081"+
		"$\3\2\2\2\u0082\u0083\7/\2\2\u0083&\3\2\2\2\u0084\u0085\7(\2\2\u0085\u0086"+
		"\7(\2\2\u0086(\3\2\2\2\u0087\u0088\7~\2\2\u0088\u0089\7~\2\2\u0089*\3"+
		"\2\2\2\u008a\u008b\7]\2\2\u008b,\3\2\2\2\u008c\u008d\7_\2\2\u008d.\3\2"+
		"\2\2\u008e\u008f\5\61\31\2\u008f\u0090\5\63\32\2\u0090\60\3\2\2\2\u0091"+
		"\u0092\7%\2\2\u0092\u0093\7k\2\2\u0093\u0094\7p\2\2\u0094\u0095\7e\2\2"+
		"\u0095\u0096\7n\2\2\u0096\u0097\7w\2\2\u0097\u0098\7f\2\2\u0098\u0099"+
		"\7g\2\2\u0099\62\3\2\2\2\u009a\u009e\7$\2\2\u009b\u009d\13\2\2\2\u009c"+
		"\u009b\3\2\2\2\u009d\u00a0\3\2\2\2\u009e\u009f\3\2\2\2\u009e\u009c\3\2"+
		"\2\2\u009f\u00a1\3\2\2\2\u00a0\u009e\3\2\2\2\u00a1\u00ab\7$\2\2\u00a2"+
		"\u00a6\7>\2\2\u00a3\u00a5\13\2\2\2\u00a4\u00a3\3\2\2\2\u00a5\u00a8\3\2"+
		"\2\2\u00a6\u00a7\3\2\2\2\u00a6\u00a4\3\2\2\2\u00a7\u00a9\3\2\2\2\u00a8"+
		"\u00a6\3\2\2\2\u00a9\u00ab\7@\2\2\u00aa\u009a\3\2\2\2\u00aa\u00a2\3\2"+
		"\2\2\u00ab\64\3\2\2\2\u00ac\u00b0\59\35\2\u00ad\u00b0\5=\37\2\u00ae\u00b0"+
		"\5;\36\2\u00af\u00ac\3\2\2\2\u00af\u00ad\3\2\2\2\u00af\u00ae\3\2\2\2\u00b0"+
		"\66\3\2\2\2\u00b1\u00b3\5O(\2\u00b2\u00b1\3\2\2\2\u00b3\u00b4\3\2\2\2"+
		"\u00b4\u00b2\3\2\2\2\u00b4\u00b5\3\2\2\2\u00b58\3\2\2\2\u00b6\u00b8\7"+
		"/\2\2\u00b7\u00b6\3\2\2\2\u00b7\u00b8\3\2\2\2\u00b8\u00b9\3\2\2\2\u00b9"+
		"\u00ba\5\67\34\2\u00ba:\3\2\2\2\u00bb\u00c2\t\2\2\2\u00bc\u00bf\t\3\2"+
		"\2\u00bd\u00c0\t\4\2\2\u00be\u00c0\5\67\34\2\u00bf\u00bd\3\2\2\2\u00bf"+
		"\u00be\3\2\2\2\u00c0\u00c3\3\2\2\2\u00c1\u00c3\13\2\2\2\u00c2\u00bc\3"+
		"\2\2\2\u00c2\u00c1\3\2\2\2\u00c3\u00c4\3\2\2\2\u00c4\u00c5\t\2\2\2\u00c5"+
		"<\3\2\2\2\u00c6\u00ca\7$\2\2\u00c7\u00c9\13\2\2\2\u00c8\u00c7\3\2\2\2"+
		"\u00c9\u00cc\3\2\2\2\u00ca\u00cb\3\2\2\2\u00ca\u00c8\3\2\2\2\u00cb\u00cd"+
		"\3\2\2\2\u00cc\u00ca\3\2\2\2\u00cd\u00ce\7$\2\2\u00ce>\3\2\2\2\u00cf\u00d0"+
		"\7x\2\2\u00d0\u00d1\7q\2\2\u00d1\u00d2\7k\2\2\u00d2\u00e6\7f\2\2\u00d3"+
		"\u00d4\7e\2\2\u00d4\u00d5\7j\2\2\u00d5\u00d6\7c\2\2\u00d6\u00e6\7t\2\2"+
		"\u00d7\u00d8\7k\2\2\u00d8\u00d9\7p\2\2\u00d9\u00da\7v\2\2\u00da\u00db"+
		"\7\65\2\2\u00db\u00dc\7\64\2\2\u00dc\u00dd\7a\2\2\u00dd\u00e6\7v\2\2\u00de"+
		"\u00df\7k\2\2\u00df\u00e0\7p\2\2\u00e0\u00e1\7v\2\2\u00e1\u00e2\78\2\2"+
		"\u00e2\u00e3\7\66\2\2\u00e3\u00e4\7a\2\2\u00e4\u00e6\7v\2\2\u00e5\u00cf"+
		"\3\2\2\2\u00e5\u00d3\3\2\2\2\u00e5\u00d7\3\2\2\2\u00e5\u00de\3\2\2\2\u00e6"+
		"@\3\2\2\2\u00e7\u00f1\t\5\2\2\u00e8\u00e9\7>\2\2\u00e9\u00f1\7?\2\2\u00ea"+
		"\u00eb\7@\2\2\u00eb\u00f1\7?\2\2\u00ec\u00ed\7?\2\2\u00ed\u00f1\7?\2\2"+
		"\u00ee\u00ef\7#\2\2\u00ef\u00f1\7?\2\2\u00f0\u00e7\3\2\2\2\u00f0\u00e8"+
		"\3\2\2\2\u00f0\u00ea\3\2\2\2\u00f0\u00ec\3\2\2\2\u00f0\u00ee\3\2\2\2\u00f1"+
		"B\3\2\2\2\u00f2\u00fe\7?\2\2\u00f3\u00f4\7-\2\2\u00f4\u00fe\7?\2\2\u00f5"+
		"\u00f6\7/\2\2\u00f6\u00fe\7?\2\2\u00f7\u00f8\7,\2\2\u00f8\u00fe\7?\2\2"+
		"\u00f9\u00fa\7\61\2\2\u00fa\u00fe\7?\2\2\u00fb\u00fc\7\'\2\2\u00fc\u00fe"+
		"\7?\2\2\u00fd\u00f2\3\2\2\2\u00fd\u00f3\3\2\2\2\u00fd\u00f5\3\2\2\2\u00fd"+
		"\u00f7\3\2\2\2\u00fd\u00f9\3\2\2\2\u00fd\u00fb\3\2\2\2\u00feD\3\2\2\2"+
		"\u00ff\u0103\5Q)\2\u0100\u0102\5S*\2\u0101\u0100\3\2\2\2\u0102\u0105\3"+
		"\2\2\2\u0103\u0101\3\2\2\2\u0103\u0104\3\2\2\2\u0104F\3\2\2\2\u0105\u0103"+
		"\3\2\2\2\u0106\u0108\t\6\2\2\u0107\u0106\3\2\2\2\u0108\u0109\3\2\2\2\u0109"+
		"\u0107\3\2\2\2\u0109\u010a\3\2\2\2\u010a\u010b\3\2\2\2\u010b\u010c\b$"+
		"\2\2\u010cH\3\2\2\2\u010d\u010f\7\17\2\2\u010e\u0110\7\f\2\2\u010f\u010e"+
		"\3\2\2\2\u010f\u0110\3\2\2\2\u0110\u0113\3\2\2\2\u0111\u0113\7\f\2\2\u0112"+
		"\u010d\3\2\2\2\u0112\u0111\3\2\2\2\u0113\u0114\3\2\2\2\u0114\u0115\b%"+
		"\2\2\u0115J\3\2\2\2\u0116\u0117\7\61\2\2\u0117\u0118\7,\2\2\u0118\u011c"+
		"\3\2\2\2\u0119\u011b\13\2\2\2\u011a\u0119\3\2\2\2\u011b\u011e\3\2\2\2"+
		"\u011c\u011d\3\2\2\2\u011c\u011a\3\2\2\2\u011d\u011f\3\2\2\2\u011e\u011c"+
		"\3\2\2\2\u011f\u0120\7,\2\2\u0120\u0121\7\61\2\2\u0121\u0122\3\2\2\2\u0122"+
		"\u0123\b&\2\2\u0123L\3\2\2\2\u0124\u0125\7\61\2\2\u0125\u0126\7\61\2\2"+
		"\u0126\u012a\3\2\2\2\u0127\u0129\13\2\2\2\u0128\u0127\3\2\2\2\u0129\u012c"+
		"\3\2\2\2\u012a\u012b\3\2\2\2\u012a\u0128\3\2\2\2\u012b\u012d\3\2\2\2\u012c"+
		"\u012a\3\2\2\2\u012d\u012e\5I%\2\u012e\u012f\3\2\2\2\u012f\u0130\b\'\2"+
		"\2\u0130N\3\2\2\2\u0131\u0132\t\7\2\2\u0132P\3\2\2\2\u0133\u0134\t\b\2"+
		"\2\u0134R\3\2\2\2\u0135\u0138\5O(\2\u0136\u0138\5Q)\2\u0137\u0135\3\2"+
		"\2\2\u0137\u0136\3\2\2\2\u0138T\3\2\2\2\26\2\u009e\u00a6\u00aa\u00af\u00b4"+
		"\u00b7\u00bf\u00c2\u00ca\u00e5\u00f0\u00fd\u0103\u0109\u010f\u0112\u011c"+
		"\u012a\u0137\3\b\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}