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
    ELLIPSIS = 285,
    ADD_ASSIGN = 286,
    SUB_ASSIGN = 287,
    MUL_ASSIGN = 288,
    DIV_ASSIGN = 289,
    MOD_ASSIGN = 290,
    RIGHT_ASSIGN = 291,
    LEFT_ASSIGN = 292,
    AND_ASSIGN = 293,
    XOR_ASSIGN = 294,
    OR_ASSIGN = 295,
    INC_OP = 296,
    DEC_OP = 297,
    EQ_OP = 298,
    GE_OP = 299,
    LE_OP = 300,
    OR_OP = 301,
    AND_OP = 302,
    LEFT_OP = 303,
    RIGHT_OP = 304,
    PTR_OP = 305,
    NE_OP = 306,
    GOTO = 307,
    UNION = 308,
    VOLATILE = 309,
    IDENTIFIER = 310,
    FLOAT_NUM = 311,
    HEX_NUM = 312,
    INT_NUM = 313,
    CHAR_CONSTANT = 314,
    CONSTANT = 315,
    MOD_ASSGIN = 316,
    STRING_LITERAL = 317,
    MORE = 318,
    LESS = 319
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
#define YYLAST   936

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  180
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  298

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
       2,     2,     2,     2,     2,     2,     2,     2,    83,    86,
       2,    71,     2,    82,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    74,     2,    75,    80,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    84,    81,    85,    68,     2,     2,     2,
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
     109,   113,   114,   115,   116,   117,   122,   123,   124,   128,
     129,   133,   134,   138,   139,   143,   144,   148,   149,   153,
     154,   158,   159,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   177,   178,   182,   186,   187,   188,
     189,   196,   197,   201,   202,   206,   208,   209,   212,   213,
     217,   218,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   237,   238,   239,   243,   244,   269,   270,
     273,   274,   275,   277,   278,   279,   282,   283,   288,   292,
     293,   297,   298,   299,   303,   304,   308,   309,   313,   317,
     318,   322,   328,   329,   335,   336,   340,   341,   342,   346,
     347,   348,   351,   352,   356,   357,   373,   374,   375,   376,
     377,   379,   384,   385,   388,   392,   394,   410,   411,   412,
     413,   414,   418,   419,   420,   421,   422,   423,   432,   433,
     434,   438,   439,   440,   444,   445,   446,   447,   451,   452,
     453
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
  "ELLIPSIS", "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "RIGHT_ASSIGN", "LEFT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN",
  "OR_ASSIGN", "INC_OP", "DEC_OP", "EQ_OP", "GE_OP", "LE_OP", "OR_OP",
  "AND_OP", "LEFT_OP", "RIGHT_OP", "PTR_OP", "NE_OP", "GOTO", "UNION",
  "VOLATILE", "IDENTIFIER", "FLOAT_NUM", "HEX_NUM", "INT_NUM",
  "CHAR_CONSTANT", "CONSTANT", "MOD_ASSGIN", "STRING_LITERAL", "MORE",
  "LESS", "'*'", "'+'", "'-'", "'~'", "'!'", "'&'", "'='", "'('", "')'",
  "'['", "']'", "'.'", "','", "'/'", "'%'", "'^'", "'|'", "'?'", "':'",
  "'{'", "'}'", "';'", "$accept", "ROOT", "primary_expression",
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
  "function_definition", "compound_statement", "block_item",
  "block_item_list", "declaration_list", "declarator", "declaration",
  "initializer", "initializer_list", "struct_declaration_list",
  "struct_declaration", "struct_or_union", "type_name",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "direct_declarator", "parameter_list", "parameter_type_list",
  "parameter_declaration", "jump_statement", "statement",
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
      94,   124,    63,    58,   123,   125,    59
};
# endif

