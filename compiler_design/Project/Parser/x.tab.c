/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 3 "x.y"

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define  BUF_SIZE       512

int ws_flag = 0;

char ls_value[10];
char hornum[50];
char style[10];
char fontst[10];
char fonttx[50];

char tab[10];/* {table}*/
char tabu[10];/*{table}*/
char bgtx[1000]; /* verbatim and single text*/
char itemtx[1000];/* enumberate or itemize text content*/
char single[20]; /* begin block variables*/ 

char tabcsp[30]; /* tabular column*/

char tablo[10]; /*table location*/
char tabtx[1000]; /*table text*/
char endv[10];
char cap[10]; /*caption v*/
char captx[1000];
#include "lex.yy.c"
#include "util.c"
#include "generate.c"


#line 104 "x.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "x.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_BACKSL = 3,                     /* BACKSL  */
  YYSYMBOL_LBEGIN = 4,                     /* LBEGIN  */
  YYSYMBOL_LCURLYB = 5,                    /* LCURLYB  */
  YYSYMBOL_DOCUMENT = 6,                   /* DOCUMENT  */
  YYSYMBOL_RCURLYB = 7,                    /* RCURLYB  */
  YYSYMBOL_END = 8,                        /* END  */
  YYSYMBOL_WORD = 9,                       /* WORD  */
  YYSYMBOL_WS = 10,                        /* WS  */
  YYSYMBOL_SPECCHAR = 11,                  /* SPECCHAR  */
  YYSYMBOL_CENTER = 12,                    /* CENTER  */
  YYSYMBOL_VERBATIM = 13,                  /* VERBATIM  */
  YYSYMBOL_SINGLE = 14,                    /* SINGLE  */
  YYSYMBOL_ITEMIZE = 15,                   /* ITEMIZE  */
  YYSYMBOL_ENUMERATE = 16,                 /* ENUMERATE  */
  YYSYMBOL_TABULAR = 17,                   /* TABULAR  */
  YYSYMBOL_TABLE = 18,                     /* TABLE  */
  YYSYMBOL_LSQRB = 19,                     /* LSQRB  */
  YYSYMBOL_RSQRB = 20,                     /* RSQRB  */
  YYSYMBOL_H = 21,                         /* H  */
  YYSYMBOL_T = 22,                         /* T  */
  YYSYMBOL_B = 23,                         /* B  */
  YYSYMBOL_COLS = 24,                      /* COLS  */
  YYSYMBOL_RIGHT = 25,                     /* RIGHT  */
  YYSYMBOL_CAPTION = 26,                   /* CAPTION  */
  YYSYMBOL_LABEL = 27,                     /* LABEL  */
  YYSYMBOL_DBLBS = 28,                     /* DBLBS  */
  YYSYMBOL_ITEM = 29,                      /* ITEM  */
  YYSYMBOL_SECTION = 30,                   /* SECTION  */
  YYSYMBOL_SUBSEC = 31,                    /* SUBSEC  */
  YYSYMBOL_TABOCON = 32,                   /* TABOCON  */
  YYSYMBOL_RENEW = 33,                     /* RENEW  */
  YYSYMBOL_BASELINES = 34,                 /* BASELINES  */
  YYSYMBOL_PAGENUM = 35,                   /* PAGENUM  */
  YYSYMBOL_INTEGER = 36,                   /* INTEGER  */
  YYSYMBOL_ARABIC1 = 37,                   /* ARABIC1  */
  YYSYMBOL_LROMAN1 = 38,                   /* LROMAN1  */
  YYSYMBOL_CROMAN1 = 39,                   /* CROMAN1  */
  YYSYMBOL_LALPH1 = 40,                    /* LALPH1  */
  YYSYMBOL_CALPH1 = 41,                    /* CALPH1  */
  YYSYMBOL_VSPACE = 42,                    /* VSPACE  */
  YYSYMBOL_HSPACE = 43,                    /* HSPACE  */
  YYSYMBOL_RM = 44,                        /* RM  */
  YYSYMBOL_IT = 45,                        /* IT  */
  YYSYMBOL_NOINDENT = 46,                  /* NOINDENT  */
  YYSYMBOL_REF = 47,                       /* REF  */
  YYSYMBOL_ARABIC2 = 48,                   /* ARABIC2  */
  YYSYMBOL_LROMAN2 = 49,                   /* LROMAN2  */
  YYSYMBOL_CROMAN2 = 50,                   /* CROMAN2  */
  YYSYMBOL_LALPH2 = 51,                    /* LALPH2  */
  YYSYMBOL_CALPH2 = 52,                    /* CALPH2  */
  YYSYMBOL_YYACCEPT = 53,                  /* $accept  */
  YYSYMBOL_latexstatement = 54,            /* latexstatement  */
  YYSYMBOL_startdoc = 55,                  /* startdoc  */
  YYSYMBOL_enddoc = 56,                    /* enddoc  */
  YYSYMBOL_mainbody = 57,                  /* mainbody  */
  YYSYMBOL_mainoption = 58,                /* mainoption  */
  YYSYMBOL_textoption = 59,                /* textoption  */
  YYSYMBOL_wsorword = 60,                  /* wsorword  */
  YYSYMBOL_commentoption = 61,             /* commentoption  */
  YYSYMBOL_latexoptions = 62,              /* latexoptions  */
  YYSYMBOL_curlyboptions = 63,             /* curlyboptions  */
  YYSYMBOL_backsoptions = 64,              /* backsoptions  */
  YYSYMBOL_beginendopts = 65,              /* beginendopts  */
  YYSYMBOL_66_1 = 66,                      /* $@1  */
  YYSYMBOL_begcmds = 67,                   /* begcmds  */
  YYSYMBOL_68_2 = 68,                      /* $@2  */
  YYSYMBOL_69_3 = 69,                      /* $@3  */
  YYSYMBOL_endbegin = 70,                  /* endbegin  */
  YYSYMBOL_endcmds = 71,                   /* endcmds  */
  YYSYMBOL_beginblock = 72,                /* beginblock  */
  YYSYMBOL_listblock = 73,                 /* listblock  */
  YYSYMBOL_anitem = 74,                    /* anitem  */
  YYSYMBOL_entrylist = 75,                 /* entrylist  */
  YYSYMBOL_anentry = 76,                   /* anentry  */
  YYSYMBOL_entry = 77,                     /* entry  */
  YYSYMBOL_begtableopts = 78,              /* begtableopts  */
  YYSYMBOL_begtabularopts = 79,            /* begtabularopts  */
  YYSYMBOL_80_4 = 80,                      /* $@4  */
  YYSYMBOL_position = 81,                  /* position  */
  YYSYMBOL_endtableopts = 82,              /* endtableopts  */
  YYSYMBOL_captionrest = 83,               /* captionrest  */
  YYSYMBOL_labelrest = 84,                 /* labelrest  */
  YYSYMBOL_sectionoptions = 85,            /* sectionoptions  */
  YYSYMBOL_tableofcont = 86,               /* tableofcont  */
  YYSYMBOL_linespacing = 87,               /* linespacing  */
  YYSYMBOL_88_5 = 88,                      /* $@5  */
  YYSYMBOL_pagenumbers = 89,               /* pagenumbers  */
  YYSYMBOL_style2 = 90,                    /* style2  */
  YYSYMBOL_pagenuminit = 91,               /* pagenuminit  */
  YYSYMBOL_92_6 = 92,                      /* $@6  */
  YYSYMBOL_style1 = 93,                    /* style1  */
  YYSYMBOL_spacing = 94,                   /* spacing  */
  YYSYMBOL_95_7 = 95,                      /* $@7  */
  YYSYMBOL_horvert = 96,                   /* horvert  */
  YYSYMBOL_fonts = 97,                     /* fonts  */
  YYSYMBOL_specialchar = 98,               /* specialchar  */
  YYSYMBOL_nonewpara = 99,                 /* nonewpara  */
  YYSYMBOL_reference = 100                 /* reference  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   164

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  104
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  155

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   307


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    59,    59,    62,    65,    68,    69,    72,    76,    77,
      80,    85,    91,    95,   101,   104,   105,   108,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   128,
     128,   140,   143,   145,   147,   148,   149,   149,   150,   150,
     151,   155,   156,   160,   161,   162,   163,   164,   165,   166,
     169,   170,   174,   177,   183,   186,   191,   195,   198,   201,
     206,   211,   216,   220,   226,   229,   229,   232,   233,   234,
     237,   238,   240,   243,   244,   247,   250,   255,   262,   270,
     268,   281,   290,   291,   292,   293,   294,   298,   297,   304,
     305,   306,   307,   308,   312,   311,   323,   326,   329,   330,
     333,   334,   335,   338,   341
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "BACKSL", "LBEGIN",
  "LCURLYB", "DOCUMENT", "RCURLYB", "END", "WORD", "WS", "SPECCHAR",
  "CENTER", "VERBATIM", "SINGLE", "ITEMIZE", "ENUMERATE", "TABULAR",
  "TABLE", "LSQRB", "RSQRB", "H", "T", "B", "COLS", "RIGHT", "CAPTION",
  "LABEL", "DBLBS", "ITEM", "SECTION", "SUBSEC", "TABOCON", "RENEW",
  "BASELINES", "PAGENUM", "INTEGER", "ARABIC1", "LROMAN1", "CROMAN1",
  "LALPH1", "CALPH1", "VSPACE", "HSPACE", "RM", "IT", "NOINDENT", "REF",
  "ARABIC2", "LROMAN2", "CROMAN2", "LALPH2", "CALPH2", "$accept",
  "latexstatement", "startdoc", "enddoc", "mainbody", "mainoption",
  "textoption", "wsorword", "commentoption", "latexoptions",
  "curlyboptions", "backsoptions", "beginendopts", "$@1", "begcmds", "$@2",
  "$@3", "endbegin", "endcmds", "beginblock", "listblock", "anitem",
  "entrylist", "anentry", "entry", "begtableopts", "begtabularopts", "$@4",
  "position", "endtableopts", "captionrest", "labelrest", "sectionoptions",
  "tableofcont", "linespacing", "$@5", "pagenumbers", "style2",
  "pagenuminit", "$@6", "style1", "spacing", "$@7", "horvert", "fonts",
  "specialchar", "nonewpara", "reference", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-74)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-64)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      20,     4,    27,    92,   -74,   -74,    93,    46,   -74,   -74,
     -74,    85,    39,    43,   -74,    50,     8,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,    74,    31,   -74,
      85,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,    80,   -74,    87,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,    44,    85,    85,
      85,    85,    64,   -74,   -74,   -74,   -74,   -74,   -74,    91,
      98,   -74,   -74,   -74,   103,   106,   111,   100,    -3,   -74,
      85,    36,    73,   113,   114,   -74,   -74,   -74,   102,   -74,
      -4,   -74,    85,     2,    -1,     6,     0,   -74,    12,   -74,
       9,   -74,   -74,   141,   -74,   140,   142,   -74,   -74,   -74,
     -74,   130,    85,   128,   143,   146,   -74,   134,   -74,   -74,
     -74,    85,   -74,   -74,    85,   -74,   145,   -74,   -74,   148,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,    85,
     147,   -74,    85,   -74,   -74,    79,   150,   151,     7,   152,
     -74,   -74,   -74,   -74,   -74
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     3,     1,     0,   101,   102,    13,
      12,   100,     0,     0,    78,     0,     0,    89,    90,    91,
      92,    93,    96,    97,    98,    99,   103,     0,     0,     6,
       7,    11,     8,     9,    15,    18,    19,    20,    21,    22,
      23,     0,    24,     0,    25,    26,    27,    28,    31,    32,
      33,    34,    35,    38,    36,    40,    29,     0,     0,    14,
       0,     0,     0,    82,    83,    84,    85,    86,    81,     0,
       0,     2,     5,    10,     0,     0,     0,     0,     0,    16,
      17,     0,     0,     0,     0,     4,    87,    94,     0,    39,
       0,    37,     0,    51,    50,     0,    53,    55,    52,    59,
       0,    76,    77,     0,   104,     0,     0,    65,    67,    68,
      69,     0,    56,    70,     0,     0,    30,     0,    72,    57,
      54,    63,    61,    58,     0,    60,     0,    88,    95,     0,
      64,    43,    44,    45,    46,    47,    48,    49,    41,     0,
       0,    42,    62,    79,    66,     0,     0,     0,     0,     0,
      80,    73,    71,    74,    75
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -74,   -74,   -74,   -74,   -74,   131,   -11,   -28,   -74,   -74,
     -74,   -74,   -73,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,    65,   -74,    66,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,    14,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   156,   -74,   -74,   -74
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,    71,    28,    29,    30,    31,    32,    33,
      57,    34,    35,    78,    56,    77,    76,   116,   138,    95,
      96,    97,    98,    99,   100,    91,    89,   129,   111,   117,
     152,   118,    36,    37,    38,   147,    39,    68,    40,   105,
      41,    42,   106,    43,    44,    45,    46,    47
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      59,     6,    73,   -57,     6,    94,     9,    10,   -61,   -61,
       4,     9,    10,   -63,   113,   151,     6,   108,   109,   110,
     124,     9,    10,   119,     1,   122,    92,     5,   -57,    92,
     -63,    73,   114,   115,   115,     6,     7,   125,     8,    70,
       9,    10,    11,   101,    60,     9,    10,    80,    61,    81,
      82,    79,    73,    73,    73,    62,    63,    64,    65,    66,
      67,    12,    13,    14,    15,    73,    16,    93,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    69,
     102,   112,     9,    10,    73,    74,   148,   121,     9,    10,
      24,    25,    75,    73,     9,    10,     6,     7,    83,     8,
      84,     9,    10,    11,    85,    48,    49,    50,    51,    52,
      53,    54,    86,   142,    73,    87,    88,    73,    55,    90,
     103,   104,    12,    13,    14,    15,   107,    16,   145,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
     131,   132,   133,   134,   135,   136,   126,   127,   139,   128,
     130,   140,   141,   137,   143,   144,   146,   149,   150,    72,
     154,   120,   153,    58,   123
};

static const yytype_uint8 yycheck[] =
{
      11,     4,    30,     4,     4,    78,     9,    10,     9,    10,
       6,     9,    10,    11,     8,     8,     4,    21,    22,    23,
      11,     9,    10,    96,     4,    98,    29,     0,    29,    29,
      28,    59,    26,    27,    27,     4,     5,    28,     7,     8,
       9,    10,    11,     7,     5,     9,    10,    58,     5,    60,
      61,     7,    80,    81,    82,     5,    48,    49,    50,    51,
      52,    30,    31,    32,    33,    93,    35,    78,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,     5,
       7,    92,     9,    10,   112,     5,     7,    98,     9,    10,
      44,    45,     5,   121,     9,    10,     4,     5,    34,     7,
       9,     9,    10,    11,     6,    12,    13,    14,    15,    16,
      17,    18,     9,   124,   142,     9,     5,   145,    25,    19,
       7,     7,    30,    31,    32,    33,    24,    35,   139,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      12,    13,    14,    15,    16,    17,     5,     7,     5,     7,
      20,     5,    18,    25,     9,     7,     9,     7,     7,    28,
       8,    96,   148,     7,    98
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,    54,    55,     6,     0,     4,     5,     7,     9,
      10,    11,    30,    31,    32,    33,    35,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    57,    58,
      59,    60,    61,    62,    64,    65,    85,    86,    87,    89,
      91,    93,    94,    96,    97,    98,    99,   100,    12,    13,
      14,    15,    16,    17,    18,    25,    67,    63,    97,    59,
       5,     5,     5,    48,    49,    50,    51,    52,    90,     5,
       8,    56,    58,    60,     5,     5,    69,    68,    66,     7,
      59,    59,    59,    34,     9,     6,     9,     9,     5,    79,
      19,    78,    29,    59,    65,    72,    73,    74,    75,    76,
      77,     7,     7,     7,     7,    92,    95,    24,    21,    22,
      23,    81,    59,     8,    26,    27,    70,    82,    84,    65,
      74,    59,    65,    76,    11,    28,     5,     7,     7,    80,
      20,    12,    13,    14,    15,    16,    17,    25,    71,     5,
       5,    18,    59,     9,     7,    59,     9,    88,     7,     7,
       7,     8,    83,    84,     8
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    53,    54,    55,    56,    57,    57,    58,    58,    58,
      59,    59,    60,    60,    61,    62,    62,    63,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    66,
      65,    67,    67,    67,    67,    67,    68,    67,    69,    67,
      67,    70,    70,    71,    71,    71,    71,    71,    71,    71,
      72,    72,    72,    72,    73,    73,    74,    74,    75,    75,
      76,    76,    77,    77,    78,    80,    79,    81,    81,    81,
      82,    82,    82,    83,    83,    84,    85,    85,    86,    88,
      87,    89,    90,    90,    90,    90,    90,    92,    91,    93,
      93,    93,    93,    93,    95,    94,    96,    96,    97,    97,
      98,    98,    98,    99,   100
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     2,     2,     2,     1,     1,     1,     1,
       2,     1,     1,     1,     2,     1,     3,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       5,     1,     1,     1,     1,     1,     0,     3,     0,     3,
       1,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     3,     1,     3,     0,     4,     1,     1,     1,
       1,     5,     1,     1,     1,     5,     4,     4,     1,     0,
       8,     2,     1,     1,     1,     1,     1,     0,     5,     1,
       1,     1,     1,     1,     0,     5,     1,     1,     1,     1,
       1,     1,     1,     1,     4
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 7: /* mainoption: textoption  */
#line 73 "x.y"
                    {
                      generate_formatted_text((yyvsp[0].trans),ls_value);
                    }
