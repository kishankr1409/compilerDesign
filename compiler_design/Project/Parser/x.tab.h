/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_X_TAB_H_INCLUDED
# define YY_YY_X_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    BACKSL = 258,                  /* BACKSL  */
    LBEGIN = 259,                  /* LBEGIN  */
    LCURLYB = 260,                 /* LCURLYB  */
    DOCUMENT = 261,                /* DOCUMENT  */
    RCURLYB = 262,                 /* RCURLYB  */
    END = 263,                     /* END  */
    WORD = 264,                    /* WORD  */
    WS = 265,                      /* WS  */
    SPECCHAR = 266,                /* SPECCHAR  */
    CENTER = 267,                  /* CENTER  */
    VERBATIM = 268,                /* VERBATIM  */
    SINGLE = 269,                  /* SINGLE  */
    ITEMIZE = 270,                 /* ITEMIZE  */
    ENUMERATE = 271,               /* ENUMERATE  */
    TABULAR = 272,                 /* TABULAR  */
    TABLE = 273,                   /* TABLE  */
    LSQRB = 274,                   /* LSQRB  */
    RSQRB = 275,                   /* RSQRB  */
    H = 276,                       /* H  */
    T = 277,                       /* T  */
    B = 278,                       /* B  */
    COLS = 279,                    /* COLS  */
    RIGHT = 280,                   /* RIGHT  */
    CAPTION = 281,                 /* CAPTION  */
    LABEL = 282,                   /* LABEL  */
    DBLBS = 283,                   /* DBLBS  */
    ITEM = 284,                    /* ITEM  */
    SECTION = 285,                 /* SECTION  */
    SUBSEC = 286,                  /* SUBSEC  */
    TABOCON = 287,                 /* TABOCON  */
    RENEW = 288,                   /* RENEW  */
    BASELINES = 289,               /* BASELINES  */
    PAGENUM = 290,                 /* PAGENUM  */
    INTEGER = 291,                 /* INTEGER  */
    ARABIC1 = 292,                 /* ARABIC1  */
    LROMAN1 = 293,                 /* LROMAN1  */
    CROMAN1 = 294,                 /* CROMAN1  */
    LALPH1 = 295,                  /* LALPH1  */
    CALPH1 = 296,                  /* CALPH1  */
    VSPACE = 297,                  /* VSPACE  */
    HSPACE = 298,                  /* HSPACE  */
    RM = 299,                      /* RM  */
    IT = 300,                      /* IT  */
    NOINDENT = 301,                /* NOINDENT  */
    REF = 302,                     /* REF  */
    ARABIC2 = 303,                 /* ARABIC2  */
    LROMAN2 = 304,                 /* LROMAN2  */
    CROMAN2 = 305,                 /* CROMAN2  */
    LALPH2 = 306,                  /* LALPH2  */
    CALPH2 = 307                   /* CALPH2  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 38 "x.y"

      char   trans[BUF_SIZE+1];
      int    val;
   

#line 122 "x.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_X_TAB_H_INCLUDED  */
