%{
    #include<stdio.h>
    #include<stdlib.h>

int yylex();
int yyerror(char *s);
int a = 0;
%}

%token CH

%%
S: P {printf("VALID EXPRESSION\nPAIRS = %d\n",a);};
P: '(' T ')' {a++;};
T: P | P CH |CH P |CH;
%%

int main(){
    printf("ENTER THE EXPRESSION: ");
    yyparse();
    printf("\n");
    exit(0);
    return 0;
}

int yyerror(char *s){
    printf("\nINVALID EXPRESSION\n");
    exit(0);
    return 0;
}
