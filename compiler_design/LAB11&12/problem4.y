%{
    #include<stdio.h>
    #include<stdlib.h>
    int yyerror(char *s);
    int yylex();
    int flag = -1;
    int ans = 0;
%}

%token MAX MIN ADD MUL NUM

%%
res : '(' exp ')' {printf("RESULT: %d\n", ans);};
exp : op l;
op : ADD {flag = 1;}
    | MUL {flag = 2; ans = 1;}
    | MAX {flag = 3; ans = -9999;}
    | MIN {flag = 4; ans = 9999;};
l : NUM { if(flag == 1) ans+=$1;
          else if(flag == 2) ans *=$1;
          else if(flag == 3) if(ans < $1)ans = $1;
          else if(flag == 4) if(ans > $1) ans = $1;
    }
    | l NUM { if(flag == 1) ans+=$2;
          else if(flag == 2) ans *=$2;
          else if(flag == 3) if(ans < $2)ans = $2;
          else if(flag == 4) if(ans > $2) ans = $2;

    };
%%

int main(){
    printf("ENTER THE EXPRESSION: ");
    yyparse();
    return 0;
}

int yyerror(char *s){
    printf("\n\nINVALID EXPRESSION \n");
    return 0;
}
