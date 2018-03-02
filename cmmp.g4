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

expr:
	membreGauche 							#variable
	| Var '(' ( paramDefinitionList)? ')'	#function
	
	|'(' expr ')'							#par
	
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
	
	| expr '<'  expr						#lt
	| expr '<=' expr						#lte
	| expr '>'  expr						#gt
	| expr '>=' expr						#gte
	| expr '==' expr						#eg
	| expr '!=' expr						#neg
	
	| membreGauche OpAffectation expr		#affectation
	
	| Cst									#const
	;									

Include: InvariantInclude Lib;

InvariantInclude: '#include';

Lib: '"' .*? '"' | '<' .*? '>';

Cst: Int | String;

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

