%{
#include <stdio.h>

// Declare the functions that will be called from the parser
void yyerror(const char *s);
int yylex(void);

// Declare the token types recognized by the lexer
#define TITLE 1
#define PARAGRAPH 2
#define ITEM 3
#define LIST_START 4
#define LIST_END 5
#define NESTED_LIST_START 6
#define NESTED_LIST_END 7
#define TABLE_START 8
#define TABLE_END 9
%}

// Define the tokens recognized by the parser
%token TITLE PARAGRAPH ITEM
%token LIST_START LIST_END
%token NESTED_LIST_START NESTED_LIST_END
%token TABLE_START TABLE_END

// Define the start symbol for the grammar
%start document

// Define the grammar rules
%%
document : content
         | /* empty */
         ;

content  : paragraph
         | list
         | title
         | table
         | content paragraph
         | content list
         | content title
         | content table
         ;

paragraph : PARAGRAPH { printf("Paragraph\n"); }
          ;

title    : TITLE { printf("Title: %s\n", yytext+7); }
         ;

list     : LIST_START list_items LIST_END
         ;

list_items : ITEM { printf("List:\n"); printf("  * %s\n", yytext+2); }
           | list_items ITEM { printf("  * %s\n", yytext+2); }
           ;

table    : TABLE_START table_rows TABLE_END
         ;

table_rows : table_row
           | table_rows table_row
           ;

table_row : '|' table_cells '|' { printf("Table Row\n"); }
          ;

table_cells : table_cell
            | table_cells table_cell
            ;

table_cell : ITEM { printf("Table Cell: %s\n", yytext+2); }
           ;
%%

// Define the error handling function
void yyerror(const char *s)
{
    fprintf(stderr, "Error: %s\n", s);
}

// Define the main function to run the parser
int main()
{
    yyparse();
    return 0;
}
