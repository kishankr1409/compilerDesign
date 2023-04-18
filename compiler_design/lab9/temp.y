%{
#include <stdio.h>
%}

%token NUMBER ADDOP MULOP OPEN_PAREN CLOSE_PAREN

%%

exp: exp ADDOP term 
   | term
   ;

term: term MULOP factor
    | factor
    ;

factor: OPEN_PAREN exp CLOSE_PAREN 
      | NUMBER
      ;

NUMBER: NUMBER digit 
      | digit
      ;

ADDOP: '+' 
     | '-' 
     ;

MULOP: '*' 
     ;

digit: '0' 
     | '1' 
     | '2' 
     | '3' 
     | '4' 
     | '5' 
     | '6' 
     | '7' 
     | '8' 
     | '9' 
     ;

%%

int yylex() {
  static int last_char = ' ';
  int c = getchar();

  // Skip whitespace
  while (isspace(c)) {
    c = getchar();
  }

  // Handle numbers
  if (isdigit(c)) {
    ungetc(c, stdin);
    int value = 0;
    while (isdigit(c = getchar())) {
      value = 10 * value + (c - '0');
    }
    ungetc(c, stdin);
    yylval = value;
    return NUMBER;
  }

  // Handle operators and parentheses
  if (c == '+' || c == '-' || c == '*' || c == '(' || c == ')') {
    return c;
  }

  // End of file
  if (c == EOF) {
    return 0;
  }

  // Error
  return -1;
}

void yyerror(char* message) {
  fprintf(stderr, "Error: %s\n", message);
}

int main() {
  yyparse();
  return 0;
}

