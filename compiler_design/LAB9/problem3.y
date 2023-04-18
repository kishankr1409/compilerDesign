%{
    #include<stdio.h>
    #include<stdlib.h>
    #include<math.h>
    int yyerror(char *s);
    int yylex();
%}

%token ZERO ONE DOT

%%
S : L {printf("\nResult : %d\n\n",$$);};
L : L B {$$ = $1 * 2 + $2;}
    | B {$$ = $1;};\
B : ZERO {$$ = $1;}   
    | ONE {$$ = $1;};
%%

int main(){
    printf("Enter binary string: ");
    while(yyparse());
    return 0;
}

int yyerror(char *s){
    printf("\n%s", s);
    return 0;
}
