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
		T__17=18, T__18=19, T__19=20, T__20=21, T__21=22, T__22=23, T__23=24, 
		T__24=25, T__25=26, T__26=27, T__27=28, T__28=29, T__29=30, T__30=31, 
		T__31=32, T__32=33, Include=34, InvariantInclude=35, Lib=36, Cst=37, PositiveInt=38, 
		Int=39, Char=40, String=41, Type=42, Var=43, WhiteSpace=44, NewLine=45, 
		BlockComment=46, LineComment=47, EOFT=48;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	public static final String[] ruleNames = {
		"T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
		"T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "T__15", "T__16", 
		"T__17", "T__18", "T__19", "T__20", "T__21", "T__22", "T__23", "T__24", 
		"T__25", "T__26", "T__27", "T__28", "T__29", "T__30", "T__31", "T__32", 
		"Include", "InvariantInclude", "Lib", "Cst", "PositiveInt", "Int", "Char", 
		"String", "Type", "Var", "WhiteSpace", "NewLine", "BlockComment", "LineComment", 
		"EOFT", "Digit", "Alpha", "AlphaNum"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'{'", "'}'", "','", "';'", "'='", "'('", "')'", "'if'", "'else '", 
		"'while'", "'!'", "'++'", "'--'", "'*'", "'/'", "'%'", "'+'", "'-'", "'&&'", 
		"'||'", "'['", "']'", "'<'", "'>'", "'<='", "'>='", "'=='", "'!='", "'+='", 
		"'-='", "'*='", "'/='", "'%='", null, "'#include'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, null, null, null, null, null, null, null, null, null, null, null, 
		null, null, null, null, null, null, null, null, null, null, null, null, 
		null, null, null, null, null, null, null, null, null, null, "Include", 
		"InvariantInclude", "Lib", "Cst", "PositiveInt", "Int", "Char", "String", 
		"Type", "Var", "WhiteSpace", "NewLine", "BlockComment", "LineComment", 
		"EOFT"
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\62\u0158\b\1\4\2"+
		"\t\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4"+
		"\13\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22"+
		"\t\22\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31"+
		"\t\31\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t"+
		" \4!\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t"+
		"+\4,\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\4\62\t\62\4\63\t\63\4\64"+
		"\t\64\3\2\3\2\3\3\3\3\3\4\3\4\3\5\3\5\3\6\3\6\3\7\3\7\3\b\3\b\3\t\3\t"+
		"\3\t\3\n\3\n\3\n\3\n\3\n\3\n\3\13\3\13\3\13\3\13\3\13\3\13\3\f\3\f\3\r"+
		"\3\r\3\r\3\16\3\16\3\16\3\17\3\17\3\20\3\20\3\21\3\21\3\22\3\22\3\23\3"+
		"\23\3\24\3\24\3\24\3\25\3\25\3\25\3\26\3\26\3\27\3\27\3\30\3\30\3\31\3"+
		"\31\3\32\3\32\3\32\3\33\3\33\3\33\3\34\3\34\3\34\3\35\3\35\3\35\3\36\3"+
		"\36\3\36\3\37\3\37\3\37\3 \3 \3 \3!\3!\3!\3\"\3\"\3\"\3#\3#\3#\3$\3$\3"+
		"$\3$\3$\3$\3$\3$\3$\3%\3%\7%\u00d0\n%\f%\16%\u00d3\13%\3%\3%\3%\7%\u00d8"+
		"\n%\f%\16%\u00db\13%\3%\5%\u00de\n%\3&\3&\3&\5&\u00e3\n&\3\'\6\'\u00e6"+
		"\n\'\r\'\16\'\u00e7\3(\5(\u00eb\n(\3(\3(\3)\3)\3)\3)\7)\u00f3\n)\f)\16"+
		")\u00f6\13)\5)\u00f8\n)\3)\3)\3*\3*\7*\u00fe\n*\f*\16*\u0101\13*\3*\3"+
		"*\3+\3+\3+\3+\3+\3+\3+\3+\3+\3+\3+\3+\3+\3+\3+\3+\3+\3+\3+\3+\3+\3+\5"+
		"+\u011b\n+\3,\3,\7,\u011f\n,\f,\16,\u0122\13,\3-\6-\u0125\n-\r-\16-\u0126"+
		"\3-\3-\3.\3.\5.\u012d\n.\3.\5.\u0130\n.\3.\3.\3/\3/\3/\3/\7/\u0138\n/"+
		"\f/\16/\u013b\13/\3/\3/\3/\3/\3/\3\60\3\60\3\60\3\60\7\60\u0146\n\60\f"+
		"\60\16\60\u0149\13\60\3\60\3\60\3\60\3\60\3\61\3\61\3\62\3\62\3\63\3\63"+
		"\3\64\3\64\5\64\u0157\n\64\b\u00d1\u00d9\u00f4\u00ff\u0139\u0147\2\65"+
		"\3\3\5\4\7\5\t\6\13\7\r\b\17\t\21\n\23\13\25\f\27\r\31\16\33\17\35\20"+
		"\37\21!\22#\23%\24\'\25)\26+\27-\30/\31\61\32\63\33\65\34\67\359\36;\37"+
		"= ?!A\"C#E$G%I&K\'M(O)Q*S+U,W-Y.[/]\60_\61a\62c\2e\2g\2\3\2\7\3\2))\3"+
		"\2^^\4\2\13\13\"\"\3\2\62;\5\2C\\aac|\2\u0168\2\3\3\2\2\2\2\5\3\2\2\2"+
		"\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\2\21\3"+
		"\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3\2\2\2\2\33\3\2\2"+
		"\2\2\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2\2\2#\3\2\2\2\2%\3\2\2\2\2\'\3\2"+
		"\2\2\2)\3\2\2\2\2+\3\2\2\2\2-\3\2\2\2\2/\3\2\2\2\2\61\3\2\2\2\2\63\3\2"+
		"\2\2\2\65\3\2\2\2\2\67\3\2\2\2\29\3\2\2\2\2;\3\2\2\2\2=\3\2\2\2\2?\3\2"+
		"\2\2\2A\3\2\2\2\2C\3\2\2\2\2E\3\2\2\2\2G\3\2\2\2\2I\3\2\2\2\2K\3\2\2\2"+
		"\2M\3\2\2\2\2O\3\2\2\2\2Q\3\2\2\2\2S\3\2\2\2\2U\3\2\2\2\2W\3\2\2\2\2Y"+
		"\3\2\2\2\2[\3\2\2\2\2]\3\2\2\2\2_\3\2\2\2\2a\3\2\2\2\3i\3\2\2\2\5k\3\2"+
		"\2\2\7m\3\2\2\2\to\3\2\2\2\13q\3\2\2\2\rs\3\2\2\2\17u\3\2\2\2\21w\3\2"+
		"\2\2\23z\3\2\2\2\25\u0080\3\2\2\2\27\u0086\3\2\2\2\31\u0088\3\2\2\2\33"+
		"\u008b\3\2\2\2\35\u008e\3\2\2\2\37\u0090\3\2\2\2!\u0092\3\2\2\2#\u0094"+
		"\3\2\2\2%\u0096\3\2\2\2\'\u0098\3\2\2\2)\u009b\3\2\2\2+\u009e\3\2\2\2"+
		"-\u00a0\3\2\2\2/\u00a2\3\2\2\2\61\u00a4\3\2\2\2\63\u00a6\3\2\2\2\65\u00a9"+
		"\3\2\2\2\67\u00ac\3\2\2\29\u00af\3\2\2\2;\u00b2\3\2\2\2=\u00b5\3\2\2\2"+
		"?\u00b8\3\2\2\2A\u00bb\3\2\2\2C\u00be\3\2\2\2E\u00c1\3\2\2\2G\u00c4\3"+
		"\2\2\2I\u00dd\3\2\2\2K\u00e2\3\2\2\2M\u00e5\3\2\2\2O\u00ea\3\2\2\2Q\u00ee"+
		"\3\2\2\2S\u00fb\3\2\2\2U\u011a\3\2\2\2W\u011c\3\2\2\2Y\u0124\3\2\2\2["+
		"\u012f\3\2\2\2]\u0133\3\2\2\2_\u0141\3\2\2\2a\u014e\3\2\2\2c\u0150\3\2"+
		"\2\2e\u0152\3\2\2\2g\u0156\3\2\2\2ij\7}\2\2j\4\3\2\2\2kl\7\177\2\2l\6"+
		"\3\2\2\2mn\7.\2\2n\b\3\2\2\2op\7=\2\2p\n\3\2\2\2qr\7?\2\2r\f\3\2\2\2s"+
		"t\7*\2\2t\16\3\2\2\2uv\7+\2\2v\20\3\2\2\2wx\7k\2\2xy\7h\2\2y\22\3\2\2"+
		"\2z{\7g\2\2{|\7n\2\2|}\7u\2\2}~\7g\2\2~\177\7\"\2\2\177\24\3\2\2\2\u0080"+
		"\u0081\7y\2\2\u0081\u0082\7j\2\2\u0082\u0083\7k\2\2\u0083\u0084\7n\2\2"+
		"\u0084\u0085\7g\2\2\u0085\26\3\2\2\2\u0086\u0087\7#\2\2\u0087\30\3\2\2"+
		"\2\u0088\u0089\7-\2\2\u0089\u008a\7-\2\2\u008a\32\3\2\2\2\u008b\u008c"+
		"\7/\2\2\u008c\u008d\7/\2\2\u008d\34\3\2\2\2\u008e\u008f\7,\2\2\u008f\36"+
		"\3\2\2\2\u0090\u0091\7\61\2\2\u0091 \3\2\2\2\u0092\u0093\7\'\2\2\u0093"+
		"\"\3\2\2\2\u0094\u0095\7-\2\2\u0095$\3\2\2\2\u0096\u0097\7/\2\2\u0097"+
		"&\3\2\2\2\u0098\u0099\7(\2\2\u0099\u009a\7(\2\2\u009a(\3\2\2\2\u009b\u009c"+
		"\7~\2\2\u009c\u009d\7~\2\2\u009d*\3\2\2\2\u009e\u009f\7]\2\2\u009f,\3"+
		"\2\2\2\u00a0\u00a1\7_\2\2\u00a1.\3\2\2\2\u00a2\u00a3\7>\2\2\u00a3\60\3"+
		"\2\2\2\u00a4\u00a5\7@\2\2\u00a5\62\3\2\2\2\u00a6\u00a7\7>\2\2\u00a7\u00a8"+
		"\7?\2\2\u00a8\64\3\2\2\2\u00a9\u00aa\7@\2\2\u00aa\u00ab\7?\2\2\u00ab\66"+
		"\3\2\2\2\u00ac\u00ad\7?\2\2\u00ad\u00ae\7?\2\2\u00ae8\3\2\2\2\u00af\u00b0"+
		"\7#\2\2\u00b0\u00b1\7?\2\2\u00b1:\3\2\2\2\u00b2\u00b3\7-\2\2\u00b3\u00b4"+
		"\7?\2\2\u00b4<\3\2\2\2\u00b5\u00b6\7/\2\2\u00b6\u00b7\7?\2\2\u00b7>\3"+
		"\2\2\2\u00b8\u00b9\7,\2\2\u00b9\u00ba\7?\2\2\u00ba@\3\2\2\2\u00bb\u00bc"+
		"\7\61\2\2\u00bc\u00bd\7?\2\2\u00bdB\3\2\2\2\u00be\u00bf\7\'\2\2\u00bf"+
		"\u00c0\7?\2\2\u00c0D\3\2\2\2\u00c1\u00c2\5G$\2\u00c2\u00c3\5I%\2\u00c3"+
		"F\3\2\2\2\u00c4\u00c5\7%\2\2\u00c5\u00c6\7k\2\2\u00c6\u00c7\7p\2\2\u00c7"+
		"\u00c8\7e\2\2\u00c8\u00c9\7n\2\2\u00c9\u00ca\7w\2\2\u00ca\u00cb\7f\2\2"+
		"\u00cb\u00cc\7g\2\2\u00ccH\3\2\2\2\u00cd\u00d1\7$\2\2\u00ce\u00d0\13\2"+
		"\2\2\u00cf\u00ce\3\2\2\2\u00d0\u00d3\3\2\2\2\u00d1\u00d2\3\2\2\2\u00d1"+
		"\u00cf\3\2\2\2\u00d2\u00d4\3\2\2\2\u00d3\u00d1\3\2\2\2\u00d4\u00de\7$"+
		"\2\2\u00d5\u00d9\7>\2\2\u00d6\u00d8\13\2\2\2\u00d7\u00d6\3\2\2\2\u00d8"+
		"\u00db\3\2\2\2\u00d9\u00da\3\2\2\2\u00d9\u00d7\3\2\2\2\u00da\u00dc\3\2"+
		"\2\2\u00db\u00d9\3\2\2\2\u00dc\u00de\7@\2\2\u00dd\u00cd\3\2\2\2\u00dd"+
		"\u00d5\3\2\2\2\u00deJ\3\2\2\2\u00df\u00e3\5O(\2\u00e0\u00e3\5S*\2\u00e1"+
		"\u00e3\5Q)\2\u00e2\u00df\3\2\2\2\u00e2\u00e0\3\2\2\2\u00e2\u00e1\3\2\2"+
		"\2\u00e3L\3\2\2\2\u00e4\u00e6\5c\62\2\u00e5\u00e4\3\2\2\2\u00e6\u00e7"+
		"\3\2\2\2\u00e7\u00e5\3\2\2\2\u00e7\u00e8\3\2\2\2\u00e8N\3\2\2\2\u00e9"+
		"\u00eb\7/\2\2\u00ea\u00e9\3\2\2\2\u00ea\u00eb\3\2\2\2\u00eb\u00ec\3\2"+
		"\2\2\u00ec\u00ed\5M\'\2\u00edP\3\2\2\2\u00ee\u00f7\t\2\2\2\u00ef\u00f8"+
		"\13\2\2\2\u00f0\u00f4\t\3\2\2\u00f1\u00f3\13\2\2\2\u00f2\u00f1\3\2\2\2"+
		"\u00f3\u00f6\3\2\2\2\u00f4\u00f5\3\2\2\2\u00f4\u00f2\3\2\2\2\u00f5\u00f8"+
		"\3\2\2\2\u00f6\u00f4\3\2\2\2\u00f7\u00ef\3\2\2\2\u00f7\u00f0\3\2\2\2\u00f8"+
		"\u00f9\3\2\2\2\u00f9\u00fa\t\2\2\2\u00faR\3\2\2\2\u00fb\u00ff\7$\2\2\u00fc"+
		"\u00fe\13\2\2\2\u00fd\u00fc\3\2\2\2\u00fe\u0101\3\2\2\2\u00ff\u0100\3"+
		"\2\2\2\u00ff\u00fd\3\2\2\2\u0100\u0102\3\2\2\2\u0101\u00ff\3\2\2\2\u0102"+
		"\u0103\7$\2\2\u0103T\3\2\2\2\u0104\u0105\7x\2\2\u0105\u0106\7q\2\2\u0106"+
		"\u0107\7k\2\2\u0107\u011b\7f\2\2\u0108\u0109\7e\2\2\u0109\u010a\7j\2\2"+
		"\u010a\u010b\7c\2\2\u010b\u011b\7t\2\2\u010c\u010d\7k\2\2\u010d\u010e"+
		"\7p\2\2\u010e\u010f\7v\2\2\u010f\u0110\7\65\2\2\u0110\u0111\7\64\2\2\u0111"+
		"\u0112\7a\2\2\u0112\u011b\7v\2\2\u0113\u0114\7k\2\2\u0114\u0115\7p\2\2"+
		"\u0115\u0116\7v\2\2\u0116\u0117\78\2\2\u0117\u0118\7\66\2\2\u0118\u0119"+
		"\7a\2\2\u0119\u011b\7v\2\2\u011a\u0104\3\2\2\2\u011a\u0108\3\2\2\2\u011a"+
		"\u010c\3\2\2\2\u011a\u0113\3\2\2\2\u011bV\3\2\2\2\u011c\u0120\5e\63\2"+
		"\u011d\u011f\5g\64\2\u011e\u011d\3\2\2\2\u011f\u0122\3\2\2\2\u0120\u011e"+
		"\3\2\2\2\u0120\u0121\3\2\2\2\u0121X\3\2\2\2\u0122\u0120\3\2\2\2\u0123"+
		"\u0125\t\4\2\2\u0124\u0123\3\2\2\2\u0125\u0126\3\2\2\2\u0126\u0124\3\2"+
		"\2\2\u0126\u0127\3\2\2\2\u0127\u0128\3\2\2\2\u0128\u0129\b-\2\2\u0129"+
		"Z\3\2\2\2\u012a\u012c\7\17\2\2\u012b\u012d\7\f\2\2\u012c\u012b\3\2\2\2"+
		"\u012c\u012d\3\2\2\2\u012d\u0130\3\2\2\2\u012e\u0130\7\f\2\2\u012f\u012a"+
		"\3\2\2\2\u012f\u012e\3\2\2\2\u0130\u0131\3\2\2\2\u0131\u0132\b.\2\2\u0132"+
		"\\\3\2\2\2\u0133\u0134\7\61\2\2\u0134\u0135\7,\2\2\u0135\u0139\3\2\2\2"+
		"\u0136\u0138\13\2\2\2\u0137\u0136\3\2\2\2\u0138\u013b\3\2\2\2\u0139\u013a"+
		"\3\2\2\2\u0139\u0137\3\2\2\2\u013a\u013c\3\2\2\2\u013b\u0139\3\2\2\2\u013c"+
		"\u013d\7,\2\2\u013d\u013e\7\61\2\2\u013e\u013f\3\2\2\2\u013f\u0140\b/"+
		"\2\2\u0140^\3\2\2\2\u0141\u0142\7\61\2\2\u0142\u0143\7\61\2\2\u0143\u0147"+
		"\3\2\2\2\u0144\u0146\13\2\2\2\u0145\u0144\3\2\2\2\u0146\u0149\3\2\2\2"+
		"\u0147\u0148\3\2\2\2\u0147\u0145\3\2\2\2\u0148\u014a\3\2\2\2\u0149\u0147"+
		"\3\2\2\2\u014a\u014b\5[.\2\u014b\u014c\3\2\2\2\u014c\u014d\b\60\2\2\u014d"+
		"`\3\2\2\2\u014e\u014f\7\2\2\3\u014fb\3\2\2\2\u0150\u0151\t\5\2\2\u0151"+
		"d\3\2\2\2\u0152\u0153\t\6\2\2\u0153f\3\2\2\2\u0154\u0157\5c\62\2\u0155"+
		"\u0157\5e\63\2\u0156\u0154\3\2\2\2\u0156\u0155\3\2\2\2\u0157h\3\2\2\2"+
		"\24\2\u00d1\u00d9\u00dd\u00e2\u00e7\u00ea\u00f4\u00f7\u00ff\u011a\u0120"+
		"\u0126\u012c\u012f\u0139\u0147\u0156\3\b\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}