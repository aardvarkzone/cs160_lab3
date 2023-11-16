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
#line 1 "parser.ypp"

    #include <cstdio>
    #include <cstdlib>

    #include "ast.hpp"
    #include "primitive.hpp"
    #include "symtab.hpp"

    #define YYDEBUG 1

    extern Program_ptr ast;
    int yylex(void);
    void yyerror(const char *);

#line 86 "parser.cpp"

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

#include "parser.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_INT_LITERAL = 4,                /* INT_LITERAL  */
  YYSYMBOL_CHAR_LITERAL = 5,               /* CHAR_LITERAL  */
  YYSYMBOL_BOOLEAN = 6,                    /* BOOLEAN  */
  YYSYMBOL_CHAR = 7,                       /* CHAR  */
  YYSYMBOL_INTEGER = 8,                    /* INTEGER  */
  YYSYMBOL_STRING = 9,                     /* STRING  */
  YYSYMBOL_INTPTR = 10,                    /* INTPTR  */
  YYSYMBOL_CHARPTR = 11,                   /* CHARPTR  */
  YYSYMBOL_IF = 12,                        /* IF  */
  YYSYMBOL_ELSE = 13,                      /* ELSE  */
  YYSYMBOL_WHILE = 14,                     /* WHILE  */
  YYSYMBOL_VAR = 15,                       /* VAR  */
  YYSYMBOL_PROCEDURE = 16,                 /* PROCEDURE  */
  YYSYMBOL_RETURN = 17,                    /* RETURN  */
  YYSYMBOL_NULLTOKEN = 18,                 /* NULLTOKEN  */
  YYSYMBOL_AND = 19,                       /* AND  */
  YYSYMBOL_DIV = 20,                       /* DIV  */
  YYSYMBOL_EQUAL = 21,                     /* EQUAL  */
  YYSYMBOL_EQUALS = 22,                    /* EQUALS  */
  YYSYMBOL_GT = 23,                        /* GT  */
  YYSYMBOL_GTE = 24,                       /* GTE  */
  YYSYMBOL_LT = 25,                        /* LT  */
  YYSYMBOL_LTE = 26,                       /* LTE  */
  YYSYMBOL_MINUS = 27,                     /* MINUS  */
  YYSYMBOL_NOT = 28,                       /* NOT  */
  YYSYMBOL_NOTEQUAL = 29,                  /* NOTEQUAL  */
  YYSYMBOL_OR = 30,                        /* OR  */
  YYSYMBOL_PLUS = 31,                      /* PLUS  */
  YYSYMBOL_MUL = 32,                       /* MUL  */
  YYSYMBOL_AMP = 33,                       /* AMP  */
  YYSYMBOL_DEREFERENCE = 34,               /* DEREFERENCE  */
  YYSYMBOL_TRUE = 35,                      /* TRUE  */
  YYSYMBOL_FALSE = 36,                     /* FALSE  */
  YYSYMBOL_COMMA = 37,                     /* COMMA  */
  YYSYMBOL_COLON = 38,                     /* COLON  */
  YYSYMBOL_UMINUS = 39,                    /* UMINUS  */
  YYSYMBOL_LBRACE = 40,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 41,                    /* RBRACE  */
  YYSYMBOL_SEMICOLON = 42,                 /* SEMICOLON  */
  YYSYMBOL_LPAREN = 43,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 44,                    /* RPAREN  */
  YYSYMBOL_BAR = 45,                       /* BAR  */
  YYSYMBOL_LBRACKET = 46,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 47,                  /* RBRACKET  */
  YYSYMBOL_STRING_LITERAL = 48,            /* STRING_LITERAL  */
  YYSYMBOL_YYACCEPT = 49,                  /* $accept  */
  YYSYMBOL_Program = 50,                   /* Program  */
  YYSYMBOL_ProcedureList = 51,             /* ProcedureList  */
  YYSYMBOL_Procedure = 52,                 /* Procedure  */
  YYSYMBOL_ParamList = 53,                 /* ParamList  */
  YYSYMBOL_Param = 54,                     /* Param  */
  YYSYMBOL_IDList = 55,                    /* IDList  */
  YYSYMBOL_Body = 56,                      /* Body  */
  YYSYMBOL_OptionalProcedures = 57,        /* OptionalProcedures  */
  YYSYMBOL_NestedProcedures = 58,          /* NestedProcedures  */
  YYSYMBOL_OptionalDeclarations = 59,      /* OptionalDeclarations  */
  YYSYMBOL_OptionalStatements = 60,        /* OptionalStatements  */
  YYSYMBOL_OptionalReturn = 61,            /* OptionalReturn  */
  YYSYMBOL_Block = 62,                     /* Block  */
  YYSYMBOL_Declarations = 63,              /* Declarations  */
  YYSYMBOL_VarDeclaration = 64,            /* VarDeclaration  */
  YYSYMBOL_SingleVarDeclaration = 65,      /* SingleVarDeclaration  */
  YYSYMBOL_MultiVarDeclaration = 66,       /* MultiVarDeclaration  */
  YYSYMBOL_Statements = 67,                /* Statements  */
  YYSYMBOL_Statement = 68,                 /* Statement  */
  YYSYMBOL_FunctionCall = 69,              /* FunctionCall  */
  YYSYMBOL_Expression = 70,                /* Expression  */
  YYSYMBOL_AdditiveExpr = 71,              /* AdditiveExpr  */
  YYSYMBOL_MultiplicativeExpr = 72,        /* MultiplicativeExpr  */
  YYSYMBOL_UnaryExpr = 73,                 /* UnaryExpr  */
  YYSYMBOL_Variable = 74,                  /* Variable  */
  YYSYMBOL_PrimaryExpr = 75,               /* PrimaryExpr  */
  YYSYMBOL_ArgumentList = 76,              /* ArgumentList  */
  YYSYMBOL_ExpressionArg = 77,             /* ExpressionArg  */
  YYSYMBOL_AdditiveExprArg = 78,           /* AdditiveExprArg  */
  YYSYMBOL_MultiplicativeExprArg = 79,     /* MultiplicativeExprArg  */
  YYSYMBOL_UnaryExprArg = 80,              /* UnaryExprArg  */
  YYSYMBOL_VariableArg = 81,               /* VariableArg  */
  YYSYMBOL_PrimaryExprArg = 82,            /* PrimaryExprArg  */
  YYSYMBOL_Type = 83                       /* Type  */
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

