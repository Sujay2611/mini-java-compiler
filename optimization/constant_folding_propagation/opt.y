%{
	#include <stdio.h>
	#include <string.h>
	#include<stdlib.h>
	void yyerror(const char *);
	#define YYSTYPE char*
	FILE *yyin;
	int yylex();
	extern int line;
	FILE *opt;

	typedef struct symbol_table_node
	{
		char name[30];
		char value[30];
	}NODE;

	NODE table[100];
	int top = -1;
	void add_or_update(char*,char*);
	char* getVal(char*);
	char* calculate(char*,char*,char*);
%}

%error-verbose

%token T_START T_STOP T_ID T_NUMBER T_GOTO T_IF T_LE_OP T_GE_OP T_MOD_OP T_EQ_OP T_NE_OP T_OR_OP T_AND_OP T_INT


%%
supreme_start:start supreme_start|start;
start:T_INT T_ID '=' T_NUMBER {add_or_update($2,$4);fprintf(opt,"%s = %s\n",$2,$4);}
	|T_INT T_ID '=' T_ID {add_or_update($2,getVal($4));fprintf(opt,"%s = %s\n",$2,getVal($4));}
	|T_INT T_ID '=' T_ID opr T_ID {add_or_update($2,calculate($5,getVal($4),getVal($6)));fprintf(opt,"%s = %s\n",$2,calculate($5,getVal($4),getVal($6)));}
	|T_INT T_ID '=' T_NUMBER opr T_ID	{add_or_update($2,calculate($5,$4,getVal($6)));fprintf(opt,"%s = %s\n",$2,calculate($5,$4,getVal($6)));}
	|T_INT T_ID '=' T_ID opr T_NUMBER	{add_or_update($2,calculate($5,getVal($4),$6));fprintf(opt,"%s = %s\n",$2,calculate($5,getVal($4),$6));}
	|T_INT T_ID '=' T_NUMBER opr T_NUMBER	{add_or_update($2,calculate($5,$4,$6));fprintf(opt,"%s = %s\n",$2,calculate($5,$4,$6));};

opr:'+'|'-'|'*'|'/'|'<'|'>'|T_LE_OP|T_GE_OP|T_MOD_OP|T_EQ_OP|T_NE_OP|T_OR_OP|T_AND_OP;
%%

int main(int argc, char* argv[])
{
yyin = fopen(argv[1], "r");
opt = fopen("Optimised.txt", "w");
if(!yyparse())
{
	printf("Optimised ICG Generated\n");
}

return 1;
}

void yyerror(const char *msg)
{

	printf("\n");
	printf("ERROR\n");
	printf("Parsing Unsuccesful\n");
	printf("Error at line %d\n\n",line);

}

void add_or_update(char* name,char* value)
{
	if(top==-1)
	{

		top++;
		strcpy(table[top].name,name);
		strcpy(table[top].value,value);
		return;
	}
	for(int i = top;i>=0;i--)
	{
		if(strcmp(table[i].name,name)==0)
		{
			strcpy(table[i].value,value);
			return;
		}
	}

	top++;

	strcpy(table[top].name,name);

	strcpy(table[top].value,value);



}
char* getVal(char* name)
{
	for(int i = top;i>=0;i--)
	{
		if(strcmp(table[i].name,name)==0)
		{
			return table[i].value;
		}
	}
	return "a";
}
char* calculate(char* opr,char* op1,char* op2)
{
	char* result;
	result = (char*)malloc(sizeof(char)*30);
	int oper1 = atoi(op1);
	int oper2 = atoi(op2);
	int res;
	if(strcmp(opr,"+")==0)
		res = oper1 + oper2;
	if(strcmp(opr,"-")==0)
		res = oper1 - oper2;
	if(strcmp(opr,"*")==0)
		res = oper1 * oper2;
	if(strcmp(opr,"/")==0)
		res = oper1 / oper2;
	if(strcmp(opr,">")==0)
		res = oper1 > oper2;
	if(strcmp(opr,"<")==0)
		res = oper1 < oper2;
	if(strcmp(opr,">=")==0)
		res = oper1 >= oper2;
	if(strcmp(opr,"<=")==0)
		res = oper1 <= oper2;
	if(strcmp(opr,"mod")==0)
		res = oper1 % oper2;
	if(strcmp(opr,"==")==0)
		res = oper1 == oper2;
	if(strcmp(opr,"!=")==0)
		res = oper1 != oper2;
	if(strcmp(opr,"&&")==0)
		res = oper1 && oper2;
	if(strcmp(opr,"||")==0)
		res = oper1 || oper2;


	snprintf(result,30*sizeof(char),"%d",res);
	return result;
}
