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
		BlockComment=46, LineComment=47;
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
		"Digit", "Alpha", "AlphaNum"
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
		"Type", "Var", "WhiteSpace", "NewLine", "BlockComment", "LineComment"
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\61\u0154\b\1\4\2"+
		"\t\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4"+
		"\13\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22"+
		"\t\22\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31"+
		"\t\31\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t"+
		" \4!\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t"+
		"+\4,\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\4\62\t\62\4\63\t\63\3\2"+
		"\3\2\3\3\3\3\3\4\3\4\3\5\3\5\3\6\3\6\3\7\3\7\3\b\3\b\3\t\3\t\3\t\3\n\3"+
		"\n\3\n\3\n\3\n\3\n\3\13\3\13\3\13\3\13\3\13\3\13\3\f\3\f\3\r\3\r\3\r\3"+
		"\16\3\16\3\16\3\17\3\17\3\20\3\20\3\21\3\21\3\22\3\22\3\23\3\23\3\24\3"+
		"\24\3\24\3\25\3\25\3\25\3\26\3\26\3\27\3\27\3\30\3\30\3\31\3\31\3\32\3"+
		"\32\3\32\3\33\3\33\3\33\3\34\3\34\3\34\3\35\3\35\3\35\3\36\3\36\3\36\3"+
		"\37\3\37\3\37\3 \3 \3 \3!\3!\3!\3\"\3\"\3\"\3#\3#\3#\3$\3$\3$\3$\3$\3"+
		"$\3$\3$\3$\3%\3%\7%\u00ce\n%\f%\16%\u00d1\13%\3%\3%\3%\7%\u00d6\n%\f%"+
		"\16%\u00d9\13%\3%\5%\u00dc\n%\3&\3&\3&\5&\u00e1\n&\3\'\6\'\u00e4\n\'\r"+
		"\'\16\'\u00e5\3(\5(\u00e9\n(\3(\3(\3)\3)\3)\3)\7)\u00f1\n)\f)\16)\u00f4"+
		"\13)\5)\u00f6\n)\3)\3)\3*\3*\7*\u00fc\n*\f*\16*\u00ff\13*\3*\3*\3+\3+"+
		"\3+\3+\3+\3+\3+\3+\3+\3+\3+\3+\3+\3+\3+\3+\3+\3+\3+\3+\3+\3+\5+\u0119"+
		"\n+\3,\3,\7,\u011d\n,\f,\16,\u0120\13,\3-\6-\u0123\n-\r-\16-\u0124\3-"+
		"\3-\3.\3.\5.\u012b\n.\3.\5.\u012e\n.\3.\3.\3/\3/\3/\3/\7/\u0136\n/\f/"+
		"\16/\u0139\13/\3/\3/\3/\3/\3/\3\60\3\60\3\60\3\60\7\60\u0144\n\60\f\60"+
		"\16\60\u0147\13\60\3\60\3\60\3\60\3\60\3\61\3\61\3\62\3\62\3\63\3\63\5"+
		"\63\u0153\n\63\b\u00cf\u00d7\u00f2\u00fd\u0137\u0145\2\64\3\3\5\4\7\5"+
		"\t\6\13\7\r\b\17\t\21\n\23\13\25\f\27\r\31\16\33\17\35\20\37\21!\22#\23"+
		"%\24\'\25)\26+\27-\30/\31\61\32\63\33\65\34\67\359\36;\37= ?!A\"C#E$G"+
		"%I&K\'M(O)Q*S+U,W-Y.[/]\60_\61a\2c\2e\2\3\2\7\3\2))\3\2^^\4\2\13\13\""+
		"\"\3\2\62;\5\2C\\aac|\2\u0164\2\3\3\2\2\2\2\5\3\2\2\2\2\7\3\2\2\2\2\t"+
		"\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\2\21\3\2\2\2\2\23\3\2\2"+
		"\2\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3\2\2\2\2\33\3\2\2\2\2\35\3\2\2\2\2"+
		"\37\3\2\2\2\2!\3\2\2\2\2#\3\2\2\2\2%\3\2\2\2\2\'\3\2\2\2\2)\3\2\2\2\2"+
		"+\3\2\2\2\2-\3\2\2\2\2/\3\2\2\2\2\61\3\2\2\2\2\63\3\2\2\2\2\65\3\2\2\2"+
		"\2\67\3\2\2\2\29\3\2\2\2\2;\3\2\2\2\2=\3\2\2\2\2?\3\2\2\2\2A\3\2\2\2\2"+
		"C\3\2\2\2\2E\3\2\2\2\2G\3\2\2\2\2I\3\2\2\2\2K\3\2\2\2\2M\3\2\2\2\2O\3"+
		"\2\2\2\2Q\3\2\2\2\2S\3\2\2\2\2U\3\2\2\2\2W\3\2\2\2\2Y\3\2\2\2\2[\3\2\2"+
		"\2\2]\3\2\2\2\2_\3\2\2\2\3g\3\2\2\2\5i\3\2\2\2\7k\3\2\2\2\tm\3\2\2\2\13"+
		"o\3\2\2\2\rq\3\2\2\2\17s\3\2\2\2\21u\3\2\2\2\23x\3\2\2\2\25~\3\2\2\2\27"+
		"\u0084\3\2\2\2\31\u0086\3\2\2\2\33\u0089\3\2\2\2\35\u008c\3\2\2\2\37\u008e"+
		"\3\2\2\2!\u0090\3\2\2\2#\u0092\3\2\2\2%\u0094\3\2\2\2\'\u0096\3\2\2\2"+
		")\u0099\3\2\2\2+\u009c\3\2\2\2-\u009e\3\2\2\2/\u00a0\3\2\2\2\61\u00a2"+
		"\3\2\2\2\63\u00a4\3\2\2\2\65\u00a7\3\2\2\2\67\u00aa\3\2\2\29\u00ad\3\2"+
		"\2\2;\u00b0\3\2\2\2=\u00b3\3\2\2\2?\u00b6\3\2\2\2A\u00b9\3\2\2\2C\u00bc"+
		"\3\2\2\2E\u00bf\3\2\2\2G\u00c2\3\2\2\2I\u00db\3\2\2\2K\u00e0\3\2\2\2M"+
		"\u00e3\3\2\2\2O\u00e8\3\2\2\2Q\u00ec\3\2\2\2S\u00f9\3\2\2\2U\u0118\3\2"+
		"\2\2W\u011a\3\2\2\2Y\u0122\3\2\2\2[\u012d\3\2\2\2]\u0131\3\2\2\2_\u013f"+
		"\3\2\2\2a\u014c\3\2\2\2c\u014e\3\2\2\2e\u0152\3\2\2\2gh\7}\2\2h\4\3\2"+
		"\2\2ij\7\177\2\2j\6\3\2\2\2kl\7.\2\2l\b\3\2\2\2mn\7=\2\2n\n\3\2\2\2op"+
		"\7?\2\2p\f\3\2\2\2qr\7*\2\2r\16\3\2\2\2st\7+\2\2t\20\3\2\2\2uv\7k\2\2"+
		"vw\7h\2\2w\22\3\2\2\2xy\7g\2\2yz\7n\2\2z{\7u\2\2{|\7g\2\2|}\7\"\2\2}\24"+
		"\3\2\2\2~\177\7y\2\2\177\u0080\7j\2\2\u0080\u0081\7k\2\2\u0081\u0082\7"+
		"n\2\2\u0082\u0083\7g\2\2\u0083\26\3\2\2\2\u0084\u0085\7#\2\2\u0085\30"+
		"\3\2\2\2\u0086\u0087\7-\2\2\u0087\u0088\7-\2\2\u0088\32\3\2\2\2\u0089"+
		"\u008a\7/\2\2\u008a\u008b\7/\2\2\u008b\34\3\2\2\2\u008c\u008d\7,\2\2\u008d"+
		"\36\3\2\2\2\u008e\u008f\7\61\2\2\u008f \3\2\2\2\u0090\u0091\7\'\2\2\u0091"+
		"\"\3\2\2\2\u0092\u0093\7-\2\2\u0093$\3\2\2\2\u0094\u0095\7/\2\2\u0095"+
		"&\3\2\2\2\u0096\u0097\7(\2\2\u0097\u0098\7(\2\2\u0098(\3\2\2\2\u0099\u009a"+
		"\7~\2\2\u009a\u009b\7~\2\2\u009b*\3\2\2\2\u009c\u009d\7]\2\2\u009d,\3"+
		"\2\2\2\u009e\u009f\7_\2\2\u009f.\3\2\2\2\u00a0\u00a1\7>\2\2\u00a1\60\3"+
		"\2\2\2\u00a2\u00a3\7@\2\2\u00a3\62\3\2\2\2\u00a4\u00a5\7>\2\2\u00a5\u00a6"+
		"\7?\2\2\u00a6\64\3\2\2\2\u00a7\u00a8\7@\2\2\u00a8\u00a9\7?\2\2\u00a9\66"+
		"\3\2\2\2\u00aa\u00ab\7?\2\2\u00ab\u00ac\7?\2\2\u00ac8\3\2\2\2\u00ad\u00ae"+
		"\7#\2\2\u00ae\u00af\7?\2\2\u00af:\3\2\2\2\u00b0\u00b1\7-\2\2\u00b1\u00b2"+
		"\7?\2\2\u00b2<\3\2\2\2\u00b3\u00b4\7/\2\2\u00b4\u00b5\7?\2\2\u00b5>\3"+
		"\2\2\2\u00b6\u00b7\7,\2\2\u00b7\u00b8\7?\2\2\u00b8@\3\2\2\2\u00b9\u00ba"+
		"\7\61\2\2\u00ba\u00bb\7?\2\2\u00bbB\3\2\2\2\u00bc\u00bd\7\'\2\2\u00bd"+
		"\u00be\7?\2\2\u00beD\3\2\2\2\u00bf\u00c0\5G$\2\u00c0\u00c1\5I%\2\u00c1"+
		"F\3\2\2\2\u00c2\u00c3\7%\2\2\u00c3\u00c4\7k\2\2\u00c4\u00c5\7p\2\2\u00c5"+
		"\u00c6\7e\2\2\u00c6\u00c7\7n\2\2\u00c7\u00c8\7w\2\2\u00c8\u00c9\7f\2\2"+
		"\u00c9\u00ca\7g\2\2\u00caH\3\2\2\2\u00cb\u00cf\7$\2\2\u00cc\u00ce\13\2"+
		"\2\2\u00cd\u00cc\3\2\2\2\u00ce\u00d1\3\2\2\2\u00cf\u00d0\3\2\2\2\u00cf"+
		"\u00cd\3\2\2\2\u00d0\u00d2\3\2\2\2\u00d1\u00cf\3\2\2\2\u00d2\u00dc\7$"+
		"\2\2\u00d3\u00d7\7>\2\2\u00d4\u00d6\13\2\2\2\u00d5\u00d4\3\2\2\2\u00d6"+
		"\u00d9\3\2\2\2\u00d7\u00d8\3\2\2\2\u00d7\u00d5\3\2\2\2\u00d8\u00da\3\2"+
		"\2\2\u00d9\u00d7\3\2\2\2\u00da\u00dc\7@\2\2\u00db\u00cb\3\2\2\2\u00db"+
		"\u00d3\3\2\2\2\u00dcJ\3\2\2\2\u00dd\u00e1\5O(\2\u00de\u00e1\5S*\2\u00df"+
		"\u00e1\5Q)\2\u00e0\u00dd\3\2\2\2\u00e0\u00de\3\2\2\2\u00e0\u00df\3\2\2"+
		"\2\u00e1L\3\2\2\2\u00e2\u00e4\5a\61\2\u00e3\u00e2\3\2\2\2\u00e4\u00e5"+
		"\3\2\2\2\u00e5\u00e3\3\2\2\2\u00e5\u00e6\3\2\2\2\u00e6N\3\2\2\2\u00e7"+
		"\u00e9\7/\2\2\u00e8\u00e7\3\2\2\2\u00e8\u00e9\3\2\2\2\u00e9\u00ea\3\2"+
		"\2\2\u00ea\u00eb\5M\'\2\u00ebP\3\2\2\2\u00ec\u00f5\t\2\2\2\u00ed\u00f6"+
		"\13\2\2\2\u00ee\u00f2\t\3\2\2\u00ef\u00f1\13\2\2\2\u00f0\u00ef\3\2\2\2"+
		"\u00f1\u00f4\3\2\2\2\u00f2\u00f3\3\2\2\2\u00f2\u00f0\3\2\2\2\u00f3\u00f6"+
		"\3\2\2\2\u00f4\u00f2\3\2\2\2\u00f5\u00ed\3\2\2\2\u00f5\u00ee\3\2\2\2\u00f6"+
		"\u00f7\3\2\2\2\u00f7\u00f8\t\2\2\2\u00f8R\3\2\2\2\u00f9\u00fd\7$\2\2\u00fa"+
		"\u00fc\13\2\2\2\u00fb\u00fa\3\2\2\2\u00fc\u00ff\3\2\2\2\u00fd\u00fe\3"+
		"\2\2\2\u00fd\u00fb\3\2\2\2\u00fe\u0100\3\2\2\2\u00ff\u00fd\3\2\2\2\u0100"+
		"\u0101\7$\2\2\u0101T\3\2\2\2\u0102\u0103\7x\2\2\u0103\u0104\7q\2\2\u0104"+
		"\u0105\7k\2\2\u0105\u0119\7f\2\2\u0106\u0107\7e\2\2\u0107\u0108\7j\2\2"+
		"\u0108\u0109\7c\2\2\u0109\u0119\7t\2\2\u010a\u010b\7k\2\2\u010b\u010c"+
		"\7p\2\2\u010c\u010d\7v\2\2\u010d\u010e\7\65\2\2\u010e\u010f\7\64\2\2\u010f"+
		"\u0110\7a\2\2\u0110\u0119\7v\2\2\u0111\u0112\7k\2\2\u0112\u0113\7p\2\2"+
		"\u0113\u0114\7v\2\2\u0114\u0115\78\2\2\u0115\u0116\7\66\2\2\u0116\u0117"+
		"\7a\2\2\u0117\u0119\7v\2\2\u0118\u0102\3\2\2\2\u0118\u0106\3\2\2\2\u0118"+
		"\u010a\3\2\2\2\u0118\u0111\3\2\2\2\u0119V\3\2\2\2\u011a\u011e\5c\62\2"+
		"\u011b\u011d\5e\63\2\u011c\u011b\3\2\2\2\u011d\u0120\3\2\2\2\u011e\u011c"+
		"\3\2\2\2\u011e\u011f\3\2\2\2\u011fX\3\2\2\2\u0120\u011e\3\2\2\2\u0121"+
		"\u0123\t\4\2\2\u0122\u0121\3\2\2\2\u0123\u0124\3\2\2\2\u0124\u0122\3\2"+
		"\2\2\u0124\u0125\3\2\2\2\u0125\u0126\3\2\2\2\u0126\u0127\b-\2\2\u0127"+
		"Z\3\2\2\2\u0128\u012a\7\17\2\2\u0129\u012b\7\f\2\2\u012a\u0129\3\2\2\2"+
		"\u012a\u012b\3\2\2\2\u012b\u012e\3\2\2\2\u012c\u012e\7\f\2\2\u012d\u0128"+
		"\3\2\2\2\u012d\u012c\3\2\2\2\u012e\u012f\3\2\2\2\u012f\u0130\b.\2\2\u0130"+
		"\\\3\2\2\2\u0131\u0132\7\61\2\2\u0132\u0133\7,\2\2\u0133\u0137\3\2\2\2"+
		"\u0134\u0136\13\2\2\2\u0135\u0134\3\2\2\2\u0136\u0139\3\2\2\2\u0137\u0138"+
		"\3\2\2\2\u0137\u0135\3\2\2\2\u0138\u013a\3\2\2\2\u0139\u0137\3\2\2\2\u013a"+
		"\u013b\7,\2\2\u013b\u013c\7\61\2\2\u013c\u013d\3\2\2\2\u013d\u013e\b/"+
		"\2\2\u013e^\3\2\2\2\u013f\u0140\7\61\2\2\u0140\u0141\7\61\2\2\u0141\u0145"+
		"\3\2\2\2\u0142\u0144\13\2\2\2\u0143\u0142\3\2\2\2\u0144\u0147\3\2\2\2"+
		"\u0145\u0146\3\2\2\2\u0145\u0143\3\2\2\2\u0146\u0148\3\2\2\2\u0147\u0145"+
		"\3\2\2\2\u0148\u0149\5[.\2\u0149\u014a\3\2\2\2\u014a\u014b\b\60\2\2\u014b"+
		"`\3\2\2\2\u014c\u014d\t\5\2\2\u014db\3\2\2\2\u014e\u014f\t\6\2\2\u014f"+
		"d\3\2\2\2\u0150\u0153\5a\61\2\u0151\u0153\5c\62\2\u0152\u0150\3\2\2\2"+
		"\u0152\u0151\3\2\2\2\u0153f\3\2\2\2\24\2\u00cf\u00d7\u00db\u00e0\u00e5"+
		"\u00e8\u00f2\u00f5\u00fd\u0118\u011e\u0124\u012a\u012d\u0137\u0145\u0152"+
		"\3\b\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}