#line 1314 "x.tab.c"
    break;

  case 10: /* textoption: textoption wsorword  */
#line 81 "x.y"
                    {
                      strcat((yyval.trans), " ");
                      strcat((yyval.trans), (yyvsp[0].trans));
                    }
#line 1323 "x.tab.c"
    break;

  case 11: /* textoption: wsorword  */
#line 86 "x.y"
                    {
                      strcpy((yyval.trans), (yyvsp[0].trans));
                    }
#line 1331 "x.tab.c"
    break;

  case 12: /* wsorword: WS  */
#line 92 "x.y"
                    {
                      strcpy((yyval.trans), yytext);
                    }
#line 1339 "x.tab.c"
    break;

  case 13: /* wsorword: WORD  */
#line 96 "x.y"
                    {
                      strcpy((yyval.trans), yytext);
                    }
#line 1347 "x.tab.c"
    break;

  case 17: /* curlyboptions: fonts textoption  */
#line 108 "x.y"
                                     {
                   strcpy(fonttx,(yyvsp[0].trans));
             
                   generatecurfont((yyvsp[-1].trans),(yyvsp[0].trans));}
#line 1356 "x.tab.c"
    break;

  case 29: /* $@1: %empty  */
#line 128 "x.y"
                                    {
                    fprintf(fpout,"\n");              
                    strcat(single,(yyvsp[0].trans));
                    }
