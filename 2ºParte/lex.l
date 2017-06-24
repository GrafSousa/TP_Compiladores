%{
/*codigo colocado aqui aparece no arquivo gerado pelo flex*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "y.tab.h"

int lno = 1;
char *yylval;
FILE *yyin;

%}
/* This tells flex to read only one input file */
%option noyywrap
/* definicoes regulares */
delim [ \t]
ws {delim}+

/*colocar abaixo as definicoes regulares*/
digit[0-9]
integer[integer]
inteiro{digit}+
false false
true true
boolean({true}|{false})
exp [*][*]
comentario[\/][\*].*[\*][\/]
ID [a-zA-Z][a-zA-Z0-9]{0,31}
linha [\n]
at [\:][\=]
%%

{ws} {/*nenhuma acao e nenhum retorno*/}
begin {yylval = strdup(yytext);return INICIO;}
integer {yylval = strdup(yytext);return INTEGER;} 	
"|" {yylval = strdup(yytext);return OR;}
"&" {yylval = strdup(yytext);return AND;}
"not" {yylval = strdup(yytext);return NOT;}
"not=" {yylval = strdup(yytext);return NOTEQUAL;}
";" {yylval = strdup(yytext);return PV;}
":" {yylval = strdup(yytext);return DP;}
{at} {yylval = strdup(yytext);return ATRIBUICAO;}
"," {yylval = strdup(yytext);return VIRGULA;}
"(" {yylval = strdup(yytext);return ABREPARENTESE;}
")" {yylval = strdup(yytext);return FECHAPARENTESE;}
{boolean} {yylval = strdup(yytext);return BOOLEAN;}
char {yylval = strdup(yytext);return CHAR;}
do {yylval = strdup(yytext);return DO;}
else {yylval = strdup(yytext);return ELSE;}
end {yylval = strdup(yytext);return END;}
endif {yylval = strdup(yytext);return ENDIF;}
endwhile {yylval = strdup(yytext);return ENDWHILE;}
exit {yylval = strdup(yytext);return EXIT;}
if {yylval = strdup(yytext);return IF;}
procedure {yylval = strdup(yytext);return PROCEDURE;}
program {yylval = strdup(yytext);return PROGRAM;}
reference {yylval = strdup(yytext);return REFERENCE;}
repeat {yylval = strdup(yytext);return REPEAT;}
read {yylval = strdup(yytext);return READ;}
return {yylval = strdup(yytext);return RETURN;}
then {yylval = strdup(yytext);return THEN;}
type {yylval = strdup(yytext);return TYPE;}
until {yylval = strdup(yytext);return UNTIL;}
value {yylval = strdup(yytext);return VALUE;}
write {yylval = strdup(yytext);return WRITE;}
while {yylval = strdup(yytext);return WHILE;}
"<" {yylval = strdup(yytext);return MENOR;}
">" {yylval = strdup(yytext);return MAIOR;}
"<=" {yylval = strdup(yytext);return MENORIGUAL;}
">=" {yylval = strdup(yytext);return MAIORIGUAL;}
{exp} {yylval = strdup(yytext);return EXP;}
"-" {yylval = strdup(yytext);return MENOS;}
"+" {yylval = strdup(yytext);return MAIS;}
"*" {yylval = strdup(yytext);return MULT;}
"/" {yylval = strdup(yytext);return DIV;}
{comentario} {yylval = strdup(yytext);return COMENTARIO;}
{inteiro} {yylval = strdup(yytext);return NUMBER;}
{ID}  {yylval = strdup(yytext);return ID;}
"." ;
{linha} {lno=lno+1;}

%%


