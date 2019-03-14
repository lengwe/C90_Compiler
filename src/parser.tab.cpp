/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */

#line 67 "src/parser.tab.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.tab.hpp".  */
#ifndef YY_YY_SRC_PARSER_TAB_HPP_INCLUDED
# define YY_YY_SRC_PARSER_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "src/parser.y" /* yacc.c:355  */

  #include <string>
  #include <iostream>
  #include <cassert>
  #include "../include/ast.hpp"
  extern const Node *g_root; // A way of getting the AST out
  int yylex(void);
  void yyerror(const char*);

#line 107 "src/parser.tab.cpp" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AUTO = 258,
    BREAK = 259,
    CASE = 260,
    CHAR = 261,
    CONTINUE = 262,
    DEFAULT = 263,
    DO = 264,
    DOUBLE = 265,
    ELSE = 266,
    ENUM = 267,
    FLOAT = 268,
    FOR = 269,
    IF = 270,
    INT = 271,
    LONG = 272,
    RETURN = 273,
    SHORT = 274,
    SIGNED = 275,
    UNSIGNED = 276,
    SIZEOF = 277,
    STATIC = 278,
    STRUCT = 279,
    SWITCH = 280,
    TYPEDEF = 281,
    VOID = 282,
    WHILE = 283,
    CONST = 284,
    ADD_ASSIGN = 285,
    SUB_ASSIGN = 286,
    MUL_ASSIGN = 287,
    DIV_ASSIGN = 288,
    MOD_ASSIGN = 289,
    RIGHT_ASSIGN = 290,
    LEFT_ASSIGN = 291,
    AND_ASSIGN = 292,
    XOR_ASSIGN = 293,
    OR_ASSIGN = 294,
    INC_OP = 295,
    DEC_OP = 296,
    EQ_OP = 297,
    GE_OP = 298,
    LE_OP = 299,
    OR_OP = 300,
    AND_OP = 301,
    LEFT_OP = 302,
    RIGHT_OP = 303,
    PTR_OP = 304,
    NE_OP = 305,
    GOTO = 306,
    UNION = 307,
    VOLATILE = 308,
    IDENTIFIER = 309,
    FLOAT_NUM = 310,
    HEX_NUM = 311,
    INT_NUM = 312,
    CHAR_CONSTANT = 313,
    CONSTANT = 314,
    MOD_ASSGIN = 315,
    STRING_LITERAL = 316
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 11 "src/parser.y" /* yacc.c:355  */

  std::string *str;
  Node* node;

#line 186 "src/parser.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_PARSER_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 203 "src/parser.tab.cpp" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   917

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  86
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  59
/* YYNRULES -- Number of rules.  */
#define YYNRULES  179
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  303

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   316

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    66,     2,     2,     2,    76,    67,     2,
      69,    70,    62,    63,    74,    64,    73,    75,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    82,    85,
      77,    68,    78,    81,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    71,     2,    72,    79,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    83,    80,    84,    65,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    43,    43,    46,    47,    48,    49,    50,    51,    55,
      56,    57,    58,    59,    60,    61,    62,    66,    67,    71,
      72,    73,    74,    75,    76,    80,    81,    82,    83,    84,
      85,    89,    90,    94,    95,    96,    97,   101,   102,   103,
     107,   108,   109,   113,   114,   115,   116,   117,   121,   122,
     123,   127,   128,   132,   133,   137,   138,   142,   143,   147,
     148,   152,   153,   157,   158,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   176,   177,   181,   185,
     186,   187,   188,   195,   196,   200,   201,   205,   207,   208,
     211,   212,   216,   217,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   236,   237,   238,   242,   243,
     268,   269,   270,   271,   275,   276,   281,   285,   286,   290,
     291,   292,   296,   297,   303,   304,   308,   312,   313,   317,
     323,   324,   330,   331,   335,   336,   337,   341,   342,   343,
     346,   347,   351,   352,   368,   369,   370,   371,   372,   374,
     379,   380,   383,   387,   389,   405,   406,   407,   408,   409,
     413,   414,   415,   416,   417,   418,   422,   423,   427,   428,
     432,   433,   434,   438,   439,   440,   441,   445,   446,   447
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AUTO", "BREAK", "CASE", "CHAR",
  "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE", "ENUM", "FLOAT", "FOR",
  "IF", "INT", "LONG", "RETURN", "SHORT", "SIGNED", "UNSIGNED", "SIZEOF",
  "STATIC", "STRUCT", "SWITCH", "TYPEDEF", "VOID", "WHILE", "CONST",
  "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "RIGHT_ASSIGN", "LEFT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "INC_OP", "DEC_OP", "EQ_OP", "GE_OP", "LE_OP", "OR_OP", "AND_OP",
  "LEFT_OP", "RIGHT_OP", "PTR_OP", "NE_OP", "GOTO", "UNION", "VOLATILE",
  "IDENTIFIER", "FLOAT_NUM", "HEX_NUM", "INT_NUM", "CHAR_CONSTANT",
  "CONSTANT", "MOD_ASSGIN", "STRING_LITERAL", "'*'", "'+'", "'-'", "'~'",
  "'!'", "'&'", "'='", "'('", "')'", "'['", "']'", "'.'", "','", "'/'",
  "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'", "'{'", "'}'", "';'",
  "$accept", "ROOT", "primary_expression", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "storage_class_specifier",
  "translation_unit", "external_declaration", "type_specifier",
  "struct_or_union_specifier", "function_definition", "compound_statement",
  "declaration_list", "declarator", "declaration", "initializer",
  "initializer_list", "struct_declaration_list", "struct_declaration",
  "struct_or_union", "type_name", "specifier_qualifier_list",
  "struct_declarator_list", "struct_declarator", "enum_specifier",
  "enumerator_list", "enumerator", "direct_declarator", "parameter_list",
  "parameter_type_list", "parameter_declaration", "jump_statement",
  "statement", "statement_list", "expression_statement",
  "selection_statement", "iteration_statement", "labeled_statement", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,    42,    43,    45,   126,    33,    38,    61,    40,
      41,    91,    93,    46,    44,    47,    37,    60,    62,    94,
     124,    63,    58,   123,   125,    59
};
# endif