#line 1365 "x.tab.c"
    break;

  case 30: /* beginendopts: LBEGIN begcmds $@1 beginblock endbegin  */
#line 133 "x.y"
                           {
                          fprintf(fpout,"\n\n");
                          deletsing(single,endv);
                          list_num=1;  
                 }
#line 1375 "x.tab.c"
    break;

  case 31: /* begcmds: CENTER  */
#line 140 "x.y"
                           {
                               
                               strcpy((yyval.trans),yytext);}
#line 1383 "x.tab.c"
    break;

  case 32: /* begcmds: VERBATIM  */
#line 143 "x.y"
                              {ws_flag=1;
                               strcpy((yyval.trans),yytext);}
#line 1390 "x.tab.c"
    break;

  case 33: /* begcmds: SINGLE  */
#line 145 "x.y"
                            {strcpy((yyval.trans),yytext);
                               }
#line 1397 "x.tab.c"
    break;

  case 34: /* begcmds: ITEMIZE  */
#line 147 "x.y"
                             {strcpy((yyval.trans),yytext);}
#line 1403 "x.tab.c"
    break;

  case 35: /* begcmds: ENUMERATE  */
#line 148 "x.y"
                              {strcpy((yyval.trans),yytext);}
#line 1409 "x.tab.c"
    break;

  case 36: /* $@2: %empty  */