#define YYPACT_NINF -194

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-194)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     840,  -194,  -194,  -194,   -28,  -194,  -194,  -194,  -194,  -194,
    -194,  -194,  -194,  -194,  -194,  -194,    11,   -31,   840,   840,
    -194,   840,  -194,  -194,  -194,   -26,  -194,   -66,   -17,  -194,
    -194,   -27,  -194,    19,  -194,   541,    10,  -194,  -194,  -194,
     -33,   257,   -17,    -7,   -45,  -194,    13,   -27,  -194,   684,
     230,   -31,  -194,   560,  -194,   614,   716,   257,   257,   425,
    -194,     8,   -23,   813,   -17,  -194,  -194,  -194,    48,   829,
     864,   864,  -194,  -194,  -194,  -194,  -194,  -194,  -194,  -194,
    -194,   633,   684,  -194,   318,    38,   813,  -194,   -35,    58,
     147,    54,    42,    52,     1,    70,   106,   -29,  -194,  -194,
    -194,    89,   813,    93,    94,   398,   100,   111,   143,   119,
     120,   142,   121,  -194,  -194,  -194,    34,  -194,  -194,   314,
    -194,  -194,  -194,  -194,  -194,  -194,  -194,  -194,  -194,  -194,
     -27,   129,   141,  -194,  -194,  -194,  -194,   144,   579,  -194,
    -194,  -194,   813,   135,    35,  -194,  -194,  -194,  -194,   633,
    -194,   813,  -194,  -194,     6,   149,  -194,  -194,    12,  -194,
    -194,   168,   738,   813,   169,  -194,  -194,  -194,  -194,  -194,
    -194,  -194,  -194,  -194,  -194,  -194,   813,  -194,   813,   813,
     813,   813,   813,   813,   813,   813,   813,   813,   813,   813,
     813,   813,   813,   813,   813,   813,   813,  -194,   145,  -194,
     398,  -194,   199,   473,   813,  -194,    37,   813,   813,   155,
     398,   813,  -194,  -194,  -194,  -194,   840,  -194,  -194,  -194,
    -194,   813,     8,  -194,   157,  -194,   813,   649,  -194,  -194,
    -194,    73,  -194,   -38,  -194,  -194,  -194,  -194,  -194,   -35,
     -35,    58,    58,   147,   147,   147,   147,    54,    54,    42,
      52,     1,    70,   106,    18,   398,  -194,   187,   473,    79,
    -194,    86,    91,  -194,  -194,  -194,  -194,  -194,  -194,  -194,
    -194,  -194,  -194,  -194,   813,  -194,   813,  -194,   813,   772,
     398,   398,   398,  -194,  -194,    96,   398,    97,   249,  -194,
    -194,   175,  -194,   398,   398,  -194,  -194,  -194
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    87,    93,    98,     0,    97,    95,    96,    94,    99,
     100,    86,   129,    85,    92,   130,     0,     0,    77,     2,
      88,    79,   101,    90,    91,     0,   102,   141,     0,     1,
     146,     0,   119,     0,    81,    83,   118,    78,    89,    80,
     105,     0,     0,   144,     0,   142,     0,     0,   120,     0,
       0,     0,   107,     0,   116,     0,     0,     0,   133,     0,
     126,     0,     0,     0,     0,   139,   147,    82,    83,     0,
       0,     0,     3,     4,     5,    24,    25,    26,    27,    28,
      23,     0,     0,     7,    17,    29,     0,    31,    35,    38,
      41,    46,    49,    51,    53,    55,    57,    59,    61,   121,
      84,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     3,   108,   168,    74,     0,   163,   115,     0,
     111,   167,   112,   164,   165,   166,   162,   106,   117,   151,
     156,   154,     0,   152,   149,    29,    76,     0,     0,   132,
     104,   127,     0,   136,     0,   134,   140,   145,   143,     0,
      21,     0,    18,    19,     0,     0,   131,   124,     0,    13,
      14,     0,     0,     0,     0,    67,    68,    64,    65,    66,
      70,    69,    71,    72,    73,    63,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   159,     0,   158,
       0,   170,     0,     0,     0,   160,     0,     0,     0,     0,
       0,     0,   169,   109,   114,   155,     0,   150,   148,   103,
     137,     0,     0,   128,     0,     6,     0,     0,   122,    12,
       9,     0,    15,     0,    11,    62,    32,    33,    34,    36,
      37,    39,    40,    45,    44,    43,    42,    47,    48,    50,
      52,    54,    56,    58,     0,     0,   180,     0,     0,     0,
     161,     0,     0,   157,   178,    75,   153,   138,   135,    22,
      30,   123,   125,    10,     0,     8,     0,   179,     0,     0,
       0,     0,     0,    16,    60,     0,     0,     0,   171,   173,
     174,     0,   176,     0,     0,   175,   177,   172
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -194,  -194,  -194,  -194,  -194,   -50,  -194,   -72,    20,    16,
       2,    27,    71,    72,    75,    81,    84,  -194,   -55,   -49,
    -194,   -47,   -54,     4,  -194,   218,  -194,  -194,   247,     9,
    -194,  -194,    -4,   161,  -194,  -194,   -15,     7,   -79,  -194,
     229,   -44,  -194,   138,   -46,  -194,    66,  -194,   251,   225,
    -194,  -194,  -194,    78,  -194,  -100,  -193,  -194,  -194,  -194
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    16,    83,    84,   231,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,   115,
     176,   116,   137,    51,    33,    34,    18,    19,    20,    21,
      22,    23,   117,   118,   119,    53,    68,   201,   100,   158,
      59,    60,    25,   155,    61,   144,   145,    26,    44,    45,
      36,   131,   132,   133,   121,   122,   123,   124,   125,   126
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      99,   136,    35,   157,    17,   202,   135,    24,   136,   147,
     258,    29,   139,   135,   177,   141,    46,   195,    42,   150,
     152,   153,    37,    17,    30,    39,    24,    27,    30,    40,
     178,    52,    64,    99,   154,   156,   135,   275,    43,   211,
      65,    31,    54,   179,   180,    31,   143,   136,   198,   127,
      58,    57,   135,   196,    64,    32,    28,   120,    41,   130,
     128,   206,   146,    30,    63,   279,    58,    58,    58,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   225,
      31,   192,    55,   211,    56,   189,    66,   136,   220,   227,
      58,   142,   135,   190,   141,   211,    47,   228,   185,   186,
     256,   276,   154,   156,   154,    48,   236,   237,   238,   175,
     264,   211,   222,   232,   211,   215,   233,   187,   188,    49,
     212,   223,   191,   260,   181,   182,   120,   235,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   273,    58,   272,   254,
     274,   193,   280,   194,   270,   277,   211,   259,    58,   281,
     261,   262,   265,   211,   282,    69,   136,   267,   211,   291,
     293,   135,   203,   211,   211,   197,   135,   200,    99,   199,
     288,   289,   290,   204,    70,    71,   292,   243,   244,   245,
     246,   207,   208,   296,   297,   183,   184,   209,    72,   241,
     242,   239,   240,    73,   210,    74,   216,   143,    75,    76,
      77,    78,    79,    80,   217,    81,   247,   248,   221,   218,
     130,   284,   226,   229,   234,   283,   135,   257,   255,   205,
     269,   285,   287,     1,   101,   102,     2,   103,   104,   105,
       3,   263,     4,     5,   106,   107,     6,     7,   108,     8,
       9,    10,    69,    11,    12,   109,    13,    14,   110,   278,
     294,   295,   249,     2,   250,    67,    38,     3,   251,     4,
       5,    70,    71,     6,     7,   252,     8,     9,    10,   253,
     214,    12,   111,    15,    14,   112,   138,   224,   268,   148,
      73,     0,    74,    62,   266,    75,    76,    77,    78,    79,
      80,     0,    81,     0,     0,     0,     0,     0,     0,     0,
      15,     0,     0,     0,    50,   113,   114,     1,   101,   102,
       2,   103,   104,   105,     3,     0,     4,     5,   106,   107,
       6,     7,   108,     8,     9,    10,    69,    11,    12,   109,
      13,    14,   110,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    70,    71,     0,     0,   159,
     160,     0,     0,     0,     0,     0,   111,    15,   161,   112,
       0,     0,     0,     0,    73,     0,    74,     0,     0,    75,
      76,    77,    78,    79,    80,     0,    81,     0,     0,     0,
     162,     0,   163,     0,   164,     0,     0,     0,    50,   213,
     114,     1,   101,   102,     2,   103,   104,   105,     3,     0,
       4,     5,   106,   107,     6,     7,   108,     8,     9,    10,
      69,    11,    12,   109,    13,    14,   110,     0,     0,     0,
       0,     2,     0,     0,     0,     3,     0,     4,     5,    70,
      71,     6,     7,     0,     8,     9,    10,     0,     0,    12,
     111,    15,    14,   112,     0,     0,     0,     0,    73,     0,
      74,     0,     0,    75,    76,    77,    78,    79,    80,     0,
      81,     0,     0,     0,     0,     0,     1,     0,    15,     2,
       0,     0,    50,     3,   114,     4,     5,     0,     0,     6,
       7,     0,     8,     9,    10,    69,    11,    12,     0,    13,
      14,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     140,     0,     0,     0,    70,    71,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    15,     0,    72,     0,
       0,     0,     0,    73,     0,    74,     0,     0,    75,    76,
      77,    78,    79,    80,     1,    81,     0,     2,     0,     0,
       0,     3,     0,     4,     5,     0,     0,     6,     7,   114,
       8,     9,    10,     1,    11,    12,     2,    13,    14,     0,
       3,     0,     4,     5,     0,     0,     6,     7,     0,     8,
       9,    10,     0,    11,    12,     2,    13,    14,     0,     3,
       0,     4,     5,     0,    15,     6,     7,     0,     8,     9,
      10,     0,     0,    12,     0,     0,    14,     0,     0,     0,
       0,     0,    49,    15,     0,     0,     0,     1,     0,     0,
       2,     0,     0,     0,     3,    50,     4,     5,     0,     0,
       6,     7,    15,     8,     9,    10,     0,    11,    12,     2,
      13,    14,     0,     3,    50,     4,     5,     0,     0,     6,
       7,     0,     8,     9,    10,    69,     0,    12,     0,     0,
      14,     0,     0,     0,   219,     0,     0,    15,     0,     0,
       0,    69,     0,     0,    70,    71,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    15,   129,    72,     0,
      70,    71,     0,    73,     0,    74,     0,     0,    75,    76,
      77,    78,    79,    80,    72,    81,    69,     0,     0,    73,
       0,    74,     0,     0,    75,    76,    77,    78,    79,    80,
       0,    81,     0,     0,     0,    70,    71,     0,     0,     0,
       0,     0,     0,    82,   271,     0,     0,     0,    69,    72,
       0,     0,     0,     0,    73,     0,    74,     0,     0,    75,
      76,    77,    78,    79,    80,     0,    81,    70,    71,     0,
      69,     0,     0,     0,     0,     0,     0,     0,    82,     0,
       0,    72,     0,     0,     0,     0,    73,     0,    74,    70,
      71,    75,    76,    77,    78,    79,    80,     0,    81,     0,
       0,   134,     0,    72,    69,     0,     0,     0,    73,     0,
      74,     0,     0,    75,    76,    77,    78,    79,    80,     0,
      81,   230,     0,    70,    71,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    72,     0,     0,
       0,     0,    73,     0,    74,    69,     0,    75,    76,    77,
      78,    79,    80,     1,    81,   286,     2,     0,     0,     0,
       3,    69,     4,     5,    70,    71,     6,     7,     0,     8,
       9,    10,     0,    11,    12,     0,    13,    14,    72,     0,
      70,    71,     0,    73,     0,    74,     0,     0,    75,    76,
      77,    78,    79,    80,    72,    81,    69,     0,     0,    73,
       0,    74,     0,    15,    75,    76,    77,    78,    79,    80,
       0,   149,     0,     0,     0,    70,    71,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    72,
       0,     0,     0,     0,    73,     0,    74,     0,     0,    75,
      76,    77,    78,    79,    80,     0,   151
};

