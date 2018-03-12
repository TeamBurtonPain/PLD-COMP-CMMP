grammar cmmp;

programme:
	( Include) programme
	| ( declarationVarListe) programme
	| ( definitionFonction) programme
	;

block: '{' ( instruction)* '}';

declarationVarListe: Type declarationVar ( ',' declarationVar)* ';';

declarationVar: varSimple | varTableau;

varSimple: Var ('=' augmentedExpr)?;

varTableau: varTab ('=' '{' eListe '}')? ;

definitionFonction: Type Var '(' paramDefinitionList? ')' block;

paramDefinitionList: paramDefinition ( ',' paramDefinition)*;

paramDefinition: Type Var?;

structureControl:
	'if' '(' augmentedExpr ')' instruction ('else ' instruction)?
	| 'while' '(' augmentedExpr ')' instruction;

instruction: block | augmentedExpr ';'| declarationVarListe | structureControl;

membreGauche: Var | varTab;

eListe: augmentedExpr ( ',' augmentedExpr)*;

augmentedExpr: affectation | expr;

affectation:
	 <assoc = right> membreGauche opAffectation affectation	#midAffectation
	| membreGauche opAffectation expr 						#endAffectation
	;

expr:
	'(' expr ')'							#par
	
	| '!'  expr								#not
	| '++' expr								#preinc
	| '--' expr								#predecr
	| expr '++'								#postinc
	| expr '--'								#postdecr
	
	| expr '*'  expr						#mult
	| expr '/'  expr						#div
	| expr '%'  expr						#mod
	
	| expr '+'  expr						#add
	| expr '-'  expr						#sub
	
	| expr '&&' expr						#and
	| expr '||' expr						#or
	
	| expr opComparaison  expr				#comparaison
	
	| Cst									#const
	| membreGauche 							#variable
	| functionCall							#function
	;									



varTab: Var '[' expr ']';

functionCall: Var '(' ( eListe)? ')';


opComparaison: '<' | '>' | '<=' | '>=' | '==' | '!=';

opAffectation: '=' | '+=' | '-=' | '*=' | '/=' | '%=';

Include: InvariantInclude Lib;

InvariantInclude: '#include';

Lib: '"' .*? '"' | '<' .*? '>';

Cst: Int | String | Char;

PositiveInt: Digit+;

Int: '-'? PositiveInt;

Char: ['] (. | [\\] (.*?)) ['];

String: '"' .*? '"';

Type: 'void' | 'char' | 'int32_t' | 'int64_t';

Var: Alpha AlphaNum*;

WhiteSpace: [ \t]+ -> skip;

NewLine: ('\r' '\n'? | '\n')  -> skip;

BlockComment: '/*' .*? '*/'   -> skip;

LineComment: '//' .*? NewLine -> skip;

fragment Digit: [0-9];

fragment Alpha: [a-zA-Z_];

fragment AlphaNum: Digit | Alpha;