#if 1

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
#endif /* 1 */

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   492

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  118
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  226

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   303


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
      45,    46,    47,    48
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    95,    95,   101,   103,   110,   115,   116,   117,   120,
     123,   124,   127,   130,   131,   134,   135,   137,   138,   141,
     142,   145,   146,   150,   154,   155,   158,   159,   162,   163,
     166,   167,   170,   171,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   186,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   200,   201,   202,   205,   206,   207,
     210,   211,   212,   213,   214,   215,   216,   217,   220,   221,
     224,   225,   226,   227,   228,   229,   230,   231,   234,   235,
     236,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     250,   251,   252,   255,   256,   257,   260,   261,   262,   263,
     264,   265,   266,   267,   270,   271,   274,   275,   276,   277,
     278,   279,   280,   281,   284,   285,   286,   287,   288
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER",
  "INT_LITERAL", "CHAR_LITERAL", "BOOLEAN", "CHAR", "INTEGER", "STRING",
  "INTPTR", "CHARPTR", "IF", "ELSE", "WHILE", "VAR", "PROCEDURE", "RETURN",
  "NULLTOKEN", "AND", "DIV", "EQUAL", "EQUALS", "GT", "GTE", "LT", "LTE",
  "MINUS", "NOT", "NOTEQUAL", "OR", "PLUS", "MUL", "AMP", "DEREFERENCE",
  "TRUE", "FALSE", "COMMA", "COLON", "UMINUS", "LBRACE", "RBRACE",
  "SEMICOLON", "LPAREN", "RPAREN", "BAR", "LBRACKET", "RBRACKET",
  "STRING_LITERAL", "$accept", "Program", "ProcedureList", "Procedure",
  "ParamList", "Param", "IDList", "Body", "OptionalProcedures",
  "NestedProcedures", "OptionalDeclarations", "OptionalStatements",
  "OptionalReturn", "Block", "Declarations", "VarDeclaration",
  "SingleVarDeclaration", "MultiVarDeclaration", "Statements", "Statement",
  "FunctionCall", "Expression", "AdditiveExpr", "MultiplicativeExpr",
  "UnaryExpr", "Variable", "PrimaryExpr", "ArgumentList", "ExpressionArg",
  "AdditiveExprArg", "MultiplicativeExprArg", "UnaryExprArg",
  "VariableArg", "PrimaryExprArg", "Type", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-161)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -13,    16,    44,  -161,   -13,   -15,  -161,  -161,    69,    41,
       1,  -161,    72,    69,    69,    78,   128,  -161,  -161,   128,
    -161,  -161,  -161,  -161,  -161,  -161,    68,   -13,   -13,   100,
     112,  -161,  -161,   119,    88,   129,    19,  -161,   112,    94,
    -161,  -161,  -161,   119,   119,   141,   138,  -161,  -161,   119,
     119,   397,     3,    45,  -161,  -161,  -161,   -26,    93,   103,
     115,   -17,   116,   117,     6,  -161,    19,  -161,    19,  -161,
    -161,   119,  -161,  -161,   124,  -161,   131,  -161,   349,   320,
     119,   119,   119,   119,   119,   119,   119,   119,  -161,   119,
     119,   119,   119,   214,   259,  -161,  -161,    66,   164,   119,
     119,   119,    19,   120,  -161,  -161,   253,   119,   183,  -161,
    -161,    57,    81,  -161,  -161,  -161,  -161,    81,   455,    45,
      45,  -161,  -161,   132,  -161,   133,  -161,   121,   411,   134,
    -161,  -161,  -161,   164,   164,   155,   209,  -161,  -161,   164,
     164,   140,   439,    60,    53,  -161,  -161,   262,   361,   373,
     144,  -161,  -161,   282,   142,   171,   186,  -161,  -161,   164,
    -161,  -161,   147,  -161,   148,  -161,   385,   337,   153,   164,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     164,   164,   175,   162,   162,  -161,  -161,  -161,   156,   157,
     291,   164,   228,  -161,  -161,  -161,   273,   125,  -161,  -161,
    -161,  -161,   125,   463,  -161,    53,    53,  -161,  -161,    85,
     112,   192,  -161,  -161,  -161,  -161,   311,   159,   166,   425,
     162,  -161,  -161,  -161,  -161,  -161
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     2,     3,     0,     1,     4,     6,    10,
       0,     7,     0,     0,     0,     0,     0,    11,     8,     0,
     114,   115,   116,   117,   118,     9,     0,    13,    15,    21,
      17,    14,    16,     0,     0,     0,    19,    18,    24,    70,
      71,    74,    77,     0,     0,     0,     0,    75,    76,     0,
       0,     0,    53,    56,    59,    67,     5,     0,     0,     0,
       0,     0,     0,     0,    17,    12,    19,    20,    32,    43,
      25,     0,    61,    60,    68,    62,    63,    64,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    22,     0,
       0,     0,     0,     0,     0,    26,    27,     0,    78,     0,
       0,     0,    19,     0,    42,    33,     0,     0,     0,    72,
      66,    46,    47,    51,    52,    49,    50,    48,    45,    55,
      54,    58,    57,     0,    29,     0,    30,     0,     0,   106,
     107,   110,   113,     0,     0,     0,     0,   111,   112,     0,
       0,     0,    79,    89,    92,    95,   103,     0,     0,     0,
       0,    41,    73,     0,    71,     0,     0,    35,    34,     0,
      97,    96,   104,    98,    99,   100,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    78,     0,     0,
       0,     0,     0,     0,     0,    23,    69,    65,     0,     0,
       0,     0,     0,   108,   102,    44,    82,    83,    87,    88,
      85,    86,    84,    81,    80,    91,    90,    94,    93,     0,
      17,    38,    40,    28,    31,   109,     0,   107,     0,     0,
       0,   105,   101,    37,    36,    39
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -161,  -161,   211,    70,  -161,   215,    -3,  -161,  -161,   202,
     204,   -39,  -161,  -160,   197,  -161,  -161,  -161,    28,  -161,
    -161,   -33,  -161,    26,   -36,  -161,  -161,    61,  -134,  -161,
     -53,  -119,  -161,  -161,   -18
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,    10,    11,    12,    29,    30,    31,
     102,    65,    34,    66,    37,    38,    59,    60,    67,    68,
      69,   106,    52,    53,    54,    75,    55,   141,   142,   143,
     144,   145,   163,   146,    25
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      51,    26,   165,     1,    97,   166,   167,    72,    73,    61,
      17,    13,    93,    77,   160,   161,    78,    79,    62,     5,
      63,    35,    61,   211,   212,   190,    98,   104,     8,    99,
      89,    62,    58,    63,    90,   196,   197,   198,   199,   200,
     201,   202,   203,    14,     6,    15,    64,   111,   112,   113,
     114,   115,   116,   117,   118,   121,   122,   216,   190,    64,
     225,   207,   208,   150,   128,    91,   147,   148,   149,    39,
      40,    41,     9,   180,   153,   124,   126,    92,    13,    81,
      82,    83,    84,    85,    42,   181,    86,   178,    39,    40,
      41,   179,   103,    43,    44,    19,   105,    28,    28,    45,
      46,    47,    48,    42,    82,    83,    84,    85,    27,    49,
      16,    50,    43,    44,   127,   119,   120,    33,    45,    46,
      47,    48,    39,    40,    41,   205,   206,    35,    49,    56,
      50,    94,    57,   218,    20,    21,    22,    42,    23,    24,
      71,    76,    40,    41,    74,    95,    43,    44,   171,   172,
     173,   174,    45,    46,    47,    48,    42,    96,   162,   100,
     101,   151,    49,   157,    50,    43,    44,   129,   130,   131,
     107,    45,    46,    47,    48,   188,   219,   108,   155,   156,
     159,    49,   132,    50,   168,   185,    39,   154,    41,   187,
     189,   133,   134,   191,   192,   195,   209,   135,   136,   137,
     138,    42,   210,   213,   214,   220,   222,   139,   223,   140,
      43,    44,   164,   130,   131,     7,    45,    46,    47,    48,
      20,    21,    22,   123,    23,    24,    49,   132,    50,    18,
      32,   129,   217,   131,    36,    70,   133,   134,   204,     0,
       0,     0,   135,   136,   137,   138,   132,     0,     0,     0,
       0,     0,   139,     0,   140,   133,   134,     0,     0,     0,
       0,   135,   136,   137,   138,    20,    21,    22,   125,    23,
      24,   139,    80,   140,     0,    81,    82,    83,    84,    85,
       0,    80,    86,    87,    81,    82,    83,    84,    85,     0,
       0,    86,    87,     0,     0,   170,   171,   172,   173,   174,
     152,    80,   175,     0,    81,    82,    83,    84,    85,   182,
     169,    86,    87,   170,   171,   172,   173,   174,     0,     0,
     175,   176,     0,     0,     0,     0,     0,     0,     0,   186,
     169,     0,     0,   170,   171,   172,   173,   174,   215,    80,
     175,   176,    81,    82,    83,    84,    85,     0,     0,    86,
      87,     0,     0,     0,     0,     0,   169,     0,   221,   170,
     171,   172,   173,   174,     0,   110,   175,   176,    80,     0,
       0,    81,    82,    83,    84,    85,     0,     0,    86,    87,
      80,     0,   194,    81,    82,    83,    84,    85,     0,     0,
      86,    87,    80,   109,     0,    81,    82,    83,    84,    85,
       0,     0,    86,    87,   169,   183,     0,   170,   171,   172,
     173,   174,     0,     0,   175,   176,    80,   184,     0,    81,
      82,    83,    84,    85,     0,     0,    86,    87,     0,   193,
      80,     0,     0,    81,    82,    83,    84,    85,     0,    88,
      86,    87,     0,     0,    80,     0,     0,    81,    82,    83,
      84,    85,     0,   158,    86,    87,     0,     0,   169,     0,
       0,   170,   171,   172,   173,   174,     0,   224,   175,   176,
       0,     0,     0,     0,    80,     0,   177,    81,    82,    83,
      84,    85,   169,     0,    86,   170,   171,   172,   173,   174,
       0,     0,   175
};

