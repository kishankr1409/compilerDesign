%{
    #include<stdio.h>
    #include<stdlib.h>

    int yyerror(char *s);
    int yylex();
%}

%token DIGIT

%%
exp : exp addop term {printf("\nRule 1: exp -> exp addop term");}
    |term {printf("\nRule 2: exp -> term");};

addop : '+' {printf("\nRule 3: addop -> +");}
      | '-' {printf("\nRule 4: addop -> -");};

term : term mulop factor {printf("\nRule 5: term -> term mulop factor");}    
        | factor {printf("\nRule 6: term -> factor");};

mulop : '*' {printf("\nRule 7: mulop -> *");};
factor : '(' exp ')' {printf("\nRule 8: factor -> (exp)");};
       | number {printf("\nRule 9: factor -> number");};
number : number DIGIT {printf("\nRule 10: number -> number digit");}
       | DIGIT {printf("\nRule 11: number -> digit");};

%%

int main(){
    printf("Enter the expression : ");
    yyparse();
    printf("\nValid expression\n\n");
    return 0;
}

int yyerror(char *s){
    printf("\nInvalid Expression\n\n");
    return 0;
}