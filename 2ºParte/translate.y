%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

//#define YYSTYPE char* - PILHA

int yylex(void);
void yyerror(char *);
void imprimeProg();
%}

%token INICIO
%token INTEIRO
%token INTEGER
%token OR
%token AND
%token NOT
%token NOTEQUAL
%token PV
%token DP
%token VIRGULA
%token ATRIBUICAO
%token BOOLEAN
%token CHAR
%token DO
%token ELSE
%token END
%token ENDIF
%token ENDWHILE
%token EXIT
%token IF
%token PROCEDURE
%token PROGRAM
%token REFERENCE
%token REPEAT
%token READ
%token RETURN
%token THEN
%token TYPE
%token UNTIL
%token VALUE
%token WRITE
%token WHILE
%token MENOR
%token MAIOR
%token IGUAL
%token MENORIGUAL
%token MAIORIGUAL
%token EXP
%token MENOS
%token MAIS
%token MULT
%token DIV
%token ABREPARENTESE
%token FECHAPARENTESE
%token COMENTARIO
%token ID
%token NUMBER
%token FALSE
%token TRUE

%right UMINUS
%right EXP 
%left OR
%left AND
%left MENOS
%left MAIS
%left MULT
%left DIV
%left MENORIGUAL
%left MAIORIGUAL
%left MENOR
%left MAIOR
%left IGUAL

%%                   /* beginning of rules section */

program 		: PROGRAM M2 declaracoes M0 block {printf("Sintaticamente correto!\n");}
			;
block			: INICIO lista_de_comandos  M0 END
			;
declaracoes 		: declaracoes M0 declaracao PV
			| vazio
			;
declaracao 		: decl_de_var
			| def_de_tipo
			| decl_de_proc
			;
decl_de_var 		: tipo DP lista_de_ids
			;
tipo 			: INTEGER
			| BOOLEAN
			| CHAR
			;
M0 			: vazio
			;
M1 			: vazio
			;
M2 			: vazio
			;
def_de_tipo 		: TYPE nome_do_tipo M0 DP M1 definicao_de_tipo
			;
nome_do_tipo 		: identificador
			;
definicao_de_tipo 	: ABREPARENTESE limites FECHAPARENTESE tipo
			;
limites 		: inteiro DP inteiro
			;
decl_de_proc 		: proc_cab proc_corpo
			;
proc_cab 		: tipo_retornado PROCEDURE M0 nome_do_proc
			espec_de_parametros
			;
proc_corpo 		: declaracoes M0 block emit_return
			| emit_return
			;
emit_return 		: vazio
			;
lista_de_parametros 	: parametro
			| lista_de_parametros  parametro
			;
tipo_retornado 		: INTEGER
			| BOOLEAN
			| CHAR
			| vazio
			;
parametro 		: modo tipo DP identificador
			;
modo 			: VALUE
			| REFERENCE
			;
nome_do_proc 		: identificador
			;
lista_de_comandos 	: comando
			| lista_de_comandos PV M0 comando
			;
lista_de_ids 		: identificador
			| lista_de_ids VIRGULA identificador
			;
vazio 			: 
			;
espec_de_parametros 	: ABREPARENTESE lista_de_parametros FECHAPARENTESE
			| vazio
			;
comando 		: comando_de_atribuicao
			| comando_while
			| comando_repeat
			| comando_if
			| comando_read
			| comando_write
			| comando_return
			| comando_exit
			| chamada_de_proc
			| rotulo DP comando
			;
comando_de_atribuicao 	: variavel ATRIBUICAO expr
			;
comando_while 		: WHILE M0 expr DO M0 lista_de_comandos ENDWHILE
			;
comando_repeat 		: REPEAT M0 lista_de_comandos UNTIL M0 expr
			;
comando_if 		: IF expr THEN M0 lista_de_comandos ENDIF
			| IF expr THEN M0 lista_de_comandos M1
			ELSE M0 lista_de_comandos ENDIF
			;
comando_read 		: READ variavel
			;
comando_write 		: WRITE expr
			;
comando_return 		: RETURN expr
			;
comando_exit 		: EXIT identificador
			;
rotulo 			: identificador
			;
variavel 		: identificador
			| chamada_ou_indexacao
			;
chamada_ou_indexacao 	: indices FECHAPARENTESE
			;
chamada_de_proc 	: identificador
			| chamada_ou_indexacao
			;
indices 		: variavel2 ABREPARENTESE expr
			| indices VIRGULA expr
			;
variavel2 		: identificador
			;
expr 			: expr OR M0 expr
			| expr AND M0 expr
			| NOT expr
			| expr NOTEQUAL expr
			| expr MENOR expr
			| expr MAIOR expr
			| expr MAIORIGUAL expr
			| expr MENORIGUAL expr
			| expr MAIS expr
			| expr MENOS expr
			| expr MULT expr
			| expr DIV expr
			| expr MULT MULT expr
			| MENOS expr %prec UMINUS
			| variavel
			| constante
			| ABREPARENTESE expr FECHAPARENTESE
			;
constante 		: int_ou_char
			| booleano
			;
int_ou_char 		: NUMBER
			| ID
			;
inteiro 		: NUMBER
			;
booleano 		: TRUE
			| FALSE
			;
identificador 		: ID
			;
%%

//#include "lex.yy.c"
extern int lno;
extern FILE *yyin;

void yyerror( char *s ){
  fprintf(stderr, "\nline %d: %s\n",lno, s);
  printf("Erro proximo a %s\n\n", yylval);
  
}

void imprimeProg(){
  char url[] = "entrada1.txt";
  char info[50];
  int num_linhas = 1;
  yyin = fopen(url, "r");

  if(yyin == NULL )
	printf( "Erro ao ler  arquivo\n");
  else{
	while((fgets(info, sizeof(info), yyin)) != NULL){
		printf("%d\t%s",num_linhas++, info);
	}
  }

  fclose(yyin);

}



int main (void){
  yyparse();
  imprimeProg();
  return 0;
}
