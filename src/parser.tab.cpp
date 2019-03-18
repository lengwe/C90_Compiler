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
    STRING_LITERAL = 316,
    MORE = 317,
    LESS = 318,
    ELLIPSIS = 319
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 11 "src/parser.y" /* yacc.c:355  */

  std::string *str;
  Node* node;

#line 189 "src/parser.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_PARSER_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 206 "src/parser.tab.cpp" /* yacc.c:358  */

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
#define YYLAST   1024

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  89
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  59
/* YYNRULES -- Number of rules.  */
#define YYNRULES  177
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  301

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   319

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    69,     2,     2,     2,    79,    70,     2,
      72,    73,    65,    66,    77,    67,    76,    78,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    85,    88,
      80,    71,    81,    84,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    74,     2,    75,    82,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    86,    83,    87,    68,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    43,    43,    46,    49,    50,    51,    55,    56,    57,
      58,    59,    60,    61,    62,    66,    67,    71,    72,    73,
      74,    75,    76,    80,    81,    82,    83,    84,    85,    89,
      90,    94,    95,    96,    97,   101,   102,   103,   107,   108,
     109,   113,   114,   115,   116,   117,   121,   122,   123,   127,
     128,   132,   133,   137,   138,   142,   143,   147,   148,   152,
     153,   157,   158,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   176,   177,   181,   185,   186,   187,
     188,   195,   196,   200,   201,   205,   207,   208,   211,   212,
     216,   217,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   236,   237,   238,   242,   243,   268,   269,
     270,   271,   275,   276,   281,   285,   286,   290,   291,   292,
     296,   297,   303,   304,   308,   312,   313,   317,   323,   324,
     330,   331,   335,   336,   337,   341,   342,   343,   346,   347,
     351,   352,   368,   369,   370,   371,   372,   374,   379,   380,
     383,   387,   389,   405,   406,   407,   408,   409,   413,   414,
     415,   416,   417,   418,   422,   423,   427,   428,   432,   433,
     434,   438,   439,   440,   441,   445,   446,   447
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
  "CONSTANT", "MOD_ASSGIN", "STRING_LITERAL", "MORE", "LESS", "ELLIPSIS",
  "'*'", "'+'", "'-'", "'~'", "'!'", "'&'", "'='", "'('", "')'", "'['",
  "']'", "'.'", "','", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'",
  "':'", "'{'", "'}'", "';'", "$accept", "ROOT", "primary_expression",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration_specifiers", "init_declarator_list",
  "init_declarator", "storage_class_specifier", "translation_unit",
  "external_declaration", "type_specifier", "struct_or_union_specifier",
  "function_definition", "compound_statement", "declaration_list",
  "declarator", "declaration", "initializer", "initializer_list",
  "struct_declaration_list", "struct_declaration", "struct_or_union",
  "type_name", "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "direct_declarator", "parameter_list", "parameter_type_list",
  "parameter_declaration", "jump_statement", "statement", "statement_list",
  "expression_statement", "selection_statement", "iteration_statement",
  "labeled_statement", YY_NULLPTR
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
     315,   316,   317,   318,   319,    42,    43,    45,   126,    33,
      38,    61,    40,    41,    91,    93,    46,    44,    47,    37,
      60,    62,    94,   124,    63,    58,   123,   125,    59
};
# endif

