%{
    #include<stdio.h>
    int valid=1;   
%}
%token key num id op
%%
start : key num ';'
      | key expr
      ;
expr : id '=' s ';'
s :     id x       
      | num x       
      | '-' num x   
      | '(' s ')' x 
      ;
x :     op s        
      | '-' s      
      |             
      ;
%%
int yyerror(){
    valid=0;
    printf("\nInvalid declaration!\n");
    return 0;
}
int main(){
    printf("\nEnter the declaration:\n");
    yyparse();
    if(valid){
        printf("\nValid declaration!\n");
    }
}