static const yytype_int16 yycheck[] =
{
      33,    19,   136,    16,    21,   139,   140,    43,    44,     3,
      13,    37,    38,    46,   133,   134,    49,    50,    12,     3,
      14,    15,     3,   183,   184,   159,    43,    66,    43,    46,
      27,    12,    35,    14,    31,   169,   170,   171,   172,   173,
     174,   175,   176,    42,     0,    44,    40,    80,    81,    82,
      83,    84,    85,    86,    87,    91,    92,   191,   192,    40,
     220,   180,   181,   102,    97,    20,    99,   100,   101,     3,
       4,     5,     3,    20,   107,    93,    94,    32,    37,    22,
      23,    24,    25,    26,    18,    32,    29,    27,     3,     4,
       5,    31,    64,    27,    28,    17,    68,    27,    28,    33,
      34,    35,    36,    18,    23,    24,    25,    26,    40,    43,
      38,    45,    27,    28,    48,    89,    90,    17,    33,    34,
      35,    36,     3,     4,     5,   178,   179,    15,    43,    41,
      45,    38,     3,    48,     6,     7,     8,    18,    10,    11,
      46,     3,     4,     5,     3,    42,    27,    28,    23,    24,
      25,    26,    33,    34,    35,    36,    18,    42,     3,    43,
      43,    41,    43,    42,    45,    27,    28,     3,     4,     5,
      46,    33,    34,    35,    36,     4,   209,    46,    46,    46,
      46,    43,    18,    45,    44,    41,     3,     4,     5,    47,
       4,    27,    28,    46,    46,    42,    21,    33,    34,    35,
      36,    18,    40,    47,    47,    13,    47,    43,    42,    45,
      27,    28,     3,     4,     5,     4,    33,    34,    35,    36,
       6,     7,     8,     9,    10,    11,    43,    18,    45,    14,
      28,     3,     4,     5,    30,    38,    27,    28,   177,    -1,
      -1,    -1,    33,    34,    35,    36,    18,    -1,    -1,    -1,
      -1,    -1,    43,    -1,    45,    27,    28,    -1,    -1,    -1,
      -1,    33,    34,    35,    36,     6,     7,     8,     9,    10,
      11,    43,    19,    45,    -1,    22,    23,    24,    25,    26,
      -1,    19,    29,    30,    22,    23,    24,    25,    26,    -1,
      -1,    29,    30,    -1,    -1,    22,    23,    24,    25,    26,
      47,    19,    29,    -1,    22,    23,    24,    25,    26,    47,
      19,    29,    30,    22,    23,    24,    25,    26,    -1,    -1,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      19,    -1,    -1,    22,    23,    24,    25,    26,    47,    19,
      29,    30,    22,    23,    24,    25,    26,    -1,    -1,    29,
      30,    -1,    -1,    -1,    -1,    -1,    19,    -1,    47,    22,
      23,    24,    25,    26,    -1,    45,    29,    30,    19,    -1,
      -1,    22,    23,    24,    25,    26,    -1,    -1,    29,    30,
      19,    -1,    45,    22,    23,    24,    25,    26,    -1,    -1,
      29,    30,    19,    44,    -1,    22,    23,    24,    25,    26,
      -1,    -1,    29,    30,    19,    44,    -1,    22,    23,    24,
      25,    26,    -1,    -1,    29,    30,    19,    44,    -1,    22,
      23,    24,    25,    26,    -1,    -1,    29,    30,    -1,    44,
      19,    -1,    -1,    22,    23,    24,    25,    26,    -1,    42,
      29,    30,    -1,    -1,    19,    -1,    -1,    22,    23,    24,
      25,    26,    -1,    42,    29,    30,    -1,    -1,    19,    -1,
      -1,    22,    23,    24,    25,    26,    -1,    42,    29,    30,
      -1,    -1,    -1,    -1,    19,    -1,    37,    22,    23,    24,
      25,    26,    19,    -1,    29,    22,    23,    24,    25,    26,
      -1,    -1,    29
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    16,    50,    51,    52,     3,     0,    51,    43,     3,
      53,    54,    55,    37,    42,    44,    38,    55,    54,    17,
       6,     7,     8,    10,    11,    83,    83,    40,    52,    56,
      57,    58,    58,    17,    61,    15,    59,    63,    64,     3,
       4,     5,    18,    27,    28,    33,    34,    35,    36,    43,
      45,    70,    71,    72,    73,    75,    41,     3,    55,    65,
      66,     3,    12,    14,    40,    60,    62,    67,    68,    69,
      63,    46,    73,    73,     3,    74,     3,    70,    70,    70,
      19,    22,    23,    24,    25,    26,    29,    30,    42,    27,
      31,    20,    32,    38,    38,    42,    42,    21,    43,    46,
      43,    43,    59,    67,    60,    67,    70,    46,    46,    44,
      45,    70,    70,    70,    70,    70,    70,    70,    70,    72,
      72,    73,    73,     9,    83,     9,    83,    48,    70,     3,
       4,     5,    18,    27,    28,    33,    34,    35,    36,    43,
      45,    76,    77,    78,    79,    80,    82,    70,    70,    70,
      60,    41,    47,    70,     4,    46,    46,    42,    42,    46,
      80,    80,     3,    81,     3,    77,    77,    77,    44,    19,
      22,    23,    24,    25,    26,    29,    30,    37,    27,    31,
      20,    32,    47,    44,    44,    41,    47,    47,     4,     4,
      77,    46,    46,    44,    45,    42,    77,    77,    77,    77,
      77,    77,    77,    77,    76,    79,    79,    80,    80,    21,
      40,    62,    62,    47,    47,    47,    77,     4,    48,    70,
      13,    47,    47,    42,    42,    62
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    49,    50,    51,    51,    52,    53,    53,    53,    54,
      55,    55,    56,    57,    57,    58,    58,    59,    59,    60,
      60,    61,    61,    62,    63,    63,    64,    64,    65,    65,
      66,    66,    67,    67,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    69,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    71,    71,    71,    72,    72,    72,
      73,    73,    73,    73,    73,    73,    73,    73,    74,    74,
      75,    75,    75,    75,    75,    75,    75,    75,    76,    76,
      76,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      78,    78,    78,    79,    79,    79,    80,    80,    80,    80,
      80,    80,    80,    80,    81,    81,    82,    82,    82,    82,
      82,    82,    82,    82,    83,    83,    83,    83,    83
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,    11,     0,     1,     3,     3,
       1,     3,     3,     0,     1,     1,     2,     0,     1,     0,
       1,     0,     3,     4,     1,     2,     3,     3,     6,     3,
       3,     6,     1,     2,     4,     4,     7,     7,     5,     7,
       5,     3,     2,     1,     5,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       2,     2,     2,     2,     2,     5,     3,     1,     1,     4,
       1,     1,     3,     4,     1,     1,     1,     1,     0,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     2,     2,     2,     2,
       2,     5,     3,     1,     1,     4,     1,     1,     3,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


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

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

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
  case 2: /* Program: ProcedureList  */
#line 95 "parser.ypp"
                        { 
            (yyval.u_program) = new ProgramImpl((yyvsp[0].u_proc_list));
            ast = (yyval.u_program);
            }
#line 1637 "parser.cpp"
    break;

  case 3: /* ProcedureList: Procedure  */
#line 101 "parser.ypp"
                          { (yyval.u_proc_list) = new std::list<Proc_ptr>{};
                (yyval.u_proc_list)->push_front((yyvsp[0].u_proc));     }
#line 1644 "parser.cpp"
    break;

  case 4: /* ProcedureList: Procedure ProcedureList  */
#line 103 "parser.ypp"
                                        {
                    (yyval.u_proc_list) = (yyvsp[0].u_proc_list);
                    (yyval.u_proc_list)->push_front((yyvsp[-1].u_proc));
                }
#line 1653 "parser.cpp"
    break;

  case 5: /* Procedure: PROCEDURE IDENTIFIER LPAREN ParamList RPAREN RETURN Type LBRACE Body OptionalReturn RBRACE  */
#line 110 "parser.ypp"
                                                                                                       {
            (yyval.u_proc) = new ProcImpl(NULL, NULL, NULL, NULL);
            }
#line 1661 "parser.cpp"
    break;

  case 32: /* Statements: Statement  */
#line 170 "parser.ypp"
                       { }
#line 1667 "parser.cpp"
    break;

  case 33: /* Statements: Statement Statements  */
#line 171 "parser.ypp"
                                  { }
#line 1673 "parser.cpp"
    break;

  case 44: /* FunctionCall: IDENTIFIER LPAREN ArgumentList RPAREN SEMICOLON  */
#line 186 "parser.ypp"
                                                               { /* Handle function call here */ }
#line 1679 "parser.cpp"
    break;

  case 45: /* Expression: Expression OR Expression  */
#line 188 "parser.ypp"
                                      { /* $$ = new Or($1, $3); */  }
#line 1685 "parser.cpp"
    break;

  case 46: /* Expression: Expression AND Expression  */
#line 189 "parser.ypp"
                                       { /* $$ = new And($1, $3); */ }
#line 1691 "parser.cpp"
    break;

  case 47: /* Expression: Expression EQUALS Expression  */
#line 190 "parser.ypp"
                                          { /*  $$ = new Compare($1, $3); */ }
#line 1697 "parser.cpp"
    break;

  case 48: /* Expression: Expression NOTEQUAL Expression  */
#line 191 "parser.ypp"
                                            { /*$$ = new Noteq($1, $3);*/ }
#line 1703 "parser.cpp"
    break;

  case 49: /* Expression: Expression LT Expression  */
#line 192 "parser.ypp"
                                      {/* $$ = new Lt($1, $3); */}
#line 1709 "parser.cpp"
    break;

  case 50: /* Expression: Expression LTE Expression  */
#line 193 "parser.ypp"
                                       {/* $$ = new Lteq($1, $3);*/ }
#line 1715 "parser.cpp"
    break;

  case 51: /* Expression: Expression GT Expression  */
#line 194 "parser.ypp"
                                      {/* $$ = new Gt($1, $3); */}
#line 1721 "parser.cpp"
    break;

  case 52: /* Expression: Expression GTE Expression  */
#line 195 "parser.ypp"
                                       {/* $$ = new Gteq($1, $3);*/ }
#line 1727 "parser.cpp"
    break;

  case 53: /* Expression: AdditiveExpr  */
#line 196 "parser.ypp"
                          {/* $$ = $1; */}
#line 1733 "parser.cpp"
    break;

  case 54: /* AdditiveExpr: AdditiveExpr PLUS MultiplicativeExpr  */
#line 200 "parser.ypp"
                                                    {/* $$ = new Plus($1, $3); */}
#line 1739 "parser.cpp"
    break;

  case 55: /* AdditiveExpr: AdditiveExpr MINUS MultiplicativeExpr  */
#line 201 "parser.ypp"
                                                     {/* $$ = new Minus($1, $3);*/ }
#line 1745 "parser.cpp"
    break;

  case 56: /* AdditiveExpr: MultiplicativeExpr  */
#line 202 "parser.ypp"
                                  {/* $$ = $1; */}
#line 1751 "parser.cpp"
    break;

  case 57: /* MultiplicativeExpr: MultiplicativeExpr MUL UnaryExpr  */
#line 205 "parser.ypp"
                                                      {/* $$ = new Times($1, $3); */}
#line 1757 "parser.cpp"
    break;

  case 58: /* MultiplicativeExpr: MultiplicativeExpr DIV UnaryExpr  */
#line 206 "parser.ypp"
                                                      { /*$$ = new Div($1, $3);*/ }
#line 1763 "parser.cpp"
    break;

  case 59: /* MultiplicativeExpr: UnaryExpr  */
#line 207 "parser.ypp"
                               {/* $$ = $1;*/ }
#line 1769 "parser.cpp"
    break;

  case 60: /* UnaryExpr: NOT UnaryExpr  */
#line 210 "parser.ypp"
                          {/* $$ = new Not($2); */}
#line 1775 "parser.cpp"
    break;

  case 61: /* UnaryExpr: MINUS UnaryExpr  */
#line 211 "parser.ypp"
                                         { /*$$ = new Uminus($2);*/ }
#line 1781 "parser.cpp"
    break;

  case 62: /* UnaryExpr: AMP Variable  */
#line 212 "parser.ypp"
                         {/* $$ = new AddressOf($2);*/ }
#line 1787 "parser.cpp"
    break;

  case 63: /* UnaryExpr: DEREFERENCE IDENTIFIER  */
#line 213 "parser.ypp"
                                    {/* $$ = new Deref(new Ident(new SymName($2))); */}
#line 1793 "parser.cpp"
    break;

  case 64: /* UnaryExpr: DEREFERENCE Expression  */
#line 214 "parser.ypp"
                                   {/* $$ = new Deref($2); */}
#line 1799 "parser.cpp"
    break;

  case 65: /* UnaryExpr: DEREFERENCE IDENTIFIER LBRACKET INT_LITERAL RBRACKET  */
#line 215 "parser.ypp"
                                                                 { }
#line 1805 "parser.cpp"
    break;

  case 66: /* UnaryExpr: BAR Expression BAR  */
#line 216 "parser.ypp"
                               { /*$$ = new AbsoluteValue($2);*/ }
#line 1811 "parser.cpp"
    break;

  case 67: /* UnaryExpr: PrimaryExpr  */
#line 217 "parser.ypp"
                        {/* $$ = $1;*/ }
#line 1817 "parser.cpp"
    break;

  case 70: /* PrimaryExpr: IDENTIFIER  */
#line 224 "parser.ypp"
                         { /*$$ = new Ident(new SymName($1)); */}
#line 1823 "parser.cpp"
    break;

  case 71: /* PrimaryExpr: INT_LITERAL  */
#line 225 "parser.ypp"
                          {/* $$ = new IntLit(new Primitive($1)); */}
#line 1829 "parser.cpp"
    break;

  case 72: /* PrimaryExpr: LPAREN Expression RPAREN  */
#line 226 "parser.ypp"
                                       {/* $$ = $2;*/}
#line 1835 "parser.cpp"
    break;

  case 73: /* PrimaryExpr: IDENTIFIER LBRACKET Expression RBRACKET  */
#line 227 "parser.ypp"
                                                      { /*$$ = new ArrayAccess(new SymName($1), $3);*/ }
#line 1841 "parser.cpp"
    break;

  case 74: /* PrimaryExpr: CHAR_LITERAL  */
#line 228 "parser.ypp"
                           { /*$$ = new CharLit(new Primitive($1));*/ }
#line 1847 "parser.cpp"
    break;

  case 75: /* PrimaryExpr: TRUE  */
#line 229 "parser.ypp"
                   {/* $$ = new BoolLit(new Primitive(true)); */}
#line 1853 "parser.cpp"
    break;

  case 76: /* PrimaryExpr: FALSE  */
#line 230 "parser.ypp"
                    { /*$$ = new BoolLit(new Primitive(false)); */}
#line 1859 "parser.cpp"
    break;

  case 77: /* PrimaryExpr: NULLTOKEN  */
#line 231 "parser.ypp"
                        { }
#line 1865 "parser.cpp"
    break;


#line 1869 "parser.cpp"

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
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
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
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 299 "parser.ypp"


/** You shall not pass!
 *  You should not  have to do or edit anything past this.
 */

extern int yylineno;

void yyerror(const char *s)
{
    fprintf(stderr, "%s at line %d\n", s, yylineno);
    return;
}