#define YYPACT_NINF -195

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-195)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     789,  -195,  -195,  -195,   -26,  -195,  -195,  -195,  -195,  -195,
    -195,  -195,  -195,  -195,  -195,  -195,    41,   -23,   789,   789,
    -195,   789,  -195,  -195,  -195,   -25,  -195,   -32,     6,  -195,
    -195,   -16,  -195,     3,  -195,   560,     1,  -195,  -195,  -195,
      29,   344,     6,    -3,    -6,  -195,    24,   -16,  -195,   691,
     235,   -23,  -195,   416,  -195,   488,   724,   344,   344,    63,
    -195,    20,    42,   815,     6,  -195,  -195,  -195,    53,   831,
     848,   848,  -195,  -195,  -195,  -195,    59,    68,  -195,  -195,
    -195,   610,   691,  -195,   118,   703,   815,  -195,   -36,    85,
     108,   -28,    14,    89,    98,    84,   128,   -33,  -195,  -195,
    -195,    94,   815,   105,    99,   534,   123,   130,   626,   134,
     136,   158,   137,  -195,  -195,  -195,    11,  -195,   318,  -195,
    -195,   390,  -195,  -195,  -195,  -195,  -195,  -195,  -195,   -16,
     142,   150,  -195,  -195,  -195,  -195,   151,   194,  -195,  -195,
    -195,   815,   143,    25,  -195,  -195,  -195,  -195,   610,  -195,
     815,  -195,  -195,  -195,  -195,    39,   154,  -195,  -195,    51,
    -195,  -195,   173,   781,   815,   175,  -195,  -195,  -195,  -195,
    -195,  -195,  -195,  -195,  -195,  -195,  -195,   815,  -195,   815,
     815,   815,   815,   815,   153,   186,   815,   815,   815,   815,
     815,   815,   815,   815,   815,   815,   815,   815,  -195,   183,
    -195,   534,   238,   643,   815,  -195,    34,   815,   815,   182,
     534,   815,  -195,  -195,   462,  -195,  -195,  -195,   789,  -195,
    -195,  -195,  -195,   815,    20,  -195,   198,  -195,   815,   660,
    -195,  -195,  -195,    50,  -195,    21,  -195,  -195,  -195,  -195,
    -195,   -36,   -36,   815,   815,   108,   108,   108,   108,   -28,
     -28,    14,    89,    98,    84,   128,   -11,   534,  -195,   200,
     643,    81,  -195,    95,    96,  -195,  -195,  -195,  -195,  -195,
    -195,  -195,  -195,  -195,  -195,  -195,  -195,   815,  -195,    85,
      85,   815,  -195,   815,   798,   534,   534,   534,  -195,  -195,
     101,   534,   102,   259,  -195,  -195,   187,  -195,   534,   534,
    -195,  -195,  -195
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    89,    95,   100,     0,    99,    97,    98,    96,   101,
     102,    88,   127,    87,    94,   128,     0,     0,    79,     2,
      90,    81,   103,    92,    93,     0,   104,   139,     0,     1,
     144,     0,   117,     0,    83,    85,   116,    80,    91,    82,
     107,     0,     0,   142,     0,   140,     0,     0,   118,     0,
       0,     0,   109,     0,   114,     0,     0,     0,   131,     0,
     124,     0,     0,     0,     0,   137,   145,    84,    85,     0,
       0,     0,     3,     6,     7,    26,    27,    28,    29,    30,
      25,     0,     0,     9,    19,    31,     0,    33,    37,    40,
      43,    48,    51,    53,    55,    57,    59,    61,    63,   119,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     3,   110,   168,    76,     0,   161,     0,   165,
     166,     0,   162,   163,   164,   160,   108,   115,   149,   154,
     152,     0,   150,   147,    31,    78,     0,     0,   130,   106,
     125,     0,   134,     0,   132,   138,   143,   141,     0,    23,
       0,    20,    21,     4,     5,     0,     0,   129,   122,     0,
      15,    16,     0,     0,     0,     0,    69,    70,    66,    67,
      68,    72,    71,    73,    74,    75,    65,     0,    22,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   157,     0,
     156,     0,     0,     0,     0,   158,     0,     0,     0,     0,
       0,     0,   169,   112,     0,   111,   167,   153,     0,   148,
     146,   105,   135,     0,     0,   126,     0,     8,     0,     0,
     120,    14,    11,     0,    17,     0,    13,    64,    34,    35,
      36,    38,    39,     0,     0,    47,    46,    44,    45,    49,
      50,    52,    54,    56,    58,    60,     0,     0,   179,     0,
       0,     0,   159,     0,     0,   155,   177,    77,   113,   151,
     136,   133,    24,    32,   121,   123,    12,     0,    10,    41,
      42,     0,   178,     0,     0,     0,     0,     0,    18,    62,
       0,     0,     0,   170,   172,   173,     0,   175,     0,     0,
     174,   176,   171
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -195,  -195,  -195,  -195,  -195,   -50,  -195,   -75,    15,   -42,
      46,    18,    79,    80,    83,    86,    78,  -195,   -55,   -49,
    -195,   -47,   -60,     4,  -195,   232,  -195,  -195,   261,   -14,
    -195,  -195,     2,   233,    -7,   -18,   -77,  -195,   225,   -45,
    -195,   140,   -51,  -195,    60,  -195,   243,   226,  -195,  -195,
    -195,    73,  -195,  -103,   174,  -194,  -195,  -195,  -195
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    16,    83,    84,   233,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,   115,
     177,   116,   136,    51,    33,    34,    18,    19,    20,    21,
      22,    23,   117,    53,    68,    24,   100,   159,    59,    60,
      25,   156,    61,   143,   144,    26,    44,    45,    36,   130,
     131,   132,   119,   120,   121,   122,   123,   124,   125
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      99,   135,   202,   146,    17,   158,   134,   138,   135,   260,
      35,   178,   196,   134,   140,   186,   187,    54,   216,   149,
     151,   152,    37,    17,    46,    39,   179,    58,    27,    40,
     157,    30,    54,    99,   155,   127,   134,    52,    30,   180,
     181,    29,   199,    58,    58,    58,    31,   135,   197,   188,
     189,    42,   134,    31,   142,   126,   190,    28,    41,   129,
      43,   206,    32,   211,   191,    63,   284,    58,    64,     2,
      55,   281,    56,     3,    30,     4,     5,    47,    65,     6,
       7,   222,     8,     9,    10,   211,   135,    12,    48,    31,
      14,   134,   140,   278,    66,   211,   212,   157,   258,   224,
     127,   155,   141,   155,   238,   239,   240,   266,   211,   227,
     225,   216,    57,   211,   234,    15,    64,   235,   153,   262,
     276,    49,   217,    58,   277,   229,   145,   154,   237,   134,
     134,   134,   134,   134,    58,   230,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   139,   182,   183,
     256,   285,   275,   273,   282,   211,   192,   261,   160,   161,
     263,   264,   267,   270,   194,   286,   287,   162,   135,   211,
     211,   296,   298,   134,   195,   211,   211,   193,   134,   198,
      99,   201,   293,   294,   295,   184,   185,   163,   297,   164,
     200,   165,   203,   134,   134,   301,   302,   241,   242,   204,
       2,   279,   280,   207,     3,   208,     4,     5,   249,   250,
       6,     7,   209,     8,     9,    10,   218,   142,    12,   210,
     219,    14,   129,   220,   228,   223,   289,   231,   288,   236,
     243,   134,   245,   246,   247,   248,   290,   292,     1,   101,
     102,     2,   103,   104,   105,     3,    15,     4,     5,   106,
     107,     6,     7,   108,     8,     9,    10,    69,    11,    12,
     109,    13,    14,   110,   244,   257,   259,   265,   272,   283,
     299,   251,   300,   252,   255,    70,    71,   253,   221,    67,
      38,   254,   137,   118,   271,    62,   111,    15,   226,   112,
     147,   269,   214,     0,    73,     0,    74,    75,    76,    77,
      78,    79,    80,     0,    81,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,   113,
     114,     1,   101,   102,     2,   103,   104,   105,     3,     0,
       4,     5,   106,   107,     6,     7,   108,     8,     9,    10,
      69,    11,    12,   109,    13,    14,   110,     0,     0,     0,
       2,     0,     0,     0,     3,     0,     4,     5,    70,    71,
       6,     7,     0,     8,     9,    10,     0,     0,    12,   111,
      15,    14,   112,     0,     0,     0,     0,    73,     0,    74,
      75,    76,    77,    78,    79,    80,     0,    81,     0,     0,
       0,     0,     0,     0,   101,   102,    15,   103,   104,   105,
       0,    50,   213,   114,   106,   107,     0,     0,   108,     0,
       0,     0,    69,     0,     0,   109,     0,     0,   110,     1,
       0,     0,     2,     0,     0,     0,     3,     0,     4,     5,
      70,    71,     6,     7,     0,     8,     9,    10,     0,    11,
      12,   111,    13,    14,   112,     0,     0,     0,     0,    73,
       0,    74,    75,    76,    77,    78,    79,    80,     0,    81,
       0,     0,     0,     0,     0,     0,   101,   102,    15,   103,
     104,   105,     0,    50,   215,   114,   106,   107,     0,     0,
     108,     0,     0,     0,    69,     0,     0,   109,     0,     0,
     110,     1,     0,     0,     2,     0,     0,     0,     3,    50,
       4,     5,    70,    71,     6,     7,     0,     8,     9,    10,
       0,    11,    12,   111,    13,    14,   112,     0,     0,     0,
       0,    73,     0,    74,    75,    76,    77,    78,    79,    80,
       0,    81,     0,     0,     0,     0,     0,     0,   101,   102,
      15,   103,   104,   105,     0,    50,   268,   114,   106,   107,
       0,     0,   108,     0,     0,     0,    69,     0,   128,   109,
       0,     0,   110,     1,     0,     0,     2,     0,     0,     0,
       3,     0,     4,     5,    70,    71,     6,     7,     0,     8,
       9,    10,     0,    11,    12,   111,    13,    14,   112,     0,
       0,     0,     0,    73,     0,    74,    75,    76,    77,    78,
      79,    80,     0,    81,     0,     0,     0,     0,     0,     0,
       0,     0,    15,     0,     0,     0,     2,    50,     0,   114,
       3,     0,     4,     5,     0,     0,     6,     7,    49,     8,
       9,    10,    69,     0,    12,     0,     0,    14,     0,     0,
       0,     0,     0,    50,     0,     0,     0,     0,    69,     0,
      70,    71,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    15,     0,    72,    69,    70,    71,     0,    73,
       0,    74,    75,    76,    77,    78,    79,    80,     0,    81,
      72,     0,    69,    70,    71,    73,     0,    74,    75,    76,
      77,    78,    79,    80,     0,    81,     0,    72,     0,     0,
      70,    71,    73,     0,    74,    75,    76,    77,    78,    79,
      80,   205,    81,    69,    72,     0,     0,     0,     0,    73,
       0,    74,    75,    76,    77,    78,    79,    80,   114,    81,
       0,    70,    71,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,    82,   274,    72,    69,     0,     0,     0,
      73,     0,    74,    75,    76,    77,    78,    79,    80,     0,
      81,     0,     0,     0,    70,    71,     0,     0,     0,     0,
       0,   176,     0,     0,    82,     0,     0,     0,    72,     0,
       0,     0,     0,    73,     0,    74,    75,    76,    77,    78,
      79,    80,     1,    81,     0,     2,   133,     0,     0,     3,
       0,     4,     5,    69,     0,     6,     7,     0,     8,     9,
      10,     0,    11,    12,     0,    13,    14,     0,     0,     0,
      69,    70,    71,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    72,     0,    69,    70,    71,
      73,    15,    74,    75,    76,    77,    78,    79,    80,     0,
      81,   232,    72,    69,     0,    70,    71,    73,     0,    74,
      75,    76,    77,    78,    79,    80,     0,    81,   291,    72,
      69,    70,    71,     0,    73,     0,    74,    75,    76,    77,
      78,    79,    80,     0,    81,    72,     0,     0,    70,    71,
      73,     0,    74,    75,    76,    77,    78,    79,    80,     0,
     148,     0,    72,     0,     0,     0,     0,    73,     0,    74,
      75,    76,    77,    78,    79,    80,     0,   150
};