#line 149 "x.y"
                          {strcpy(tab,yytext);}
#line 1415 "x.tab.c"
    break;

  case 38: /* $@3: %empty  */
#line 150 "x.y"
                            {strcpy(tabu,yytext);}
#line 1421 "x.tab.c"
    break;

  case 40: /* begcmds: RIGHT  */
#line 151 "x.y"
                          {
                         strcpy((yyval.trans),yytext);}
#line 1428 "x.tab.c"
    break;

  case 41: /* endbegin: END endcmds  */
#line 155 "x.y"
                                 {strcpy(endv,(yyvsp[0].trans));}
#line 1434 "x.tab.c"
    break;

  case 42: /* endbegin: endtableopts TABLE  */
#line 156 "x.y"
                                        {strcpy((yyval.trans),yytext);}
#line 1440 "x.tab.c"
    break;

  case 43: /* endcmds: CENTER  */
#line 160 "x.y"
                           {strcpy((yyval.trans),yytext);}
#line 1446 "x.tab.c"
    break;

  case 44: /* endcmds: VERBATIM  */
#line 161 "x.y"
                              {ws_flag=0;strcpy((yyval.trans),yytext);}
#line 1452 "x.tab.c"
    break;

  case 45: /* endcmds: SINGLE  */
#line 162 "x.y"
                            {strcpy((yyval.trans),yytext);}
