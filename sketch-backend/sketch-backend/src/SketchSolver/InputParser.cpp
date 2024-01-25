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
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "InputParser/InputParser.yy"


using namespace std;

BooleanDAGCreator* currentBD;
stack<string> namestack;
vartype Gvartype;
string tupleName;

bool isModel;




#ifdef CONST
#undef CONST
#endif


#define YY_DECL int yylex (YYSTYPE* yylval, yyscan_t yyscanner)
extern int yylex (YYSTYPE* yylval, yyscan_t yyscanner);


#line 95 "InputParser.cpp"

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

#include "InputParser.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_T_dbl = 3,                      /* T_dbl  */
  YYSYMBOL_T_int = 4,                      /* T_int  */
  YYSYMBOL_T_bool = 5,                     /* T_bool  */
  YYSYMBOL_T_ident = 6,                    /* T_ident  */
  YYSYMBOL_T_OutIdent = 7,                 /* T_OutIdent  */
  YYSYMBOL_T_NativeCode = 8,               /* T_NativeCode  */
  YYSYMBOL_T_string = 9,                   /* T_string  */
  YYSYMBOL_T_true = 10,                    /* T_true  */
  YYSYMBOL_T_false = 11,                   /* T_false  */
  YYSYMBOL_T_vartype = 12,                 /* T_vartype  */
  YYSYMBOL_T_rightAC = 13,                 /* T_rightAC  */
  YYSYMBOL_T_leftAC = 14,                  /* T_leftAC  */
  YYSYMBOL_T_rightTC = 15,                 /* T_rightTC  */
  YYSYMBOL_T_leftTC = 16,                  /* T_leftTC  */
  YYSYMBOL_T_leftAR = 17,                  /* T_leftAR  */
  YYSYMBOL_T_rightAR = 18,                 /* T_rightAR  */
  YYSYMBOL_T_arrow = 19,                   /* T_arrow  */
  YYSYMBOL_T_twoS = 20,                    /* T_twoS  */
  YYSYMBOL_T_ppls = 21,                    /* T_ppls  */
  YYSYMBOL_T_mmns = 22,                    /* T_mmns  */
  YYSYMBOL_T_eq = 23,                      /* T_eq  */
  YYSYMBOL_T_neq = 24,                     /* T_neq  */
  YYSYMBOL_T_and = 25,                     /* T_and  */
  YYSYMBOL_T_or = 26,                      /* T_or  */
  YYSYMBOL_T_For = 27,                     /* T_For  */
  YYSYMBOL_T_ge = 28,                      /* T_ge  */
  YYSYMBOL_T_le = 29,                      /* T_le  */
  YYSYMBOL_T_fixes = 30,                   /* T_fixes  */
  YYSYMBOL_T_File = 31,                    /* T_File  */
  YYSYMBOL_T_Native = 32,                  /* T_Native  */
  YYSYMBOL_T_NativeMethod = 33,            /* T_NativeMethod  */
  YYSYMBOL_T_Sketches = 34,                /* T_Sketches  */
  YYSYMBOL_T_new = 35,                     /* T_new  */
  YYSYMBOL_T_Typedef = 36,                 /* T_Typedef  */
  YYSYMBOL_T_def = 37,                     /* T_def  */
  YYSYMBOL_T_mdldef = 38,                  /* T_mdldef  */
  YYSYMBOL_T_Min = 39,                     /* T_Min  */
  YYSYMBOL_T_sp = 40,                      /* T_sp  */
  YYSYMBOL_T_assert = 41,                  /* T_assert  */
  YYSYMBOL_T_assume = 42,                  /* T_assume  */
  YYSYMBOL_T_hassert = 43,                 /* T_hassert  */
  YYSYMBOL_T_equals = 44,                  /* T_equals  */
  YYSYMBOL_T_replace = 45,                 /* T_replace  */
  YYSYMBOL_T_eof = 46,                     /* T_eof  */
  YYSYMBOL_47_ = 47,                       /* '+'  */
  YYSYMBOL_48_ = 48,                       /* '*'  */
  YYSYMBOL_49_ = 49,                       /* '/'  */
  YYSYMBOL_50_ = 50,                       /* '%'  */
  YYSYMBOL_51_ = 51,                       /* '<'  */
  YYSYMBOL_52_ = 52,                       /* '>'  */
  YYSYMBOL_53_ = 53,                       /* '?'  */
  YYSYMBOL_54_ = 54,                       /* ':'  */
  YYSYMBOL_55_ = 55,                       /* '!'  */
  YYSYMBOL_56_ = 56,                       /* '['  */
  YYSYMBOL_57_ = 57,                       /* ']'  */
  YYSYMBOL_58_ = 58,                       /* ','  */
  YYSYMBOL_59_ = 59,                       /* '('  */
  YYSYMBOL_60_ = 60,                       /* ')'  */
  YYSYMBOL_61_ = 61,                       /* '{'  */
  YYSYMBOL_62_ = 62,                       /* '}'  */
  YYSYMBOL_63_ = 63,                       /* ';'  */
  YYSYMBOL_64_ = 64,                       /* '='  */
  YYSYMBOL_65_ = 65,                       /* '$'  */
  YYSYMBOL_66_ = 66,                       /* '&'  */
  YYSYMBOL_67_ = 67,                       /* '|'  */
  YYSYMBOL_68_ = 68,                       /* '^'  */
  YYSYMBOL_69_ = 69,                       /* '.'  */
  YYSYMBOL_70_ = 70,                       /* '-'  */
  YYSYMBOL_YYACCEPT = 71,                  /* $accept  */
  YYSYMBOL_Program = 72,                   /* Program  */
  YYSYMBOL_MethodList = 73,                /* MethodList  */
  YYSYMBOL_InList = 74,                    /* InList  */
  YYSYMBOL_75_1 = 75,                      /* $@1  */
  YYSYMBOL_OutList = 76,                   /* OutList  */
  YYSYMBOL_ParamDecl = 77,                 /* ParamDecl  */
  YYSYMBOL_78_2 = 78,                      /* $@2  */
  YYSYMBOL_79_3 = 79,                      /* $@3  */
  YYSYMBOL_ParamList = 80,                 /* ParamList  */
  YYSYMBOL_Mhelp = 81,                     /* Mhelp  */
  YYSYMBOL_Method = 82,                    /* Method  */
  YYSYMBOL_83_4 = 83,                      /* $@4  */
  YYSYMBOL_TupleType = 84,                 /* TupleType  */
  YYSYMBOL_TupleTypeList = 85,             /* TupleTypeList  */
  YYSYMBOL_TypeLine = 86,                  /* TypeLine  */
  YYSYMBOL_TypeList = 87,                  /* TypeList  */
  YYSYMBOL_Typedef = 88,                   /* Typedef  */
  YYSYMBOL_Replacement = 89,               /* Replacement  */
  YYSYMBOL_FixesClause = 90,               /* FixesClause  */
  YYSYMBOL_AssertionExpr = 91,             /* AssertionExpr  */
  YYSYMBOL_HLAssertion = 92,               /* HLAssertion  */
  YYSYMBOL_93_5 = 93,                      /* $@5  */
  YYSYMBOL_TokenList = 94,                 /* TokenList  */
  YYSYMBOL_WorkBody = 95,                  /* WorkBody  */
  YYSYMBOL_WorkStatement = 96,             /* WorkStatement  */
  YYSYMBOL_OptionalMsg = 97,               /* OptionalMsg  */
  YYSYMBOL_Expression = 98,                /* Expression  */
  YYSYMBOL_varList = 99,                   /* varList  */
  YYSYMBOL_IdentList = 100,                /* IdentList  */
  YYSYMBOL_Term = 101,                     /* Term  */
  YYSYMBOL_ParentsList = 102,              /* ParentsList  */
  YYSYMBOL_ConstantExpr = 103,             /* ConstantExpr  */
  YYSYMBOL_ConstantTerm = 104,             /* ConstantTerm  */
  YYSYMBOL_NegConstant = 105,              /* NegConstant  */
  YYSYMBOL_Constant = 106,                 /* Constant  */
  YYSYMBOL_Ident = 107                     /* Ident  */
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
typedef yytype_int16 yy_state_t;

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
#define YYLAST   511

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  137
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  357

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   301


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
       2,     2,     2,    55,     2,     2,    65,    50,    66,     2,
      59,    60,    48,    47,    58,    70,    69,    49,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    54,    63,
      51,    64,    52,    53,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    56,     2,    57,    68,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    61,    67,    62,     2,     2,     2,     2,
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
      45,    46
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   129,   129,   132,   133,   134,   135,   136,   139,   155,
     155,   171,   172,   178,   191,   198,   205,   215,   221,   235,
     239,   248,   251,   251,   252,   252,   253,   254,   257,   258,
     259,   261,   261,   264,   263,   280,   288,   293,   296,   300,
     301,   305,   317,   322,   326,   327,   329,   330,   332,   338,
     342,   350,   362,   362,   374,   384,   387,   391,   397,   398,
     401,   402,   406,   433,   438,   445,   456,   465,   478,   495,
     496,   498,   499,   502,   505,   508,   511,   514,   518,   521,
     524,   532,   535,   542,   548,   562,   585,   601,   615,   619,
     623,   627,   630,   634,   638,   641,   645,   649,   660,   661,
     672,   676,   681,   684,   688,   723,   771,   774,   778,   781,
     786,   790,   798,   803,   807,   811,   815,   819,   827,   832,
     837,   846,   853,   854,   859,   860,   861,   863,   864,   865,
     866,   868,   872,   873,   876,   877,   878,   880
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
  "\"end of file\"", "error", "\"invalid token\"", "T_dbl", "T_int",
  "T_bool", "T_ident", "T_OutIdent", "T_NativeCode", "T_string", "T_true",
  "T_false", "T_vartype", "T_rightAC", "T_leftAC", "T_rightTC", "T_leftTC",
  "T_leftAR", "T_rightAR", "T_arrow", "T_twoS", "T_ppls", "T_mmns", "T_eq",
  "T_neq", "T_and", "T_or", "T_For", "T_ge", "T_le", "T_fixes", "T_File",
  "T_Native", "T_NativeMethod", "T_Sketches", "T_new", "T_Typedef",
  "T_def", "T_mdldef", "T_Min", "T_sp", "T_assert", "T_assume",
  "T_hassert", "T_equals", "T_replace", "T_eof", "'+'", "'*'", "'/'",
  "'%'", "'<'", "'>'", "'?'", "':'", "'!'", "'['", "']'", "','", "'('",
  "')'", "'{'", "'}'", "';'", "'='", "'$'", "'&'", "'|'", "'^'", "'.'",
  "'-'", "$accept", "Program", "MethodList", "InList", "$@1", "OutList",
  "ParamDecl", "$@2", "$@3", "ParamList", "Mhelp", "Method", "$@4",
  "TupleType", "TupleTypeList", "TypeLine", "TypeList", "Typedef",
  "Replacement", "FixesClause", "AssertionExpr", "HLAssertion", "$@5",
  "TokenList", "WorkBody", "WorkStatement", "OptionalMsg", "Expression",
  "varList", "IdentList", "Term", "ParentsList", "ConstantExpr",
  "ConstantTerm", "NegConstant", "Constant", "Ident", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-166)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-134)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -29,     5,   133,   263,  -166,  -166,    34,   173,  -166,  -166,
    -166,   194,   125,   199,   263,   263,   263,   263,    -3,   153,
     139,   209,   189,  -166,  -166,  -166,  -166,  -166,  -166,   180,
    -166,  -166,   153,   153,   192,  -166,   221,   214,   251,   201,
     216,  -166,  -166,   220,   266,  -166,   244,    -2,  -166,  -166,
    -166,    22,  -166,  -166,   272,   300,    -1,     8,   176,   253,
     254,   275,   281,  -166,  -166,    50,   350,   293,   314,     2,
    -166,    15,    27,    39,    -2,   306,   326,   197,  -166,  -166,
      67,    67,   183,   183,   216,    33,   -26,  -166,  -166,   183,
     166,  -166,    28,  -166,   105,  -166,  -166,   183,   183,   322,
     320,   332,   177,   367,  -166,   183,  -166,   183,   183,   183,
     183,   184,  -166,   183,   211,   183,   219,   154,   237,   245,
    -166,   324,  -166,   382,  -166,   -26,   391,   -26,    94,   351,
    -166,   399,   391,   288,   403,   291,   403,   348,   354,   330,
     330,   330,  -166,  -166,   413,  -166,  -166,  -166,  -166,  -166,
     415,  -166,  -166,  -166,   416,   403,  -166,   418,  -166,   330,
     330,  -166,   369,   170,   170,   375,   216,   422,   170,   423,
     330,   170,   170,   -45,   424,   374,   377,  -166,    38,    54,
     413,   411,   391,  -166,  -166,  -166,   -42,    26,   187,   378,
     170,   419,   170,  -166,   417,   422,   370,  -166,   181,  -166,
     379,   110,   373,  -166,   386,   330,   434,  -166,   330,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   170,   170,   388,   170,   343,   436,   383,   445,
    -166,  -166,   170,  -166,  -166,  -166,   401,   451,   330,     3,
    -166,  -166,  -166,   117,  -166,   408,  -166,   409,   308,   446,
    -166,   407,   232,   404,    76,  -166,  -166,  -166,  -166,  -166,
    -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,
      67,  -166,   400,   165,  -166,  -166,   405,   412,   410,   421,
      85,  -166,   196,    -5,  -166,  -166,   414,   427,  -166,   170,
     330,   330,  -166,  -166,   425,   286,    93,  -166,  -166,   428,
     170,   426,   330,   429,  -166,   432,  -166,  -166,  -166,   449,
     210,  -166,  -166,   330,   330,   420,   170,   238,  -166,   422,
    -166,  -166,   252,   309,   430,   435,   431,   131,   439,   433,
     330,   440,  -166,  -166,   316,  -166,   330,   124,   330,   448,
    -166,    43,   442,   151,  -166,  -166,   480,   447,   443,   481,
     216,   444,   450,   216,  -166,   452,  -166
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      46,     0,     0,     3,    44,     1,     0,     0,    32,    31,
      52,     0,     0,     0,     3,     3,     3,     3,     0,    55,
       0,     0,     0,     2,    33,     4,     7,     6,     5,     0,
      47,    45,    55,    55,     0,    49,     0,     0,     0,     0,
      39,    56,    57,     0,     0,    53,     0,    28,   134,   135,
     136,     0,    39,    54,    50,     0,     0,     0,     0,    29,
       0,    38,    35,    42,    40,     0,     0,     0,    14,     0,
      13,     0,     0,     0,    28,     0,     0,     0,    43,    51,
       0,     0,     0,     0,     0,     0,   124,   127,   132,     0,
       0,    17,     0,    16,     0,    30,    58,     0,     0,     0,
       0,     0,     0,     0,   133,     0,    24,     0,     0,     0,
       0,     0,    22,     0,     0,     0,     0,     0,     0,     0,
      41,     0,    15,     0,   128,   125,     0,   126,   129,   130,
     131,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    34,    60,     0,    59,    37,    36,    48,    19,
       8,    25,    18,    23,     0,    11,    27,     0,    26,     0,
       0,   103,   137,    98,    98,     0,     0,     0,     0,     0,
       0,    98,     0,     0,    71,     0,   102,   109,    70,     0,
     100,     0,     0,    21,    12,    20,     0,     0,     0,   137,
       0,     0,    98,   102,     0,     0,     0,   137,     0,   107,
       0,     0,     0,   106,   102,     0,     0,    64,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      66,   101,    98,    10,    61,    63,     0,     0,     0,     0,
      85,    99,    87,     0,   122,     0,   110,     0,     0,     0,
     108,     0,     0,     0,     0,    78,    77,    73,    75,    95,
      96,    88,    91,    89,    90,    94,    93,    72,    74,    76,
       0,    92,     0,     0,    69,    68,     0,     0,     0,     0,
       0,   116,     0,     0,   113,   115,     0,     0,   111,    98,
       0,     0,    65,    79,     0,   137,     0,    81,    67,     0,
      98,     0,     0,     0,   117,     0,   123,   114,   112,     0,
       0,    97,    80,     0,     0,     0,    98,     0,   118,     0,
      86,    84,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    82,   119,     0,    83,     0,     0,     0,     0,
     120,     0,     0,     0,   121,    62,     0,     0,     0,     0,
       0,     0,     0,     0,   105,     0,   104
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -166,  -166,   376,   -85,  -166,   -50,  -166,  -166,  -166,   437,
    -166,  -166,  -166,  -166,   453,  -166,  -166,  -166,  -166,  -166,
    -166,  -166,  -166,   339,  -166,  -166,  -166,  -124,  -144,   328,
     107,  -166,   167,   268,    42,   -40,  -165
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,    12,   151,   182,   156,    59,   132,   126,    60,
      13,    14,    39,    64,    51,    31,    18,     3,    15,    16,
      37,    17,    21,    34,   117,   145,   228,   173,   191,   181,
     174,   283,    85,    86,   175,   193,   177
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      52,   197,   198,    29,    56,    68,    48,     1,   205,   206,
      57,   205,    49,    50,    70,   236,   178,   179,   207,    48,
     194,   234,   108,   109,   110,    49,    50,   202,    61,    88,
     243,    88,    48,    91,    62,   186,   187,    99,    49,    50,
      88,    88,    88,    88,   104,    93,   201,   153,   241,    88,
      82,   237,    88,    58,    88,    69,    61,    88,    88,    30,
     305,    83,    62,    89,    71,    88,     4,    88,    88,    88,
      88,    48,    84,    88,    83,    88,   113,    49,    50,   205,
     105,   252,    63,    92,   254,    84,   158,    83,   277,   235,
     106,   205,   227,    19,   293,    94,   205,   233,    84,   176,
     176,   176,   273,   107,   302,   184,   345,   205,   229,    48,
      78,    87,   313,    87,   280,    49,    50,   230,   306,   176,
     176,    48,   100,   101,    87,    87,   196,    49,    50,   205,
     176,    87,   204,     5,    87,    48,    87,    84,   205,    87,
      87,    49,    50,   109,   110,   309,   205,    87,   296,    87,
      87,    87,    87,   115,   327,    87,   315,    87,   248,    32,
     137,   138,    33,   205,    83,   176,   310,   311,   176,   281,
     250,    23,   325,   161,    48,    84,   189,   205,   317,    20,
      49,    50,    72,   333,   342,    48,   176,    48,    73,   322,
     323,    49,    50,    49,    50,   139,   140,   141,   176,   236,
      22,    48,    35,   282,   205,    24,   337,    49,    50,   165,
     166,   347,   341,   105,   343,    36,   142,   143,   205,   144,
      48,   167,   297,   112,   105,   168,    49,    50,   245,   170,
      88,   105,   176,   246,   123,   237,   107,    38,    90,    40,
     190,   131,    83,   238,   303,    98,   247,   107,   304,   102,
     176,   176,    43,    84,   107,    44,   111,    46,   105,   114,
      47,   116,   176,   205,   118,   119,   105,   321,   134,     6,
     192,   192,    54,   176,   176,   199,   136,    45,   192,   203,
     133,   107,   135,    53,   105,   205,   291,   334,    55,   107,
     176,   205,   105,     7,   146,   326,   176,   203,   176,   192,
       8,     9,   147,    66,    10,   205,    67,   107,    11,   328,
     352,    74,   294,   355,    75,   107,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,    76,   271,   161,    48,   105,   162,    77,   105,   192,
      49,    50,   188,   249,   163,   154,   161,    48,   157,   162,
     164,   103,    80,    49,    50,   286,   287,   163,   107,    79,
     288,   107,   205,   164,   339,    81,   329,    96,   340,   165,
     166,    41,    42,   125,    97,   127,   128,   129,   130,   120,
     121,   167,   165,   166,   122,   168,   169,   148,   149,   170,
      25,    26,    27,    28,   167,   171,   192,   150,   168,   272,
     172,   110,   170,   161,    48,   152,   295,   192,   171,   155,
      49,    50,   159,   172,   163,   108,   109,   110,   160,   180,
     164,    -9,   183,   192,   185,   188,   195,   124,   197,   200,
     226,   232,   240,  -132,   239,   244,   249,   242,   251,   165,
     166,   208,  -133,   253,   270,   274,   275,   209,   210,   211,
     212,   167,   213,   214,   276,   168,   169,   279,   278,   170,
     284,   285,   289,   290,   320,   171,   307,   292,   298,   300,
     172,   215,   216,   217,   218,   219,   220,   299,   301,   308,
     324,   318,   312,   319,   314,   316,   348,   351,   332,   330,
     221,   222,   223,   224,   225,   331,   335,   336,   346,   338,
     344,   350,   353,   349,     0,    65,     0,   354,   231,   356,
       0,    95
};