#define YYPACT_NINF -193

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-193)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     955,  -193,  -193,  -193,   -24,  -193,  -193,  -193,  -193,  -193,
    -193,  -193,  -193,  -193,  -193,  -193,    24,    -5,   955,   955,
    -193,   955,  -193,  -193,  -193,   -23,  -193,   -14,    41,  -193,
    -193,   -17,  -193,    -4,  -193,   587,    51,  -193,  -193,  -193,
      18,   276,    41,   -32,   -39,  -193,    38,   -17,  -193,   721,
     250,    -5,  -193,   437,  -193,   512,   754,   276,   276,    58,
    -193,    33,   -36,   832,    41,  -193,  -193,  -193,    -2,   865,
     887,   887,  -193,  -193,  -193,  -193,  -193,  -193,  -193,  -193,
    -193,   664,   721,  -193,    16,   953,   832,  -193,    15,   -22,
     -63,   141,    71,    52,    64,    74,   119,   -30,  -193,  -193,
    -193,    99,   832,   112,    77,   561,   130,   136,   129,   137,
     143,   162,   133,  -193,  -193,  -193,    19,  -193,   336,  -193,
    -193,   411,  -193,  -193,  -193,  -193,  -193,  -193,  -193,   -17,
     142,   148,  -193,  -193,  -193,  -193,   147,   640,  -193,  -193,
    -193,   832,   138,    31,  -193,  -193,  -193,  -193,   664,  -193,
     832,  -193,  -193,    76,   152,  -193,  -193,   -34,  -193,  -193,
     173,   776,   832,   174,  -193,  -193,  -193,  -193,  -193,  -193,
    -193,  -193,  -193,  -193,  -193,   832,  -193,   832,   832,   832,
     832,   832,   150,   151,   832,   832,   832,   832,   832,   832,
     832,   832,   832,   832,   832,   832,  -193,   146,  -193,   561,
     205,   681,   832,  -193,    32,   832,   832,   149,   561,   832,
    -193,  -193,   486,  -193,  -193,  -193,   955,  -193,  -193,  -193,
    -193,   832,    33,  -193,   163,  -193,   832,   698,  -193,  -193,
    -193,    79,  -193,    97,  -193,  -193,  -193,  -193,  -193,    15,
      15,   832,   832,   -63,   -63,   -63,   -63,   141,   141,    71,
      52,    64,    74,   119,    39,   561,  -193,   169,   681,    91,
    -193,   100,   102,  -193,  -193,  -193,  -193,  -193,  -193,  -193,
    -193,  -193,  -193,  -193,  -193,   832,  -193,   -22,   -22,   832,
    -193,   832,   810,   561,   561,   561,  -193,  -193,   109,   561,
     116,   231,  -193,  -193,   155,  -193,   561,   561,  -193,  -193,
    -193
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    87,    93,    98,     0,    97,    95,    96,    94,    99,
     100,    86,   125,    85,    92,   126,     0,     0,    77,     2,
      88,    79,   101,    90,    91,     0,   102,   137,     0,     1,
     142,     0,   115,     0,    81,    83,   114,    78,    89,    80,
     105,     0,     0,   140,     0,   138,     0,     0,   116,     0,
       0,     0,   107,     0,   112,     0,     0,     0,   129,     0,
     122,     0,     0,     0,     0,   135,   143,    82,    83,     0,
       0,     0,     3,     4,     5,    24,    25,    26,    27,    28,
      23,     0,     0,     7,    17,    29,     0,    31,    35,    38,
      41,    46,    49,    51,    53,    55,    57,    59,    61,   117,
      84,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     3,   108,   166,    74,     0,   159,     0,   163,
     164,     0,   160,   161,   162,   158,   106,   113,   147,   152,
     150,     0,   148,   145,    29,    76,     0,     0,   128,   104,
     123,     0,   132,     0,   130,   136,   141,   139,     0,    21,
       0,    18,    19,     0,     0,   127,   120,     0,    13,    14,
       0,     0,     0,     0,    67,    68,    64,    65,    66,    70,
      69,    71,    72,    73,    63,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   155,     0,   154,     0,
       0,     0,     0,   156,     0,     0,     0,     0,     0,     0,
     167,   110,     0,   109,   165,   151,     0,   146,   144,   103,
     133,     0,     0,   124,     0,     6,     0,     0,   118,    12,
       9,     0,    15,     0,    11,    62,    32,    33,    34,    36,
      37,     0,     0,    45,    44,    43,    42,    47,    48,    50,
      52,    54,    56,    58,     0,     0,   177,     0,     0,     0,
     157,     0,     0,   153,   175,    75,   111,   149,   134,   131,
      22,    30,   119,   121,    10,     0,     8,    39,    40,     0,
     176,     0,     0,     0,     0,     0,    16,    60,     0,     0,
       0,   168,   170,   171,     0,   173,     0,     0,   172,   174,
     169
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -193,  -193,  -193,  -193,  -193,   -50,  -193,   -79,     0,  -109,
      27,    17,    55,    56,    54,    57,    67,  -193,   -55,   -49,
    -193,   -47,   -60,     4,  -193,   201,  -193,  -193,   230,   -31,
    -193,  -193,     5,   229,   -15,   -21,   -77,  -193,   223,   -48,
    -193,   135,   -46,  -193,    59,  -193,   242,   221,  -193,  -193,
    -193,    78,  -193,   -45,   180,  -192,  -193,  -193,  -193
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    16,    83,    84,   231,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,   115,
     175,   116,   136,    51,    33,    34,    18,    19,    20,    21,
      22,    23,   117,    53,    68,    24,   100,   157,    59,    60,
      25,   154,    61,   143,   144,    26,    44,    45,    36,   130,
     131,   132,   119,   120,   121,   122,   123,   124,   125
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      99,   135,    35,   146,    17,   156,   134,   176,   135,   258,
      58,   140,   138,   134,    54,   194,    46,   182,   183,   149,
     151,   152,    37,    17,    29,    39,    58,    58,    58,    54,
      27,    40,   127,    99,   153,   155,   134,    30,    64,    63,
      52,    64,   197,   227,   180,   181,   142,   135,    65,    30,
      58,   145,   134,   228,   195,    31,   158,   159,   126,   129,
     200,   204,    28,    41,     2,   160,   282,    31,     3,    49,
       4,     5,    42,    47,     6,     7,   214,     8,     9,    10,
     177,   220,    12,    32,    48,    14,   135,    30,   161,   140,
     162,   134,   163,   178,   179,    43,   209,   127,   236,   237,
     238,   153,   155,   153,    57,    31,    58,   210,   222,   209,
      15,    66,   232,   188,   215,   233,   209,    58,   141,   223,
     260,   189,   190,    55,   279,    56,   235,   134,   134,   134,
     134,   134,   277,   278,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   139,   191,   271,   254,   225,
     273,    69,   274,   209,   256,   259,   275,   192,   261,   262,
     265,   268,   199,   264,   283,   193,   135,   214,   209,    70,
      71,   134,   276,   284,   209,   285,   134,   209,    99,   209,
     239,   240,   294,    72,   184,   185,   209,   196,    73,   296,
      74,   134,   134,   209,    75,    76,    77,    78,    79,    80,
     198,    81,   201,   186,   187,   247,   248,   142,   202,   205,
     280,   243,   244,   245,   246,   206,   207,   203,   208,   216,
     129,   217,   218,   221,   287,   226,   286,   229,   234,   134,
     241,   255,   242,   257,   288,   290,   270,   263,   291,   292,
     293,   281,   297,   298,   295,   249,   251,   250,    67,    38,
     252,   299,   300,     1,   101,   102,     2,   103,   104,   105,
       3,   253,     4,     5,   106,   107,     6,     7,   108,     8,
       9,    10,    69,    11,    12,   109,    13,    14,   110,   118,
     137,   269,     2,   224,    62,   147,     3,     0,     4,     5,
      70,    71,     6,     7,   267,     8,     9,    10,   212,     0,
      12,   111,    15,    14,   112,     0,     0,     0,     0,    73,
       0,    74,     0,     0,     0,    75,    76,    77,    78,    79,
      80,     0,    81,     0,     0,     0,     0,     0,    15,     0,
       0,     0,     0,     0,     0,     0,    50,   113,   114,     1,
     101,   102,     2,   103,   104,   105,     3,     0,     4,     5,
     106,   107,     6,     7,   108,     8,     9,    10,    69,    11,
      12,   109,    13,    14,   110,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    70,    71,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   111,    15,     0,
     112,     0,     0,     0,     0,    73,     0,    74,     0,     0,
       0,    75,    76,    77,    78,    79,    80,     0,    81,     0,
       0,     0,     0,     0,     0,   101,   102,     0,   103,   104,
     105,     0,    50,   211,   114,   106,   107,     0,     0,   108,
       0,     0,     0,    69,     0,     0,   109,     0,     0,   110,
       1,     0,     0,     2,     0,     0,     0,     3,     0,     4,
       5,    70,    71,     6,     7,     0,     8,     9,    10,     0,
      11,    12,   111,    13,    14,   112,     0,     0,     0,     0,
      73,     0,    74,     0,     0,     0,    75,    76,    77,    78,
      79,    80,     0,    81,     0,     0,     0,     0,     0,    15,
     101,   102,     0,   103,   104,   105,     0,    50,   213,   114,
     106,   107,     0,     0,   108,     0,     0,     0,    69,     0,
       0,   109,     0,     0,   110,     1,     0,     0,     2,     0,
       0,     0,     3,    50,     4,     5,    70,    71,     6,     7,
       0,     8,     9,    10,     0,    11,    12,   111,    13,    14,
     112,     0,     0,     0,     0,    73,     0,    74,     0,     0,
       0,    75,    76,    77,    78,    79,    80,     0,    81,     0,
       0,     0,     0,     0,    15,   101,   102,     0,   103,   104,
     105,     0,    50,   266,   114,   106,   107,     0,     0,   108,
       0,     0,     0,    69,     0,   128,   109,     0,     0,   110,
       1,     0,     0,     2,     0,     0,     0,     3,     0,     4,
       5,    70,    71,     6,     7,     0,     8,     9,    10,     0,
      11,    12,   111,    13,    14,   112,     0,     0,     0,     0,
      73,     0,    74,     0,     0,     0,    75,    76,    77,    78,
      79,    80,     0,    81,     0,     0,     0,     0,     0,    15,
       0,     0,     0,     0,     0,     0,     2,    50,     0,   114,
       3,     0,     4,     5,     0,     0,     6,     7,    49,     8,
       9,    10,     0,     0,    12,     0,     0,    14,     0,     0,
       2,     0,     0,    50,     3,     0,     4,     5,     0,     0,
       6,     7,     0,     8,     9,    10,    69,     0,    12,     0,
       0,    14,    15,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    69,    70,    71,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    15,     0,    72,     0,
      69,    70,    71,    73,     0,    74,     0,   219,     0,    75,
      76,    77,    78,    79,    80,    72,    81,     0,    70,    71,
      73,     0,    74,    69,     0,     0,    75,    76,    77,    78,
      79,    80,    72,    81,     0,     0,     0,    73,     0,    74,
       0,    70,    71,    75,    76,    77,    78,    79,    80,   114,
      81,     0,     0,     0,     0,    72,    69,     0,     0,     0,
      73,     0,    74,     0,    82,   272,    75,    76,    77,    78,
      79,    80,     0,    81,    70,    71,     0,     0,    69,     0,
       0,     0,     0,     0,     0,     0,     0,    82,    72,     0,
       0,     0,     0,    73,     0,    74,    70,    71,     0,    75,
      76,    77,    78,    79,    80,     0,    81,     0,     0,   133,
      72,     0,    69,     0,     0,    73,     0,    74,     0,     0,
       0,    75,    76,    77,    78,    79,    80,     0,    81,   230,
      70,    71,     0,     0,    69,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    72,     0,     0,     0,     0,    73,
       0,    74,    70,    71,     0,    75,    76,    77,    78,    79,
      80,     0,    81,   289,     0,     0,    72,    69,     0,     0,
       0,    73,     0,    74,     0,     0,     0,    75,    76,    77,
      78,    79,    80,     0,    81,    70,    71,     0,     0,    69,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    72,
       0,     0,     0,     0,    73,     0,    74,    70,    71,     0,
      75,    76,    77,    78,    79,    80,     0,   148,     0,     0,
       0,    72,     0,     0,     0,     0,    73,     0,    74,     0,
       0,     0,    75,    76,    77,    78,    79,    80,     1,   150,
       0,     2,     0,     0,     0,     3,     0,     4,     5,     0,
       0,     6,     7,     0,     8,     9,    10,     0,    11,    12,
       0,    13,    14,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    15,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   174
};

