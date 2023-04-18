%{
    #include "y.tab.h"
%}

%%
[a-zA-Z0-9]* {yytext[0]; return CH;}
\n return 0;
. {return yytext[0];}
%%

int yywrap(){
    return 1;
}