static const yytype_int16 yycheck[] =
{
      40,     6,   167,     6,     6,     6,     4,    36,    53,    54,
      12,    53,    10,    11,     6,    12,   140,   141,    63,     4,
     164,    63,    48,    49,    50,    10,    11,   171,     6,    69,
     195,    71,     4,     6,    12,   159,   160,    77,    10,    11,
      80,    81,    82,    83,    84,     6,   170,   132,   192,    89,
      48,    48,    92,    55,    94,    56,     6,    97,    98,    62,
      65,    59,    12,    48,    56,   105,    61,   107,   108,   109,
     110,     4,    70,   113,    59,   115,    48,    10,    11,    53,
      47,   205,    60,    56,   208,    70,   136,    59,   232,    63,
      57,    53,    54,    59,    18,    56,    53,   182,    70,   139,
     140,   141,   226,    70,    19,   155,    63,    53,    54,     4,
      60,    69,    19,    71,   238,    10,    11,    63,   283,   159,
     160,     4,    80,    81,    82,    83,   166,    10,    11,    53,
     170,    89,   172,     0,    92,     4,    94,    70,    53,    97,
      98,    10,    11,    49,    50,   289,    53,   105,   272,   107,
     108,   109,   110,    48,   319,   113,   300,   115,   198,     6,
       6,     7,     9,    53,    59,   205,   290,   291,   208,    52,
      60,    46,   316,     3,     4,    70,     6,    53,   302,     6,
      10,    11,     6,    52,    60,     4,   226,     4,    12,   313,
     314,    10,    11,    10,    11,    41,    42,    43,   238,    12,
       6,     4,    63,   243,    53,     6,   330,    10,    11,    39,
      40,    60,   336,    47,   338,     6,    62,    63,    53,    65,
       4,    51,    57,    57,    47,    55,    10,    11,    47,    59,
     270,    47,   272,    52,    57,    48,    70,    48,    71,    59,
      70,    57,    59,    56,    48,    48,    65,    70,    52,    82,
     290,   291,    60,    70,    70,    34,    89,     6,    47,    92,
      59,    94,   302,    53,    97,    98,    47,    57,    57,     6,
     163,   164,     6,   313,   314,   168,    57,    63,   171,   172,
     113,    70,   115,    63,    47,    53,    54,   327,    44,    70,
     330,    53,    47,    30,    57,    57,   336,   190,   338,   192,
      37,    38,    57,    31,    41,    53,     6,    70,    45,    57,
     350,    58,   270,   353,    60,    70,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,    56,   225,     3,     4,    47,     6,    56,    47,   232,
      10,    11,    56,    57,    14,    57,     3,     4,    57,     6,
      20,    83,    59,    10,    11,    47,    48,    14,    70,     9,
      52,    70,    53,    20,    48,    51,    57,    61,    52,    39,
      40,    32,    33,   105,    48,   107,   108,   109,   110,    57,
      60,    51,    39,    40,    52,    55,    56,    63,     6,    59,
      14,    15,    16,    17,    51,    65,   289,     6,    55,    56,
      70,    50,    59,     3,     4,     6,     6,   300,    65,     6,
      10,    11,    64,    70,    14,    48,    49,    50,    64,     6,
      20,     6,     6,   316,     6,    56,    51,    60,     6,     6,
      56,    20,    13,    56,    56,    65,    57,    20,    65,    39,
      40,    17,    56,     9,    56,     9,    63,    23,    24,    25,
      26,    51,    28,    29,     9,    55,    56,     6,    57,    59,
      52,    52,    16,    56,    15,    65,    52,    63,    63,    59,
      70,    47,    48,    49,    50,    51,    52,    65,    57,    52,
      60,    52,    57,    51,    56,    59,     6,     6,    57,    59,
      66,    67,    68,    69,    70,    60,    57,    64,    56,    59,
      52,    58,    58,    56,    -1,    52,    -1,    57,   180,    57,
      -1,    74
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    36,    72,    88,    61,     0,     6,    30,    37,    38,
      41,    45,    73,    81,    82,    89,    90,    92,    87,    59,
       6,    93,     6,    46,     6,    73,    73,    73,    73,     6,
      62,    86,     6,     9,    94,    63,     6,    91,    48,    83,
      59,    94,    94,    60,    34,    63,     6,    59,     4,    10,
      11,    85,   106,    63,     6,    44,     6,    12,    55,    77,
      80,     6,    12,    60,    84,    85,    31,     6,     6,    56,
       6,    56,     6,    12,    58,    60,    56,    56,    60,     9,
      59,    51,    48,    59,    70,   103,   104,   105,   106,    48,
     103,     6,    56,     6,    56,    80,    61,    48,    48,   106,
     105,   105,   103,   104,   106,    47,    57,    70,    48,    49,
      50,   103,    57,    48,   103,    48,   103,    95,   103,   103,
      57,    60,    52,    57,    60,   104,    79,   104,   104,   104,
     104,    57,    78,   103,    57,   103,    57,     6,     7,    41,
      42,    43,    62,    63,    65,    96,    57,    57,    63,     6,
       6,    74,     6,    74,    57,     6,    76,    57,    76,    64,
      64,     3,     6,    14,    20,    39,    40,    51,    55,    56,
      59,    65,    70,    98,   101,   105,   106,   107,    98,    98,
       6,   100,    75,     6,    76,     6,    98,    98,    56,     6,
      70,    99,   101,   106,    99,    51,   106,     6,   107,   101,
       6,    98,    99,   101,   106,    53,    54,    63,    17,    23,
      24,    25,    26,    28,    29,    47,    48,    49,    50,    51,
      52,    66,    67,    68,    69,    70,    56,    54,    97,    54,
      63,   100,    20,    74,    63,    63,    12,    48,    56,    56,
      13,    99,    20,   107,    65,    47,    52,    65,   106,    57,
      60,    65,    98,     9,    98,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
      56,   101,    56,    98,     9,    63,     9,    99,    57,     6,
      98,    52,   106,   102,    52,    52,    47,    48,    52,    16,
      56,    54,    63,    18,   105,     6,    98,    57,    63,    65,
      59,    57,    19,    48,    52,    65,   107,    52,    52,    99,
      98,    98,    57,    19,    56,    99,    59,    98,    52,    51,
      15,    57,    98,    98,    60,    99,    57,   107,    57,    57,
      59,    60,    57,    52,   106,    57,    64,    98,    59,    48,
      52,    98,    60,    98,    52,    63,    56,    60,     6,    56,
      58,     6,   106,    58,    57,   106,    57
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    71,    72,    73,    73,    73,    73,    73,    74,    75,
      74,    76,    76,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    78,    77,    79,    77,    77,    77,    80,    80,
      80,    81,    81,    83,    82,    84,    84,    84,    84,    85,
      85,    85,    86,    86,    87,    87,    88,    88,    89,    90,
      91,    91,    93,    92,    92,    94,    94,    94,    95,    95,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    97,
      97,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    99,    99,
     100,   100,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   102,   102,   103,   103,   103,   104,   104,   104,
     104,   104,   105,   105,   106,   106,   106,   107
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     0,     2,     2,     2,     2,     1,     0,
       3,     1,     2,     2,     2,     5,     3,     3,     6,     6,
       7,     7,     0,     6,     0,     6,     6,     6,     0,     1,
       3,     1,     1,     0,     9,     1,     5,     5,     1,     0,
       2,     5,     4,     5,     0,     2,     0,     4,    10,     3,
       3,     5,     0,     4,     5,     0,     2,     2,     0,     2,
       1,     4,    11,     4,     3,     5,     3,     5,     4,     2,
       0,     1,     3,     3,     3,     3,     3,     3,     3,     4,
       5,     4,     8,     8,     6,     3,     6,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     5,     0,     2,
       1,     2,     1,     1,    16,    15,     2,     2,     3,     1,
       3,     4,     5,     4,     5,     4,     4,     5,     6,     8,
       9,    10,     0,     2,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     2,     1,     1,     1,     1
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
        yyerror (yyscanner, YY_("syntax error: cannot back up")); \
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
                  Kind, Value, yyscanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, yyscan_t yyscanner)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yyscanner);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, yyscan_t yyscanner)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep, yyscanner);
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
                 int yyrule, yyscan_t yyscanner)
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
                       &yyvsp[(yyi + 1) - (yynrhs)], yyscanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, yyscanner); \
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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, yyscan_t yyscanner)
{
  YY_USE (yyvaluep);
  YY_USE (yyscanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (yyscan_t yyscanner)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

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
      yychar = yylex (&yylval, yyscanner);
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
  case 2: /* Program: Typedef MethodList T_eof  */
#line 129 "InputParser/InputParser.yy"
                                 { solution.start(); int tmp= envt->doallpairs() ; solution.stop(); return tmp; }
#line 1455 "InputParser.cpp"
    break;

  case 3: /* MethodList: %empty  */
#line 132 "InputParser/InputParser.yy"
            {}
#line 1461 "InputParser.cpp"
    break;

  case 4: /* MethodList: Method MethodList  */
#line 133 "InputParser/InputParser.yy"
                    {}
#line 1467 "InputParser.cpp"
    break;

  case 5: /* MethodList: HLAssertion MethodList  */
#line 134 "InputParser/InputParser.yy"
                         {}
#line 1473 "InputParser.cpp"
    break;

  case 6: /* MethodList: FixesClause MethodList  */
#line 135 "InputParser/InputParser.yy"
                         {}
#line 1479 "InputParser.cpp"
    break;

  case 7: /* MethodList: Replacement MethodList  */
#line 136 "InputParser/InputParser.yy"
                         {}
#line 1485 "InputParser.cpp"
    break;

  case 8: /* InList: T_ident  */
#line 139 "InputParser/InputParser.yy"
                { 
    if(Gvartype == TUPLE){
        currentBD->create_inputs( -1, OutType::getTuple(tupleName), *(yyvsp[0].strConst));
    }
    else
    if( Gvartype == INT){
		currentBD->create_inputs( 2 /*NINPUTS*/, OutType::INT , *(yyvsp[0].strConst)); 
	}else{
		if(Gvartype==FLOAT){
			currentBD->create_inputs(2, OutType::FLOAT, *(yyvsp[0].strConst)); 
		}else{
			currentBD->create_inputs(-1, OutType::BOOL, *(yyvsp[0].strConst)); 
		}
	}	

}
#line 1506 "InputParser.cpp"
    break;

  case 9: /* $@1: %empty  */
#line 155 "InputParser/InputParser.yy"
          {
	if(Gvartype == TUPLE){
        currentBD->create_inputs( -1, OutType::getTuple(tupleName), *(yyvsp[0].strConst));
    }
    else
    if( Gvartype == INT){
		currentBD->create_inputs( 2 /*NINPUTS*/, OutType::INT , *(yyvsp[0].strConst)); 
	}else{
		if(Gvartype==FLOAT){
			currentBD->create_inputs(2, OutType::FLOAT, *(yyvsp[0].strConst)); 
		}else{
			currentBD->create_inputs(-1, OutType::BOOL, *(yyvsp[0].strConst)); 
		}
	}	
}
#line 1526 "InputParser.cpp"
    break;

  case 11: /* OutList: T_ident  */
#line 171 "InputParser/InputParser.yy"
                 { 	 currentBD->create_outputs(-1, *(yyvsp[0].strConst)); }
#line 1532 "InputParser.cpp"
    break;

  case 12: /* OutList: T_ident OutList  */
#line 172 "InputParser/InputParser.yy"
                 {
	
	currentBD->create_outputs(-1, *(yyvsp[-1].strConst));
}
#line 1541 "InputParser.cpp"
    break;

  case 13: /* ParamDecl: T_vartype T_ident  */
#line 178 "InputParser/InputParser.yy"
                             {  
	if( (yyvsp[-1].variableType) == INT){

		currentBD->create_inputs( 2 /*NINPUTS*/, OutType::INT , *(yyvsp[0].strConst)); 
	}else{
		if((yyvsp[-1].variableType) == FLOAT){
			currentBD->create_inputs(2, OutType::FLOAT, *(yyvsp[0].strConst)); 
		}else{
			currentBD->create_inputs(-1, OutType::BOOL, *(yyvsp[0].strConst)); 
		}
	}	
	delete (yyvsp[0].strConst);
}
#line 1559 "InputParser.cpp"
    break;

  case 14: /* ParamDecl: T_ident T_ident  */
#line 191 "InputParser/InputParser.yy"
                 {

    currentBD->create_inputs( -1 , OutType::getTuple(*(yyvsp[-1].strConst)), *(yyvsp[0].strConst));
       

    delete (yyvsp[0].strConst);
}
#line 1571 "InputParser.cpp"
    break;

  case 15: /* ParamDecl: T_ident T_ident '<' NegConstant '>'  */
#line 198 "InputParser/InputParser.yy"
                                      {

    currentBD->create_inputs( -1 , OutType::getTuple(*(yyvsp[-4].strConst)) , *(yyvsp[-3].strConst), -1, (yyvsp[-1].intConst));
       

    delete (yyvsp[-3].strConst);
}
#line 1583 "InputParser.cpp"
    break;

  case 16: /* ParamDecl: '!' T_vartype T_ident  */
#line 205 "InputParser/InputParser.yy"
                        {
 	 if( (yyvsp[-1].variableType) == INT){

		 currentBD->create_outputs(2 /* NINPUTS */, *(yyvsp[0].strConst));
 	 }else{

	 	 currentBD->create_outputs(-1, *(yyvsp[0].strConst)); 
 	 }
	 delete (yyvsp[0].strConst);
 }
#line 1598 "InputParser.cpp"
    break;

  case 17: /* ParamDecl: '!' T_ident T_ident  */
#line 215 "InputParser/InputParser.yy"
                       {

    currentBD->create_outputs(-1, *(yyvsp[0].strConst));
    delete (yyvsp[0].strConst);
 }
#line 1608 "InputParser.cpp"
    break;

  case 18: /* ParamDecl: T_vartype '[' '*' ConstantExpr ']' T_ident  */
#line 221 "InputParser/InputParser.yy"
                                          {  
	if( (yyvsp[-5].variableType) == INT){

		currentBD->create_inputs( 2 /*NINPUTS*/, OutType::INT_ARR , *(yyvsp[0].strConst), (yyvsp[-2].intConst)); 
	}else{
		if((yyvsp[-5].variableType) == FLOAT){
			currentBD->create_inputs(2, OutType::FLOAT_ARR, *(yyvsp[0].strConst), (yyvsp[-2].intConst)); 
		}else{
			currentBD->create_inputs(-1, OutType::BOOL_ARR, *(yyvsp[0].strConst), (yyvsp[-2].intConst)); 
		}
	}	
	delete (yyvsp[0].strConst);
}
#line 1626 "InputParser.cpp"
    break;

  case 19: /* ParamDecl: T_ident '[' '*' ConstantExpr ']' T_ident  */
#line 235 "InputParser/InputParser.yy"
                                         {
    currentBD->create_inputs(-1, OutType::getTuple(*(yyvsp[-5].strConst)), *(yyvsp[0].strConst), (yyvsp[-2].intConst));
}
#line 1634 "InputParser.cpp"
    break;

  case 20: /* ParamDecl: '!' T_vartype '[' '*' ConstantExpr ']' T_ident  */
#line 239 "InputParser/InputParser.yy"
                                               {
 	 if( (yyvsp[-5].variableType) == INT){
		 currentBD->create_outputs(2 /* NINPUTS */, *(yyvsp[0].strConst));
 	 }else{

	 	 currentBD->create_outputs(-1, *(yyvsp[0].strConst)); 
 	 }
	 delete (yyvsp[0].strConst);
 }
#line 1648 "InputParser.cpp"
    break;

  case 21: /* ParamDecl: '!' T_ident '[' '*' ConstantExpr ']' T_ident  */
#line 248 "InputParser/InputParser.yy"
                                                {
  currentBD->create_outputs(-1,*(yyvsp[0].strConst));
 }
#line 1656 "InputParser.cpp"
    break;

  case 22: /* $@2: %empty  */
#line 251 "InputParser/InputParser.yy"
                                {Gvartype = (yyvsp[-3].variableType); }
#line 1662 "InputParser.cpp"
    break;

  case 24: /* $@3: %empty  */
#line 252 "InputParser/InputParser.yy"
                               {Gvartype = TUPLE; tupleName = *(yyvsp[-3].strConst);}
#line 1668 "InputParser.cpp"
    break;

  case 31: /* Mhelp: T_mdldef  */
#line 261 "InputParser/InputParser.yy"
                {isModel=true; }
#line 1674 "InputParser.cpp"
    break;

  case 32: /* Mhelp: T_def  */
#line 261 "InputParser/InputParser.yy"
                                         {isModel=false; }
#line 1680 "InputParser.cpp"
    break;

  case 33: /* $@4: %empty  */
#line 264 "InputParser/InputParser.yy"
{		modelBuilding.restart ();
		if(currentBD!= NULL){
			delete currentBD;
		}

		currentBD = envt->newFunction(*(yyvsp[0].strConst), isModel);

		delete (yyvsp[0].strConst);

}
#line 1695 "InputParser.cpp"
    break;

  case 34: /* Method: Mhelp T_ident $@4 '(' ParamList ')' '{' WorkBody '}'  */
#line 274 "InputParser/InputParser.yy"
                                   { 
	currentBD->finalize();
	modelBuilding.stop();
}
#line 1704 "InputParser.cpp"
    break;

  case 35: /* TupleType: T_vartype  */
#line 280 "InputParser/InputParser.yy"
                     {
    if( (yyvsp[0].variableType) == INT){ (yyval.otype) = OutType::INT;}
    if( (yyvsp[0].variableType) == BIT){ (yyval.otype) = OutType::BOOL;}
	if( (yyvsp[0].variableType) == FLOAT){ (yyval.otype) = OutType::FLOAT;}
    if( (yyvsp[0].variableType) == INT_ARR){ (yyval.otype) = OutType::INT_ARR;}
    if( (yyvsp[0].variableType) == BIT_ARR){ (yyval.otype) = OutType::BOOL_ARR;}
    if( (yyvsp[0].variableType) == FLOAT_ARR){ (yyval.otype) = OutType::FLOAT_ARR;}
}
#line 1717 "InputParser.cpp"
    break;

  case 36: /* TupleType: T_vartype '[' '*' ConstantExpr ']'  */
#line 288 "InputParser/InputParser.yy"
                                     {
    if ((yyvsp[-4].variableType) == INT) {(yyval.otype) = OutType::INT_ARR;}
    if( (yyvsp[-4].variableType) == BIT){ (yyval.otype) = OutType::BOOL_ARR;}
    if( (yyvsp[-4].variableType) == FLOAT){ (yyval.otype) = OutType::FLOAT_ARR;}
}
#line 1727 "InputParser.cpp"
    break;

  case 37: /* TupleType: T_ident '[' '*' ConstantExpr ']'  */
#line 293 "InputParser/InputParser.yy"
                                   {
  (yyval.otype) = ((Tuple*)OutType::getTuple(*(yyvsp[-4].strConst)))->arr;
}
#line 1735 "InputParser.cpp"
    break;

  case 38: /* TupleType: T_ident  */
#line 296 "InputParser/InputParser.yy"
          { 
    (yyval.otype) = OutType::getTuple(*(yyvsp[0].strConst));
}
#line 1743 "InputParser.cpp"
    break;

  case 39: /* TupleTypeList: %empty  */
#line 300 "InputParser/InputParser.yy"
               {/* Empty */  (yyval.tVector) = new vector<OutType*>(); }
#line 1749 "InputParser.cpp"
    break;

  case 40: /* TupleTypeList: TupleTypeList TupleType  */
#line 301 "InputParser/InputParser.yy"
                            {
    (yyvsp[-1].tVector)->push_back( (yyvsp[0].otype) );
    (yyval.tVector) = (yyvsp[-1].tVector);
}
#line 1758 "InputParser.cpp"
    break;

  case 41: /* TupleTypeList: TupleTypeList T_vartype '[' Constant ']'  */
#line 305 "InputParser/InputParser.yy"
                                           {
    OutType* type;
    if ((yyvsp[-3].variableType) == INT) {type = OutType::INT_ARR;}
    if( (yyvsp[-3].variableType) == BIT){ type = OutType::BOOL_ARR;}
    if( (yyvsp[-3].variableType) == FLOAT){type = OutType::FLOAT_ARR;}
    for (int i = 0; i < (yyvsp[-1].intConst); i++ ) {
        (yyvsp[-4].tVector)->push_back (type );
    }
    (yyval.tVector) = (yyvsp[-4].tVector);

}
#line 1774 "InputParser.cpp"
    break;

  case 42: /* TypeLine: T_ident '(' TupleTypeList ')'  */
#line 317 "InputParser/InputParser.yy"
                                       {
//add type
    OutType::makeTuple(*(yyvsp[-3].strConst), *(yyvsp[-1].tVector), -1);

}
#line 1784 "InputParser.cpp"
    break;

  case 43: /* TypeLine: T_ident '(' Constant TupleTypeList ')'  */
#line 322 "InputParser/InputParser.yy"
                                         {
    OutType::makeTuple(*(yyvsp[-4].strConst), *(yyvsp[-1].tVector), (yyvsp[-2].intConst));
}
#line 1792 "InputParser.cpp"
    break;

  case 44: /* TypeList: %empty  */
#line 326 "InputParser/InputParser.yy"
          { /* Empty */ }
#line 1798 "InputParser.cpp"
    break;

  case 45: /* TypeList: TypeList TypeLine  */
#line 327 "InputParser/InputParser.yy"
                    { }
#line 1804 "InputParser.cpp"
    break;

  case 46: /* Typedef: %empty  */
#line 329 "InputParser/InputParser.yy"
         {/* Empty */}
#line 1810 "InputParser.cpp"
    break;

  case 47: /* Typedef: T_Typedef '{' TypeList '}'  */
#line 330 "InputParser/InputParser.yy"
                           { }
#line 1816 "InputParser.cpp"
    break;

  case 48: /* Replacement: T_replace T_ident '*' T_ident T_equals T_ident '(' NegConstant ')' ';'  */
#line 332 "InputParser/InputParser.yy"
                                                                                    {
  envt->registerFunctionReplace(*(yyvsp[-6].strConst), *(yyvsp[-8].strConst), *(yyvsp[-4].strConst), (yyvsp[-2].intConst));
}
#line 1824 "InputParser.cpp"
    break;

  case 49: /* FixesClause: T_fixes T_ident ';'  */
#line 338 "InputParser/InputParser.yy"
                                {
	envt->fixes(*(yyvsp[-1].strConst));
}
#line 1832 "InputParser.cpp"
    break;

  case 50: /* AssertionExpr: T_ident T_Sketches T_ident  */
#line 343 "InputParser/InputParser.yy"
{
	if(PARAMS->interactive){
		(yyval.bdag) = envt->prepareMiter(envt->getCopy(*(yyvsp[0].strConst)),  envt->getCopy(*(yyvsp[-2].strConst)), envt->inlineAmnt());
	}else{
		envt->addspskpair(*(yyvsp[0].strConst), *(yyvsp[-2].strConst));
	}		
}
#line 1844 "InputParser.cpp"
    break;

  case 51: /* AssertionExpr: T_ident T_Sketches T_ident T_File T_string  */
#line 350 "InputParser/InputParser.yy"
                                            {
	
	if(PARAMS->interactive){
		(yyval.bdag) = envt->prepareMiter(envt->getCopy(*(yyvsp[-2].strConst)),  envt->getCopy(*(yyvsp[-4].strConst)), envt->inlineAmnt());
	}else{
		envt->addspskpair(*(yyvsp[-2].strConst), *(yyvsp[-4].strConst), *(yyvsp[0].strConst));
		delete (yyvsp[0].strConst);
	}
}
#line 1858 "InputParser.cpp"
    break;

  case 52: /* $@5: %empty  */
#line 362 "InputParser/InputParser.yy"
                      {if(PARAMS->interactive){ solution.restart();} }
#line 1864 "InputParser.cpp"
    break;

  case 53: /* HLAssertion: T_assert $@5 AssertionExpr ';'  */
#line 363 "InputParser/InputParser.yy"
{
	if(PARAMS->interactive){
		int tt = envt->assertDAG((yyvsp[-1].bdag), std::cout, "");
		envt->printControls("");
		solution.stop();
		cout<<"COMPLETED"<<endl;
		if(tt != 0){
			return tt;
		}
	}
}
#line 1880 "InputParser.cpp"
    break;

  case 54: /* HLAssertion: T_ident '(' TokenList ')' ';'  */
#line 375 "InputParser/InputParser.yy"
{
	int tt = envt->runCommand(*(yyvsp[-4].strConst), *(yyvsp[-2].sList));
	delete (yyvsp[-4].strConst);
	delete (yyvsp[-2].sList);
	if(tt >= 0){
		return tt;
	}
}
#line 1893 "InputParser.cpp"
    break;

  case 55: /* TokenList: %empty  */
#line 384 "InputParser/InputParser.yy"
            {
	(yyval.sList) = new list<string*>();	
}
#line 1901 "InputParser.cpp"
    break;

  case 56: /* TokenList: T_ident TokenList  */
#line 387 "InputParser/InputParser.yy"
                   {
	(yyval.sList) = (yyvsp[0].sList);
	(yyval.sList)->push_back( (yyvsp[-1].strConst));
}
#line 1910 "InputParser.cpp"
    break;

  case 57: /* TokenList: T_string TokenList  */
#line 391 "InputParser/InputParser.yy"
                    {
	(yyval.sList) = (yyvsp[0].sList);
	(yyval.sList)->push_back( (yyvsp[-1].strConst));
}
#line 1919 "InputParser.cpp"
    break;

  case 58: /* WorkBody: %empty  */
#line 397 "InputParser/InputParser.yy"
           { /* Empty */ }
#line 1925 "InputParser.cpp"
    break;

  case 59: /* WorkBody: WorkBody WorkStatement  */
#line 398 "InputParser/InputParser.yy"
                         { /* */ }
#line 1931 "InputParser.cpp"
    break;

  case 60: /* WorkStatement: ';'  */
#line 401 "InputParser/InputParser.yy"
                    {  (yyval.intConst)=0;  /* */ }
#line 1937 "InputParser.cpp"
    break;

  case 61: /* WorkStatement: T_ident '=' Expression ';'  */
#line 402 "InputParser/InputParser.yy"
                             {
	currentBD->alias( *(yyvsp[-3].strConst), (yyvsp[-1].bnode));
	delete (yyvsp[-3].strConst);
}
#line 1946 "InputParser.cpp"
    break;

  case 62: /* WorkStatement: '$' IdentList T_twoS varList '$' '[' Expression ']' '=' Expression ';'  */
#line 406 "InputParser/InputParser.yy"
                                                                        {

	list<string*>* childs = (yyvsp[-9].sList);
	list<string*>::reverse_iterator it = childs->rbegin();
	
	list<bool_node*>* oldchilds = (yyvsp[-7].nList);
	list<bool_node*>::reverse_iterator oldit = oldchilds->rbegin();
	
	bool_node* rhs;
	rhs = (yyvsp[-1].bnode);
	int bigN = childs->size();
	Assert( bigN == oldchilds->size(), "This can't happen");	

	for(int i=0; i<bigN; ++i, ++it, ++oldit){		
		ARRASS_node* an = dynamic_cast<ARRASS_node*>(newNode(bool_node::ARRASS, 2));
		an->set_parent(1, *oldit);			
		an->set_parent(2, rhs);
		Assert( rhs != NULL, "AAARRRGH This shouldn't happen !!");
		Assert((yyvsp[-4].bnode) != NULL, "1: THIS CAN'T HAPPEN!!");
		an->quant = i;		
		currentBD->alias( *(*it), currentBD->new_node((yyvsp[-4].bnode),  NULL,  an) );
		delete *it;
	}
	delete childs;
	delete oldchilds;	
}
#line 1977 "InputParser.cpp"
    break;

  case 63: /* WorkStatement: T_OutIdent '=' Expression ';'  */
#line 433 "InputParser/InputParser.yy"
                                {
	Assert(false, "UNREACHABLE");
	currentBD->create_outputs(2 /*NINPUTS*/, (yyvsp[-1].bnode), *(yyvsp[-3].strConst));
	delete (yyvsp[-3].strConst);
}
#line 1987 "InputParser.cpp"
    break;

  case 64: /* WorkStatement: T_assert Expression ';'  */
#line 438 "InputParser/InputParser.yy"
                          {
  if ((yyvsp[-1].bnode)) {
    /* Asserting an expression, construct assert node. */
    
    currentBD->new_node ((yyvsp[-1].bnode), NULL, bool_node::ASSERT);
  }
}
#line 1999 "InputParser.cpp"
    break;

  case 65: /* WorkStatement: T_assert Expression ':' T_string ';'  */
#line 445 "InputParser/InputParser.yy"
                                       {
  if ((yyvsp[-3].bnode)) {
    /* Asserting an expression, construct assert node. */
	if(!((yyvsp[-3].bnode)->type == bool_node::CONST && dynamic_cast<CONST_node*>((yyvsp[-3].bnode))->getVal() == 1)){
		ASSERT_node* bn = dynamic_cast<ASSERT_node*>(newNode(bool_node::ASSERT));
		bn->setMsg(*(yyvsp[-1].strConst));
		currentBD->new_node ((yyvsp[-3].bnode), NULL, bn);
	}    
    delete (yyvsp[-1].strConst);
  }
}
#line 2015 "InputParser.cpp"
    break;

  case 66: /* WorkStatement: T_hassert Expression ';'  */
#line 456 "InputParser/InputParser.yy"
                           {
  if ((yyvsp[-1].bnode)) {
    /* Asserting an expression, construct assert node. */
    
    ASSERT_node* bn = dynamic_cast<ASSERT_node*>(newNode(bool_node::ASSERT));
    bn->makeHardAssert();
    currentBD->new_node((yyvsp[-1].bnode), NULL, bn);
  }
}
#line 2029 "InputParser.cpp"
    break;

  case 67: /* WorkStatement: T_hassert Expression ':' T_string ';'  */
#line 465 "InputParser/InputParser.yy"
                                        {
  if ((yyvsp[-3].bnode)) {
    /* Asserting an expression, construct assert node. */
	if(!((yyvsp[-3].bnode)->type == bool_node::CONST && dynamic_cast<CONST_node*>((yyvsp[-3].bnode))->getVal() == 1)){
		ASSERT_node* bn = dynamic_cast<ASSERT_node*>(newNode(bool_node::ASSERT));
		bn->setMsg(*(yyvsp[-1].strConst));
    bn->makeHardAssert();
		currentBD->new_node ((yyvsp[-3].bnode), NULL, bn);
	}    
    delete (yyvsp[-1].strConst);
  }
}
#line 2046 "InputParser.cpp"
    break;

  case 68: /* WorkStatement: T_assume Expression OptionalMsg ';'  */
#line 478 "InputParser/InputParser.yy"
                                      {
  if ((yyvsp[-2].bnode)) {
    /* Asserting an expression, construct assert node. */
	if(!((yyvsp[-2].bnode)->type == bool_node::CONST && dynamic_cast<CONST_node*>((yyvsp[-2].bnode))->getVal() == 1)){
		ASSERT_node* bn = dynamic_cast<ASSERT_node*>(newNode(bool_node::ASSERT));
		bn->makeAssume();
		if ((yyvsp[-1].strConst)) {
			bn->setMsg(*(yyvsp[-1].strConst));
		}
		currentBD->new_node ((yyvsp[-2].bnode), NULL, bn);
	}
	if ((yyvsp[-1].strConst)) {
		delete (yyvsp[-1].strConst);
	}
  }
}
#line 2067 "InputParser.cpp"
    break;

  case 69: /* OptionalMsg: ':' T_string  */
#line 495 "InputParser/InputParser.yy"
                          { (yyval.strConst) = (yyvsp[0].strConst); }
#line 2073 "InputParser.cpp"
    break;

  case 70: /* OptionalMsg: %empty  */
#line 496 "InputParser/InputParser.yy"
             { (yyval.strConst) = 0; }
#line 2079 "InputParser.cpp"
    break;

  case 71: /* Expression: Term  */
#line 498 "InputParser/InputParser.yy"
                 { (yyval.bnode) = (yyvsp[0].bnode); }
#line 2085 "InputParser.cpp"
    break;

  case 72: /* Expression: Term '&' Term  */
#line 499 "InputParser/InputParser.yy"
                {
	(yyval.bnode) = currentBD->new_node((yyvsp[-2].bnode),  (yyvsp[0].bnode), bool_node::AND);	
}
#line 2093 "InputParser.cpp"
    break;

  case 73: /* Expression: Term T_and Term  */
#line 502 "InputParser/InputParser.yy"
                 {
	(yyval.bnode) = currentBD->new_node((yyvsp[-2].bnode),  (yyvsp[0].bnode), bool_node::AND);
}
#line 2101 "InputParser.cpp"
    break;

  case 74: /* Expression: Term '|' Term  */
#line 505 "InputParser/InputParser.yy"
                {
	(yyval.bnode) = currentBD->new_node((yyvsp[-2].bnode),  (yyvsp[0].bnode), bool_node::OR);	
}
#line 2109 "InputParser.cpp"
    break;

  case 75: /* Expression: Term T_or Term  */
#line 508 "InputParser/InputParser.yy"
                 { 	
	(yyval.bnode) = currentBD->new_node((yyvsp[-2].bnode),  (yyvsp[0].bnode), bool_node::OR);	
}
#line 2117 "InputParser.cpp"
    break;

  case 76: /* Expression: Term '^' Term  */
#line 511 "InputParser/InputParser.yy"
               {	
	(yyval.bnode) = currentBD->new_node((yyvsp[-2].bnode),  (yyvsp[0].bnode), bool_node::XOR);	
}
#line 2125 "InputParser.cpp"
    break;

  case 77: /* Expression: Term T_neq Term  */
#line 514 "InputParser/InputParser.yy"
                 {	
	bool_node* tmp = currentBD->new_node((yyvsp[-2].bnode),  (yyvsp[0].bnode), bool_node::EQ);
	(yyval.bnode) = currentBD->new_node (tmp, NULL, bool_node::NOT);	
}
#line 2134 "InputParser.cpp"
    break;

  case 78: /* Expression: Term T_eq Term  */
#line 518 "InputParser/InputParser.yy"
                 { 			
	(yyval.bnode) = currentBD->new_node((yyvsp[-2].bnode),  (yyvsp[0].bnode), bool_node::EQ);
}
#line 2142 "InputParser.cpp"
    break;

  case 79: /* Expression: Term T_leftAR Expression T_rightAR  */
#line 521 "InputParser/InputParser.yy"
                                     {
	(yyval.bnode) = currentBD->new_node((yyvsp[-1].bnode), (yyvsp[-3].bnode), bool_node::ARR_R);
}
#line 2150 "InputParser.cpp"
    break;

  case 80: /* Expression: Term '.' '[' NegConstant ']'  */
#line 524 "InputParser/InputParser.yy"
                              {
   
	//TUPLE_R_node* tn = dynamic_cast<TUPLE_R_node*>();
    
	//tn->idx = $4;
	(yyval.bnode) = currentBD->new_node((yyvsp[-4].bnode), (yyvsp[-1].intConst));
	
}
#line 2163 "InputParser.cpp"
    break;

  case 81: /* Expression: NegConstant '[' Expression ']'  */
#line 532 "InputParser/InputParser.yy"
                                 {
	(yyval.bnode) = currentBD->new_node((yyvsp[-1].bnode), currentBD->create_const((yyvsp[-3].intConst)), bool_node::ARR_R);		
}
#line 2171 "InputParser.cpp"
    break;

  case 82: /* Expression: T_ident '[' '[' Expression T_arrow Expression ']' ']'  */
#line 535 "InputParser/InputParser.yy"
                                                      {
	ARR_W_node* an = dynamic_cast<ARR_W_node*>(newNode(bool_node::ARR_W));
	an->getOldArr() = ( currentBD->get_node(*(yyvsp[-7].strConst)) );
	an->getNewVal() = ( (yyvsp[-2].bnode) );
	(yyval.bnode) = currentBD->new_node((yyvsp[-4].bnode), NULL, an);	
	delete (yyvsp[-7].strConst);
}
#line 2183 "InputParser.cpp"
    break;

  case 83: /* Expression: NegConstant '[' '[' Expression T_arrow Expression ']' ']'  */
#line 542 "InputParser/InputParser.yy"
                                                          {
	ARR_W_node* an = dynamic_cast<ARR_W_node*>(newNode(bool_node::ARR_W));
	an->getOldArr() = ( currentBD->create_const((yyvsp[-7].intConst)) );
	an->getNewVal() = ( (yyvsp[-2].bnode) );
	(yyval.bnode) = currentBD->new_node((yyvsp[-4].bnode), NULL, an);		
}
#line 2194 "InputParser.cpp"
    break;

  case 84: /* Expression: '$' varList '$' '[' Expression ']'  */
#line 548 "InputParser/InputParser.yy"
                                     {
	int pushval = 0;
	
	list<bool_node*>* childs = (yyvsp[-4].nList);
	list<bool_node*>::reverse_iterator it = childs->rbegin();
	int bigN = childs->size();
	ARRACC_node* an = dynamic_cast<ARRACC_node*>(newNode(bool_node::ARRACC, bigN));
	for(int i=0; i<bigN; ++i, ++it){
		an->arguments(i) = (*it);
	}		
	Assert((yyvsp[-1].bnode) != NULL, "2: THIS CAN'T HAPPEN!!");	
	(yyval.bnode) = currentBD->new_node((yyvsp[-1].bnode), NULL,  an);
	delete childs;	
}
#line 2213 "InputParser.cpp"
    break;

  case 85: /* Expression: T_leftAC varList T_rightAC  */
#line 562 "InputParser/InputParser.yy"
                            {
	

	list<bool_node*>* childs = (yyvsp[-1].nList);
	list<bool_node*>::reverse_iterator it = childs->rbegin();
	int bigN = childs->size();
	ARR_CREATE_node* an = dynamic_cast<ARR_CREATE_node*>(newNode(bool_node::ARR_CREATE, bigN));
    
	for(int i=0; i<bigN; ++i, ++it){
		an->arguments(i) = (*it);
	}	
	if(bigN > 0){
		if(an->arguments(0)->getOtype() == OutType::FLOAT ){
			(yyval.bnode) = currentBD->new_node(currentBD->create_const(0.0), NULL, an); 
		}else{
			(yyval.bnode) = currentBD->new_node(currentBD->create_const(0), NULL, an); 
		}

	}else{
		(yyval.bnode) = currentBD->new_node(currentBD->create_const(0), NULL, an); 
	}	
	delete childs;
}
#line 2241 "InputParser.cpp"
    break;

  case 86: /* Expression: '[' T_ident ']' T_leftTC varList T_rightTC  */
#line 585 "InputParser/InputParser.yy"
                                            {

	

	list<bool_node*>* childs = (yyvsp[-1].nList);
	list<bool_node*>::reverse_iterator it = childs->rbegin();
	
	int bigN = childs->size();
	TUPLE_CREATE_node* an = dynamic_cast<TUPLE_CREATE_node*>(newNode(bool_node::TUPLE_CREATE, bigN));	
	for(int i=0; i<bigN; ++i, ++it){
		an->set_parent(i, *it);
	}
    an->setName(*(yyvsp[-4].strConst));
	(yyval.bnode) = currentBD->new_node(NULL, NULL, an); 
	delete childs;
}
#line 2262 "InputParser.cpp"
    break;

  case 87: /* Expression: T_twoS varList T_twoS  */
#line 601 "InputParser/InputParser.yy"
                        {
	
	list<bool_node*>* childs = (yyvsp[-1].nList);
	list<bool_node*>::reverse_iterator it = childs->rbegin();
	int bigN = childs->size();
	ACTRL_node* an = dynamic_cast<ACTRL_node*>(newNode(bool_node::ACTRL, bigN));
	
	for(int i=0; i<bigN; ++i, ++it){
		an->set_parent(i, *it);
	}		
	(yyval.bnode) = currentBD->new_node(NULL, NULL, an); 
	delete childs;
}
#line 2280 "InputParser.cpp"
    break;

  case 88: /* Expression: Term '+' Term  */
#line 615 "InputParser/InputParser.yy"
                {
	(yyval.bnode) = currentBD->new_node((yyvsp[-2].bnode),  (yyvsp[0].bnode), bool_node::PLUS); 	
}
#line 2288 "InputParser.cpp"
    break;

  case 89: /* Expression: Term '/' Term  */
#line 619 "InputParser/InputParser.yy"
                {	
	(yyval.bnode) = currentBD->new_node((yyvsp[-2].bnode),  (yyvsp[0].bnode), bool_node::DIV); 	
}
#line 2296 "InputParser.cpp"
    break;

  case 90: /* Expression: Term '%' Term  */
#line 623 "InputParser/InputParser.yy"
                {	
	(yyval.bnode) = currentBD->new_node((yyvsp[-2].bnode),  (yyvsp[0].bnode), bool_node::MOD); 	
}
#line 2304 "InputParser.cpp"
    break;

  case 91: /* Expression: Term '*' Term  */
#line 627 "InputParser/InputParser.yy"
                {
	(yyval.bnode)= currentBD->new_node((yyvsp[-2].bnode),  (yyvsp[0].bnode), bool_node::TIMES);
}
#line 2312 "InputParser.cpp"
    break;

  case 92: /* Expression: Term '-' Term  */
#line 630 "InputParser/InputParser.yy"
                {
	bool_node* neg1 = currentBD->new_node((yyvsp[0].bnode), NULL, bool_node::NEG);
	(yyval.bnode) = currentBD->new_node((yyvsp[-2].bnode), neg1, bool_node::PLUS); 	
}
#line 2321 "InputParser.cpp"
    break;

  case 93: /* Expression: Term '>' Term  */
#line 634 "InputParser/InputParser.yy"
                {
	
	(yyval.bnode) = currentBD->new_node((yyvsp[0].bnode), (yyvsp[-2].bnode), bool_node::LT);     
}
#line 2330 "InputParser.cpp"
    break;

  case 94: /* Expression: Term '<' Term  */
#line 638 "InputParser/InputParser.yy"
                {
	(yyval.bnode) = currentBD->new_node((yyvsp[-2].bnode), (yyvsp[0].bnode), bool_node::LT);
}
#line 2338 "InputParser.cpp"
    break;

  case 95: /* Expression: Term T_ge Term  */
#line 641 "InputParser/InputParser.yy"
                 {
	bool_node* tmp = currentBD->new_node((yyvsp[-2].bnode), (yyvsp[0].bnode), bool_node::LT);
	(yyval.bnode) = currentBD->new_node(tmp, NULL, bool_node::NOT);
}
#line 2347 "InputParser.cpp"
    break;

  case 96: /* Expression: Term T_le Term  */
#line 645 "InputParser/InputParser.yy"
                 {
	bool_node* tmp = currentBD->new_node((yyvsp[0].bnode), (yyvsp[-2].bnode), bool_node::LT);
	(yyval.bnode) = currentBD->new_node(tmp, NULL, bool_node::NOT);
}
#line 2356 "InputParser.cpp"
    break;

  case 97: /* Expression: Expression '?' Expression ':' Expression  */
#line 649 "InputParser/InputParser.yy"
                                           {
	ARRACC_node* an = dynamic_cast<ARRACC_node*>(newNode(bool_node::ARRACC, 2));
	bool_node* yesChild =((yyvsp[-2].bnode));
	bool_node* noChild = ((yyvsp[0].bnode));
	an->arguments(0) = ( noChild );
	an->arguments(1) = ( yesChild );	
	(yyval.bnode) = currentBD->new_node((yyvsp[-4].bnode), NULL, an); 	
}
#line 2369 "InputParser.cpp"
    break;

  case 98: /* varList: %empty  */
#line 660 "InputParser/InputParser.yy"
         { /* Empty */  	(yyval.nList) = new list<bool_node*>();	}
#line 2375 "InputParser.cpp"
    break;

  case 99: /* varList: Term varList  */
#line 661 "InputParser/InputParser.yy"
              {

//The signs are already in the stack by default. All I have to do is not remove them.
	if((yyvsp[-1].bnode) != NULL){
		(yyvsp[0].nList)->push_back( (yyvsp[-1].bnode) );
	}else{
		(yyvsp[0].nList)->push_back( NULL );
	}
	(yyval.nList) = (yyvsp[0].nList);
}
#line 2390 "InputParser.cpp"
    break;

  case 100: /* IdentList: T_ident  */
#line 672 "InputParser/InputParser.yy"
                   {
	(yyval.sList) = new list<string*>();	
	(yyval.sList)->push_back( (yyvsp[0].strConst));
}
#line 2399 "InputParser.cpp"
    break;

  case 101: /* IdentList: T_ident IdentList  */
#line 676 "InputParser/InputParser.yy"
                   {
	(yyval.sList) = (yyvsp[0].sList);
	(yyval.sList)->push_back( (yyvsp[-1].strConst));
}
#line 2408 "InputParser.cpp"
    break;

  case 102: /* Term: Constant  */
#line 681 "InputParser/InputParser.yy"
               {
	(yyval.bnode) = currentBD->create_const((yyvsp[0].intConst));
}
#line 2416 "InputParser.cpp"
    break;

  case 103: /* Term: T_dbl  */
#line 684 "InputParser/InputParser.yy"
        {
	(yyval.bnode) = currentBD->create_const((yyvsp[0].doubleConst));
}
#line 2424 "InputParser.cpp"
    break;

  case 104: /* Term: T_ident '[' '*' T_ident ']' '(' varList ')' '(' Expression ')' '[' T_ident ',' Constant ']'  */
#line 688 "InputParser/InputParser.yy"
                                                                                              {
    
	list<bool_node*>* params = (yyvsp[-9].nList);
	if(false && params->size() == 0){

        (yyval.bnode) = currentBD->create_inputs(-1,OutType::getTuple(*(yyvsp[-12].strConst)), *(yyvsp[-15].strConst));

		delete (yyvsp[-15].strConst);
	}else{	
		string& fname = *(yyvsp[-15].strConst);
		list<bool_node*>::reverse_iterator parit = params->rbegin();
		UFUN_node* ufun = UFUN_node::create(fname, params->size());
		ufun->outname = *(yyvsp[-3].strConst);
		int fgid = (yyvsp[-1].intConst);
		ufun->fgid = fgid;
		bool_node* pCond;	
		for(int i=0 ; parit != params->rend(); ++parit, ++i){
            ufun->arguments(i) = (*parit);
        }
        pCond = (yyvsp[-6].bnode);


        ufun->set_nbits( 0 );
        ufun->set_tupleName(*(yyvsp[-12].strConst));
		
		
		//ufun->name = (currentBD->new_name(fname));
		(yyval.bnode) = currentBD->new_node(pCond, NULL, ufun);

        delete (yyvsp[-15].strConst);
		delete (yyvsp[-3].strConst);
	}
	delete (yyvsp[-9].nList);

}
#line 2464 "InputParser.cpp"
    break;

  case 105: /* Term: T_ident '[' T_vartype ']' '(' varList ')' '(' Expression ')' '[' T_ident ',' Constant ']'  */
#line 723 "InputParser/InputParser.yy"
                                                                                            {
	
	list<bool_node*>* params = (yyvsp[-9].nList);
	if(false && params->size() == 0){
		if( (yyvsp[-12].variableType) == INT){
			(yyval.bnode) = currentBD->create_inputs( 2 /*NINPUTS*/, OutType::INT , *(yyvsp[-14].strConst)); 
		}else{
			if((yyvsp[-12].variableType)==FLOAT){
				(yyval.bnode) = currentBD->create_inputs(2,OutType::FLOAT, *(yyvsp[-14].strConst));
			}else{
				(yyval.bnode) = currentBD->create_inputs(-1,OutType::BOOL, *(yyvsp[-14].strConst));
			}
		}
		delete (yyvsp[-14].strConst);
	}else{	
		string& fname = *(yyvsp[-14].strConst);
		list<bool_node*>::reverse_iterator parit = params->rbegin();
		UFUN_node* ufun = UFUN_node::create(fname, params->size());
		ufun->outname = *(yyvsp[-3].strConst);
		int fgid = (yyvsp[-1].intConst);
		ufun->fgid = fgid;	
		bool_node* pCond;	

        for(int i=0 ; parit != params->rend(); ++parit, ++i){
            ufun->arguments(i) = (*parit);
        }
        pCond = (yyvsp[-6].bnode);

		
		if( (yyvsp[-12].variableType) == INT || (yyvsp[-12].variableType)==INT_ARR){
			ufun->set_nbits( 2 /*NINPUTS*/  );
		}else{	
			ufun->set_nbits( 1  );
		}
		if((yyvsp[-12].variableType) == INT_ARR || (yyvsp[-12].variableType)==BIT_ARR){
			ufun->makeArr();
		}
		
		//ufun->name = (currentBD->new_name(fname));
		(yyval.bnode) = currentBD->new_node(pCond, NULL, ufun);

		
		delete (yyvsp[-14].strConst);
		delete (yyvsp[-3].strConst);
	}
	delete (yyvsp[-9].nList);
}
#line 2516 "InputParser.cpp"
    break;

  case 106: /* Term: '-' Term  */
#line 771 "InputParser/InputParser.yy"
           {		
		(yyval.bnode) = currentBD->new_node((yyvsp[0].bnode), NULL, bool_node::NEG);				
}
#line 2524 "InputParser.cpp"
    break;

  case 107: /* Term: '!' Term  */
#line 774 "InputParser/InputParser.yy"
           { 
	(yyval.bnode) = currentBD->new_node((yyvsp[0].bnode), NULL, bool_node::NOT);		    
}
#line 2532 "InputParser.cpp"
    break;

  case 108: /* Term: '(' Expression ')'  */
#line 778 "InputParser/InputParser.yy"
                     { 
						(yyval.bnode) = (yyvsp[-1].bnode); 
						}
#line 2540 "InputParser.cpp"
    break;

  case 109: /* Term: Ident  */
#line 781 "InputParser/InputParser.yy"
        { 			
			(yyval.bnode) = currentBD->get_node(*(yyvsp[0].strConst));
			delete (yyvsp[0].strConst);				
			 
		}
#line 2550 "InputParser.cpp"
    break;

  case 110: /* Term: '<' Ident '>'  */
#line 786 "InputParser/InputParser.yy"
                {		
	(yyval.bnode) = currentBD->create_controls(-1, *(yyvsp[-1].strConst));
	delete (yyvsp[-1].strConst);
}
#line 2559 "InputParser.cpp"
    break;

  case 111: /* Term: '<' Ident Constant '>'  */
#line 790 "InputParser/InputParser.yy"
                         {
	int nctrls = (yyvsp[-1].intConst);
	if(overrideNCtrls){
		nctrls = NCTRLS;
	}
	(yyval.bnode) = currentBD->create_controls(nctrls, *(yyvsp[-2].strConst));
	delete (yyvsp[-2].strConst);
}
#line 2572 "InputParser.cpp"
    break;

  case 112: /* Term: '<' Ident Constant '*' '>'  */
#line 798 "InputParser/InputParser.yy"
                             {
	(yyval.bnode) = currentBD->create_controls((yyvsp[-2].intConst), *(yyvsp[-3].strConst));
	delete (yyvsp[-3].strConst);

}
#line 2582 "InputParser.cpp"
    break;

  case 113: /* Term: '<' Ident '+' '>'  */
#line 803 "InputParser/InputParser.yy"
                    {
	(yyval.bnode) = currentBD->create_controls(-1, *(yyvsp[-2].strConst), false, true);
	delete (yyvsp[-2].strConst);
}
#line 2591 "InputParser.cpp"
    break;

  case 114: /* Term: '<' Ident Constant '+' '>'  */
#line 807 "InputParser/InputParser.yy"
                             {
	(yyval.bnode) = currentBD->create_controls((yyvsp[-2].intConst), *(yyvsp[-3].strConst), false, true);
	delete (yyvsp[-3].strConst);
}
#line 2600 "InputParser.cpp"
    break;

  case 115: /* Term: '<' Ident '$' '>'  */
#line 811 "InputParser/InputParser.yy"
                    {
  (yyval.bnode) = currentBD->create_controls(-1, *(yyvsp[-2].strConst), false, true, false, -1, true);
  delete (yyvsp[-2].strConst);
}
#line 2609 "InputParser.cpp"
    break;

  case 116: /* Term: T_Min '<' Ident '>'  */
#line 815 "InputParser/InputParser.yy"
                      {
	(yyval.bnode) = currentBD->create_controls(-1, *(yyvsp[-1].strConst), true);
	delete (yyvsp[-1].strConst);
}
#line 2618 "InputParser.cpp"
    break;

  case 117: /* Term: T_Min '<' Ident Constant '>'  */
#line 819 "InputParser/InputParser.yy"
                               {
	int nctrls = (yyvsp[-1].intConst);
	if(overrideNCtrls){
		nctrls = NCTRLS;
	}
	(yyval.bnode) = currentBD->create_controls(nctrls, *(yyvsp[-2].strConst), true);
	delete (yyvsp[-2].strConst);
}
#line 2631 "InputParser.cpp"
    break;

  case 118: /* Term: T_Min '<' Ident Constant '*' '>'  */
#line 827 "InputParser/InputParser.yy"
                                   {
	(yyval.bnode) = currentBD->create_controls((yyvsp[-2].intConst), *(yyvsp[-3].strConst), true);
	delete (yyvsp[-3].strConst);

}
#line 2641 "InputParser.cpp"
    break;

  case 119: /* Term: T_sp Constant '$' ParentsList '$' '<' Ident '>'  */
#line 832 "InputParser/InputParser.yy"
                                                  {
	(yyval.bnode) = currentBD->create_controls(-1, *(yyvsp[-1].strConst), false, false, true, (yyvsp[-6].intConst));
  ((CTRL_node*) (yyval.bnode))->setPredecessors(*(yyvsp[-4].sVector));
	delete (yyvsp[-1].strConst);
}
#line 2651 "InputParser.cpp"
    break;

  case 120: /* Term: T_sp Constant '$' ParentsList '$' '<' Ident Constant '>'  */
#line 837 "InputParser/InputParser.yy"
                                                           {
	int nctrls = (yyvsp[-1].intConst);
	if(overrideNCtrls){
		nctrls = NCTRLS;
	}
	(yyval.bnode) = currentBD->create_controls(nctrls, *(yyvsp[-2].strConst), false, false, true, (yyvsp[-7].intConst));
  ((CTRL_node*) (yyval.bnode))->setPredecessors(*(yyvsp[-5].sVector));
	delete (yyvsp[-2].strConst);
}
#line 2665 "InputParser.cpp"
    break;

  case 121: /* Term: T_sp Constant '$' ParentsList '$' '<' Ident Constant '*' '>'  */
#line 846 "InputParser/InputParser.yy"
                                                               {
	(yyval.bnode) = currentBD->create_controls((yyvsp[-2].intConst), *(yyvsp[-3].strConst), false, false, true, (yyvsp[-8].intConst));
  ((CTRL_node*) (yyval.bnode))->setPredecessors(*(yyvsp[-6].sVector));
	delete (yyvsp[-3].strConst);
}
#line 2675 "InputParser.cpp"
    break;

  case 122: /* ParentsList: %empty  */
#line 853 "InputParser/InputParser.yy"
             { /* Empty */  	(yyval.sVector) = new vector<string>();	}
#line 2681 "InputParser.cpp"
    break;

  case 123: /* ParentsList: ParentsList Ident  */
#line 854 "InputParser/InputParser.yy"
                    {
  (yyvsp[-1].sVector)->push_back(*(yyvsp[0].strConst));
	(yyval.sVector) = (yyvsp[-1].sVector);
}
#line 2690 "InputParser.cpp"
    break;

  case 124: /* ConstantExpr: ConstantTerm  */
#line 859 "InputParser/InputParser.yy"
                           { (yyval.intConst) = (yyvsp[0].intConst); }
#line 2696 "InputParser.cpp"
    break;

  case 125: /* ConstantExpr: ConstantExpr '+' ConstantTerm  */
#line 860 "InputParser/InputParser.yy"
                                { (yyval.intConst) = (yyvsp[-2].intConst) + (yyvsp[0].intConst); }
#line 2702 "InputParser.cpp"
    break;

  case 126: /* ConstantExpr: ConstantExpr '-' ConstantTerm  */
#line 861 "InputParser/InputParser.yy"
                                { (yyval.intConst) = (yyvsp[-2].intConst) - (yyvsp[0].intConst); }
#line 2708 "InputParser.cpp"
    break;

  case 127: /* ConstantTerm: NegConstant  */
#line 863 "InputParser/InputParser.yy"
                          { (yyval.intConst) = (yyvsp[0].intConst); }
#line 2714 "InputParser.cpp"
    break;

  case 128: /* ConstantTerm: '(' ConstantTerm ')'  */
#line 864 "InputParser/InputParser.yy"
                       { (yyval.intConst) = (yyvsp[-1].intConst); }
#line 2720 "InputParser.cpp"
    break;

  case 129: /* ConstantTerm: ConstantTerm '*' ConstantTerm  */
#line 865 "InputParser/InputParser.yy"
                                { (yyval.intConst) = (yyvsp[-2].intConst) * (yyvsp[0].intConst); }
#line 2726 "InputParser.cpp"
    break;

  case 130: /* ConstantTerm: ConstantTerm '/' ConstantTerm  */
#line 866 "InputParser/InputParser.yy"
                                { Assert( (yyvsp[0].intConst) != 0, "You are attempting to divide by zero !!");
							      (yyval.intConst) = (yyvsp[-2].intConst) / (yyvsp[0].intConst); }
#line 2733 "InputParser.cpp"
    break;

  case 131: /* ConstantTerm: ConstantTerm '%' ConstantTerm  */
#line 868 "InputParser/InputParser.yy"
                                { Assert( (yyvsp[0].intConst) != 0, "You are attempting to mod by zero !!");
							      (yyval.intConst) = (yyvsp[-2].intConst) % (yyvsp[0].intConst); }
#line 2740 "InputParser.cpp"
    break;

  case 132: /* NegConstant: Constant  */
#line 872 "InputParser/InputParser.yy"
                      {  (yyval.intConst) = (yyvsp[0].intConst); }
#line 2746 "InputParser.cpp"
    break;

  case 133: /* NegConstant: '-' Constant  */
#line 873 "InputParser/InputParser.yy"
               {  (yyval.intConst) = -(yyvsp[0].intConst); }
#line 2752 "InputParser.cpp"
    break;

  case 134: /* Constant: T_int  */
#line 876 "InputParser/InputParser.yy"
       {  (yyval.intConst) = (yyvsp[0].intConst); }
#line 2758 "InputParser.cpp"
    break;

  case 135: /* Constant: T_true  */
#line 877 "InputParser/InputParser.yy"
         { (yyval.intConst) = 1; }
#line 2764 "InputParser.cpp"
    break;

  case 136: /* Constant: T_false  */
#line 878 "InputParser/InputParser.yy"
          { (yyval.intConst) = 0; }
#line 2770 "InputParser.cpp"
    break;

  case 137: /* Ident: T_ident  */
#line 880 "InputParser/InputParser.yy"
               { (yyval.strConst)=(yyvsp[0].strConst); }
#line 2776 "InputParser.cpp"
    break;


#line 2780 "InputParser.cpp"

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
      yyerror (yyscanner, YY_("syntax error"));
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
                      yytoken, &yylval, yyscanner);
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yyscanner);
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
  yyerror (yyscanner, YY_("memory exhausted"));
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
                  yytoken, &yylval, yyscanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yyscanner);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 882 "InputParser/InputParser.yy"



void Inityyparse(){

	 	
}

void yyerror( void* yyscanner, const char* c){
	Assert(false, (char *)c); 
}


int isatty(int i){



return 1;
}
