%{
#include <stdio.h>
%}

%%
"\\title{"[^}]*"}"        { printf("TITLE\n"); }
"\\par"                   { printf("PARAGRAPH\n"); }
"\\begin{itemize}"        { printf("LIST START\n"); }
"\\end{itemize}"          { printf("LIST END\n"); }
"\\begin{tabular}"        { printf("TABLE START\n"); }
"\\end{tabular}"          { printf("TABLE END\n"); }
"\\item"                  { printf("ITEM\n");}
[a-zA-Z0-9 \t\n]*         { }
.                         { }
%%

int main()
{
    yylex();
    return 0;
}

