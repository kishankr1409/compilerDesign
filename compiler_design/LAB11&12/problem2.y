%{
#include <stdio.h>
#include <stdlib.h>

int yyerror(char *s);
int yylex();
%}

%token NUM
%%

expression: term
          | expression '+' term   { printf("+ "); }
          ;                         

term: factor
    | term '*' factor          { printf("* "); }
    ;

factor: NUM                     { printf("%d ", $1); }
      | '(' expression ')'      {  }
      ;

%%

int main(){
    printf("ENTER THE EXPRESSION: ");
    yyparse();
    printf("\n");
    return 0;
}

int yyerror(char *s){
    printf("\n\nINVALID EXPRESSION \n");
    return 0;
}
