grammar cmmp;

programme: ( Include)* ( declarationVar)* ( definitionFonction)+;

block: '{' ( instruction)* '}';

declarationVarListe: Type declarationVar ( ',' declarationVar)* ';';

declarationVar: varSimple | varTableau;

varSimple: Var ('=' expr)?;

varTableau: varTab ('=' '{' eListe '}')? ;

definitionFonction: Type Var '(' paramDefinitionList? ')' block;

paramDefinitionList: paramDefinition ( ',' paramDefinition)*;

paramDefinition: Type Var?;

structureControl:
	'if' '(' expr ')' instruction ('else ' instruction)?
	| 'while' '(' expr ')' instruction;

instruction: block | expr? ';'| declarationVarListe | structureControl | affectation;

membreGauche: Var | varTab;

eListe: expr ( ',' expr)*;

expr:
	membreGauche 							#variable
	| functionCall							#function
	
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
	
	| expr OpComparaison  expr				#comparaison
	
	| Cst									#const
	;									

affectation: 
	< assoc = right > membreGauche OpAffectation affectation	#midAffectation
	| membreGauche OpAffectation expr							#endAffectation
	;

varTab: Var '[' expr ']';

functionCall: Var '(' ( eListe)? ')';

Include: InvariantInclude Lib;

InvariantInclude: '#include';

Lib: '"' .*? '"' | '<' .*? '>';

Cst: Int | String | Char;

PositiveInt: Digit+;

Int: '-'? PositiveInt;

Char: ['] ([\\] ( [rnt\\'] | PositiveInt) | .) ['];

String: '"' .*? '"';

Type: 'void' | 'char' | 'int32_t' | 'int64_t';

OpComparaison: '<' | '>' | '<=' | '>=' | '==' | '!=';

OpAffectation: '=' | '+=' | '-=' | '*=' | '/=' | '%=';

Var: Alpha AlphaNum*;

WhiteSpace: [ \t]+ -> skip;

NewLine: ('\r' '\n'? | '\n')  -> skip;

BlockComment: '/*' .*? '*/'   -> skip;

LineComment: '//' .*? NewLine -> skip;

fragment Digit: [0-9];

fragment Alpha: [a-zA-Z_];

fragment AlphaNum: Digit | Alpha;

