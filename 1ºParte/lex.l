%{
/*codigo colocado aqui aparece no arquivo gerado pelo flex*/
#include <stdio.h>
%}
/* This tells flex to read only one input file */
%option noyywrap
/* definicoes regulares */
delim [ \t\n]
ws {delim}+


/*colocar abaixo as definicoes regulares*/
digit[0-9]
integer[integer]
inteiro{digit}+
false false
true true
boolean({true}|{false})
opBooleano[\||\&|not]
relacional <|>|=|<=|>=|not=
aritmetico [+|-|*|/]
exp **
parentese[\(|\)]
comentario[\/][\*].*[\*][\/]
ID [a-zA-Z][a-zA-Z0-9]*
%%

{ws} {/*nenhuma acao e nenhum retorno*/}
{inteiro} printf("Foi encontrado um Inteiro,LEXEMA: %s\n",yytext);
integer   printf("Foi encontrado um Integer,LEXEMA: %s\n",yytext); 	
"|" printf("Foi encontrado um OU,LEXEMA: %s\n",yytext);
"&" printf("Foi encontrado um AND,LEXEMA: %s\n",yytext);
not printf("Foi encontrado um NOT,LEXEMA: %s\n",yytext);
"not=" printf("Foi encontrado um Not Equal,LEXEMA: %s\n",yytext);
";" printf("Foi encontrado um Ponto e virgula,LEXEMA: %s\n",yytext);
":" printf("Foi encontrado Dois Pontos,LEXEMA: %s\n",yytext);
"," printf("Foi encontrado uma Vírgula,LEXEMA: %s\n",yytext);
":=" printf("Foi encontrado um  Símbolo de atribuição,LEXEMA: %s\n",yytext);
begin printf("Foi encontrado um Begin,LEXEMA: %s\n",yytext);
{boolean} printf("Foi encontrado um Boolean,LEXEMA: %s\n",yytext);
char printf("Foi encontrado um Char,LEXEMA: %s\n",yytext);
do printf("Foi encontrado um Do,LEXEMA: %s\n",yytext);
else printf("Foi encontrado um Else,LEXEMA: %s\n",yytext);
end printf("Foi encontrado um End,LEXEMA: %s\n",yytext);
endif printf("Foi encontrado um Endif,LEXEMA: %s\n",yytext);
endwhile printf("Foi encontrado um EndWhile,LEXEMA: %s\n",yytext);
exit printf("Foi encontrado um Exit,LEXEMA: %s\n",yytext);
if printf("Foi encontrado um If,LEXEMA: %s\n",yytext);
procedure printf("Foi encontrado um Procedure,LEXEMA: %s\n",yytext);
program printf("Foi encontrado um Program,LEXEMA: %s\n",yytext);
reference printf("Foi encontrado um Reference,LEXEMA: %s\n",yytext);
repeat printf("Foi encontrado um Repeat,LEXEMA: %s\n",yytext);
read printf("Foi encontrado um Read,LEXEMA: %s\n",yytext);
return printf("Foi encontrado um Return,LEXEMA: %s\n",yytext);
then printf("Foi encontrado um Then,LEXEMA: %s\n",yytext);
type printf("Foi encontrado um Type,LEXEMA: %s\n",yytext);
until printf("Foi encontrado um Until,LEXEMA: %s\n",yytext);
value printf("Foi encontrado um Value,LEXEMA: %s\n",yytext);
write printf("Foi encontrado um Write,LEXEMA: %s\n",yytext);
while printf("Foi encontrado um While,LEXEMA: %s\n",yytext);
{relacional} printf("Foi encontrado um Operador Relacional,LEXEMA: %s\n",yytext);
exp printf("Foi encontrado um Operador exponenciação,LEXEMA: %s\n",yytext);
{opBooleano} printf("Foi encontrado um Operador Booleano,LEXEMA: %s\n",yytext);
{aritmetico} printf("Foi encontrado um Operador Aritmetico,LEXEMA: %s\n",yytext);
{parentese}  printf("Foi encontrado um Parentese,LEXEMA: %s\n",yytext);
{comentario} printf("Foi encontrado um Comentario,LEXEMA: %s\n",yytext);
{ID}  printf("Foi encontrado um Identificador,LEXEMA: %s\n",yytext);
. ;

%%
/*codigo em C. Foi criado o main, mas podem ser criadas outras funcoes aqui.*/
int main(void)
{
/* Call the lexer, then quit. */
yylex();
return 0;
}
