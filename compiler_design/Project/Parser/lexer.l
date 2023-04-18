%{
#include <stdio.h>
#include <stdlib.h>
%}

%%
"\\title{[^}]*}"   { yylval.str = strdup(yytext); return TITLE; }
"\\par"             { return PARAGRAPH; }
"\\begin{itemize}"  { return LIST_START; }
"\\end{itemize}"    { return LIST_END; }
"\\begin{enumerate}"  { return NESTED_LIST_START; }
"\\end{enumerate}"    { return NESTED_LIST_END; }
"\\begin{tabular}"  { return TABLE_START; }
"\\end{tabular}"    { return TABLE_END; }
"\\item\\s.*$"      { yylval.str = strdup(yytext); return ITEM; }
"\\|.*\\|"          { yylval.str = strdup(yytext); return ITEM; }
\n                  { return NEWLINE; }
[a-zA-Z0-9\t ]+     {}
.                   {}

%%

int main()
{
    yylex();
    return 0;
}
