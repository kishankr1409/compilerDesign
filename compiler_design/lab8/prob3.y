%{
    #include<stdio.h>
    int valid=1;   
%}
%token id 
%%
start: 	expr ';'
	|'(' expr ')' ';'
	|'(' expr ')''=''=' '(' expr ')' ';'
	|'(' expr ')''>' '(' expr ')' ';'
	|'(' expr ')''<' '(' expr ')' ';'
	|'(' expr ')''>''=' '(' expr ')' ';'
	|'(' expr ')''<''=' '(' expr ')' ';'
     ;
expr: id '=''=' id
     |id '!''=' id
     |id '>' id
     |id '<' id
     |id '>''=' id
     |id '<''=' id
     ;

%%
int yyerror(){
    valid=0;
    printf("\nInvalid relational expression:!\n");
    return 0;
}

int main(){
    printf("\nEnter the relational expression:\n");
    yyparse();
    if(valid){
        printf("\nValid relational expression:!\n");
    }
}
