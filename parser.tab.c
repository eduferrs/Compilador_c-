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
#line 1 "parser.y"

#define YYDEBUG 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ast_node.h"

extern int yylex();
extern int yyparse();
extern FILE* yyin;
extern int line_number;
extern int has_error;
extern char* yytext;

void yyerror(const char* msg);



#line 90 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_NUM = 4,                        /* NUM  */
  YYSYMBOL_IF = 5,                         /* IF  */
  YYSYMBOL_ELSE = 6,                       /* ELSE  */
  YYSYMBOL_INT = 7,                        /* INT  */
  YYSYMBOL_RETURN = 8,                     /* RETURN  */
  YYSYMBOL_VOID = 9,                       /* VOID  */
  YYSYMBOL_WHILE = 10,                     /* WHILE  */
  YYSYMBOL_PLUS = 11,                      /* PLUS  */
  YYSYMBOL_MINUS = 12,                     /* MINUS  */
  YYSYMBOL_MULTIPLY = 13,                  /* MULTIPLY  */
  YYSYMBOL_DIVIDE = 14,                    /* DIVIDE  */
  YYSYMBOL_ASSIGN = 15,                    /* ASSIGN  */
  YYSYMBOL_SEMICOLON = 16,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 17,                     /* COMMA  */
  YYSYMBOL_LPAREN = 18,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 19,                    /* RPAREN  */
  YYSYMBOL_LBRACKET = 20,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 21,                  /* RBRACKET  */
  YYSYMBOL_LBRACE = 22,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 23,                    /* RBRACE  */
  YYSYMBOL_LE = 24,                        /* LE  */
  YYSYMBOL_GE = 25,                        /* GE  */
  YYSYMBOL_EQ = 26,                        /* EQ  */
  YYSYMBOL_NEQ = 27,                       /* NEQ  */
  YYSYMBOL_LT = 28,                        /* LT  */
  YYSYMBOL_GT = 29,                        /* GT  */
  YYSYMBOL_YYACCEPT = 30,                  /* $accept  */
  YYSYMBOL_program = 31,                   /* program  */
  YYSYMBOL_declaration_list = 32,          /* declaration_list  */
  YYSYMBOL_declaration = 33,               /* declaration  */
  YYSYMBOL_var_declaration = 34,           /* var_declaration  */
  YYSYMBOL_type_specifier = 35,            /* type_specifier  */
  YYSYMBOL_fun_declaration = 36,           /* fun_declaration  */
  YYSYMBOL_params = 37,                    /* params  */
  YYSYMBOL_param_list = 38,                /* param_list  */
  YYSYMBOL_param = 39,                     /* param  */
  YYSYMBOL_compound_stmt = 40,             /* compound_stmt  */
  YYSYMBOL_local_declarations = 41,        /* local_declarations  */
  YYSYMBOL_statement_list = 42,            /* statement_list  */
  YYSYMBOL_statement = 43,                 /* statement  */
  YYSYMBOL_expression_stmt = 44,           /* expression_stmt  */
  YYSYMBOL_selection_stmt = 45,            /* selection_stmt  */
  YYSYMBOL_iteration_stmt = 46,            /* iteration_stmt  */
  YYSYMBOL_return_stmt = 47,               /* return_stmt  */
  YYSYMBOL_expression = 48,                /* expression  */
  YYSYMBOL_var = 49,                       /* var  */
  YYSYMBOL_simple_expression = 50,         /* simple_expression  */
  YYSYMBOL_relop = 51,                     /* relop  */
  YYSYMBOL_additive_expression = 52,       /* additive_expression  */
  YYSYMBOL_term = 53,                      /* term  */
  YYSYMBOL_factor = 54,                    /* factor  */
  YYSYMBOL_call = 55,                      /* call  */
  YYSYMBOL_args = 56,                      /* args  */
  YYSYMBOL_arg_list = 57                   /* arg_list  */
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
typedef yytype_int8 yy_state_t;

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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   108

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  30
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  62
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  106

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   284


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
      25,    26,    27,    28,    29
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    44,    44,    62,    71,    76,    76,    79,    82,    85,
      90,    92,    97,   102,   102,   107,   116,   121,   123,   128,
     139,   146,   151,   158,   163,   164,   165,   166,   167,   170,
     172,   177,   179,   184,   189,   191,   196,   199,   202,   207,
     209,   214,   216,   221,   223,   225,   227,   229,   231,   236,
     238,   240,   245,   247,   249,   254,   256,   258,   263,   268,
     269,   274,   283
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
  "\"end of file\"", "error", "\"invalid token\"", "ID", "NUM", "IF",
  "ELSE", "INT", "RETURN", "VOID", "WHILE", "PLUS", "MINUS", "MULTIPLY",
  "DIVIDE", "ASSIGN", "SEMICOLON", "COMMA", "LPAREN", "RPAREN", "LBRACKET",
  "RBRACKET", "LBRACE", "RBRACE", "LE", "GE", "EQ", "NEQ", "LT", "GT",
  "$accept", "program", "declaration_list", "declaration",
  "var_declaration", "type_specifier", "fun_declaration", "params",
  "param_list", "param", "compound_stmt", "local_declarations",
  "statement_list", "statement", "expression_stmt", "selection_stmt",
  "iteration_stmt", "return_stmt", "expression", "var",
  "simple_expression", "relop", "additive_expression", "term", "factor",
  "call", "args", "arg_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-69)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-15)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       2,   -69,   -69,     7,     2,   -69,   -69,    -1,   -69,   -69,
     -69,    40,    35,   -69,    45,    11,    46,   -69,    35,    10,
      15,   -69,    17,    54,   -69,   -69,    21,    74,    29,    62,
     -69,    36,    35,    35,    67,   -69,    35,    47,    47,   -69,
     -69,   -69,   -69,   -69,   -69,    47,    47,    47,    68,    65,
       2,    73,   -69,    71,    75,    70,   -69,   -69,    76,   -69,
      54,    54,    64,   -69,   -69,    72,   -69,   -69,   -69,   -69,
     -69,    35,   -69,   -69,     2,   -69,   -69,    91,     0,    58,
      77,    31,    79,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,    82,    35,   -69,    83,    35,   -69,    81,   -69,    84,
       9,     9,    95,   -69,     9,   -69
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    10,    11,     0,     2,     4,     5,     0,     6,     1,
       3,     0,     0,     7,     0,     0,    39,    57,     0,     0,
      56,    37,    42,    51,    54,    38,    11,     0,     0,    13,
      16,     0,    60,     0,     0,     8,     0,     0,     0,    43,
      44,    45,    46,    47,    48,     0,     0,     0,    17,     0,
       0,     0,    62,     0,    59,     0,    55,    36,    39,    56,
      49,    50,    41,    52,    53,     0,    21,    12,    15,     9,
      58,     0,    40,    18,    23,    61,    20,     0,     0,     0,
       0,     0,     0,    30,    19,    25,    22,    24,    26,    27,
      28,     0,     0,    34,     0,     0,    29,     0,    35,     0,
       0,     0,    32,    33,     0,    31
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -69,   -69,   -69,    98,    30,   -13,   -69,   -69,   -69,    55,
      57,   -69,   -69,   -68,   -69,   -69,   -69,   -69,   -12,    25,
     -69,   -69,    63,    44,    38,   -69,   -69,   -69
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,     5,     6,     7,     8,    28,    29,    30,
      85,    74,    78,    86,    87,    88,    89,    90,    91,    20,
      21,    45,    22,    23,    24,    25,    53,    54
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      19,    27,    11,    16,    17,    80,    34,     9,    81,     1,
      82,     2,    16,    17,    80,    31,    83,    81,    18,    82,
      52,    55,    66,    84,    57,    83,    35,    18,    37,    38,
      36,    66,   102,   103,    16,    17,   105,    27,    16,    17,
     -14,    39,    40,    41,    42,    43,    44,    93,    49,    18,
      58,    17,     1,    18,    26,    12,    13,    51,    14,    75,
      15,    77,    59,    59,    32,    18,    33,    46,    47,    94,
      59,    59,    59,    12,    13,    37,    38,    48,    15,    50,
      97,    60,    61,    99,    63,    64,    56,    66,    65,    69,
      70,    72,    71,    73,    79,    92,    33,    95,    96,    98,
     100,   104,    10,   101,    76,    68,    67,     0,    62
};

