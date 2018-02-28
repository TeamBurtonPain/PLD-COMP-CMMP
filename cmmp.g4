grammar cmmp;

programme: ( Include)* ( declarationVar)* ( definitionFonction)+;

block: '{' ( instruction)* '}';

declarationVar: declarationVarSimple | declarationTableau;

declarationVarSimple: Type varSimple ( ',' varSimple)* ';';

varSimple: Var ( expr)?;

declarationTableau:
	Type Var '[' expr ']' ('={' eListe '}')? ';';

definitionFonction: Type Var '(' paramDefinitionList? ')' block;

paramDefinitionList: paramDefinition ( ',' paramDefinition)*;

paramDefinition: Type Var?;

structureControl:
	'if(' expr ')' instruction ('else ' instruction)?
	| 'while(' expr ')' instruction;

instruction: block | expr? ';' | structureControl;

membreGauche: Var | Var '[' expr ']';

eListe: expr ( ',' expr)*;


/* Modifier pour corriger la récursivité gauche */
expr:
	membreGauche
	| Var '(' ( paramDefinitionList)? ')'
	| operation
	| cst;

operation:
	'(' expr ')'
	| '!'  expr
	| '++' expr
	| '--' expr
	| expr '++'
	| expr '--'
	| expr '*'  expr
	| expr '/'  expr
	| expr '%'  expr
	| expr '+'  expr
	| expr '-'  expr
	| expr '&&' expr
	| expr '||' expr
	| expr '<'  expr
	| expr '<=' expr
	| expr '>'  expr
	| expr '>=' expr
	| expr '==' expr
	| expr '!=' expr
	| membreGauche OpAffectation expr;

Include: InvariantInclude ' ' Lib;

InvariantInclude: '#include';

Lib: '"' .*? '"' | '<' .*? '>';

cst: Int | String;

Int: '-'? Digit+;

String: '"' .*? '"';

Type: 'char' | 'int32_t' | 'int64_t';

OpAffectation: '=' | '+=' | '-=' | '*=' | '/=' | '%=';

Var: Alpha AlphaNum*;

WhiteSpace: [ \t]+ -> skip;

NewLine: ('\r' '\n'? | '\n')  -> skip;

BlockComment: '/*' .*? '*/'   -> skip;

LineComment: '//' .*? NewLine -> skip;

fragment Digit: [0-9];

fragment Alpha: [a-zA-Z_];

fragment AlphaNum: Digit | Alpha;

