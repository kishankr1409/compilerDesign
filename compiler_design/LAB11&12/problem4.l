%{
    #include<stdio.h>
    #include"y.tab.h"
    extern int yylval;
%}

%%
max {return MAX;}
min {return MIN;}
[0-9]+ {yylval = atoi(yytext); return NUM;}
[+] {return ADD;}
[*] {return MUL;}
[ \t] {;}
\n return 0;
. {return yytext[0];}
%%

int yywrap(){
    return 1;
}
