%{
    #include<stdio.h>
    #include<stdlib.h>
    int yyerror(char *s);
    int yylex();
%}

%token ID AND OR NOT EQ NE

%%
exp : exp_2             {printf("\nRule 1: exp -> exp_2");}
    | exp AND exp_2     {printf("\nRule 2: exp -> exp & exp_2");};

exp_2 : exp_3           {printf("\nRule 3: exp_2 -> exp_3");}
     |exp_3 OR exp_2    {printf("\nRule 4: exp_2 -> exp_3 | exp_2");};

exp_3 : exp_4           {printf("\nRule 5: exp_3 -> exp_4");}
    | exp_4 EQ exp_4    {printf("\nRule 6: exp_3 -> exp_4 == exp_4");}
    | exp_4 NE exp_4    {printf("\nRule 7: exp_3 -> exp_4 != exp_4");};

exp_4: exp_5            {printf("\nRule 8: exp_4 -> exp_5");}
    | NOT exp_5         {printf("\nRule 9: exp_4 -> ! exp_5");};

exp_5 : ID              {printf("\nRule 10: exp_5 -> identifier");}
    | '(' exp ')'       {printf("\nRule 11: exp_5 -> (exp)");}

%% 

int main(){
    printf("Enter the expression : ");
    yyparse();
    printf("\n\nValid Expression \n");
    return 0;
}

int yyerror(char *s){
    printf("\n\nInvalid Expression \n");
    return 0;
}