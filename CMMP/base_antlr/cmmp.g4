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
	'if' '(' expr ')' instruction ('else' instruction)?		#controlif
	| 'while' '(' expr ')' instruction						#controlwhile
	;
	
instruction: 
	block 							#insBlock
	| expr ';'						#insExpr
	| declarationVarListe 			#insDeclVar
	| structureControl				#insControl
	| 'return' expr ';'				#insReturn
	;

membreGauche: Var | varTab;

eListe: expr ( ',' expr)*;


expr:
	'(' expr ')'							#par
	
	| '-' expr								#neg
	| '!'  expr								#not

	| opUnaryAffectation membreGauche		#pre
	| membreGauche opUnaryAffectation		#post	

	| expr opBinMul expr					#binmul

	| expr opBinAdd expr					#binadd
	
	| expr opLogical expr						#logical
	
	| expr opComparaison  expr				#comparaison
	

	| Cst									#const
	| membreGauche 							#variable
	| functionCall							#function

	|<assoc = right> membreGauche opAffectation expr	#affectation
	;									



varTab: Var '[' expr ']';

functionCall: Var '(' ( eListe)? ')';

opLogical:
	'&&'		#and
	| '||'		#or
	;

opBinMul:
	'/'			#div
	| '*'	    #mult
	| '%' 		#mod
	;

opBinAdd:
	'-' 		#sub
	| '+' 		#add
	;

opUnaryAffectation:
	'++'	#incr
	| '--'	#decr
	;

opComparaison: 
	'==' 	#eq
	| '!='	#neq
	| '<' 	#inf
	| '>' 	#sup
	| '<=' 	#infeq
	| '>=' 	#supeq

	;

opAffectation: 
	'=' 	#aff
	| '+=' 	#addaff
	| '-=' 	#subaff
	| '*=' 	#multaff
	| '/=' 	#divaff
	| '%='	#modaff
	;



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

Include: InvariantInclude .*? NewLine -> skip;

InvariantInclude: '#include';



EOFT: EOF;

fragment Digit: [0-9];

fragment Alpha: [a-zA-Z_];

fragment AlphaNum: Digit | Alpha;