static const yytype_int16 yycheck[] =
{
      49,    56,    17,    63,     0,    82,    56,    86,    63,   201,
      41,    59,    58,    63,    35,    45,    31,    80,    81,    69,
      70,    71,    18,    19,     0,    21,    57,    58,    59,    50,
      54,    54,    53,    82,    81,    81,    86,    54,    77,    71,
      35,    77,   102,    77,    66,    67,    61,   102,    87,    54,
      81,    87,   102,    87,    84,    72,    40,    41,    53,    55,
     105,   108,    86,    86,     6,    49,   258,    72,    10,    71,
      12,    13,    86,    77,    16,    17,   121,    19,    20,    21,
      65,   141,    24,    88,    88,    27,   141,    54,    72,   137,
      74,   141,    76,    78,    79,    54,    77,   118,   177,   178,
     179,   148,   148,   150,    86,    72,   137,    88,    77,    77,
      52,    73,   161,    42,   129,   162,    77,   148,    85,    88,
      88,    50,    70,    72,    85,    74,   175,   177,   178,   179,
     180,   181,   241,   242,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,    87,    82,   226,   195,    73,
     227,    22,    73,    77,   199,   202,    77,    83,   205,   206,
     209,   221,    85,   208,    73,    46,   221,   212,    77,    40,
      41,   221,    75,    73,    77,    73,   226,    77,   227,    77,
     180,   181,    73,    54,    43,    44,    77,    88,    59,    73,
      61,   241,   242,    77,    65,    66,    67,    68,    69,    70,
      88,    72,    72,    62,    63,   188,   189,   222,    72,    72,
     255,   184,   185,   186,   187,    72,    54,    88,    85,    77,
     216,    73,    75,    85,   279,    73,   275,    54,    54,   279,
      80,    85,    81,    28,   281,   282,    73,    88,   283,   284,
     285,    72,    11,    88,   289,   190,   192,   191,    47,    19,
     193,   296,   297,     3,     4,     5,     6,     7,     8,     9,
      10,   194,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    50,
      57,   222,     6,   148,    42,    64,    10,    -1,    12,    13,
      40,    41,    16,    17,   216,    19,    20,    21,   118,    -1,
      24,    51,    52,    27,    54,    -1,    -1,    -1,    -1,    59,
      -1,    61,    -1,    -1,    -1,    65,    66,    67,    68,    69,
      70,    -1,    72,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,
      54,    -1,    -1,    -1,    -1,    59,    -1,    61,    -1,    -1,
      -1,    65,    66,    67,    68,    69,    70,    -1,    72,    -1,
      -1,    -1,    -1,    -1,    -1,     4,     5,    -1,     7,     8,
       9,    -1,    86,    87,    88,    14,    15,    -1,    -1,    18,
      -1,    -1,    -1,    22,    -1,    -1,    25,    -1,    -1,    28,
       3,    -1,    -1,     6,    -1,    -1,    -1,    10,    -1,    12,
      13,    40,    41,    16,    17,    -1,    19,    20,    21,    -1,
      23,    24,    51,    26,    27,    54,    -1,    -1,    -1,    -1,
      59,    -1,    61,    -1,    -1,    -1,    65,    66,    67,    68,
      69,    70,    -1,    72,    -1,    -1,    -1,    -1,    -1,    52,
       4,     5,    -1,     7,     8,     9,    -1,    86,    87,    88,
      14,    15,    -1,    -1,    18,    -1,    -1,    -1,    22,    -1,
      -1,    25,    -1,    -1,    28,     3,    -1,    -1,     6,    -1,
      -1,    -1,    10,    86,    12,    13,    40,    41,    16,    17,
      -1,    19,    20,    21,    -1,    23,    24,    51,    26,    27,
      54,    -1,    -1,    -1,    -1,    59,    -1,    61,    -1,    -1,
      -1,    65,    66,    67,    68,    69,    70,    -1,    72,    -1,
      -1,    -1,    -1,    -1,    52,     4,     5,    -1,     7,     8,
       9,    -1,    86,    87,    88,    14,    15,    -1,    -1,    18,
      -1,    -1,    -1,    22,    -1,    73,    25,    -1,    -1,    28,
       3,    -1,    -1,     6,    -1,    -1,    -1,    10,    -1,    12,
      13,    40,    41,    16,    17,    -1,    19,    20,    21,    -1,
      23,    24,    51,    26,    27,    54,    -1,    -1,    -1,    -1,
      59,    -1,    61,    -1,    -1,    -1,    65,    66,    67,    68,
      69,    70,    -1,    72,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    -1,     6,    86,    -1,    88,
      10,    -1,    12,    13,    -1,    -1,    16,    17,    71,    19,
      20,    21,    -1,    -1,    24,    -1,    -1,    27,    -1,    -1,
       6,    -1,    -1,    86,    10,    -1,    12,    13,    -1,    -1,
      16,    17,    -1,    19,    20,    21,    22,    -1,    24,    -1,
      -1,    27,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    54,    -1,
      22,    40,    41,    59,    -1,    61,    -1,    87,    -1,    65,
      66,    67,    68,    69,    70,    54,    72,    -1,    40,    41,
      59,    -1,    61,    22,    -1,    -1,    65,    66,    67,    68,
      69,    70,    54,    72,    -1,    -1,    -1,    59,    -1,    61,
      -1,    40,    41,    65,    66,    67,    68,    69,    70,    88,
      72,    -1,    -1,    -1,    -1,    54,    22,    -1,    -1,    -1,
      59,    -1,    61,    -1,    86,    87,    65,    66,    67,    68,
      69,    70,    -1,    72,    40,    41,    -1,    -1,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    54,    -1,
      -1,    -1,    -1,    59,    -1,    61,    40,    41,    -1,    65,
      66,    67,    68,    69,    70,    -1,    72,    -1,    -1,    75,
      54,    -1,    22,    -1,    -1,    59,    -1,    61,    -1,    -1,
      -1,    65,    66,    67,    68,    69,    70,    -1,    72,    73,
      40,    41,    -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    59,
      -1,    61,    40,    41,    -1,    65,    66,    67,    68,    69,
      70,    -1,    72,    73,    -1,    -1,    54,    22,    -1,    -1,
      -1,    59,    -1,    61,    -1,    -1,    -1,    65,    66,    67,
      68,    69,    70,    -1,    72,    40,    41,    -1,    -1,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    59,    -1,    61,    40,    41,    -1,
      65,    66,    67,    68,    69,    70,    -1,    72,    -1,    -1,
      -1,    54,    -1,    -1,    -1,    -1,    59,    -1,    61,    -1,
      -1,    -1,    65,    66,    67,    68,    69,    70,     3,    72,
      -1,     6,    -1,    -1,    -1,    10,    -1,    12,    13,    -1,
      -1,    16,    17,    -1,    19,    20,    21,    -1,    23,    24,
      -1,    26,    27,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,    10,    12,    13,    16,    17,    19,    20,
      21,    23,    24,    26,    27,    52,    90,   112,   115,   116,
     117,   118,   119,   120,   124,   129,   134,    54,    86,     0,
      54,    72,    88,   113,   114,   123,   137,   112,   117,   112,
      54,    86,    86,    54,   135,   136,   123,    77,    88,    71,
      86,   112,   121,   122,   124,    72,    74,    86,   118,   127,
     128,   131,   135,    71,    77,    87,    73,   114,   123,    22,
      40,    41,    54,    59,    61,    65,    66,    67,    68,    69,
      70,    72,    86,    91,    92,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     125,     4,     5,     7,     8,     9,    14,    15,    18,    25,
      28,    51,    54,    87,    88,   108,   110,   121,   122,   141,
     142,   143,   144,   145,   146,   147,   121,   124,    73,   112,
     138,   139,   140,    75,    94,   107,   111,   127,   131,    87,
     128,    85,   123,   132,   133,    87,   111,   136,    72,    94,
      72,    94,    94,   110,   130,   131,   125,   126,    40,    41,
      49,    72,    74,    76,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    71,   109,    96,    65,    78,    79,
      66,    67,    80,    81,    43,    44,    62,    63,    42,    50,
      70,    82,    83,    46,    45,    84,    88,   111,    88,    85,
     142,    72,    72,    88,   110,    72,    72,    54,    85,    77,
      88,    87,   143,    87,   142,   123,    77,    73,    75,    87,
     111,    85,    77,    88,   130,    73,    73,    77,    87,    54,
      73,    93,   108,   110,    54,   108,    96,    96,    96,    97,
      97,    80,    81,    99,    99,    99,    99,   100,   100,   101,
     102,   103,   104,   105,   110,    85,   142,    28,   144,   110,
      88,   110,   110,    88,   142,   108,    87,   140,   111,   133,
      73,    96,    87,   125,    73,    77,    75,    98,    98,    85,
     142,    72,   144,    73,    73,    73,   108,   107,   110,    73,
     110,   142,   142,   142,    73,   142,    73,    11,    88,   142,
     142
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    89,    90,    91,    91,    91,    91,    92,    92,    92,
      92,    92,    92,    92,    92,    93,    93,    94,    94,    94,
      94,    94,    94,    95,    95,    95,    95,    95,    95,    96,
      96,    97,    97,    97,    97,    98,    98,    98,    99,    99,
      99,   100,   100,   100,   100,   100,   101,   101,   101,   102,
     102,   103,   103,   104,   104,   105,   105,   106,   106,   107,
     107,   108,   108,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   110,   110,   111,   112,   112,   112,
     112,   113,   113,   114,   114,   115,   115,   115,   116,   116,
     117,   117,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   119,   119,   119,   120,   120,   121,   121,
     121,   121,   122,   122,   123,   124,   124,   125,   125,   125,
     126,   126,   127,   127,   128,   129,   129,   130,   131,   131,
     132,   132,   133,   133,   133,   134,   134,   134,   135,   135,
     136,   136,   137,   137,   137,   137,   137,   137,   138,   138,
     139,   140,   140,   141,   141,   141,   141,   141,   142,   142,
     142,   142,   142,   142,   143,   143,   144,   144,   145,   145,
     145,   146,   146,   146,   146,   147,   147,   147
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     3,     1,     4,     3,
       4,     3,     3,     2,     2,     1,     3,     1,     2,     2,
       2,     2,     4,     1,     1,     1,     1,     1,     1,     1,
       4,     1,     3,     3,     3,     1,     3,     3,     1,     4,
       4,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       5,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     2,     1,
       2,     1,     3,     1,     3,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     5,     4,     2,     4,     3,     2,     3,
       3,     4,     1,     2,     1,     2,     3,     1,     3,     4,
       1,     3,     1,     2,     3,     1,     1,     1,     2,     1,
       1,     3,     1,     2,     3,     4,     5,     2,     1,     3,
       1,     3,     1,     3,     4,     3,     4,     3,     1,     3,
       1,     2,     1,     3,     2,     2,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     2,     5,     7,
       5,     5,     7,     6,     7,     3,     4,     3
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
#line 1670 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 46 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new primary_expression(1,(yyvsp[0].str));}
#line 1676 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 49 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new primary_expression(2,(yyvsp[0].str));}
#line 1682 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 50 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new primary_expression(3,(yyvsp[0].str));}
#line 1688 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 51 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new primary_expression(4,(yyvsp[-1].node));}
#line 1694 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 55 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1700 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 56 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new postfix_expression(1,(yyvsp[-3].node),(yyvsp[-1].node));}
#line 1706 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 57 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new postfix_expression(2,(yyvsp[-2].node));}
#line 1712 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 58 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new postfix_expression(3,(yyvsp[-3].node),(yyvsp[-1].node));}
#line 1718 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 59 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new postfix_expression(4,(yyvsp[-2].node),(yyvsp[0].str));}
#line 1724 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 60 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new postfix_expression(5,(yyvsp[-2].node),(yyvsp[0].str));}
#line 1730 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 61 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new postfix_expression(6,(yyvsp[-1].node));}
#line 1736 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 62 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new postfix_expression(7,(yyvsp[-1].node));}
#line 1742 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 66 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1748 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 67 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new argument_expression_list(1,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1754 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 71 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1760 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 72 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new unary_expression(1,(yyvsp[0].node));}
#line 1766 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 73 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new unary_expression(2,(yyvsp[0].node));}
#line 1772 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 74 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new unary_expression(3,(yyvsp[-1].str),(yyvsp[0].node));}
#line 1778 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 75 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new unary_expression(4,(yyvsp[-1].str),(yyvsp[0].node));}
#line 1784 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 76 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new unary_expression(5,(yyvsp[-3].str),(yyvsp[-1].node));}
#line 1790 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 80 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string("&");}
#line 1796 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 81 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string("*");}
#line 1802 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 82 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string("+");}
#line 1808 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 83 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string("-");}
#line 1814 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 84 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string("~");}
#line 1820 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 85 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string("!");}
#line 1826 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 89 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1832 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 90 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new cast_expression((yyvsp[-2].node),(yyvsp[0].node));}
#line 1838 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 94 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1844 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 95 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new multiplicative_expression(1,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1850 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 96 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new multiplicative_expression(2,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1856 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 97 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new multiplicative_expression(3,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1862 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 101 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1868 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 102 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new additive_expression(1,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1874 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 103 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new additive_expression(2,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1880 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 107 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1886 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 108 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new shift_expression(1,(yyvsp[-3].node),(yyvsp[0].node));}
#line 1892 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 109 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new shift_expression(2,(yyvsp[-3].node),(yyvsp[0].node));}
#line 1898 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 113 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1904 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 114 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new relational_expression(1,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1910 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 115 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new relational_expression(2,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1916 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 116 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new relational_expression(3,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1922 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 117 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new relational_expression(4,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1928 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 121 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1934 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 122 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new equality_expression(1,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1940 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 123 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new equality_expression(2,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1946 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 127 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1952 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 128 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new and_expression((yyvsp[-2].node),(yyvsp[0].node));}
#line 1958 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 132 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1964 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 133 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new exclusive_or_expression((yyvsp[-2].node),(yyvsp[0].node));}
#line 1970 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 137 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1976 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 138 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new inclusive_or_expression((yyvsp[-2].node),(yyvsp[0].node));}
#line 1982 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 142 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1988 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 143 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new logical_and_expression((yyvsp[-2].node),(yyvsp[0].node));}
#line 1994 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 147 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2000 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 148 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new logical_or_expression((yyvsp[-2].node),(yyvsp[0].node));}
#line 2006 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 152 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2012 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 153 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new conditional_expression((yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node));}
#line 2018 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 157 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2024 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 158 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new assignment_expression((yyvsp[-2].node),(yyvsp[-1].str),(yyvsp[0].node));}
#line 2030 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 162 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string ("=");}
#line 2036 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 163 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string ("*=");}
#line 2042 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 164 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string ("/=");}
#line 2048 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 165 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string ("%=");}
#line 2054 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 166 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string ("+=");}
#line 2060 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 167 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string ("-=");}
#line 2066 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 168 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string ("<<=");}
#line 2072 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 169 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string (">>=");}
#line 2078 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 170 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string ("&=");}
#line 2084 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 171 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string ("^=");}
#line 2090 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 172 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string ("|=");}
#line 2096 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 176 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2102 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 177 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new expression((yyvsp[-2].node),(yyvsp[0].node));}
#line 2108 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 181 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2114 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 185 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2120 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 186 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new declaration_specifiers(1,(yyvsp[-1].node),(yyvsp[0].node),NULL);}
#line 2126 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 187 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2132 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 188 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new declaration_specifiers(2,(yyvsp[-1].node),NULL,(yyvsp[0].node));}
#line 2138 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 195 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2144 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 196 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new init_declarator_list((yyvsp[-2].node),(yyvsp[0].node));}
#line 2150 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 200 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new init_declarator((yyvsp[0].node),NULL);}
#line 2156 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 201 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new init_declarator((yyvsp[-2].node),(yyvsp[0].node));}
#line 2162 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 205 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new storage_class_specifier((yyvsp[0].str));}
#line 2168 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 207 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new storage_class_specifier((yyvsp[0].str));}
#line 2174 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 208 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new storage_class_specifier((yyvsp[0].str));}
#line 2180 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 211 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new translation_unit(1,(yyvsp[0].node));}
#line 2186 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 212 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new translation_unit(2,(yyvsp[-1].node),(yyvsp[0].node));}
#line 2192 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 216 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new external_declaration(1,(yyvsp[0].node));}
#line 2198 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 217 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new external_declaration(2,(yyvsp[0].node));}
#line 2204 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 221 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new type_specifier(1);}
#line 2210 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 222 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new type_specifier(2);}
#line 2216 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 223 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new type_specifier(3);}
#line 2222 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 224 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new type_specifier(4);}
#line 2228 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 225 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new type_specifier(5);}
#line 2234 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 226 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new type_specifier(6);}
#line 2240 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 227 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new type_specifier(7);}
#line 2246 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 228 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new type_specifier(8);}
#line 2252 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 229 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new type_specifier(9);}
#line 2258 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 230 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2264 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 231 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2270 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 236 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new struct_or_union_specifier(1,(yyvsp[-4].node),(yyvsp[-3].str),(yyvsp[-1].node));}
#line 2276 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 237 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new struct_or_union_specifier(2,(yyvsp[-3].node),NULL,(yyvsp[-1].node));}
#line 2282 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 238 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new struct_or_union_specifier(3,(yyvsp[-1].node),(yyvsp[0].str),NULL);}
#line 2288 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 242 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new function_definition(1,(yyvsp[-3].node),(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 2294 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 243 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new function_definition(2,(yyvsp[-2].node),(yyvsp[-1].node),NULL,(yyvsp[0].node));}
#line 2300 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 268 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new compound_statement(1,NULL,NULL); }
#line 2306 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 269 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new compound_statement(2,(yyvsp[-1].node),NULL); }
#line 2312 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 270 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new compound_statement(3,NULL,(yyvsp[-1].node)); }
#line 2318 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 271 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new compound_statement(4,(yyvsp[-1].node),(yyvsp[-2].node)); }
#line 2324 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 275 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) =  (yyvsp[0].node);}
#line 2330 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 276 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new declaration_list(1,(yyvsp[0].node), (yyvsp[-1].node));}
#line 2336 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 281 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2342 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 285 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 2348 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 286 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new declaration(1,(yyvsp[-2].node), (yyvsp[-1].node));}
#line 2354 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 290 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2360 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 291 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 2366 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 292 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-2].node);}
#line 2372 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 296 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2378 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 297 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) =new initializer_list(2,(yyvsp[0].node),(yyvsp[-2].node));}
#line 2384 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 303 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2390 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 304 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new struct_declaration_list(1,(yyvsp[0].node), (yyvsp[-1].node));}
#line 2396 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 308 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new struct_declaration(1,(yyvsp[-2].node), (yyvsp[-1].node));}
#line 2402 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 312 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new struct_or_union(1, (yyvsp[0].str)) ;}
#line 2408 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 313 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new struct_or_union(2, (yyvsp[0].str)) ;}
#line 2414 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 317 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2420 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 323 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new specifier_qualifier_list(1,(yyvsp[-1].node),(yyvsp[0].node),NULL);}
#line 2426 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 324 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2432 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 330 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2438 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 331 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new struct_declarator_list(1,(yyvsp[0].node),(yyvsp[-2].node));}
#line 2444 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 335 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2450 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 336 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2456 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 337 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new struct_declarator(1,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2462 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 341 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new enum_specifier(1,(yyvsp[-3].str),NULL,(yyvsp[-1].node));}
#line 2468 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 342 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new enum_specifier(2,(yyvsp[-4].str),(yyvsp[-3].str),(yyvsp[-1].node));}
#line 2474 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 343 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new enum_specifier(3,(yyvsp[-1].str),(yyvsp[0].str),NULL);}
#line 2480 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 346 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2486 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 347 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new enumerator_list(1,(yyvsp[0].node),(yyvsp[-2].node));}
#line 2492 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 351 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new enumerator(1,(yyvsp[0].str),NULL);}
#line 2498 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 352 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new enumerator(2,(yyvsp[-2].str),(yyvsp[0].node));}
#line 2504 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 368 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new direct_declarator(1,(yyvsp[0].str),NULL,NULL,NULL,NULL);}
#line 2510 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 369 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new direct_declarator(2,NULL,NULL,(yyvsp[-1].node),NULL,NULL);}
#line 2516 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 370 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new direct_declarator(3,NULL,(yyvsp[-3].node),NULL,(yyvsp[-1].node),NULL);}
#line 2522 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 371 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new direct_declarator(4,NULL,(yyvsp[-2].node),NULL,NULL,NULL);}
#line 2528 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 372 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new direct_declarator(5,NULL,(yyvsp[-3].node),NULL,NULL,(yyvsp[-1].node));}
#line 2534 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 374 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new direct_declarator(6,NULL,(yyvsp[-2].node),NULL,NULL,NULL);}
#line 2540 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 379 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2546 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 380 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new parameter_list(1,(yyvsp[0].node),(yyvsp[-2].node));}
#line 2552 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 383 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2558 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 387 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new parameter_declaration(1,(yyvsp[-1].node),(yyvsp[0].node),NULL);}
#line 2564 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 389 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new parameter_declaration(2,(yyvsp[0].node),NULL,NULL);}
#line 2570 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 405 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new jump_statement(1,(yyvsp[-1].str),(yyvsp[-2].str),NULL);}
#line 2576 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 406 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new jump_statement(2,(yyvsp[-1].str),NULL,NULL);}
#line 2582 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 407 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new jump_statement(3,(yyvsp[-1].str),NULL,NULL);}
#line 2588 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 408 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new jump_statement(4,(yyvsp[-1].str),NULL,NULL);}
#line 2594 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 409 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new jump_statement(5,(yyvsp[-2].str),NULL,(yyvsp[-1].node));}
#line 2600 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 413 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2606 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 414 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2612 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 415 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2618 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 416 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2624 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 417 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2630 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 418 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2636 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 422 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new statement_list(1,(yyvsp[0].node),NULL);}
#line 2642 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 423 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new statement_list(2,(yyvsp[0].node),(yyvsp[-1].node));}
#line 2648 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 427 "src/parser.y" /* yacc.c:1646  */
    {/*$$ = new expression_statement();*/}
#line 2654 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 428 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new expression_statement((yyvsp[-1].node));}
#line 2660 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 432 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new selection_statement(1,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2666 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 433 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new selection_statement(2,(yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node));}
#line 2672 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 434 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new selection_statement(3,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2678 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 438 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new iteration_statement(1,(yyvsp[-2].node),(yyvsp[0].node),NULL,NULL);}
#line 2684 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 439 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new iteration_statement(2,(yyvsp[-2].node),(yyvsp[-5].node),NULL,NULL);}
#line 2690 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 440 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new iteration_statement(3,(yyvsp[0].node),NULL,(yyvsp[-3].node),(yyvsp[-2].node));}
#line 2696 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 441 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new iteration_statement(4,(yyvsp[0].node),(yyvsp[-2].node),(yyvsp[-4].node),(yyvsp[-3].node));}
#line 2702 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 445 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new labeled_statement(1,(yyvsp[-2].str),NULL,NULL,(yyvsp[0].node));}
#line 2708 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 446 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new labeled_statement(2,NULL,(yyvsp[-3].str),(yyvsp[-2].node),(yyvsp[0].node));}
#line 2714 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 447 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new labeled_statement(3,NULL,(yyvsp[-2].str),NULL,(yyvsp[0].node));}
#line 2720 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;


#line 2724 "src/parser.tab.cpp" /* yacc.c:1646  */
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