static const yytype_int16 yycheck[] =
{
      49,    56,    17,    82,     0,   105,    56,     0,    63,    63,
     203,     0,    58,    63,    86,    59,    31,    46,    84,    69,
      70,    71,    18,    19,    55,    21,    19,    55,    55,    55,
      65,    35,    77,    82,    81,    81,    86,    75,    55,    77,
      85,    72,    35,    78,    79,    72,    61,   102,   102,    53,
      41,    84,   102,    82,    77,    86,    84,    50,    84,    55,
      53,   108,    85,    55,    71,   258,    57,    58,    59,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    73,
      72,    80,    72,    77,    74,    43,    73,   142,   142,    77,
      81,    83,   142,    51,   138,    77,    77,    85,    44,    45,
     200,    83,   149,   149,   151,    86,   178,   179,   180,    71,
     210,    77,    77,   162,    77,   130,   163,    63,    64,    71,
      86,    86,    70,    86,    66,    67,   119,   176,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,    73,   138,   227,   196,
      77,    81,    73,    47,   226,   255,    77,   204,   149,    73,
     207,   208,   211,    77,    73,    22,   221,   221,    77,    73,
      73,   221,    72,    77,    77,    86,   226,    83,   227,    86,
     280,   281,   282,    72,    41,    42,   286,   185,   186,   187,
     188,    72,    72,   293,   294,    48,    49,    55,    55,   183,
     184,   181,   182,    60,    83,    62,    77,   222,    65,    66,
      67,    68,    69,    70,    73,    72,   189,   190,    83,    75,
     216,   276,    73,    55,    55,   274,   276,    28,    83,    86,
      73,   278,   279,     3,     4,     5,     6,     7,     8,     9,
      10,    86,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    72,
      11,    86,   191,     6,   192,    47,    19,    10,   193,    12,
      13,    41,    42,    16,    17,   194,    19,    20,    21,   195,
     119,    24,    52,    53,    27,    55,    57,   149,   222,    64,
      60,    -1,    62,    42,   216,    65,    66,    67,    68,    69,
      70,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    84,    85,    86,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    42,    -1,    -1,    41,
      42,    -1,    -1,    -1,    -1,    -1,    52,    53,    50,    55,
      -1,    -1,    -1,    -1,    60,    -1,    62,    -1,    -1,    65,
      66,    67,    68,    69,    70,    -1,    72,    -1,    -1,    -1,
      72,    -1,    74,    -1,    76,    -1,    -1,    -1,    84,    85,
      86,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,     6,    -1,    -1,    -1,    10,    -1,    12,    13,    41,
      42,    16,    17,    -1,    19,    20,    21,    -1,    -1,    24,
      52,    53,    27,    55,    -1,    -1,    -1,    -1,    60,    -1,
      62,    -1,    -1,    65,    66,    67,    68,    69,    70,    -1,
      72,    -1,    -1,    -1,    -1,    -1,     3,    -1,    53,     6,
      -1,    -1,    84,    10,    86,    12,    13,    -1,    -1,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    -1,    26,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    -1,    -1,    41,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    55,    -1,
      -1,    -1,    -1,    60,    -1,    62,    -1,    -1,    65,    66,
      67,    68,    69,    70,     3,    72,    -1,     6,    -1,    -1,
      -1,    10,    -1,    12,    13,    -1,    -1,    16,    17,    86,
      19,    20,    21,     3,    23,    24,     6,    26,    27,    -1,
      10,    -1,    12,    13,    -1,    -1,    16,    17,    -1,    19,
      20,    21,    -1,    23,    24,     6,    26,    27,    -1,    10,
      -1,    12,    13,    -1,    53,    16,    17,    -1,    19,    20,
      21,    -1,    -1,    24,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    71,    53,    -1,    -1,    -1,     3,    -1,    -1,
       6,    -1,    -1,    -1,    10,    84,    12,    13,    -1,    -1,
      16,    17,    53,    19,    20,    21,    -1,    23,    24,     6,
      26,    27,    -1,    10,    84,    12,    13,    -1,    -1,    16,
      17,    -1,    19,    20,    21,    22,    -1,    24,    -1,    -1,
      27,    -1,    -1,    -1,    85,    -1,    -1,    53,    -1,    -1,
      -1,    22,    -1,    -1,    41,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    73,    55,    -1,
      41,    42,    -1,    60,    -1,    62,    -1,    -1,    65,    66,
      67,    68,    69,    70,    55,    72,    22,    -1,    -1,    60,
      -1,    62,    -1,    -1,    65,    66,    67,    68,    69,    70,
      -1,    72,    -1,    -1,    -1,    41,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    85,    -1,    -1,    -1,    22,    55,
      -1,    -1,    -1,    -1,    60,    -1,    62,    -1,    -1,    65,
      66,    67,    68,    69,    70,    -1,    72,    41,    42,    -1,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      -1,    55,    -1,    -1,    -1,    -1,    60,    -1,    62,    41,
      42,    65,    66,    67,    68,    69,    70,    -1,    72,    -1,
      -1,    75,    -1,    55,    22,    -1,    -1,    -1,    60,    -1,
      62,    -1,    -1,    65,    66,    67,    68,    69,    70,    -1,
      72,    73,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,
      -1,    -1,    60,    -1,    62,    22,    -1,    65,    66,    67,
      68,    69,    70,     3,    72,    73,     6,    -1,    -1,    -1,
      10,    22,    12,    13,    41,    42,    16,    17,    -1,    19,
      20,    21,    -1,    23,    24,    -1,    26,    27,    55,    -1,
      41,    42,    -1,    60,    -1,    62,    -1,    -1,    65,    66,
      67,    68,    69,    70,    55,    72,    22,    -1,    -1,    60,
      -1,    62,    -1,    53,    65,    66,    67,    68,    69,    70,
      -1,    72,    -1,    -1,    -1,    41,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    -1,    -1,    -1,    60,    -1,    62,    -1,    -1,    65,
      66,    67,    68,    69,    70,    -1,    72
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,    10,    12,    13,    16,    17,    19,    20,
      21,    23,    24,    26,    27,    53,    88,   110,   113,   114,
     115,   116,   117,   118,   124,   129,   134,    55,    84,     0,
      55,    72,    86,   111,   112,   123,   137,   110,   115,   110,
      55,    84,    84,    55,   135,   136,   123,    77,    86,    71,
      84,   110,   119,   122,   124,    72,    74,    84,   116,   127,
     128,   131,   135,    71,    77,    85,    73,   112,   123,    22,
      41,    42,    55,    60,    62,    65,    66,    67,    68,    69,
      70,    72,    84,    89,    90,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     125,     4,     5,     7,     8,     9,    14,    15,    18,    25,
      28,    52,    55,    85,    86,   106,   108,   119,   120,   121,
     124,   141,   142,   143,   144,   145,   146,   119,   124,    73,
     110,   138,   139,   140,    75,    92,   105,   109,   127,   131,
      85,   128,    83,   123,   132,   133,    85,   109,   136,    72,
      92,    72,    92,    92,   108,   130,   131,   125,   126,    41,
      42,    50,    72,    74,    76,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    71,   107,    94,    65,    78,
      79,    66,    67,    48,    49,    44,    45,    63,    64,    43,
      51,    70,    80,    81,    47,    46,    82,    86,   109,    86,
      83,   124,   142,    72,    72,    86,   108,    72,    72,    55,
      83,    77,    86,    85,   120,   123,    77,    73,    75,    85,
     109,    83,    77,    86,   130,    73,    73,    77,    85,    55,
      73,    91,   106,   108,    55,   106,    94,    94,    94,    95,
      95,    96,    96,    97,    97,    97,    97,    98,    98,    99,
     100,   101,   102,   103,   108,    83,   142,    28,   143,   108,
      86,   108,   108,    86,   142,   106,   140,   109,   133,    73,
      94,    85,   125,    73,    77,    75,    83,   142,    72,   143,
      73,    73,    73,   106,   105,   108,    73,   108,   142,   142,
     142,    73,   142,    73,    11,    86,   142,   142
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    89,    89,    89,    89,    90,    90,    90,
      90,    90,    90,    90,    90,    91,    91,    92,    92,    92,
      92,    92,    92,    93,    93,    93,    93,    93,    93,    94,
      94,    95,    95,    95,    95,    96,    96,    96,    97,    97,
      97,    98,    98,    98,    98,    98,    99,    99,    99,   100,
     100,   101,   101,   102,   102,   103,   103,   104,   104,   105,
     105,   106,   106,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   108,   108,   109,   110,   110,   110,
     110,   111,   111,   112,   112,   113,   113,   113,   114,   114,
     115,   115,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   116,   116,   117,   117,   117,   118,   118,   119,   119,
     120,   120,   120,   121,   121,   121,   122,   122,   123,   124,
     124,   125,   125,   125,   126,   126,   127,   127,   128,   129,
     129,   130,   131,   131,   132,   132,   133,   133,   133,   134,
     134,   134,   135,   135,   136,   136,   137,   137,   137,   137,
     137,   137,   138,   138,   139,   140,   140,   141,   141,   141,
     141,   141,   142,   142,   142,   142,   142,   142,   143,   143,
     143,   144,   144,   144,   145,   145,   145,   145,   146,   146,
     146
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     3,     1,     4,     3,
       4,     3,     3,     2,     2,     1,     3,     1,     2,     2,
       2,     2,     4,     1,     1,     1,     1,     1,     1,     1,
       4,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       5,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     2,     1,
       2,     1,     3,     1,     3,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     5,     4,     2,     4,     3,     2,     3,
       0,     1,     1,     0,     2,     1,     1,     2,     1,     2,
       3,     1,     3,     4,     1,     3,     1,     2,     3,     1,
       1,     1,     2,     1,     1,     3,     1,     2,     3,     4,
       5,     2,     1,     3,     1,     3,     1,     3,     4,     3,
       4,     3,     1,     3,     1,     2,     1,     3,     2,     2,
       2,     3,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     5,     7,     5,     5,     7,     6,     7,     3,     4,
       3
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
#line 1653 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 46 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new primary_expression(1,(yyvsp[0].str));}
#line 1659 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 49 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new primary_expression(2,(yyvsp[0].str));}
#line 1665 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 50 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new primary_expression(3,(yyvsp[0].str));}
#line 1671 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 51 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new primary_expression(4,(yyvsp[-1].node));}
#line 1677 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 55 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1683 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 56 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new postfix_expression(1,(yyvsp[-3].node),(yyvsp[-1].node));}
#line 1689 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 57 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new postfix_expression(2,(yyvsp[-2].node));}
#line 1695 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 58 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new postfix_expression(3,(yyvsp[-3].node),(yyvsp[-1].node));}
#line 1701 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 59 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new postfix_expression(4,(yyvsp[-2].node),(yyvsp[0].str));}
#line 1707 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 60 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new postfix_expression(5,(yyvsp[-2].node),(yyvsp[0].str));}
#line 1713 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 61 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new postfix_expression(6,(yyvsp[-1].node));}
#line 1719 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 62 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new postfix_expression(7,(yyvsp[-1].node));}
#line 1725 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 66 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) =new argument_expression_list(1,NULL,(yyvsp[0].node));}
#line 1731 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 67 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new argument_expression_list(1,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1737 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 71 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1743 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 72 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new unary_expression(1,(yyvsp[0].node));}
#line 1749 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 73 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new unary_expression(2,(yyvsp[0].node));}
#line 1755 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 74 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new unary_expression(3,(yyvsp[-1].str),(yyvsp[0].node));}
#line 1761 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 75 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new unary_expression(4,(yyvsp[-1].str),(yyvsp[0].node));}
#line 1767 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 76 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new unary_expression(5,(yyvsp[-3].str),(yyvsp[-1].node));}
#line 1773 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 80 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string("&");}
#line 1779 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 81 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string("*");}
#line 1785 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 82 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string("+");}
#line 1791 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 83 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string("-");}
#line 1797 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 84 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string("~");}
#line 1803 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 85 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string("!");}
#line 1809 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 89 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1815 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 90 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new cast_expression((yyvsp[-2].node),(yyvsp[0].node));}
#line 1821 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 94 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1827 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 95 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new multiplicative_expression(1,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1833 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 96 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new multiplicative_expression(2,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1839 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 97 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new multiplicative_expression(3,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1845 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 101 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1851 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 102 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new additive_expression(1,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1857 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 103 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new additive_expression(2,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1863 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 107 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1869 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 108 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new shift_expression(1,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1875 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 109 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new shift_expression(2,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1881 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 113 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1887 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 114 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new relational_expression(1,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1893 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 115 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new relational_expression(2,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1899 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 116 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new relational_expression(3,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1905 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 117 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new relational_expression(4,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1911 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 122 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1917 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 123 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new equality_expression(1,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1923 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 124 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new equality_expression(2,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1929 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 128 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1935 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 129 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new and_expression((yyvsp[-2].node),(yyvsp[0].node));}
#line 1941 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 133 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1947 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 134 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new exclusive_or_expression((yyvsp[-2].node),(yyvsp[0].node));}
#line 1953 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 138 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1959 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 139 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new inclusive_or_expression((yyvsp[-2].node),(yyvsp[0].node));}
#line 1965 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 143 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1971 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 144 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new logical_and_expression((yyvsp[-2].node),(yyvsp[0].node));}
#line 1977 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 148 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1983 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 149 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new logical_or_expression((yyvsp[-2].node),(yyvsp[0].node));}
#line 1989 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 153 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1995 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 154 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new conditional_expression((yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node));}
#line 2001 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 158 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2007 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 159 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new assignment_expression((yyvsp[-2].node),(yyvsp[-1].str),(yyvsp[0].node));}
#line 2013 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 163 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string ("=");}
#line 2019 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 164 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string ("*=");}
#line 2025 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 165 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string ("/=");}
#line 2031 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 166 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string ("%=");}
#line 2037 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 167 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string ("+=");}
#line 2043 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 168 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string ("-=");}
#line 2049 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 169 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string ("<<=");}
#line 2055 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 170 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string (">>=");}
#line 2061 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 171 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string ("&=");}
#line 2067 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 172 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string ("^=");}
#line 2073 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 173 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string ("|=");}
#line 2079 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 177 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2085 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 178 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new expression((yyvsp[-2].node),(yyvsp[0].node));}
#line 2091 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 182 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2097 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 186 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2103 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 187 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new declaration_specifiers(1,(yyvsp[-1].node),(yyvsp[0].node),NULL);}
#line 2109 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 188 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2115 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 189 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new declaration_specifiers(2,(yyvsp[-1].node),NULL,(yyvsp[0].node));}
#line 2121 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 196 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2127 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 197 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new init_declarator_list((yyvsp[-2].node),(yyvsp[0].node));}
#line 2133 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 201 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new init_declarator((yyvsp[0].node),NULL);}
#line 2139 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 202 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new init_declarator((yyvsp[-2].node),(yyvsp[0].node));}
#line 2145 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 206 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new storage_class_specifier((yyvsp[0].str));}
#line 2151 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 208 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new storage_class_specifier((yyvsp[0].str));}
#line 2157 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 209 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new storage_class_specifier((yyvsp[0].str));}
#line 2163 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 212 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new translation_unit(1,(yyvsp[0].node));}
#line 2169 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 213 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new translation_unit(2,(yyvsp[-1].node),(yyvsp[0].node));}
#line 2175 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 217 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new external_declaration(1,(yyvsp[0].node));}
#line 2181 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 218 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new external_declaration(2,(yyvsp[0].node));}
#line 2187 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 222 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new type_specifier(1);}
#line 2193 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 223 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new type_specifier(2);}
#line 2199 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 224 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new type_specifier(3);}
#line 2205 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 225 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new type_specifier(4);}
#line 2211 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 226 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new type_specifier(5);}
#line 2217 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 227 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new type_specifier(6);}
#line 2223 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 228 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new type_specifier(7);}
#line 2229 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 229 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new type_specifier(8);}
#line 2235 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 230 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new type_specifier(9);}
#line 2241 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 231 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2247 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 232 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2253 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 237 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new struct_or_union_specifier(1,(yyvsp[-4].node),(yyvsp[-3].str),(yyvsp[-1].node));}
#line 2259 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 238 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new struct_or_union_specifier(2,(yyvsp[-3].node),NULL,(yyvsp[-1].node));}
#line 2265 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 239 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new struct_or_union_specifier(3,(yyvsp[-1].node),(yyvsp[0].str),NULL);}
#line 2271 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 243 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new function_definition(1,(yyvsp[-3].node),(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 2277 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 244 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new function_definition(2,(yyvsp[-2].node),(yyvsp[-1].node),NULL,(yyvsp[0].node));}
#line 2283 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 269 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new compound_statement(1,NULL); }
#line 2289 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 270 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new compound_statement(2,(yyvsp[-1].node)); }
#line 2295 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 274 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2301 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 275 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2307 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 278 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new block_item_list(1,(yyvsp[-1].node),(yyvsp[0].node));}
#line 2313 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 279 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2319 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 282 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) =  (yyvsp[0].node);}
#line 2325 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 283 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new declaration_list(1,(yyvsp[0].node), (yyvsp[-1].node));}
#line 2331 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 288 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2337 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 292 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 2343 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 293 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new declaration(1,(yyvsp[-2].node), (yyvsp[-1].node));}
#line 2349 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 297 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2355 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 298 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 2361 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 299 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-2].node);}
#line 2367 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 303 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2373 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 304 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) =new initializer_list(2,(yyvsp[0].node),(yyvsp[-2].node));}
#line 2379 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 308 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2385 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 309 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new struct_declaration_list(1,(yyvsp[0].node), (yyvsp[-1].node));}
#line 2391 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 313 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new struct_declaration(1,(yyvsp[-2].node), (yyvsp[-1].node));}
#line 2397 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 317 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new struct_or_union(1, (yyvsp[0].str)) ;}
#line 2403 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 318 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new struct_or_union(2, (yyvsp[0].str)) ;}
#line 2409 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 322 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2415 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 328 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new specifier_qualifier_list(1,(yyvsp[-1].node),(yyvsp[0].node),NULL);}
#line 2421 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 329 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2427 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 335 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2433 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 336 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new struct_declarator_list(1,(yyvsp[0].node),(yyvsp[-2].node));}
#line 2439 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 340 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2445 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 341 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2451 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 342 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new struct_declarator(1,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2457 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 346 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new enum_specifier(1,(yyvsp[-3].str),NULL,(yyvsp[-1].node));}
#line 2463 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 347 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new enum_specifier(2,(yyvsp[-4].str),(yyvsp[-3].str),(yyvsp[-1].node));}
#line 2469 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 348 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new enum_specifier(3,(yyvsp[-1].str),(yyvsp[0].str),NULL);}
#line 2475 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 351 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2481 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 352 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new enumerator_list(1,(yyvsp[0].node),(yyvsp[-2].node));}
#line 2487 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 356 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new enumerator(1,(yyvsp[0].str),NULL);}
#line 2493 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 357 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new enumerator(2,(yyvsp[-2].str),(yyvsp[0].node));}
#line 2499 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 373 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new direct_declarator(1,(yyvsp[0].str),NULL,NULL,NULL,NULL);}
#line 2505 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 374 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new direct_declarator(2,NULL,NULL,(yyvsp[-1].node),NULL,NULL);}
#line 2511 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 375 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new direct_declarator(3,NULL,(yyvsp[-3].node),NULL,(yyvsp[-1].node),NULL);}
#line 2517 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 376 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new direct_declarator(4,NULL,(yyvsp[-2].node),NULL,NULL,NULL);}
#line 2523 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 377 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new direct_declarator(5,NULL,(yyvsp[-3].node),NULL,NULL,(yyvsp[-1].node));}
#line 2529 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 379 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new direct_declarator(6,NULL,(yyvsp[-2].node),NULL,NULL,NULL);}
#line 2535 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 384 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2541 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 385 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new parameter_list(1,(yyvsp[0].node),(yyvsp[-2].node));}
#line 2547 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 388 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2553 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 392 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new parameter_declaration(1,(yyvsp[-1].node),(yyvsp[0].node),NULL);}
#line 2559 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 394 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new parameter_declaration(2,(yyvsp[0].node),NULL,NULL);}
#line 2565 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 410 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new jump_statement(1,(yyvsp[-1].str),(yyvsp[-2].str),NULL);}
#line 2571 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 411 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new jump_statement(2,(yyvsp[-1].str),NULL,NULL);}
#line 2577 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 412 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new jump_statement(3,(yyvsp[-1].str),NULL,NULL);}
#line 2583 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 413 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new jump_statement(4,(yyvsp[-1].str),NULL,NULL);}
#line 2589 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 414 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new jump_statement(5,(yyvsp[-2].str),NULL,(yyvsp[-1].node));}
#line 2595 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 418 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2601 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 419 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2607 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 420 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2613 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 421 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2619 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 422 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2625 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 423 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2631 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 432 "src/parser.y" /* yacc.c:1646  */
    {/*$$ = new expression_statement();*/}
#line 2637 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 433 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new expression_statement((yyvsp[-1].node));}
#line 2643 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 434 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2649 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 438 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new selection_statement(1,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2655 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 439 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new selection_statement(2,(yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node));}
#line 2661 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 440 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new selection_statement(3,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2667 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 444 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new iteration_statement(1,(yyvsp[-2].node),(yyvsp[0].node),NULL,NULL);}
#line 2673 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 445 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new iteration_statement(2,(yyvsp[-2].node),(yyvsp[-5].node),NULL,NULL);}
#line 2679 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 446 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new iteration_statement(3,(yyvsp[0].node),NULL,(yyvsp[-3].node),(yyvsp[-2].node));}
#line 2685 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 447 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new iteration_statement(4,(yyvsp[0].node),(yyvsp[-2].node),(yyvsp[-4].node),(yyvsp[-3].node));}
#line 2691 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 451 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new labeled_statement(1,(yyvsp[-2].str),NULL,NULL,(yyvsp[0].node));}
#line 2697 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 452 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new labeled_statement(2,NULL,(yyvsp[-3].str),(yyvsp[-2].node),(yyvsp[0].node));}
#line 2703 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 453 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new labeled_statement(3,NULL,(yyvsp[-2].str),NULL,(yyvsp[0].node));}
#line 2709 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;


#line 2713 "src/parser.tab.cpp" /* yacc.c:1646  */
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
#line 462 "src/parser.y" /* yacc.c:1906  */


const Node *g_root; // Definition of variable (to match declaration earlier)

const Node *parseAST()
{
  g_root=0;
  yyparse();
  return g_root;
}