#line 1458 "x.tab.c"
    break;

  case 46: /* endcmds: ITEMIZE  */
#line 163 "x.y"
                           {strcpy((yyval.trans),yytext);}
#line 1464 "x.tab.c"
    break;

  case 47: /* endcmds: ENUMERATE  */
#line 164 "x.y"
                              {strcpy((yyval.trans),yytext);}
#line 1470 "x.tab.c"
    break;

  case 50: /* beginblock: beginendopts  */
#line 169 "x.y"
                                {}
#line 1476 "x.tab.c"
    break;

  case 51: /* beginblock: textoption  */
#line 170 "x.y"
                                                            {
		 	printf("single or verb or right\n");
                        generatebgverb(single,(yyvsp[0].trans));
                    }
#line 1485 "x.tab.c"
    break;

  case 52: /* beginblock: entrylist  */
#line 174 "x.y"
                                                            {
		 	printf("center or tabular\n");
                    }
#line 1493 "x.tab.c"
    break;

  case 53: /* beginblock: listblock  */
#line 178 "x.y"
                    {
		    	printf("item or enumerate\n");
                        strcpy((yyval.trans),yytext);
		    }
#line 1502 "x.tab.c"
    break;

  case 54: /* listblock: listblock anitem  */
#line 183 "x.y"
                                      {
			printf("listblockA\n");          
                    }
