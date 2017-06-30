/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140715

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "translate.y"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/*#define YYSTYPE char* - PILHA*/

int yylex(void);
void yyerror(char *);
void imprimeProg();
#line 32 "y.tab.c"

#if ! defined(YYSTYPE) && ! defined(YYSTYPE_IS_DECLARED)
/* Default: YYSTYPE is the semantic value type. */
typedef int YYSTYPE;
# define YYSTYPE_IS_DECLARED 1
#endif

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define INICIO 257
#define INTEIRO 258
#define INTEGER 259
#define OR 260
#define AND 261
#define NOT 262
#define NOTEQUAL 263
#define PV 264
#define DP 265
#define VIRGULA 266
#define ATRIBUICAO 267
#define BOOLEAN 268
#define CHAR 269
#define DO 270
#define ELSE 271
#define END 272
#define ENDIF 273
#define ENDWHILE 274
#define EXIT 275
#define IF 276
#define PROCEDURE 277
#define PROGRAM 278
#define REFERENCE 279
#define REPEAT 280
#define READ 281
#define RETURN 282
#define THEN 283
#define TYPE 284
#define UNTIL 285
#define VALUE 286
#define WRITE 287
#define WHILE 288
#define MENOR 289
#define MAIOR 290
#define IGUAL 291
#define MENORIGUAL 292
#define MAIORIGUAL 293
#define EXP 294
#define MENOS 295
#define MAIS 296
#define MULT 297
#define DIV 298
#define ABREPARENTESE 299
#define FECHAPARENTESE 300
#define COMENTARIO 301
#define ID 302
#define NUMBER 303
#define FALSE 304
#define TRUE 305
#define UMINUS 306
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    4,    2,    2,    6,    6,    6,    8,   11,   11,
   11,    3,   13,    1,    9,   14,   15,   17,   10,   19,
   20,   20,   24,   25,   25,   21,   21,   21,   21,   26,
   27,   27,   22,    5,    5,   12,   12,    7,   23,   23,
   28,   28,   28,   28,   28,   28,   28,   28,   28,   28,
   29,   30,   31,   32,   32,   33,   34,   35,   36,   38,
   39,   39,   41,   37,   37,   42,   42,   43,   40,   40,
   40,   40,   40,   40,   40,   40,   40,   40,   40,   40,
   40,   40,   40,   40,   40,   44,   44,   45,   45,   18,
   46,   46,   16,
};
static const YYINT yylen[] = {                            2,
    5,    4,    4,    1,    1,    1,    1,    3,    1,    1,
    1,    1,    1,    1,    6,    1,    4,    3,    2,    5,
    4,    1,    1,    1,    2,    1,    1,    1,    1,    4,
    1,    1,    1,    1,    4,    1,    3,    0,    3,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    3,
    3,    7,    6,    6,   10,    2,    2,    2,    2,    1,
    1,    1,    2,    1,    1,    3,    3,    1,    4,    4,
    2,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    4,    2,    1,    1,    3,    1,    1,    1,    1,    1,
    1,    1,    1,
};
static const YYINT yydefred[] = {                         0,
   38,    0,   38,   14,   38,    4,    0,   12,    0,    0,
    0,    0,    0,    1,    0,   29,    5,    6,    7,    0,
   38,    0,    0,    0,   38,    0,    0,    0,   38,   93,
    0,    0,   34,   41,   42,   43,   44,   45,   46,   47,
   48,   49,    0,    0,    0,    0,    0,   38,   16,    3,
    0,   38,    0,   19,   22,   38,   59,    0,    0,    0,
    0,   88,   92,   91,    0,   83,    0,   62,   84,   86,
   87,    0,   56,    0,    0,    0,   38,    0,    0,    0,
    0,   63,    0,    0,    0,   36,    0,    0,    0,    0,
    0,   38,   38,    0,   38,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    2,   50,    0,    0,
    0,   38,    0,   38,   33,    0,   85,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   38,   38,   35,   13,    0,   37,   23,   21,    0,   40,
   20,    0,    0,    0,    0,    0,    0,    0,   15,   32,
   31,    0,   24,    0,   54,    0,    0,    0,   90,    0,
    0,   39,   25,    9,   10,   11,    0,   38,   52,    0,
    0,    0,    0,   17,   18,   30,    0,   55,
};
static const YYINT yydgoto[] = {                          2,
    3,    5,    7,   14,   31,   15,    8,   17,   18,   19,
   20,   85,  135,   48,  149,   65,  160,  161,   21,   54,
   22,  116,  141,   55,  152,  153,  154,   33,   34,   35,
   36,   37,   38,   39,   40,   41,   42,   43,   66,   67,
   68,   46,   47,   69,   70,   71,
};
static const YYINT yysindex[] = {                      -272,
    0,    0,    0,    0,    0,    0, -249,    0,  477,    0,
    0,    0, -285,    0, -239,    0,    0,    0,    0, -228,
    0, -236, -285, -246,    0, -285, -246, -246,    0,    0,
 -196,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0, -176, -181,    0, -240, -209,    0,    0,    0,
 -285,    0,    0,    0,    0,    0,    0, -246, -246, -246,
    0,    0,    0,    0,    0,    0,  346,    0,    0,    0,
    0,  477,    0,  396,  396, -246,    0, -164,  477, -246,
 -246,    0, -246, -146, -149,    0, -249, -285,  396,  396,
  274,    0,    0, -246,    0, -246, -246, -246, -246, -246,
 -246, -259, -246, -235,  357,  477,    0,    0,  396,  396,
  396,    0, -285,    0,    0, -175,    0, -246, -246,  396,
  477, -251, -138,  -78, -202,  448,  458, -246,  385, -148,
    0,    0,    0,    0, -173,    0,    0,    0, -163,    0,
    0, -109,  438, -195,  385, -246,  477, -174,    0,    0,
    0, -179,    0, -158,    0, -144,  396, -212,    0, -172,
 -133,    0,    0,    0,    0,    0, -129,    0,    0, -158,
 -174, -285,  477,    0,    0,    0, -168,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0, -140,    0,    0, -254,
 -243, -192,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -126, -190,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  510,    0,    0,    0,    0,    0,
    0,    0,   80,    0,    0,    0,    0,    0,    0,    0,
  -65,    0,    0,    0,  -24,    0,    0,    0,    0,    0,
    0,    0,    0,  176,  230,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -121,    0, -140,    0,  277,  397,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  525, -234,
 -233,    0,    0,    0,    0,  503,    0,    0,    0,  432,
    0,   58,   17,  115,   99,  259,  226,    0,  172,  156,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  331,  315, -124,  210,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  529,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
    0,  127,   -1,   62,  -67,    0,    6,    0,    0,    0,
 -139,    0,    9,    0,    0,   -9,    0,  -14,    0,    0,
    0,    0,    0,   45,    0,    8,    0,  -58,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   -8,   75,
   -7,    0,    0,    0,    0,    0,
};
#define YYTABLESIZE 814
static const YYINT yytable[] = {                         32,
   44,   45,   58,   49,  104,    1,    4,    9,    6,   10,
    9,   94,   16,   57,  167,   58,   30,   73,   11,   12,
  108,   10,   26,   72,   50,   81,   53,   76,   77,   78,
  174,   67,   66,   27,   13,   59,   51,  128,   97,   60,
   56,   86,   61,   62,   63,   64,   84,  133,   59,  131,
   87,   77,   60,  144,   88,   61,   62,   63,   64,   82,
   94,  169,   32,   44,   45,   67,   66,   77,   77,   32,
   44,   45,   11,   64,   60,  106,   61,  155,  115,  158,
   64,   64,   64,   64,   28,   80,   96,   97,   79,   83,
  118,  119,   16,  121,   64,   77,   32,   44,   45,  150,
  164,   74,   75,  136,  178,  177,  151,  107,   68,  165,
  166,   32,   44,   45,   94,  150,  113,  134,  112,  137,
  162,  140,  151,  139,   94,  148,  168,  170,  159,  146,
  147,  171,   89,   90,   91,  172,   38,   32,   44,   45,
   96,   97,    8,   98,   99,   38,   38,   52,  114,  134,
  105,   93,  156,   94,  109,  110,  175,  111,  138,  163,
    0,    0,  176,   32,   44,   45,  173,    0,  120,    0,
  122,  123,  124,  125,  126,  127,  129,  130,    0,   96,
   97,    0,   98,   99,   94,  100,  101,  102,  103,    0,
    0,    0,  142,  143,   89,   89,    0,   89,   89,    0,
   89,    0,  145,    0,   89,   89,   89,   89,   89,    0,
   96,   97,    0,    0,   99,    0,    0,   89,    0,   89,
  157,    0,    0,   89,   89,    0,   89,   89,    0,   89,
   89,   89,   89,   93,   89,   61,   61,    0,   61,   61,
    0,   61,    0,    0,    0,   61,   61,   61,   61,   61,
    0,    0,    0,    0,    0,    0,    0,    0,   61,    0,
   61,    0,    0,    0,   61,   61,    0,   61,   61,    0,
   61,   61,   61,   61,   68,   61,   74,   74,    0,    0,
   74,    0,   74,    0,    0,    0,   74,   74,   74,   74,
   74,    0,    0,    0,    0,    0,    0,    0,    0,   74,
    0,   74,    0,    0,    0,   74,   74,    0,   74,   74,
    0,   74,   74,   74,   74,    0,   74,   73,   73,    0,
    0,   73,    0,   73,    0,    0,    0,   73,   73,   73,
   73,   73,    0,    0,    0,    0,    4,    0,    4,    0,
   73,    0,   73,   23,    0,    0,   73,    4,    4,   73,
   73,    0,   73,   73,   73,   73,    4,   73,   75,   75,
    0,    0,   75,    4,   75,    0,    0,    0,   75,   75,
   75,   75,   75,    0,   76,   76,    0,    0,   76,    0,
   76,   75,    0,   75,   76,   76,   76,   76,   76,    0,
   75,   75,    0,   75,   75,   75,   75,   76,   75,   76,
    0,    0,    0,    0,    0,    0,   76,    0,    0,   76,
   76,   76,   76,    0,   76,   80,   80,    0,    0,   80,
    0,   80,    0,    0,    0,   80,   80,   80,   80,   80,
    0,   79,   79,    0,    0,   79,    0,   79,   80,   58,
   80,   79,   79,   79,   79,   79,   58,   58,   58,   58,
   80,   80,   80,   80,   79,   80,   79,    0,    0,    0,
   58,    0,    0,    0,    0,    0,   79,   79,   79,   81,
   81,   79,    0,   81,    0,   81,    0,    0,    0,   81,
   81,   81,   81,   81,    0,   77,   77,    0,    0,   77,
    0,   77,   81,   57,   81,   77,   77,   77,   77,   77,
   57,   57,   57,   57,   81,   81,   81,    0,   77,   81,
   77,    0,    0,    0,   57,    0,    0,    0,   78,   78,
   77,   77,   78,    0,   78,   77,    0,    0,   78,   78,
   78,   78,   78,   92,   93,    0,   94,    0,    0,    0,
   71,   78,   71,   78,    0,    0,   71,   71,   71,   71,
   71,    0,    0,   78,    0,    0,    0,    0,   78,   71,
    0,   71,   96,   97,    0,   98,   99,    0,  100,  101,
  102,  103,    0,  117,   70,   70,   71,    0,   70,    0,
   70,    0,    0,    0,   70,   70,   70,   70,   70,    0,
   69,    0,    0,    0,   69,    0,   69,   70,    0,   70,
   69,   69,   69,   69,   69,   92,   93,    0,   94,    0,
    0,    0,    0,   69,   70,   69,   92,   93,    0,   94,
    0,    0,    0,    0,    0,    0,  132,    0,   95,    0,
   69,    0,    0,    0,   96,   97,    0,   98,   99,    0,
  100,  101,  102,  103,    0,   96,   97,   94,   98,   99,
    0,  100,  101,  102,  103,   92,   93,    0,   94,    0,
   82,    0,   82,    0,    0,    0,   82,   82,   82,   82,
   82,    0,    0,   96,   97,    0,   98,   99,    0,   82,
    0,   82,  103,    0,   96,   97,    0,   98,   99,    0,
  100,  101,  102,  103,    0,   72,   82,   72,    0,    0,
   94,   72,   72,   72,   72,   72,    0,    0,    0,    0,
   94,    0,    0,    0,   72,    0,   72,    0,    0,    0,
   94,    0,    0,    0,    0,    0,   96,   97,    0,   98,
   99,   72,  100,  101,  102,  103,   96,   97,    0,   98,
   99,    0,    0,  101,  102,  103,   96,   97,    0,   98,
   99,   23,   24,    0,  102,  103,   25,   26,   27,   38,
    0,   38,    0,   28,   29,    0,   38,    0,    0,    0,
   38,   38,    0,   65,    0,    0,   62,    0,   30,   38,
   65,   65,   65,   65,    0,    0,   38,    0,   51,    0,
    0,    0,   53,    0,   65,   51,   51,   51,   51,   53,
   53,   53,   53,    0,    0,    0,    0,    0,    0,   51,
    0,    0,    0,   53,
};
static const YYINT yycheck[] = {                          9,
    9,    9,  262,   13,   72,  278,    1,  257,    3,  259,
  265,  263,    7,   23,  154,  262,  302,   26,  268,  269,
   79,  265,  277,   25,  264,  266,   21,   29,  264,   31,
  170,  266,  266,  277,  284,  295,  265,  297,  290,  299,
  277,   51,  302,  303,  304,  305,   48,  106,  295,  285,
   52,  264,  299,  121,   56,  302,  303,  304,  305,  300,
  263,  274,   72,   72,   72,  300,  300,  264,  264,   79,
   79,   79,  265,  264,  265,   77,  267,  273,   88,  147,
  271,  272,  273,  274,  277,  267,  289,  290,  265,  299,
   92,   93,   87,   95,  285,  264,  106,  106,  106,  279,
  259,   27,   28,  113,  273,  173,  286,  272,  299,  268,
  269,  121,  121,  121,  263,  279,  266,  112,  265,  114,
  300,  116,  286,  299,  263,  299,  271,  300,  303,  131,
  132,  265,   58,   59,   60,  265,  277,  147,  147,  147,
  289,  290,  264,  292,  293,  272,  271,   21,   87,  144,
   76,  261,  144,  263,   80,   81,  171,   83,  114,  152,
   -1,   -1,  172,  173,  173,  173,  168,   -1,   94,   -1,
   96,   97,   98,   99,  100,  101,  102,  103,   -1,  289,
  290,   -1,  292,  293,  263,  295,  296,  297,  298,   -1,
   -1,   -1,  118,  119,  260,  261,   -1,  263,  264,   -1,
  266,   -1,  128,   -1,  270,  271,  272,  273,  274,   -1,
  289,  290,   -1,   -1,  293,   -1,   -1,  283,   -1,  285,
  146,   -1,   -1,  289,  290,   -1,  292,  293,   -1,  295,
  296,  297,  298,  299,  300,  260,  261,   -1,  263,  264,
   -1,  266,   -1,   -1,   -1,  270,  271,  272,  273,  274,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  283,   -1,
  285,   -1,   -1,   -1,  289,  290,   -1,  292,  293,   -1,
  295,  296,  297,  298,  299,  300,  260,  261,   -1,   -1,
  264,   -1,  266,   -1,   -1,   -1,  270,  271,  272,  273,
  274,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  283,
   -1,  285,   -1,   -1,   -1,  289,  290,   -1,  292,  293,
   -1,  295,  296,  297,  298,   -1,  300,  260,  261,   -1,
   -1,  264,   -1,  266,   -1,   -1,   -1,  270,  271,  272,
  273,  274,   -1,   -1,   -1,   -1,  257,   -1,  259,   -1,
  283,   -1,  285,  264,   -1,   -1,  289,  268,  269,  292,
  293,   -1,  295,  296,  297,  298,  277,  300,  260,  261,
   -1,   -1,  264,  284,  266,   -1,   -1,   -1,  270,  271,
  272,  273,  274,   -1,  260,  261,   -1,   -1,  264,   -1,
  266,  283,   -1,  285,  270,  271,  272,  273,  274,   -1,
  292,  293,   -1,  295,  296,  297,  298,  283,  300,  285,
   -1,   -1,   -1,   -1,   -1,   -1,  292,   -1,   -1,  295,
  296,  297,  298,   -1,  300,  260,  261,   -1,   -1,  264,
   -1,  266,   -1,   -1,   -1,  270,  271,  272,  273,  274,
   -1,  260,  261,   -1,   -1,  264,   -1,  266,  283,  264,
  285,  270,  271,  272,  273,  274,  271,  272,  273,  274,
  295,  296,  297,  298,  283,  300,  285,   -1,   -1,   -1,
  285,   -1,   -1,   -1,   -1,   -1,  295,  296,  297,  260,
  261,  300,   -1,  264,   -1,  266,   -1,   -1,   -1,  270,
  271,  272,  273,  274,   -1,  260,  261,   -1,   -1,  264,
   -1,  266,  283,  264,  285,  270,  271,  272,  273,  274,
  271,  272,  273,  274,  295,  296,  297,   -1,  283,  300,
  285,   -1,   -1,   -1,  285,   -1,   -1,   -1,  260,  261,
  295,  296,  264,   -1,  266,  300,   -1,   -1,  270,  271,
  272,  273,  274,  260,  261,   -1,  263,   -1,   -1,   -1,
  264,  283,  266,  285,   -1,   -1,  270,  271,  272,  273,
  274,   -1,   -1,  295,   -1,   -1,   -1,   -1,  300,  283,
   -1,  285,  289,  290,   -1,  292,  293,   -1,  295,  296,
  297,  298,   -1,  300,  260,  261,  300,   -1,  264,   -1,
  266,   -1,   -1,   -1,  270,  271,  272,  273,  274,   -1,
  260,   -1,   -1,   -1,  264,   -1,  266,  283,   -1,  285,
  270,  271,  272,  273,  274,  260,  261,   -1,  263,   -1,
   -1,   -1,   -1,  283,  300,  285,  260,  261,   -1,  263,
   -1,   -1,   -1,   -1,   -1,   -1,  270,   -1,  283,   -1,
  300,   -1,   -1,   -1,  289,  290,   -1,  292,  293,   -1,
  295,  296,  297,  298,   -1,  289,  290,  263,  292,  293,
   -1,  295,  296,  297,  298,  260,  261,   -1,  263,   -1,
  264,   -1,  266,   -1,   -1,   -1,  270,  271,  272,  273,
  274,   -1,   -1,  289,  290,   -1,  292,  293,   -1,  283,
   -1,  285,  298,   -1,  289,  290,   -1,  292,  293,   -1,
  295,  296,  297,  298,   -1,  264,  300,  266,   -1,   -1,
  263,  270,  271,  272,  273,  274,   -1,   -1,   -1,   -1,
  263,   -1,   -1,   -1,  283,   -1,  285,   -1,   -1,   -1,
  263,   -1,   -1,   -1,   -1,   -1,  289,  290,   -1,  292,
  293,  300,  295,  296,  297,  298,  289,  290,   -1,  292,
  293,   -1,   -1,  296,  297,  298,  289,  290,   -1,  292,
  293,  275,  276,   -1,  297,  298,  280,  281,  282,  257,
   -1,  259,   -1,  287,  288,   -1,  264,   -1,   -1,   -1,
  268,  269,   -1,  264,   -1,   -1,  267,   -1,  302,  277,
  271,  272,  273,  274,   -1,   -1,  284,   -1,  264,   -1,
   -1,   -1,  264,   -1,  285,  271,  272,  273,  274,  271,
  272,  273,  274,   -1,   -1,   -1,   -1,   -1,   -1,  285,
   -1,   -1,   -1,  285,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 306
#define YYUNDFTOKEN 355
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"INICIO","INTEIRO","INTEGER","OR",
"AND","NOT","NOTEQUAL","PV","DP","VIRGULA","ATRIBUICAO","BOOLEAN","CHAR","DO",
"ELSE","END","ENDIF","ENDWHILE","EXIT","IF","PROCEDURE","PROGRAM","REFERENCE",
"REPEAT","READ","RETURN","THEN","TYPE","UNTIL","VALUE","WRITE","WHILE","MENOR",
"MAIOR","IGUAL","MENORIGUAL","MAIORIGUAL","EXP","MENOS","MAIS","MULT","DIV",
"ABREPARENTESE","FECHAPARENTESE","COMENTARIO","ID","NUMBER","FALSE","TRUE",
"UMINUS",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : program",
"program : PROGRAM M2 declaracoes M0 block",
"block : INICIO lista_de_comandos M0 END",
"declaracoes : declaracoes M0 declaracao PV",
"declaracoes : vazio",
"declaracao : decl_de_var",
"declaracao : def_de_tipo",
"declaracao : decl_de_proc",
"decl_de_var : tipo DP lista_de_ids",
"tipo : INTEGER",
"tipo : BOOLEAN",
"tipo : CHAR",
"M0 : vazio",
"M1 : vazio",
"M2 : vazio",
"def_de_tipo : TYPE nome_do_tipo M0 DP M1 definicao_de_tipo",
"nome_do_tipo : identificador",
"definicao_de_tipo : ABREPARENTESE limites FECHAPARENTESE tipo",
"limites : inteiro DP inteiro",
"decl_de_proc : proc_cab proc_corpo",
"proc_cab : tipo_retornado PROCEDURE M0 nome_do_proc espec_de_parametros",
"proc_corpo : declaracoes M0 block emit_return",
"proc_corpo : emit_return",
"emit_return : vazio",
"lista_de_parametros : parametro",
"lista_de_parametros : lista_de_parametros parametro",
"tipo_retornado : INTEGER",
"tipo_retornado : BOOLEAN",
"tipo_retornado : CHAR",
"tipo_retornado : vazio",
"parametro : modo tipo DP identificador",
"modo : VALUE",
"modo : REFERENCE",
"nome_do_proc : identificador",
"lista_de_comandos : comando",
"lista_de_comandos : lista_de_comandos PV M0 comando",
"lista_de_ids : identificador",
"lista_de_ids : lista_de_ids VIRGULA identificador",
"vazio :",
"espec_de_parametros : ABREPARENTESE lista_de_parametros FECHAPARENTESE",
"espec_de_parametros : vazio",
"comando : comando_de_atribuicao",
"comando : comando_while",
"comando : comando_repeat",
"comando : comando_if",
"comando : comando_read",
"comando : comando_write",
"comando : comando_return",
"comando : comando_exit",
"comando : chamada_de_proc",
"comando : rotulo DP comando",
"comando_de_atribuicao : variavel ATRIBUICAO expr",
"comando_while : WHILE M0 expr DO M0 lista_de_comandos ENDWHILE",
"comando_repeat : REPEAT M0 lista_de_comandos UNTIL M0 expr",
"comando_if : IF expr THEN M0 lista_de_comandos ENDIF",
"comando_if : IF expr THEN M0 lista_de_comandos M1 ELSE M0 lista_de_comandos ENDIF",
"comando_read : READ variavel",
"comando_write : WRITE expr",
"comando_return : RETURN expr",
"comando_exit : EXIT identificador",
"rotulo : identificador",
"variavel : identificador",
"variavel : chamada_ou_indexacao",
"chamada_ou_indexacao : indices FECHAPARENTESE",
"chamada_de_proc : identificador",
"chamada_de_proc : chamada_ou_indexacao",
"indices : variavel2 ABREPARENTESE expr",
"indices : indices VIRGULA expr",
"variavel2 : identificador",
"expr : expr OR M0 expr",
"expr : expr AND M0 expr",
"expr : NOT expr",
"expr : expr NOTEQUAL expr",
"expr : expr MENOR expr",
"expr : expr MAIOR expr",
"expr : expr MAIORIGUAL expr",
"expr : expr MENORIGUAL expr",
"expr : expr MAIS expr",
"expr : expr MENOS expr",
"expr : expr MULT expr",
"expr : expr DIV expr",
"expr : expr MULT MULT expr",
"expr : MENOS expr",
"expr : variavel",
"expr : constante",
"expr : ABREPARENTESE expr FECHAPARENTESE",
"constante : int_ou_char",
"constante : booleano",
"int_ou_char : NUMBER",
"int_ou_char : ID",
"inteiro : NUMBER",
"booleano : TRUE",
"booleano : FALSE",
"identificador : ID",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 223 "translate.y"

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
#line 584 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 80 "translate.y"
	{printf("Sintaticamente correto!\n");}
break;
#line 790 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
