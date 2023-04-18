%{
    #include<stdio.h>
    int valid=1;   
%}
%token num id op
%%
start : id '=' s ';' { printf("start-> =s;\n");}
s :     id x       { printf("s-> id x\n");}
      | num x       { printf("s-> num x\n");}
      | '-' num x   { printf("s-> - num x\n");}
      | '(' s ')' x { printf("s-> (s) x\n");}
      ;
x :     op s        { printf("x-> op s\n");}
      | '-' s       { printf("x-> - s\n");}
      |             { printf("x-> &\n");}
      ;
%%
int yyerror(){
    valid=0;
    printf("\nInvalid expression!\n");
    return 0;
}
int main(){
    printf("\nEnter the expression:\n");
    yyparse();
    if(valid){
        printf("\nValid expression!\n");
    }
}