static const yytype_int16 yycheck[] =
{
      49,    56,   105,    63,     0,    82,    56,    58,    63,   203,
      17,    86,    45,    63,    59,    43,    44,    35,   121,    69,
      70,    71,    18,    19,    31,    21,    62,    41,    54,    54,
      81,    54,    50,    82,    81,    53,    86,    35,    54,    75,
      76,     0,   102,    57,    58,    59,    69,   102,    81,    77,
      78,    83,   102,    69,    61,    53,    42,    83,    83,    55,
      54,   108,    85,    74,    50,    68,   260,    81,    74,     6,
      69,    82,    71,    10,    54,    12,    13,    74,    84,    16,
      17,   141,    19,    20,    21,    74,   141,    24,    85,    69,
      27,   141,   137,    72,    70,    74,    85,   148,   201,    74,
     118,   148,    82,   150,   179,   180,   181,   210,    74,    70,
      85,   214,    83,    74,   163,    52,    74,   164,    59,    85,
      70,    68,   129,   137,    74,    74,    84,    59,   177,   179,
     180,   181,   182,   183,   148,    84,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,    84,    63,    64,
     197,    70,   229,   228,   257,    74,    67,   204,    40,    41,
     207,   208,   211,   223,    80,    70,    70,    49,   223,    74,
      74,    70,    70,   223,    46,    74,    74,    79,   228,    85,
     229,    82,   285,   286,   287,    77,    78,    69,   291,    71,
      85,    73,    69,   243,   244,   298,   299,   182,   183,    69,
       6,   243,   244,    69,    10,    69,    12,    13,   190,   191,
      16,    17,    54,    19,    20,    21,    74,   224,    24,    82,
      70,    27,   218,    72,    70,    82,   281,    54,   277,    54,
      77,   281,   186,   187,   188,   189,   283,   284,     3,     4,
       5,     6,     7,     8,     9,    10,    52,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    78,    82,    28,    85,    70,    69,
      11,   192,    85,   193,   196,    40,    41,   194,    84,    47,
      19,   195,    57,    50,   224,    42,    51,    52,   148,    54,
      64,   218,   118,    -1,    59,    -1,    61,    62,    63,    64,
      65,    66,    67,    -1,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    84,
      85,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    -1,    -1,    -1,
       6,    -1,    -1,    -1,    10,    -1,    12,    13,    40,    41,
      16,    17,    -1,    19,    20,    21,    -1,    -1,    24,    51,
      52,    27,    54,    -1,    -1,    -1,    -1,    59,    -1,    61,
      62,    63,    64,    65,    66,    67,    -1,    69,    -1,    -1,
      -1,    -1,    -1,    -1,     4,     5,    52,     7,     8,     9,
      -1,    83,    84,    85,    14,    15,    -1,    -1,    18,    -1,
      -1,    -1,    22,    -1,    -1,    25,    -1,    -1,    28,     3,
      -1,    -1,     6,    -1,    -1,    -1,    10,    -1,    12,    13,
      40,    41,    16,    17,    -1,    19,    20,    21,    -1,    23,
      24,    51,    26,    27,    54,    -1,    -1,    -1,    -1,    59,
      -1,    61,    62,    63,    64,    65,    66,    67,    -1,    69,
      -1,    -1,    -1,    -1,    -1,    -1,     4,     5,    52,     7,
       8,     9,    -1,    83,    84,    85,    14,    15,    -1,    -1,
      18,    -1,    -1,    -1,    22,    -1,    -1,    25,    -1,    -1,
      28,     3,    -1,    -1,     6,    -1,    -1,    -1,    10,    83,
      12,    13,    40,    41,    16,    17,    -1,    19,    20,    21,
      -1,    23,    24,    51,    26,    27,    54,    -1,    -1,    -1,
      -1,    59,    -1,    61,    62,    63,    64,    65,    66,    67,
      -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,     4,     5,
      52,     7,     8,     9,    -1,    83,    84,    85,    14,    15,
      -1,    -1,    18,    -1,    -1,    -1,    22,    -1,    70,    25,
      -1,    -1,    28,     3,    -1,    -1,     6,    -1,    -1,    -1,
      10,    -1,    12,    13,    40,    41,    16,    17,    -1,    19,
      20,    21,    -1,    23,    24,    51,    26,    27,    54,    -1,
      -1,    -1,    -1,    59,    -1,    61,    62,    63,    64,    65,
      66,    67,    -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    -1,     6,    83,    -1,    85,
      10,    -1,    12,    13,    -1,    -1,    16,    17,    68,    19,
      20,    21,    22,    -1,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    22,    -1,
      40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    54,    22,    40,    41,    -1,    59,
      -1,    61,    62,    63,    64,    65,    66,    67,    -1,    69,
      54,    -1,    22,    40,    41,    59,    -1,    61,    62,    63,
      64,    65,    66,    67,    -1,    69,    -1,    54,    -1,    -1,
      40,    41,    59,    -1,    61,    62,    63,    64,    65,    66,
      67,    85,    69,    22,    54,    -1,    -1,    -1,    -1,    59,
      -1,    61,    62,    63,    64,    65,    66,    67,    85,    69,
      -1,    40,    41,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    83,    84,    54,    22,    -1,    -1,    -1,
      59,    -1,    61,    62,    63,    64,    65,    66,    67,    -1,
      69,    -1,    -1,    -1,    40,    41,    -1,    -1,    -1,    -1,
      -1,    68,    -1,    -1,    83,    -1,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    59,    -1,    61,    62,    63,    64,    65,
      66,    67,     3,    69,    -1,     6,    72,    -1,    -1,    10,
      -1,    12,    13,    22,    -1,    16,    17,    -1,    19,    20,
      21,    -1,    23,    24,    -1,    26,    27,    -1,    -1,    -1,
      22,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    -1,    22,    40,    41,
      59,    52,    61,    62,    63,    64,    65,    66,    67,    -1,
      69,    70,    54,    22,    -1,    40,    41,    59,    -1,    61,
      62,    63,    64,    65,    66,    67,    -1,    69,    70,    54,
      22,    40,    41,    -1,    59,    -1,    61,    62,    63,    64,
      65,    66,    67,    -1,    69,    54,    -1,    -1,    40,    41,
      59,    -1,    61,    62,    63,    64,    65,    66,    67,    -1,
      69,    -1,    54,    -1,    -1,    -1,    -1,    59,    -1,    61,
      62,    63,    64,    65,    66,    67,    -1,    69
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,    10,    12,    13,    16,    17,    19,    20,
      21,    23,    24,    26,    27,    52,    87,   109,   112,   113,
     114,   115,   116,   117,   121,   126,   131,    54,    83,     0,
      54,    69,    85,   110,   111,   120,   134,   109,   114,   109,
      54,    83,    83,    54,   132,   133,   120,    74,    85,    68,
      83,   109,   118,   119,   121,    69,    71,    83,   115,   124,
     125,   128,   132,    68,    74,    84,    70,   111,   120,    22,
      40,    41,    54,    59,    61,    62,    63,    64,    65,    66,
      67,    69,    83,    88,    89,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     122,     4,     5,     7,     8,     9,    14,    15,    18,    25,
      28,    51,    54,    84,    85,   105,   107,   118,   119,   138,
     139,   140,   141,   142,   143,   144,   118,   121,    70,   109,
     135,   136,   137,    72,    91,   104,   108,   124,   128,    84,
     125,    82,   120,   129,   130,    84,   108,   133,    69,    91,
      69,    91,    91,    59,    59,   107,   127,   128,   122,   123,
      40,    41,    49,    69,    71,    73,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    68,   106,    93,    62,
      75,    76,    63,    64,    77,    78,    43,    44,    77,    78,
      42,    50,    67,    79,    80,    46,    45,    81,    85,   108,
      85,    82,   139,    69,    69,    85,   107,    69,    69,    54,
      82,    74,    85,    84,   140,    84,   139,   120,    74,    70,
      72,    84,   108,    82,    74,    85,   127,    70,    70,    74,
      84,    54,    70,    90,   105,   107,    54,   105,    93,    93,
      93,    94,    94,    77,    78,    96,    96,    96,    96,    97,
      97,    98,    99,   100,   101,   102,   107,    82,   139,    28,
     141,   107,    85,   107,   107,    85,   139,   105,    84,   137,
     108,   130,    70,    93,    84,   122,    70,    74,    72,    95,
      95,    82,   139,    69,   141,    70,    70,    70,   105,   104,
     107,    70,   107,   139,   139,   139,    70,   139,    70,    11,
      85,   139,   139
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    86,    87,    88,    88,    88,    88,    88,    88,    89,
      89,    89,    89,    89,    89,    89,    89,    90,    90,    91,
      91,    91,    91,    91,    91,    92,    92,    92,    92,    92,
      92,    93,    93,    94,    94,    94,    94,    95,    95,    95,
      96,    96,    96,    97,    97,    97,    97,    97,    98,    98,
      98,    99,    99,   100,   100,   101,   101,   102,   102,   103,
     103,   104,   104,   105,   105,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   107,   107,   108,   109,
     109,   109,   109,   110,   110,   111,   111,   112,   112,   112,
     113,   113,   114,   114,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   116,   116,   116,   117,   117,
     118,   118,   118,   118,   119,   119,   120,   121,   121,   122,
     122,   122,   123,   123,   124,   124,   125,   126,   126,   127,
     128,   128,   129,   129,   130,   130,   130,   131,   131,   131,
     132,   132,   133,   133,   134,   134,   134,   134,   134,   134,
     135,   135,   136,   137,   137,   138,   138,   138,   138,   138,
     139,   139,   139,   139,   139,   139,   140,   140,   141,   141,
     142,   142,   142,   143,   143,   143,   143,   144,   144,   144
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     1,     1,     3,     1,
       4,     3,     4,     3,     3,     2,     2,     1,     3,     1,
       2,     2,     2,     2,     4,     1,     1,     1,     1,     1,
       1,     1,     4,     1,     3,     3,     3,     1,     3,     3,
       1,     4,     4,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     5,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       2,     1,     2,     1,     3,     1,     3,     1,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     4,     2,     4,     3,
       2,     3,     3,     4,     1,     2,     1,     2,     3,     1,
       3,     4,     1,     3,     1,     2,     3,     1,     1,     1,
       2,     1,     1,     3,     1,     2,     3,     4,     5,     2,
       1,     3,     1,     3,     1,     3,     4,     3,     4,     3,
       1,     3,     1,     2,     1,     3,     2,     2,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     2,
       5,     7,     5,     5,     7,     6,     7,     3,     4,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
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
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
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
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
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
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 43 "src/parser.y" /* yacc.c:1646  */
    {g_root = (yyvsp[0].node);}
#line 1644 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 46 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new primary_expression(1,(yyvsp[0].str));}
#line 1650 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 47 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new primary_expression(2,(yyvsp[0].str));}
#line 1656 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 48 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new primary_expression(6,(yyvsp[0].str));}
#line 1662 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 49 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new primary_expression(2,(yyvsp[0].str));}
#line 1668 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 50 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new primary_expression(3,(yyvsp[0].str));}
#line 1674 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 51 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new primary_expression(4,(yyvsp[-1].node));}
#line 1680 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 55 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1686 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 56 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new postfix_expression(1,(yyvsp[-3].node),(yyvsp[-1].node));}
#line 1692 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 57 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new postfix_expression(2,(yyvsp[-2].node));}
#line 1698 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 58 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new postfix_expression(3,(yyvsp[-3].node),(yyvsp[-1].node));}
#line 1704 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 59 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new postfix_expression(4,(yyvsp[-2].node),(yyvsp[0].str));}
#line 1710 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 60 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new postfix_expression(5,(yyvsp[-2].node),(yyvsp[0].str));}
#line 1716 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 61 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new postfix_expression(6,(yyvsp[-1].node));}
#line 1722 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 62 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new postfix_expression(7,(yyvsp[-1].node));}
#line 1728 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 66 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1734 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 67 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new argument_expression_list(1,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1740 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 71 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1746 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 72 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new unary_expression(1,(yyvsp[0].node));}
#line 1752 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 73 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new unary_expression(2,(yyvsp[0].node));}
#line 1758 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 74 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new unary_expression(3,(yyvsp[-1].str),(yyvsp[0].node));}
#line 1764 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 75 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new unary_expression(4,(yyvsp[-1].str),(yyvsp[0].node));}
#line 1770 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 76 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new unary_expression(5,(yyvsp[-3].str),(yyvsp[-1].node));}
#line 1776 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 80 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 1782 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 81 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 1788 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 82 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 1794 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 83 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 1800 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 84 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 1806 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 85 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 1812 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 89 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1818 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 90 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new cast_expression((yyvsp[-2].node),(yyvsp[0].node));}
#line 1824 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 94 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1830 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 95 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new multiplicative_expression(1,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1836 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 96 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new multiplicative_expression(2,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1842 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 97 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new multiplicative_expression(3,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1848 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 101 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1854 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 102 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new additive_expression(1,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1860 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 103 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new additive_expression(2,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1866 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 107 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1872 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 108 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new shift_expression(1,(yyvsp[-3].node),(yyvsp[0].node));}
#line 1878 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 109 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new shift_expression(2,(yyvsp[-3].node),(yyvsp[0].node));}
#line 1884 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 113 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1890 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 114 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new relational_expression(1,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1896 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 115 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new relational_expression(2,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1902 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 116 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new relational_expression(3,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1908 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 117 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new relational_expression(4,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1914 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 121 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1920 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 122 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new equality_expression(1,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1926 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 123 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new equality_expression(2,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1932 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 127 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1938 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 128 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new and_expression((yyvsp[-2].node),(yyvsp[0].node));}
#line 1944 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 132 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1950 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 133 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new exclusive_or_expression((yyvsp[-2].node),(yyvsp[0].node));}
#line 1956 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 137 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1962 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 138 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new inclusive_or_expression((yyvsp[-2].node),(yyvsp[0].node));}
#line 1968 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 142 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1974 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 143 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new logical_and_expression((yyvsp[-2].node),(yyvsp[0].node));}
#line 1980 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 147 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1986 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 148 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new logical_or_expression((yyvsp[-2].node),(yyvsp[0].node));}
#line 1992 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 152 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1998 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 153 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new conditional_expression((yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node));}
#line 2004 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 157 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2010 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 158 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new assignment_expression((yyvsp[-2].node),(yyvsp[-1].str),(yyvsp[0].node));}
#line 2016 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 162 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 2022 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 163 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string ("*=");}
#line 2028 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 164 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string ("/=");}
#line 2034 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 165 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string ("%=");}
#line 2040 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 166 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string ("+=");}
#line 2046 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 167 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string ("-=");}
#line 2052 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 168 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string ("<<=");}
#line 2058 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 169 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string (">>=");}
#line 2064 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 170 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string ("&=");}
#line 2070 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 171 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string ("^=");}
#line 2076 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 172 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string ("|=");}
#line 2082 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 176 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2088 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 177 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new expression((yyvsp[-2].node),(yyvsp[0].node));}
#line 2094 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 181 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2100 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 185 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2106 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 186 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new declaration_specifiers(1,(yyvsp[-1].node),(yyvsp[0].node),NULL);}
#line 2112 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 187 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2118 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 188 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new declaration_specifiers(2,(yyvsp[-1].node),NULL,(yyvsp[0].node));}
#line 2124 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 195 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2130 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 196 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new init_declarator_list((yyvsp[-2].node),(yyvsp[0].node));}
#line 2136 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 200 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new init_declarator((yyvsp[0].node),NULL);}
#line 2142 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 201 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new init_declarator((yyvsp[-2].node),(yyvsp[0].node));}
#line 2148 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 205 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new storage_class_specifier((yyvsp[0].str));}
#line 2154 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 207 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new storage_class_specifier((yyvsp[0].str));}
#line 2160 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 208 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new storage_class_specifier((yyvsp[0].str));}
#line 2166 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 211 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new translation_unit(1,(yyvsp[0].node));}
#line 2172 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 212 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new translation_unit(2,(yyvsp[-1].node),(yyvsp[0].node));}
#line 2178 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 216 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new external_declaration(1,(yyvsp[0].node));}
#line 2184 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 217 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new external_declaration(2,(yyvsp[0].node));}
#line 2190 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 221 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new type_specifier(1);}
#line 2196 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 222 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new type_specifier(2);}
#line 2202 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 223 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new type_specifier(3);}
#line 2208 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 224 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new type_specifier(4);}
#line 2214 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 225 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new type_specifier(5);}
#line 2220 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 226 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new type_specifier(6);}
#line 2226 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 227 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new type_specifier(7);}
#line 2232 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 228 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new type_specifier(8);}
#line 2238 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 229 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new type_specifier(9);}
#line 2244 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 230 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2250 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 231 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2256 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 236 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new struct_or_union_specifier(1,(yyvsp[-4].node),(yyvsp[-3].str),(yyvsp[-1].node));}
#line 2262 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 237 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new struct_or_union_specifier(2,(yyvsp[-3].node),NULL,(yyvsp[-1].node));}
#line 2268 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 238 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new struct_or_union_specifier(3,(yyvsp[-1].node),(yyvsp[0].str),NULL);}
#line 2274 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 242 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new function_definition(1,(yyvsp[-3].node),(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 2280 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 243 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new function_definition(2,(yyvsp[-2].node),(yyvsp[-1].node),NULL,(yyvsp[0].node));}
#line 2286 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 268 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new compound_statement(1,NULL,NULL); }
#line 2292 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 269 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new compound_statement(2,(yyvsp[-1].node),NULL); }
#line 2298 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 270 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new compound_statement(3,NULL,(yyvsp[-1].node)); }
#line 2304 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 271 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new compound_statement(4,(yyvsp[-1].node),(yyvsp[-2].node)); }
#line 2310 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 275 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) =  (yyvsp[0].node);}
#line 2316 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 276 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new declaration_list(1,(yyvsp[0].node), (yyvsp[-1].node));}
#line 2322 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 281 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2328 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 285 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 2334 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 286 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new declaration(1,(yyvsp[-2].node), (yyvsp[-1].node));}
#line 2340 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 290 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2346 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 291 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 2352 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 292 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-2].node);}
#line 2358 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 296 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2364 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 297 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) =new initializer_list(2,(yyvsp[0].node),(yyvsp[-2].node));}
#line 2370 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 303 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2376 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 304 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new struct_declaration_list(1,(yyvsp[0].node), (yyvsp[-1].node));}
#line 2382 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 308 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new struct_declaration(1,(yyvsp[-2].node), (yyvsp[-1].node));}
#line 2388 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 312 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new struct_or_union(1, (yyvsp[0].str)) ;}
#line 2394 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 313 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new struct_or_union(2, (yyvsp[0].str)) ;}
#line 2400 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 317 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2406 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 323 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new specifier_qualifier_list(1,(yyvsp[-1].node),(yyvsp[0].node),NULL);}
#line 2412 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 324 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2418 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 330 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2424 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 331 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new struct_declarator_list(1,(yyvsp[0].node),(yyvsp[-2].node));}
#line 2430 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 335 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2436 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 336 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2442 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 337 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new struct_declarator(1,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2448 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 341 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new enum_specifier(1,(yyvsp[-3].str),NULL,(yyvsp[-1].node));}
#line 2454 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 342 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new enum_specifier(2,(yyvsp[-4].str),(yyvsp[-3].str),(yyvsp[-1].node));}
#line 2460 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 343 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new enum_specifier(3,(yyvsp[-1].str),(yyvsp[0].str),NULL);}
#line 2466 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 346 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2472 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 347 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new enumerator_list(1,(yyvsp[0].node),(yyvsp[-2].node));}
#line 2478 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 351 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new enumerator(1,(yyvsp[0].str),NULL);}
#line 2484 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 352 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new enumerator(2,(yyvsp[-2].str),(yyvsp[0].node));}
#line 2490 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 368 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new direct_declarator(1,(yyvsp[0].str),NULL,NULL,NULL,NULL);}
#line 2496 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 369 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new direct_declarator(2,NULL,NULL,(yyvsp[-1].node),NULL,NULL);}
#line 2502 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 370 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new direct_declarator(3,NULL,(yyvsp[-3].node),NULL,(yyvsp[-1].node),NULL);}
#line 2508 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 371 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new direct_declarator(4,NULL,(yyvsp[-2].node),NULL,NULL,NULL);}
#line 2514 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 372 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new direct_declarator(5,NULL,(yyvsp[-3].node),NULL,NULL,(yyvsp[-1].node));}
#line 2520 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 374 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new direct_declarator(6,NULL,(yyvsp[-2].node),NULL,NULL,NULL);}
#line 2526 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 379 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2532 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 380 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new parameter_list(1,(yyvsp[0].node),(yyvsp[-2].node));}
#line 2538 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 383 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2544 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 387 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new parameter_declaration(1,(yyvsp[-1].node),(yyvsp[0].node),NULL);}
#line 2550 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 389 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new parameter_declaration(2,(yyvsp[0].node),NULL,NULL);}
#line 2556 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 405 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new jump_statement(1,(yyvsp[-1].str),(yyvsp[-2].str),NULL);}
#line 2562 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 406 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new jump_statement(2,(yyvsp[-1].str),NULL,NULL);}
#line 2568 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 407 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new jump_statement(3,(yyvsp[-1].str),NULL,NULL);}
#line 2574 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 408 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new jump_statement(4,(yyvsp[-1].str),NULL,NULL);}
#line 2580 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 409 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new jump_statement(5,(yyvsp[-2].str),NULL,(yyvsp[-1].node));}
#line 2586 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 413 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2592 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 414 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2598 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 415 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2604 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 416 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2610 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 417 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2616 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 418 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2622 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 422 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new statement_list(1,(yyvsp[0].node),NULL);}
#line 2628 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 423 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new statement_list(2,(yyvsp[0].node),(yyvsp[-1].node));}
#line 2634 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 427 "src/parser.y" /* yacc.c:1646  */
    {/*$$ = new expression_statement();*/}
#line 2640 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 428 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new expression_statement((yyvsp[-1].node));}
#line 2646 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 432 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new selection_statement(1,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2652 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 433 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new selection_statement(2,(yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node));}
#line 2658 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 434 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new selection_statement(3,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2664 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 438 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new iteration_statement(1,(yyvsp[-2].node),(yyvsp[0].node),NULL,NULL);}
#line 2670 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 439 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new iteration_statement(2,(yyvsp[-2].node),(yyvsp[-5].node),NULL,NULL);}
#line 2676 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 440 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new iteration_statement(3,(yyvsp[0].node),NULL,(yyvsp[-3].node),(yyvsp[-2].node));}
#line 2682 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 441 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new iteration_statement(4,(yyvsp[0].node),(yyvsp[-2].node),(yyvsp[-4].node),(yyvsp[-3].node));}
#line 2688 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 445 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new labeled_statement(1,(yyvsp[-2].str),NULL,NULL,(yyvsp[0].node));}
#line 2694 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 446 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new labeled_statement(2,NULL,(yyvsp[-3].str),(yyvsp[-2].node),(yyvsp[0].node));}
#line 2700 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 447 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new labeled_statement(3,NULL,(yyvsp[-2].str),NULL,(yyvsp[0].node));}
#line 2706 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;


#line 2710 "src/parser.tab.cpp" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 456 "src/parser.y" /* yacc.c:1906  */


const Node *g_root; // Definition of variable (to match declaration earlier)

const Node *parseAST()
{
  g_root=0;
  yyparse();
  return g_root;
}
