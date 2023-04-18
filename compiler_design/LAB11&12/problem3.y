%{
    #include<stdio.h>
    #include<stdlib.h>

    int yyerror(char *s);
    int yylex();
%}

%token DIGIT

%%
S: exp {printf("\n\nRESULT: %d\n", $$);}
exp : exp add term {$$ = $1 + $3; printf("\nRule 1: exp -> exp addop term"); printf("\t\texp: %d", $$);}
    | exp sub term {$$ = $1 - $3; printf("\nRule 1: exp -> exp addop term"); printf("\t\texp: %d", $$);}
    |term {printf("\nRule 2: exp -> term");printf("\t\t\texp: %d", $$);};

add : '+' {printf("\nRule 3: addop -> +");};
sub : '-' {printf("\nRule 4: addop -> -");};

term : term mulop factor {$$ = $1 * $3; printf("\nRule 5: term -> term mulop factor");printf("\tterm: %d", $$);}    
        | factor {printf("\nRule 6: term -> factor");printf("\t\t\tterm: %d", $$);};

mulop : '*' {printf("\nRule 7: mulop -> *");};
factor : '(' exp ')' {$$ = $2; printf("\nRule 8: factor -> (exp)"); printf("\t\t\tterm: %d", $$);};
       | number {printf("\nRule 9: factor -> number");printf("\t\tterm: %d", $$);};
number : number DIGIT {$$ = $1*10 + $2; printf("\nRule 10: number -> number digit"); printf("\t\t\tnumber: %d", $$);}
       | DIGIT {$$ = $1; printf("\nRule 11: number -> digit"); printf("\t\tnumber: %d", $$);};

%%

int main(){
    printf("Enter the expression : ");
    yyparse();
    return 0;
}

int yyerror(char *s){
    printf("\nInvalid Expression\n\n");
    return 0;
}