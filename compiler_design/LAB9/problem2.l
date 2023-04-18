%{
    #include "y.tab.h"
%}

%%
[a-zA-Z][0-9a-zA-Z]* {return ID;}
"&" {return AND;}
"|" {return OR;}
"!" {return NOT;}
"==" {return EQ;}
"!=" {return NE;}
[ \t] {;}
\n return 0;
. {return yytext[0];}
%%

int yywrap(){
    return 1;
}