static const yytype_int8 yycheck[] =
{
      12,    14,     3,     3,     4,     5,    18,     0,     8,     7,
      10,     9,     3,     4,     5,     4,    16,     8,    18,    10,
      32,    33,    22,    23,    36,    16,    16,    18,    11,    12,
      15,    22,   100,   101,     3,     4,   104,    50,     3,     4,
      19,    24,    25,    26,    27,    28,    29,    16,    19,    18,
       3,     4,     7,    18,     9,    15,    16,    21,    18,    71,
      20,    74,    37,    38,    18,    18,    20,    13,    14,    81,
      45,    46,    47,    15,    16,    11,    12,     3,    20,    17,
      92,    37,    38,    95,    46,    47,    19,    22,    20,    16,
      19,    21,    17,    21,     3,    18,    20,    18,    16,    16,
      19,     6,     4,    19,    74,    50,    49,    -1,    45
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     7,     9,    31,    32,    33,    34,    35,    36,     0,
      33,     3,    15,    16,    18,    20,     3,     4,    18,    48,
      49,    50,    52,    53,    54,    55,     9,    35,    37,    38,
      39,     4,    18,    20,    48,    16,    15,    11,    12,    24,
      25,    26,    27,    28,    29,    51,    13,    14,     3,    19,
      17,    21,    48,    56,    57,    48,    19,    48,     3,    49,
      53,    53,    52,    54,    54,    20,    22,    40,    39,    16,
      19,    17,    21,    21,    41,    48,    34,    35,    42,     3,
       5,     8,    10,    16,    23,    40,    43,    44,    45,    46,
      47,    48,    18,    16,    48,    18,    16,    48,    16,    48,
      19,    19,    43,    43,     6,    43
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    30,    31,    32,    32,    33,    33,    34,    34,    34,
      35,    35,    36,    37,    37,    38,    38,    39,    39,    40,
      41,    41,    42,    42,    43,    43,    43,    43,    43,    44,
      44,    45,    45,    46,    47,    47,    48,    48,    48,    49,
      49,    50,    50,    51,    51,    51,    51,    51,    51,    52,
      52,    52,    53,    53,    53,    54,    54,    54,    55,    56,
      56,    57,    57
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     5,     6,
       1,     1,     6,     1,     1,     3,     1,     2,     4,     4,
       2,     0,     2,     0,     1,     1,     1,     1,     1,     2,
       1,     7,     5,     5,     2,     3,     3,     1,     1,     1,
       4,     3,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     1,     3,     3,     1,     3,     1,     1,     4,     1,
       0,     3,     1
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
  case 2: /* program: declaration_list  */
#line 44 "parser.y"
                          {
    ASTNode* yyresult = (yyvsp[0].node);
    (yyval.node) = yyresult;
    if (yyresult) {
        printf("Árvore Sintática Abstrata (AST):\n");
        print_ast(yyresult, 0);
        free_ast(yyresult); // Libera a memória após imprimir a AST
    } else {
        if (!has_error) {
            printf("Nenhuma AST foi gerada.\n");
        } else {
            printf("Erro ao gerar AST.\n");
        }

    }
}
#line 1219 "parser.tab.c"
    break;

  case 3: /* declaration_list: declaration_list declaration  */
#line 62 "parser.y"
                                               {
    if ((yyvsp[-1].node) && (yyvsp[0].node)) {
        (yyval.node) = add_child((yyvsp[-1].node), (yyvsp[0].node));
    } else if((yyvsp[-1].node)) {
        (yyval.node) = (yyvsp[-1].node);
    } else {
        (yyval.node) = (yyvsp[0].node);
    }
}
#line 1233 "parser.tab.c"
    break;

  case 4: /* declaration_list: declaration  */
#line 71 "parser.y"
              {
    (yyval.node) = (yyvsp[0].node);
}
#line 1241 "parser.tab.c"
    break;

  case 7: /* var_declaration: type_specifier ID SEMICOLON  */
#line 79 "parser.y"
                                             {
    (yyval.node) = create_node("var_declaration", 2, (yyvsp[-2].node), create_leaf("ID", (yyvsp[-1].strval)));
}
#line 1249 "parser.tab.c"
    break;

  case 8: /* var_declaration: type_specifier ID ASSIGN expression SEMICOLON  */
#line 82 "parser.y"
                                                {
    (yyval.node) = create_node("var_init", 3, (yyvsp[-4].node), create_leaf("ID", (yyvsp[-3].strval)), (yyvsp[-1].node));
}
#line 1257 "parser.tab.c"
    break;

  case 9: /* var_declaration: type_specifier ID LBRACKET NUM RBRACKET SEMICOLON  */
#line 85 "parser.y"
                                                    {
    (yyval.node) = create_node("array_declaration", 3, (yyvsp[-5].node), create_leaf("ID", (yyvsp[-4].strval)), create_leaf_int("NUM", (yyvsp[-2].intval)));
}
#line 1265 "parser.tab.c"
    break;

  case 10: /* type_specifier: INT  */
#line 90 "parser.y"
                    {
    (yyval.node) = create_leaf("type", "int");
}
#line 1273 "parser.tab.c"
    break;

  case 11: /* type_specifier: VOID  */
#line 92 "parser.y"
         {
    (yyval.node) = create_leaf("type", "void");
}
#line 1281 "parser.tab.c"
    break;

  case 12: /* fun_declaration: type_specifier ID LPAREN params RPAREN compound_stmt  */
#line 97 "parser.y"
                                                                      {
    (yyval.node) = create_node("fun_declaration", 3, (yyvsp[-5].node), create_leaf("ID", (yyvsp[-4].strval)), (yyvsp[0].node));
}
#line 1289 "parser.tab.c"
    break;

  case 14: /* params: VOID  */
#line 102 "parser.y"
                          {
    (yyval.node) = create_leaf("params", "void");
}
#line 1297 "parser.tab.c"
    break;

  case 15: /* param_list: param_list COMMA param  */
#line 107 "parser.y"
                                   {
    if ((yyvsp[-2].node) && (yyvsp[0].node)) {
        (yyval.node) = add_child((yyvsp[-2].node), (yyvsp[0].node));
    } else if ((yyvsp[-2].node)) {
        (yyval.node) = (yyvsp[-2].node);
    } else {
        (yyval.node) = (yyvsp[0].node);
    }
}
#line 1311 "parser.tab.c"
    break;

  case 16: /* param_list: param  */
#line 116 "parser.y"
        {
    (yyval.node) = (yyvsp[0].node);
}
#line 1319 "parser.tab.c"
    break;

  case 17: /* param: type_specifier ID  */
#line 121 "parser.y"
                         {
    (yyval.node) = create_node("param", 2, (yyvsp[-1].node), create_leaf("ID", (yyvsp[0].strval)));
}
#line 1327 "parser.tab.c"
    break;

  case 18: /* param: type_specifier ID LBRACKET RBRACKET  */
#line 123 "parser.y"
                                        {
    (yyval.node) = create_node("array_param", 2, (yyvsp[-3].node), create_leaf("ID", (yyvsp[-2].strval)));
}
#line 1335 "parser.tab.c"
    break;

  case 19: /* compound_stmt: LBRACE local_declarations statement_list RBRACE  */
#line 128 "parser.y"
                                                               {
     if ((yyvsp[-2].node) && (yyvsp[-1].node)) {
        (yyval.node) = create_node("compound_stmt", 2, (yyvsp[-2].node), (yyvsp[-1].node));
    } else if ((yyvsp[-2].node)) {
        (yyval.node) = create_node("compound_stmt", 1, (yyvsp[-2].node));
    } else {
        (yyval.node) = create_node("compound_stmt", 1, (yyvsp[-1].node));
    }
}
#line 1349 "parser.tab.c"
    break;

  case 20: /* local_declarations: local_declarations var_declaration  */
#line 139 "parser.y"
                                                       {
    if ((yyvsp[-1].node) && (yyvsp[0].node)) {
        (yyval.node) = add_child((yyvsp[-1].node), (yyvsp[0].node));
    } else {
        (yyval.node) = (yyvsp[0].node);
    }
}
#line 1361 "parser.tab.c"
    break;

  case 21: /* local_declarations: %empty  */
#line 146 "parser.y"
              {
    (yyval.node) = NULL;
}
#line 1369 "parser.tab.c"
    break;

  case 22: /* statement_list: statement_list statement  */
#line 151 "parser.y"
                                         {
     if ((yyvsp[-1].node) && (yyvsp[0].node)) {
        (yyval.node) = add_child((yyvsp[-1].node), (yyvsp[0].node));
    } else {
        (yyval.node) = (yyvsp[0].node);
    }
}
#line 1381 "parser.tab.c"
    break;

  case 23: /* statement_list: %empty  */
#line 158 "parser.y"
              {
    (yyval.node) = NULL;
}
#line 1389 "parser.tab.c"
    break;

  case 29: /* expression_stmt: expression SEMICOLON  */
#line 170 "parser.y"
                                      {
    (yyval.node) = (yyvsp[-1].node);
}
#line 1397 "parser.tab.c"
    break;

  case 30: /* expression_stmt: SEMICOLON  */
#line 172 "parser.y"
              {
    (yyval.node) = NULL;
}
#line 1405 "parser.tab.c"
    break;

  case 31: /* selection_stmt: IF LPAREN expression RPAREN statement ELSE statement  */
#line 177 "parser.y"
                                                                     {
    (yyval.node) = create_node("if_else", 3, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
}
#line 1413 "parser.tab.c"
    break;

  case 32: /* selection_stmt: IF LPAREN expression RPAREN statement  */
#line 179 "parser.y"
                                          {
    (yyval.node) = create_node("if", 2, (yyvsp[-2].node), (yyvsp[0].node));
}
#line 1421 "parser.tab.c"
    break;

  case 33: /* iteration_stmt: WHILE LPAREN expression RPAREN statement  */
#line 184 "parser.y"
                                                         {
    (yyval.node) = create_node("while", 2, (yyvsp[-2].node), (yyvsp[0].node));
}
#line 1429 "parser.tab.c"
    break;

  case 34: /* return_stmt: RETURN SEMICOLON  */
#line 189 "parser.y"
                              {
    (yyval.node) = create_node("return", 0);
}
#line 1437 "parser.tab.c"
    break;

  case 35: /* return_stmt: RETURN expression SEMICOLON  */
#line 191 "parser.y"
                                {
    (yyval.node) = create_node("return", 1, (yyvsp[-1].node));
}
#line 1445 "parser.tab.c"
    break;

  case 36: /* expression: var ASSIGN expression  */
#line 196 "parser.y"
                                  {
            (yyval.node) = create_node("assign", 2, (yyvsp[-2].node), (yyvsp[0].node));
        }
#line 1453 "parser.tab.c"
    break;

  case 37: /* expression: simple_expression  */
#line 199 "parser.y"
                            {
            (yyval.node) = (yyvsp[0].node);
        }
#line 1461 "parser.tab.c"
    break;

  case 38: /* expression: call  */
#line 202 "parser.y"
               {
            (yyval.node) = (yyvsp[0].node);
        }
#line 1469 "parser.tab.c"
    break;

  case 39: /* var: ID  */
#line 207 "parser.y"
        {
    (yyval.node) = create_leaf("ID", strdup((yyvsp[0].strval)));
}
#line 1477 "parser.tab.c"
    break;

  case 40: /* var: ID LBRACKET expression RBRACKET  */
#line 209 "parser.y"
                                    {
    (yyval.node) = create_node("array_access", 2, create_leaf("ID", (yyvsp[-3].strval)), (yyvsp[-1].node));
}
#line 1485 "parser.tab.c"
    break;

  case 41: /* simple_expression: additive_expression relop additive_expression  */
#line 214 "parser.y"
                                                                 {
    (yyval.node) = create_node("relop", 2, (yyvsp[-1].node), (yyvsp[0].node));
}
#line 1493 "parser.tab.c"
    break;

  case 42: /* simple_expression: additive_expression  */
#line 216 "parser.y"
                        {
    (yyval.node) = (yyvsp[0].node);
}
#line 1501 "parser.tab.c"
    break;

  case 43: /* relop: LE  */
#line 221 "parser.y"
          {
    (yyval.node) = create_leaf("relop", "<=");
}
#line 1509 "parser.tab.c"
    break;

  case 44: /* relop: GE  */
#line 223 "parser.y"
       {
    (yyval.node) = create_leaf("relop", ">=");
}
#line 1517 "parser.tab.c"
    break;

  case 45: /* relop: EQ  */
#line 225 "parser.y"
       {
    (yyval.node) = create_leaf("relop", "==");
}
#line 1525 "parser.tab.c"
    break;

  case 46: /* relop: NEQ  */
#line 227 "parser.y"
        {
    (yyval.node) = create_leaf("relop", "!=");
}
#line 1533 "parser.tab.c"
    break;

  case 47: /* relop: LT  */
#line 229 "parser.y"
       {
    (yyval.node) = create_leaf("relop", "<");
}
#line 1541 "parser.tab.c"
    break;

  case 48: /* relop: GT  */
#line 231 "parser.y"
       {
    (yyval.node) = create_leaf("relop", ">");
}
#line 1549 "parser.tab.c"
    break;

  case 49: /* additive_expression: additive_expression PLUS term  */
#line 236 "parser.y"
                                                   {
    (yyval.node) = create_node("add", 2, (yyvsp[-2].node), (yyvsp[0].node));
}
#line 1557 "parser.tab.c"
    break;

  case 50: /* additive_expression: additive_expression MINUS term  */
#line 238 "parser.y"
                                   {
    (yyval.node) = create_node("sub", 2, (yyvsp[-2].node), (yyvsp[0].node));
}
#line 1565 "parser.tab.c"
    break;

  case 51: /* additive_expression: term  */
#line 240 "parser.y"
         {
    (yyval.node) = (yyvsp[0].node);
}
#line 1573 "parser.tab.c"
    break;

  case 52: /* term: term MULTIPLY factor  */
#line 245 "parser.y"
                           {
    (yyval.node) = create_node("mul", 2, (yyvsp[-2].node), (yyvsp[0].node));
}
#line 1581 "parser.tab.c"
    break;

  case 53: /* term: term DIVIDE factor  */
#line 247 "parser.y"
                       {
    (yyval.node) = create_node("div", 2, (yyvsp[-2].node), (yyvsp[0].node));
}
#line 1589 "parser.tab.c"
    break;

  case 54: /* term: factor  */
#line 249 "parser.y"
           {
    (yyval.node) = (yyvsp[0].node);
}
#line 1597 "parser.tab.c"
    break;

  case 55: /* factor: LPAREN expression RPAREN  */
#line 254 "parser.y"
                                 {
    (yyval.node) = (yyvsp[-1].node);
}
#line 1605 "parser.tab.c"
    break;

  case 56: /* factor: var  */
#line 256 "parser.y"
        {
    (yyval.node) = (yyvsp[0].node);
}
#line 1613 "parser.tab.c"
    break;

  case 57: /* factor: NUM  */
#line 258 "parser.y"
        {
    (yyval.node) = create_leaf_int("NUM", (yyvsp[0].intval));
}
#line 1621 "parser.tab.c"
    break;

  case 58: /* call: ID LPAREN args RPAREN  */
#line 263 "parser.y"
                            {
       (yyval.node) = create_node("call", 2, create_leaf("ID", (yyvsp[-3].strval)), (yyvsp[-1].node));
   }
#line 1629 "parser.tab.c"
    break;

  case 60: /* args: %empty  */
#line 269 "parser.y"
                  {
        (yyval.node) = NULL;
    }
#line 1637 "parser.tab.c"
    break;

  case 61: /* arg_list: arg_list COMMA expression  */
#line 274 "parser.y"
                                    {
        if ((yyvsp[-2].node) && (yyvsp[0].node)) {
            (yyval.node) = add_child((yyvsp[-2].node), (yyvsp[0].node));
        } else if((yyvsp[-2].node)) {
            (yyval.node) = (yyvsp[-2].node);
        } else {
            (yyval.node) = (yyvsp[0].node);
        }
    }
#line 1651 "parser.tab.c"
    break;

  case 62: /* arg_list: expression  */
#line 283 "parser.y"
                 {
        (yyval.node) = create_node("arg_list", 1, (yyvsp[0].node));
    }
#line 1659 "parser.tab.c"
    break;


#line 1663 "parser.tab.c"

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

#line 288 "parser.y"


void yyerror(const char* msg) {
  fprintf(stderr, "Erro na linha %d: %s, token: %s\n", line_number, msg, yytext);
  has_error = 1;
}