#line 1510 "x.tab.c"
    break;

  case 55: /* listblock: anitem  */
#line 186 "x.y"
                           {
		 	printf("listblockB\n");
		    }
#line 1518 "x.tab.c"
    break;

  case 56: /* anitem: ITEM textoption  */
#line 191 "x.y"
                                     {
                      	strcpy(itemtx,(yyvsp[0].trans));
                      	generate_itemize_block(itemtx,single);
                    }
#line 1527 "x.tab.c"
    break;

  case 57: /* anitem: beginendopts  */
#line 195 "x.y"
                                 {strcpy((yyval.trans),yytext);}
#line 1533 "x.tab.c"
    break;

  case 58: /* entrylist: entrylist anentry  */
#line 198 "x.y"
                                       {
			printf("entrylistA\n");       
                    }
#line 1541 "x.tab.c"
    break;

  case 59: /* entrylist: anentry  */
#line 201 "x.y"
                            {
		 	printf("entrylistB\n");
                    }
#line 1549 "x.tab.c"
    break;

  case 60: /* anentry: entry DBLBS  */
#line 206 "x.y"
                                 {
			printf("anentryA\n");
                        strcpy(itemtx,(yyvsp[-1].trans));
                        generatecent(single,itemtx);
                    }
#line 1559 "x.tab.c"
    break;

  case 61: /* anentry: beginendopts  */
#line 211 "x.y"
                                 {
		 	printf("anentryB\n");
                    }
#line 1567 "x.tab.c"
    break;

  case 62: /* entry: entry SPECCHAR textoption  */
#line 216 "x.y"
                                                {
			printf("entryA\n");
                   	generatetab(tabu,(yyvsp[0].trans),tabcsp);
               	    }
#line 1576 "x.tab.c"
    break;

  case 63: /* entry: textoption  */
#line 220 "x.y"
                               {
		    	printf("entryB\n");
                    	generatetab(tabu,(yyvsp[0].trans),tabcsp);     
		    }
#line 1585 "x.tab.c"
    break;

  case 64: /* begtableopts: LSQRB position RSQRB  */
#line 226 "x.y"
                                          {strcpy(tablo,(yyvsp[-1].trans));}
#line 1591 "x.tab.c"
    break;

  case 65: /* $@4: %empty  */
#line 229 "x.y"
                                  {strcpy(tabcsp,yytext);}
#line 1597 "x.tab.c"
    break;

  case 67: /* position: H  */
#line 232 "x.y"
                       {strcpy((yyval.trans),yytext);}
#line 1603 "x.tab.c"
    break;

  case 68: /* position: T  */
#line 233 "x.y"
                       {strcpy((yyval.trans),yytext);}
