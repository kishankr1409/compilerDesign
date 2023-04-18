%{ 

#include <stdio.h>
#define  TBEGIN  				200
#define  TEND 					201
#define  TDOCUMENT				202
#define  TWORD          			203
#define  TBACKSL				204
#define	 TLCURLYB				205
#define  TRCURLYB				206
#define  TTABLESPEC				207
#define  TCOLSPEC				208
#define  T_INTEGER      			209
#define  T_STRING       			210
#define  T_SECTION      			211
#define  T_SUBSECTION   			212
#define  T_COUNTER      			213
#define  T_CONTENT      			214
#define  T_RENEW				215
#define  T_BASELINE				216
#define  T_PAGENUM				217
#define  T_ARABIC				218
#define  T_ROMAN				219
#define  T_ALPH					220
#define  T_VSPACE				221
#define  T_HSPACE				222
#define  T_RM					223
#define  T_IT					224
#define  T_ITEM					225
#define  T_NOINDENT				226
#define  T_CENTER				227
#define  T_VERBATIM				228
#define  T_SINGLE				229
#define  T_ITEMIZE				230
#define  T_CAPTION				231
#define  T_LABEL				232
#define  T_ENUM					233
#define  T_TABLE				234
#define  T_TABULAR				235
#define  T_STYLE				236
#define  T_LATEXCMDS				237
#define  T_ROMAN_UPPER				238
#define	 T_ALPH_UPPER				239

%}
integer         ([0-9]+)
ws		[ \t\n]+
string          ([a-zA-Z0-9\~\!\@\#\$\%\&\_\-\?\,\.\+\\\'\"\>\<\`\;\(\)\:])*
word		([a-zA-Z0-9])*
tablespec       \[(h|t|b)\]
colspec         (c|l|r)+
counter         (^[1-9]$|^1[0-9]$|^2[0-6]$)
style		(^arabic|^roman|^alph|^Roman|^Alph)
Roman		([I|II|III|V])*
roman		([i|ii|iii|v])*
Alph		([A-Z])*
alph		([a-z])*

%%

"\\"			{printf(" Val: %d\t; Lexeme: %s \n",
				TBACKSL, yytext);return(TBACKSL);}
"{"			{printf(" Val: %d\t; Lexeme: %s \n",
				TLCURLYB, yytext);return(TLCURLYB);}
"}"			{printf(" Val: %d\t; Lexeme: %s \n",
				TRCURLYB, yytext);return(TRCURLYB);}
"\\begin"		{printf(" Val: %d\t; Lexeme: %s \n",
				TBEGIN, yytext);return(TBEGIN);}
"\\section"		{printf(" Val: %d\t; Lexeme: %s \n",
				T_SECTION, yytext);return(T_SECTION);}
"\\subsection"		{printf(" Val: %d\t; Lexeme: %s \n",
				T_SUBSECTION, yytext);return(T_SUBSECTION);}
"\\tableofcontent"	{printf(" Val: %d\t; Lexeme: %s \n",
				T_CONTENT, yytext);return(T_CONTENT);}
"\\renewcommand"	{printf(" Val: %d\t; Lexeme: %s \n",
				T_RENEW, yytext);return(T_RENEW);}
"\{\\baselinestretch\}"	{printf(" Val: %d\t; Lexeme: %s \n",
				T_BASELINE, yytext);return(T_BASELINE);}
"\\pagenumbering"	{printf(" Val: %d\t; Lexeme: %s \n",
				T_PAGENUM, yytext);return(T_PAGENUM);}
"\\arabic"		{printf(" Val: %d\t; Lexeme: %s \n",
				T_ARABIC, yytext);return(T_ARABIC);}
"\\roman"		{printf(" Val: %d\t; Lexeme: %s \n",
				T_ROMAN, yytext);return(T_ROMAN);}
"\\alph"		{printf(" Val: %d\t; Lexeme: %s \n",
				T_ALPH, yytext);return(T_ALPH);}
"\\Roman"		{printf(" Val: %d\t; Lexeme: %s \n",
				T_ROMAN_UPPER, yytext);return(T_ROMAN_UPPER);}
"\\Alph"		{printf(" Val: %d\t; Lexeme: %s \n",
				T_ALPH_UPPER, yytext);return(T_ALPH_UPPER);}
"\\vspace"		{printf(" Val: %d\t; Lexeme: %s \n",
				T_VSPACE, yytext);return(T_VSPACE);}
"\\hspace"		{printf(" Val: %d\t; Lexeme: %s \n",
				T_HSPACE, yytext);return(T_HSPACE);}
"\\rm"			{printf(" Val: %d\t; Lexeme: %s \n",
				T_RM, yytext);return(T_RM);}
"\\it"			{printf(" Val: %d\t; Lexeme: %s \n",
				T_IT, yytext);return(T_IT);}
"\\item"		{printf(" Val: %d\t; Lexeme: %s \n",
				T_ITEM, yytext);return(T_ITEM);}
"\\noindent"		{printf(" Val: %d\t; Lexeme: %s \n",
				T_NOINDENT, yytext);return(T_NOINDENT);}
"\\caption"		{printf(" Val: %d\t; Lexeme: %s \n",
				T_CAPTION, yytext);return(T_CAPTION);}
"\\label"		{printf(" Val: %d\t; Lexeme: %s \n",
				T_LABEL, yytext);return(T_LABEL);}
"\{document\}"		{printf(" Val: %d\t; Lexeme: %s \n",
				TDOCUMENT, yytext);return(TDOCUMENT);}
"\\end"			{printf(" Val: %d\t; Lexeme: %s \n",
				TEND, yytext);return(TEND);}
{integer}		{printf(" Val: %d\t; Lexeme: %s \n",
				T_INTEGER, yytext);return(T_INTEGER);}
{colspec}		{printf(" Val: %d\t; Lexeme: %s \n",
				TCOLSPEC, yytext);return(TCOLSPEC);}
{word}			{printf(" Val: %d\t; Lexeme: %s \n",
				TWORD, yytext);return(TWORD);}
{string}		{printf(" Val: %d\t; Lexeme: %s \n",
				T_STRING, yytext);return(T_STRING);}
{counter}		{printf(" Val: %d\t; Lexeme: %s \n",
				T_COUNTER, yytext);return(T_COUNTER);}
{style}			{printf(" Val: %d\t; Lexeme: %s \n",
				T_STYLE, yytext);return(T_STYLE);}
"\{verbatim\}"		{printf(" Val: %d\t; Lexeme: %s \n",
				T_VERBATIM, yytext);return(T_VERBATIM);}
"\{center\}"		{printf(" Val: %d\t; Lexeme: %s \n",
				T_CENTER, yytext);return(T_CENTER);}
"\{single\}"		{printf(" Val: %d\t; Lexeme: %s \n",
				T_SINGLE, yytext);return(T_SINGLE);}
"\{itemize\}"		{printf(" Val: %d\t; Lexeme: %s \n",
				T_ITEMIZE, yytext);return(T_ITEMIZE);}
"\{enumerate\}"		{printf(" Val: %d\t; Lexeme: %s \n",
				T_ENUM, yytext);return(T_ENUM);}
{tablespec}		{printf(" Val: %d\t; Lexeme: %s \n",
				TTABLESPEC, yytext);return(TTABLESPEC);}
"\{table\}"		{printf(" Val: %d\t; Lexeme: %s \n",
				T_TABLE, yytext);return(T_TABLE);}
"\{tabular\}"		{printf(" Val: %d\t; Lexeme: %s \n",
				T_TABULAR, yytext);return(T_TABULAR);}
"\{latexcmds\}"		{printf(" Val: %d\t; Lexeme: %s \n",
				T_LATEXCMDS, yytext);return(T_LATEXCMDS);}
{ws}                    { /* DO NOTHING */ }


%%
/* need main routine at bottom */
yywrap(){return 0;}

main()
{
int i;
do {
  i = yylex();
  printf("i is: %d ****\n", i);
} while (i!= -1);
return 0;
}