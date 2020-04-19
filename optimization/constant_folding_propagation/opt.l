%{
	#define YYSTYPE char*
	#include "y.tab.h"
    #include <stdio.h>
    extern void yyerror(const char *);
    int line = 1;
%}
%%
[\n]				{line++;}
"||"				{yylval = strdup(yytext);return T_OR_OP;}
"&&"				{yylval = strdup(yytext);return T_AND_OP;}
"=="				{yylval = strdup(yytext);return T_EQ_OP;}
"!="				{yylval = strdup(yytext);return T_NE_OP;}
"<="				{yylval = strdup(yytext);return T_LE_OP;}
">="				{yylval = strdup(yytext);return T_GE_OP;}
"%"					{yylval = strdup(yytext);return T_MOD_OP;}
":"					{yylval = strdup(yytext);return(':'); }
"-"					{yylval = strdup(yytext);return('-'); }
"+"					{yylval = strdup(yytext);return('+'); }
"*"					{yylval = strdup(yytext);return('*'); }
"/"					{yylval = strdup(yytext);return('/'); }
"<"					{yylval = strdup(yytext);return('<'); }
">"					{yylval = strdup(yytext);return('>'); }
"="					{yylval = strdup(yytext);return('='); }
"["					{yylval = strdup(yytext);return('['); }
"]"					{yylval = strdup(yytext);return(']'); }
"int"               {yylval = strdup(yytext);return T_INT;}
[0-9]+|[0-9]+.[0-9]+		{yylval = strdup(yytext);return T_NUMBER;}
[a-zA-Z_][a-zA-Z_0-9]*				{yylval = strdup(yytext);return T_ID;}
[  \t\v\f]+				{}
.					{  }
%%