#line 1609 "x.tab.c"
    break;

  case 69: /* position: B  */
#line 234 "x.y"
                      {strcpy((yyval.trans),yytext);}
#line 1615 "x.tab.c"
    break;

  case 76: /* sectionoptions: SECTION LCURLYB textoption RCURLYB  */
#line 251 "x.y"
                    {
                      generate_sec_header(get_sec_ctr(), (yyvsp[-1].trans));
                      incr_sec_ctr();
                    }
#line 1624 "x.tab.c"
    break;

  case 77: /* sectionoptions: SUBSEC LCURLYB textoption RCURLYB  */
#line 256 "x.y"
                    {
                      generate_subsec_header(get_sec_ctr(), get_subsec_ctr(), (yyvsp[-1].trans));
                      incr_subsec_ctr();
                    }
#line 1633 "x.tab.c"
    break;

  case 78: /* tableofcont: TABOCON  */
#line 263 "x.y"
                    {
                      set_gen_toc();
                    }
#line 1641 "x.tab.c"
    break;

  case 79: /* $@5: %empty  */
#line 270 "x.y"
                    {
                      strcpy(ls_value, yytext);
                      
                  //    printf("WORD IS: %s\n",ls_value);
                    }
#line 1651 "x.tab.c"
    break;

  case 80: /* linespacing: RENEW LCURLYB BASELINES RCURLYB LCURLYB WORD $@5 RCURLYB  */
#line 276 "x.y"
                    {
                      strcpy((yyval.trans), ls_value);
                    }
#line 1659 "x.tab.c"
    break;

  case 81: /* pagenumbers: PAGENUM style2  */
#line 282 "x.y"
                    {
                       
                      set_page_style((yyvsp[0].val));
                  printf("STYLE ISSSSSSSSSSSSSSSSSSS: %d\n",(yyvsp[0].val));
                                         
 }
#line 1670 "x.tab.c"
    break;

  case 82: /* style2: ARABIC2  */
#line 290 "x.y"
                           {(yyval.val)=ARABIC2;}
#line 1676 "x.tab.c"
    break;

  case 83: /* style2: LROMAN2  */
#line 291 "x.y"
                            {(yyval.val)=LROMAN2;}
#line 1682 "x.tab.c"
    break;

  case 84: /* style2: CROMAN2  */
#line 292 "x.y"
                            {(yyval.val)=CROMAN2;}
#line 1688 "x.tab.c"
    break;

  case 85: /* style2: LALPH2  */
#line 293 "x.y"
                          {(yyval.val)=LALPH2;}
#line 1694 "x.tab.c"
    break;

  case 86: /* style2: CALPH2  */
#line 294 "x.y"
                          {(yyval.val)=CALPH2;}
#line 1700 "x.tab.c"
    break;

  case 87: /* $@6: %empty  */
#line 298 "x.y"
                    {
                      set_page_no(yytext[0]);
                    }
#line 1708 "x.tab.c"
    break;

  case 94: /* $@7: %empty  */
#line 312 "x.y"
                  {
                  strcpy(hornum,yytext);
                 
                   generate_space((yyvsp[-2].trans),&hornum);                       
}
#line 1718 "x.tab.c"
    break;

  case 95: /* spacing: horvert LCURLYB WORD $@7 RCURLYB  */
#line 317 "x.y"
                          {
                  strcpy((yyval.trans),hornum);
                  }
#line 1726 "x.tab.c"
    break;

  case 96: /* horvert: VSPACE  */
#line 323 "x.y"
                          {strcpy((yyval.trans),yytext); 
        
}
#line 1734 "x.tab.c"
    break;

  case 97: /* horvert: HSPACE  */
#line 326 "x.y"
                          {strcpy((yyval.trans),yytext);}
#line 1740 "x.tab.c"
    break;

  case 98: /* fonts: RM  */
#line 329 "x.y"
                       {strcpy((yyval.trans),yytext);}
#line 1746 "x.tab.c"
    break;

  case 99: /* fonts: IT  */
#line 330 "x.y"
                      {strcpy((yyval.trans),yytext);}
#line 1752 "x.tab.c"
    break;


#line 1756 "x.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 343 "x.y"


yyerror(){}

int main()
{
fpout = fopen("latexout","w");
fptoc = fopen("latextoc","w");
init_lines_so_far();
init_sec_ctr();
init_output_page();

yyparse();
}
