grammar cmmp;

axiome: programme;

programme:
	declarationVarListe programme	#declVar
	| definitionFonction programme	#defFonc
	| 								#eof
	;

block: '{' ( instruction)* '}';

declarationVarListe: Type declarationVar ( ',' declarationVar)* ';';

declarationVar: 
	varSimple 		#simpleVar
	| varTableau	#tabVar
	;

varSimple: Var ('=' expr)?;

varTableau: varTab ('=' '{' eListe '}')? ;

definitionFonction: Type Var '(' paramDefinitionList? ')' block;

paramDefinitionList: paramDefinition ( ',' paramDefinition)*;

paramDefinition: Type Var?;

structureControl:
	'if' '(' expr ')' instruction ('else ' instruction)?	#controlwhile
	| 'while' '(' expr ')' instruction						#controlif
	;
	
instruction: 
	block 					#insBlock
	| expr ';'				#insExpr
	| declarationVarListe 	#insDeclVar
	| structureControl		#insControl
	;

membreGauche: Var | varTab;

eListe: expr ( ',' expr)*;


expr:
	'(' expr ')'							#par
	
	| '-' expr								#neg
	| '!'  expr								#not

	| opUnaryAffectation membreGauche		#pre
	| membreGauche opUnaryAffectation		#post	
	
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

	|<assoc = right> membreGauche opAffectation expr	#affectation
	;									



varTab: Var '[' expr ']';

functionCall: Var '(' ( eListe)? ')';

opUnaryAffectation:
	'++'	#incr
	| '--'	#decr
	;

opComparaison: 
	'<' 	#inf
	| '>' 	#sup
	| '<=' 	#infeq
	| '>=' 	#supeq
	| '==' 	#eq
	| '!='	#neq
	;

opAffectation: 
	'=' 	#aff
	| '+=' 	#addaff
	| '-=' 	#subaff
	| '*=' 	#multaff
	| '/=' 	#divaff
	| '%='	#modaff
	;

Include: InvariantInclude Lib -> skip;

InvariantInclude: '#include';

Lib: '"' .*? '"' | '<' .*? '>';

Cst: PositiveInt | String | Char;

PositiveInt: Digit+;

Char: ['] (. | [\\] (.*?)) ['];

String: '"' .*? '"';

Type: 'void' | 'char' | 'int32_t' | 'int64_t';

Var: Alpha AlphaNum*;

WhiteSpace: [ \t]+ -> skip;

NewLine: ('\r' '\n'? | '\n')  -> skip;

BlockComment: '/*' .*? '*/'   -> skip;

LineComment: '//' .*? NewLine -> skip;

EOFT: EOF;

fragment Digit: [0-9];

fragment Alpha: [a-zA-Z_];

fragment AlphaNum: Digit | Alpha;

