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
#define YYLAST   862

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  89
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  179
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  299

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
     109,   113,   114,   115,   116,   117,   122,   123,   124,   128,
     129,   133,   134,   138,   139,   143,   144,   148,   149,   153,
     154,   158,   159,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   177,   178,   182,   186,   187,   188,
     189,   196,   197,   201,   202,   206,   208,   209,   212,   213,
     217,   218,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   237,   238,   239,   243,   244,   269,   270,
     273,   274,   275,   277,   278,   279,   282,   283,   288,   292,
     293,   297,   298,   299,   303,   304,   310,   311,   315,   319,
     320,   324,   330,   331,   337,   338,   342,   343,   344,   348,
     349,   350,   353,   354,   358,   359,   375,   376,   377,   378,
     379,   381,   386,   387,   390,   394,   396,   412,   413,   414,
     415,   416,   420,   421,   422,   423,   424,   425,   434,   435,
     439,   440,   441,   445,   446,   447,   448,   452,   453,   454
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
  "'['", "']'", "'.'", "','", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'",
  "'?'", "':'", "'{'", "'}'", "';'", "$accept", "ROOT",
  "primary_expression", "postfix_expression", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "storage_class_specifier",
  "translation_unit", "external_declaration", "type_specifier",
  "struct_or_union_specifier", "function_definition", "compound_statement",
  "block_item", "block_item_list", "declaration_list", "declarator",
  "declaration", "initializer", "initializer_list",
  "struct_declaration_list", "struct_declaration", "struct_or_union",
  "type_name", "specifier_qualifier_list", "struct_declarator_list",
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
      60,    62,    94,   124,    63,    58,   123,   125,    59
};
# endif

#define YYPACT_NINF -188

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-188)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     766,  -188,  -188,  -188,   -23,  -188,  -188,  -188,  -188,  -188,
    -188,  -188,  -188,  -188,  -188,  -188,    10,   -31,   766,   766,
    -188,   766,  -188,  -188,  -188,   -12,  -188,   -60,    33,  -188,
    -188,    11,  -188,   -35,  -188,   419,    48,  -188,  -188,  -188,
     -48,   258,    33,    20,   -37,  -188,    21,    11,  -188,   622,
     231,   -31,  -188,   476,  -188,    52,   644,   258,   258,   498,
    -188,   -18,    46,   739,    33,  -188,  -188,  -188,    38,   755,
     790,   790,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,
    -188,   537,   622,  -188,   352,   600,   739,  -188,    17,   128,
      67,    36,   -34,    51,    84,    88,   127,    -7,  -188,  -188,
    -188,    94,   739,   108,    91,   392,   106,   126,   142,   129,
     131,   150,   135,  -188,  -188,  -188,     9,  -188,  -188,   317,
    -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,
      11,   136,   148,  -188,  -188,  -188,  -188,   151,   514,  -188,
    -188,  -188,   739,   138,    13,  -188,  -188,  -188,  -188,   537,
    -188,   739,  -188,  -188,   -17,   152,  -188,  -188,    47,  -188,
    -188,   173,   676,   739,   174,  -188,  -188,  -188,  -188,  -188,
    -188,  -188,  -188,  -188,  -188,  -188,   739,  -188,   739,   739,
     739,   739,   739,   162,   179,   739,   739,   739,   739,   739,
     739,   739,   739,   739,   739,   739,   739,  -188,   146,  -188,
     392,   233,   553,   739,  -188,    29,   739,   739,   175,   392,
     739,  -188,  -188,  -188,  -188,   766,  -188,  -188,  -188,  -188,
     739,   -18,  -188,   189,  -188,   739,   588,  -188,  -188,  -188,
      12,  -188,    78,  -188,  -188,  -188,  -188,  -188,    17,    17,
     739,   739,    67,    67,    67,    67,    36,    36,   -34,    51,
      84,    88,   127,    41,   392,  -188,   193,   553,    73,  -188,
      81,    90,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,
    -188,  -188,  -188,   739,  -188,   128,   128,   739,  -188,   739,
     698,   392,   392,   392,  -188,  -188,    95,   392,    96,   255,
    -188,  -188,   181,  -188,   392,   392,  -188,  -188,  -188
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
       0,     0,     0,     0,   160,     0,     0,     0,     0,     0,
       0,   169,   109,   114,   155,     0,   150,   148,   103,   137,
       0,     0,   128,     0,     6,     0,     0,   122,    12,     9,
       0,    15,     0,    11,    62,    32,    33,    34,    36,    37,
       0,     0,    45,    44,    43,    42,    47,    48,    50,    52,
      54,    56,    58,     0,     0,   179,     0,     0,     0,   161,
       0,     0,   157,   177,    75,   153,   138,   135,    22,    30,
     123,   125,    10,     0,     8,    39,    40,     0,   178,     0,
       0,     0,     0,     0,    16,    60,     0,     0,     0,   170,
     172,   173,     0,   175,     0,     0,   174,   176,   171
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -188,  -188,  -188,  -188,  -188,   -50,  -188,   -68,    18,   -25,
       1,    28,    76,    89,    83,    86,    92,  -188,   -55,   -49,
    -188,   -47,   -58,     4,  -188,   241,  -188,  -188,   270,   -30,
    -188,  -188,    -4,   171,  -188,  -188,   -15,    -5,   -75,  -188,
     235,   -45,  -188,   145,   -46,  -188,    74,  -188,   260,   240,
    -188,  -188,  -188,    93,  -188,  -102,  -187,  -188,  -188,  -188
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    16,    83,    84,   230,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,   115,
     176,   116,   137,    51,    33,    34,    18,    19,    20,    21,
      22,    23,   117,   118,   119,    53,    68,    24,   100,   158,
      59,    60,    25,   155,    61,   144,   145,    26,    44,    45,
      36,   131,   132,   133,   121,   122,   123,   124,   125,   126
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      99,   136,    35,   201,    17,   147,   135,   157,   136,   189,
      29,    58,   139,   135,   141,   257,    46,   190,   177,   150,
     152,   153,    37,    17,    30,    39,    42,    58,    58,    58,
      54,    52,    27,    99,   154,   156,   135,    30,    57,   195,
      64,    31,    47,    40,   198,   120,   143,   136,   128,   127,
      65,    58,   135,    48,    31,     1,   224,    32,     2,   130,
     210,   205,     3,    28,     4,     5,    30,   142,     6,     7,
     280,     8,     9,    10,    41,    11,    12,   196,    13,    14,
     185,   186,   178,    31,   219,   272,   210,   136,    43,   273,
     221,    63,   135,   141,    66,   179,   180,   211,   255,   187,
     188,   222,   154,   156,   154,    15,   210,   263,    58,    49,
     235,   236,   237,   231,   120,   214,   232,   259,   210,    58,
      55,   191,    56,    64,   226,   129,   277,   234,   135,   135,
     135,   135,   135,   146,   227,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   281,   183,   184,   253,
     210,   271,   278,   274,   282,   210,   258,   269,   210,   260,
     261,   264,   266,   283,    69,   136,   192,   210,   292,   294,
     135,   193,   210,   210,   194,   135,   200,    99,   202,   289,
     290,   291,   197,    70,    71,   293,   242,   243,   244,   245,
     135,   135,   297,   298,   181,   182,   199,    72,   203,   238,
     239,   206,    73,   207,    74,   208,   143,    75,    76,    77,
      78,    79,    80,   215,    81,   275,   276,   246,   247,   130,
     209,   216,   285,   220,   284,   225,   217,   135,   228,   233,
     204,   254,   286,   288,     1,   101,   102,     2,   103,   104,
     105,     3,   240,     4,     5,   106,   107,     6,     7,   108,
       8,     9,    10,    69,    11,    12,   109,    13,    14,   110,
     241,   256,   268,   262,     2,   279,   295,   248,     3,   296,
       4,     5,    70,    71,     6,     7,   250,     8,     9,    10,
     251,   249,    12,   111,    15,    14,   112,   252,    67,    38,
     213,    73,   138,    74,   223,   267,    75,    76,    77,    78,
      79,    80,    62,    81,   148,     0,     0,     0,   265,     0,
       0,    15,     0,     0,     0,     0,     0,    50,   113,   114,
       1,   101,   102,     2,   103,   104,   105,     3,     0,     4,
       5,   106,   107,     6,     7,   108,     8,     9,    10,    69,
      11,    12,   109,    13,    14,   110,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    70,    71,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   111,
      15,     0,   112,     0,     0,     0,     0,    73,     0,    74,
       0,     0,    75,    76,    77,    78,    79,    80,     0,    81,
       0,     0,     0,   159,   160,     0,   101,   102,     0,   103,
     104,   105,   161,    50,   212,   114,   106,   107,     0,     0,
     108,     0,     0,     0,    69,     0,     0,   109,     0,     0,
     110,     0,     1,     0,   162,     2,   163,     0,   164,     3,
       0,     4,     5,    70,    71,     6,     7,     0,     8,     9,
      10,     0,    11,    12,   111,    13,    14,   112,     0,     0,
       0,     0,    73,     0,    74,     0,     0,    75,    76,    77,
      78,    79,    80,     0,    81,     0,     0,     0,     0,     0,
       0,     0,    15,     0,     0,     0,     0,     0,    50,     1,
     114,     0,     2,     0,     0,     0,     3,     0,     4,     5,
      49,     0,     6,     7,     0,     8,     9,    10,     0,    11,
      12,     0,    13,    14,     2,    50,     0,     0,     3,     0,
       4,     5,     0,     0,     6,     7,     0,     8,     9,    10,
       2,     0,    12,     0,     3,    14,     4,     5,     0,    15,
       6,     7,     0,     8,     9,    10,     0,     0,    12,     0,
       0,    14,     0,     2,     0,     0,     0,     3,     0,     4,
       5,    15,     0,     6,     7,     0,     8,     9,    10,    69,
       0,    12,    50,     0,    14,     0,     0,    15,     0,     0,
       0,     0,     0,     0,     0,    69,     0,     0,    70,    71,
       0,     0,     0,     0,     0,   140,     0,     0,     0,     0,
      15,     0,    72,     0,    70,    71,     0,    73,     0,    74,
       0,   218,    75,    76,    77,    78,    79,    80,    72,    81,
      69,     0,     0,    73,     0,    74,     0,     0,    75,    76,
      77,    78,    79,    80,     0,    81,     0,     0,     0,    70,
      71,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   114,     0,    72,    69,     0,     0,     0,    73,     0,
      74,     0,     0,    75,    76,    77,    78,    79,    80,     0,
      81,     0,     0,    70,    71,     0,    69,     0,     0,     0,
       0,   175,     0,     0,    82,   270,     0,    72,     0,     0,
       0,     0,    73,     0,    74,    70,    71,    75,    76,    77,
      78,    79,    80,     0,    81,     0,     0,     0,    69,    72,
       0,     0,     0,     0,    73,     0,    74,     0,    82,    75,
      76,    77,    78,    79,    80,     0,    81,    70,    71,   134,
      69,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    72,     0,     0,     0,     0,    73,     0,    74,    70,
      71,    75,    76,    77,    78,    79,    80,     0,    81,   229,
       0,     0,     0,    72,     0,     0,     0,     0,    73,     0,
      74,    69,     0,    75,    76,    77,    78,    79,    80,     1,
      81,   287,     2,     0,     0,     0,     3,    69,     4,     5,
      70,    71,     6,     7,     0,     8,     9,    10,     0,    11,
      12,     0,    13,    14,    72,     0,    70,    71,     0,    73,
       0,    74,     0,     0,    75,    76,    77,    78,    79,    80,
      72,    81,    69,     0,     0,    73,     0,    74,     0,    15,
      75,    76,    77,    78,    79,    80,     0,   149,     0,     0,
       0,    70,    71,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    72,     0,     0,     0,     0,
      73,     0,    74,     0,     0,    75,    76,    77,    78,    79,
      80,     0,   151
};

static const yytype_int16 yycheck[] =
{
      49,    56,    17,   105,     0,    63,    56,    82,    63,    43,
       0,    41,    58,    63,    59,   202,    31,    51,    86,    69,
      70,    71,    18,    19,    55,    21,    86,    57,    58,    59,
      35,    35,    55,    82,    81,    81,    86,    55,    86,    46,
      77,    72,    77,    55,   102,    50,    61,   102,    53,    53,
      87,    81,   102,    88,    72,     3,    73,    88,     6,    55,
      77,   108,    10,    86,    12,    13,    55,    85,    16,    17,
     257,    19,    20,    21,    86,    23,    24,    84,    26,    27,
      44,    45,    65,    72,   142,    73,    77,   142,    55,    77,
      77,    71,   142,   138,    73,    78,    79,    88,   200,    63,
      64,    88,   149,   149,   151,    53,    77,   209,   138,    71,
     178,   179,   180,   162,   119,   130,   163,    88,    77,   149,
      72,    70,    74,    77,    77,    73,    85,   176,   178,   179,
     180,   181,   182,    87,    87,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,    73,    80,    81,   196,
      77,   226,   254,    75,    73,    77,   203,   225,    77,   206,
     207,   210,   220,    73,    22,   220,    82,    77,    73,    73,
     220,    83,    77,    77,    47,   225,    85,   226,    72,   281,
     282,   283,    88,    41,    42,   287,   185,   186,   187,   188,
     240,   241,   294,   295,    66,    67,    88,    55,    72,   181,
     182,    72,    60,    72,    62,    55,   221,    65,    66,    67,
      68,    69,    70,    77,    72,   240,   241,   189,   190,   215,
      85,    73,   277,    85,   273,    73,    75,   277,    55,    55,
      88,    85,   279,   280,     3,     4,     5,     6,     7,     8,
       9,    10,    80,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      81,    28,    73,    88,     6,    72,    11,   191,    10,    88,
      12,    13,    41,    42,    16,    17,   193,    19,    20,    21,
     194,   192,    24,    52,    53,    27,    55,   195,    47,    19,
     119,    60,    57,    62,   149,   221,    65,    66,    67,    68,
      69,    70,    42,    72,    64,    -1,    -1,    -1,   215,    -1,
      -1,    53,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      53,    -1,    55,    -1,    -1,    -1,    -1,    60,    -1,    62,
      -1,    -1,    65,    66,    67,    68,    69,    70,    -1,    72,
      -1,    -1,    -1,    41,    42,    -1,     4,     5,    -1,     7,
       8,     9,    50,    86,    87,    88,    14,    15,    -1,    -1,
      18,    -1,    -1,    -1,    22,    -1,    -1,    25,    -1,    -1,
      28,    -1,     3,    -1,    72,     6,    74,    -1,    76,    10,
      -1,    12,    13,    41,    42,    16,    17,    -1,    19,    20,
      21,    -1,    23,    24,    52,    26,    27,    55,    -1,    -1,
      -1,    -1,    60,    -1,    62,    -1,    -1,    65,    66,    67,
      68,    69,    70,    -1,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    86,     3,
      88,    -1,     6,    -1,    -1,    -1,    10,    -1,    12,    13,
      71,    -1,    16,    17,    -1,    19,    20,    21,    -1,    23,
      24,    -1,    26,    27,     6,    86,    -1,    -1,    10,    -1,
      12,    13,    -1,    -1,    16,    17,    -1,    19,    20,    21,
       6,    -1,    24,    -1,    10,    27,    12,    13,    -1,    53,
      16,    17,    -1,    19,    20,    21,    -1,    -1,    24,    -1,
      -1,    27,    -1,     6,    -1,    -1,    -1,    10,    -1,    12,
      13,    53,    -1,    16,    17,    -1,    19,    20,    21,    22,
      -1,    24,    86,    -1,    27,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,    41,    42,
      -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,
      53,    -1,    55,    -1,    41,    42,    -1,    60,    -1,    62,
      -1,    87,    65,    66,    67,    68,    69,    70,    55,    72,
      22,    -1,    -1,    60,    -1,    62,    -1,    -1,    65,    66,
      67,    68,    69,    70,    -1,    72,    -1,    -1,    -1,    41,
      42,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    88,    -1,    55,    22,    -1,    -1,    -1,    60,    -1,
      62,    -1,    -1,    65,    66,    67,    68,    69,    70,    -1,
      72,    -1,    -1,    41,    42,    -1,    22,    -1,    -1,    -1,
      -1,    71,    -1,    -1,    86,    87,    -1,    55,    -1,    -1,
      -1,    -1,    60,    -1,    62,    41,    42,    65,    66,    67,
      68,    69,    70,    -1,    72,    -1,    -1,    -1,    22,    55,
      -1,    -1,    -1,    -1,    60,    -1,    62,    -1,    86,    65,
      66,    67,    68,    69,    70,    -1,    72,    41,    42,    75,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    -1,    -1,    -1,    60,    -1,    62,    41,
      42,    65,    66,    67,    68,    69,    70,    -1,    72,    73,
      -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    60,    -1,
      62,    22,    -1,    65,    66,    67,    68,    69,    70,     3,
      72,    73,     6,    -1,    -1,    -1,    10,    22,    12,    13,
      41,    42,    16,    17,    -1,    19,    20,    21,    -1,    23,
      24,    -1,    26,    27,    55,    -1,    41,    42,    -1,    60,
      -1,    62,    -1,    -1,    65,    66,    67,    68,    69,    70,
      55,    72,    22,    -1,    -1,    60,    -1,    62,    -1,    53,
      65,    66,    67,    68,    69,    70,    -1,    72,    -1,    -1,
      -1,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      60,    -1,    62,    -1,    -1,    65,    66,    67,    68,    69,
      70,    -1,    72
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,    10,    12,    13,    16,    17,    19,    20,
      21,    23,    24,    26,    27,    53,    90,   112,   115,   116,
     117,   118,   119,   120,   126,   131,   136,    55,    86,     0,
      55,    72,    88,   113,   114,   125,   139,   112,   117,   112,
      55,    86,    86,    55,   137,   138,   125,    77,    88,    71,
      86,   112,   121,   124,   126,    72,    74,    86,   118,   129,
     130,   133,   137,    71,    77,    87,    73,   114,   125,    22,
      41,    42,    55,    60,    62,    65,    66,    67,    68,    69,
      70,    72,    86,    91,    92,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     127,     4,     5,     7,     8,     9,    14,    15,    18,    25,
      28,    52,    55,    87,    88,   108,   110,   121,   122,   123,
     126,   143,   144,   145,   146,   147,   148,   121,   126,    73,
     112,   140,   141,   142,    75,    94,   107,   111,   129,   133,
      87,   130,    85,   125,   134,   135,    87,   111,   138,    72,
      94,    72,    94,    94,   110,   132,   133,   127,   128,    41,
      42,    50,    72,    74,    76,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    71,   109,    96,    65,    78,
      79,    66,    67,    80,    81,    44,    45,    63,    64,    43,
      51,    70,    82,    83,    47,    46,    84,    88,   111,    88,
      85,   144,    72,    72,    88,   110,    72,    72,    55,    85,
      77,    88,    87,   122,   125,    77,    73,    75,    87,   111,
      85,    77,    88,   132,    73,    73,    77,    87,    55,    73,
      93,   108,   110,    55,   108,    96,    96,    96,    97,    97,
      80,    81,    99,    99,    99,    99,   100,   100,   101,   102,
     103,   104,   105,   110,    85,   144,    28,   145,   110,    88,
     110,   110,    88,   144,   108,   142,   111,   135,    73,    96,
      87,   127,    73,    77,    75,    98,    98,    85,   144,    72,
     145,    73,    73,    73,   108,   107,   110,    73,   110,   144,
     144,   144,    73,   144,    73,    11,    88,   144,   144
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
     122,   122,   122,   123,   123,   123,   124,   124,   125,   126,
     126,   127,   127,   127,   128,   128,   129,   129,   130,   131,
     131,   132,   133,   133,   134,   134,   135,   135,   135,   136,
     136,   136,   137,   137,   138,   138,   139,   139,   139,   139,
     139,   139,   140,   140,   141,   142,   142,   143,   143,   143,
     143,   143,   144,   144,   144,   144,   144,   144,   145,   145,
     146,   146,   146,   147,   147,   147,   147,   148,   148,   148
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
       0,     1,     1,     0,     2,     1,     1,     2,     1,     2,
       3,     1,     3,     4,     1,     3,     1,     2,     3,     1,
       1,     1,     2,     1,     1,     3,     1,     2,     3,     4,
       5,     2,     1,     3,     1,     3,     1,     3,     4,     3,
       4,     3,     1,     3,     1,     2,     1,     3,     2,     2,
       2,     3,     1,     1,     1,     1,     1,     1,     1,     2,
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
#line 1636 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 46 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new primary_expression(1,(yyvsp[0].str));}
#line 1642 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 49 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new primary_expression(2,(yyvsp[0].str));}
#line 1648 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 50 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new primary_expression(3,(yyvsp[0].str));}
#line 1654 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 51 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new primary_expression(4,(yyvsp[-1].node));}
#line 1660 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 55 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1666 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 56 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new postfix_expression(1,(yyvsp[-3].node),(yyvsp[-1].node));}
#line 1672 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 57 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new postfix_expression(2,(yyvsp[-2].node));}
#line 1678 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 58 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new postfix_expression(3,(yyvsp[-3].node),(yyvsp[-1].node));}
#line 1684 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 59 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new postfix_expression(4,(yyvsp[-2].node),(yyvsp[0].str));}
#line 1690 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 60 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new postfix_expression(5,(yyvsp[-2].node),(yyvsp[0].str));}
#line 1696 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 61 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new postfix_expression(6,(yyvsp[-1].node));}
#line 1702 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 62 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new postfix_expression(7,(yyvsp[-1].node));}
#line 1708 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 66 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) =new argument_expression_list(1,NULL,(yyvsp[0].node));}
#line 1714 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 67 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new argument_expression_list(1,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1720 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 71 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1726 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 72 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new unary_expression(1,(yyvsp[0].node));}
#line 1732 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 73 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new unary_expression(2,(yyvsp[0].node));}
#line 1738 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 74 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new unary_expression(3,(yyvsp[-1].str),(yyvsp[0].node));}
#line 1744 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 75 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new unary_expression(4,(yyvsp[-1].str),(yyvsp[0].node));}
#line 1750 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 76 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new unary_expression(5,(yyvsp[-3].str),(yyvsp[-1].node));}
#line 1756 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 80 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string("&");}
#line 1762 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 81 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string("*");}
#line 1768 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 82 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string("+");}
#line 1774 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 83 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string("-");}
#line 1780 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 84 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string("~");}
#line 1786 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 85 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string("!");}
#line 1792 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 89 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1798 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 90 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new cast_expression((yyvsp[-2].node),(yyvsp[0].node));}
#line 1804 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 94 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1810 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 95 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new multiplicative_expression(1,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1816 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 96 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new multiplicative_expression(2,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1822 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 97 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new multiplicative_expression(3,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1828 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 101 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1834 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 102 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new additive_expression(1,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1840 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 103 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new additive_expression(2,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1846 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 107 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1852 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 108 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new shift_expression(1,(yyvsp[-3].node),(yyvsp[0].node));}
#line 1858 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 109 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new shift_expression(2,(yyvsp[-3].node),(yyvsp[0].node));}
#line 1864 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 113 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1870 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 114 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new relational_expression(1,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1876 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 115 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new relational_expression(2,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1882 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 116 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new relational_expression(3,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1888 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 117 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new relational_expression(4,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1894 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 122 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1900 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 123 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new equality_expression(1,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1906 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 124 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new equality_expression(2,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1912 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 128 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1918 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 129 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new and_expression((yyvsp[-2].node),(yyvsp[0].node));}
#line 1924 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 133 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1930 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 134 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new exclusive_or_expression((yyvsp[-2].node),(yyvsp[0].node));}
#line 1936 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 138 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1942 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 139 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new inclusive_or_expression((yyvsp[-2].node),(yyvsp[0].node));}
#line 1948 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 143 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1954 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 144 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new logical_and_expression((yyvsp[-2].node),(yyvsp[0].node));}
#line 1960 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 148 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1966 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 149 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new logical_or_expression((yyvsp[-2].node),(yyvsp[0].node));}
#line 1972 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 153 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1978 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 154 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new conditional_expression((yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node));}
#line 1984 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 158 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1990 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 159 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new assignment_expression((yyvsp[-2].node),(yyvsp[-1].str),(yyvsp[0].node));}
#line 1996 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 163 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string ("=");}
#line 2002 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 164 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string ("*=");}
#line 2008 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 165 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string ("/=");}
#line 2014 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 166 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string ("%=");}
#line 2020 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 167 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string ("+=");}
#line 2026 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 168 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string ("-=");}
#line 2032 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 169 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string ("<<=");}
#line 2038 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 170 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string (">>=");}
#line 2044 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 171 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string ("&=");}
#line 2050 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 172 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string ("^=");}
#line 2056 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 173 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string ("|=");}
#line 2062 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 177 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2068 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 178 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new expression((yyvsp[-2].node),(yyvsp[0].node));}
#line 2074 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 182 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2080 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 186 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2086 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 187 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new declaration_specifiers(1,(yyvsp[-1].node),(yyvsp[0].node),NULL);}
#line 2092 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 188 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2098 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 189 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new declaration_specifiers(2,(yyvsp[-1].node),NULL,(yyvsp[0].node));}
#line 2104 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 196 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2110 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 197 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new init_declarator_list((yyvsp[-2].node),(yyvsp[0].node));}
#line 2116 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 201 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new init_declarator((yyvsp[0].node),NULL);}
#line 2122 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 202 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new init_declarator((yyvsp[-2].node),(yyvsp[0].node));}
#line 2128 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 206 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new storage_class_specifier((yyvsp[0].str));}
#line 2134 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 208 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new storage_class_specifier((yyvsp[0].str));}
#line 2140 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 209 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new storage_class_specifier((yyvsp[0].str));}
#line 2146 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 212 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new translation_unit(1,(yyvsp[0].node));}
#line 2152 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 213 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new translation_unit(2,(yyvsp[-1].node),(yyvsp[0].node));}
#line 2158 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 217 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new external_declaration(1,(yyvsp[0].node));}
#line 2164 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 218 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new external_declaration(2,(yyvsp[0].node));}
#line 2170 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 222 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new type_specifier(1);}
#line 2176 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 223 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new type_specifier(2);}
#line 2182 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 224 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new type_specifier(3);}
#line 2188 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 225 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new type_specifier(4);}
#line 2194 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 226 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new type_specifier(5);}
#line 2200 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 227 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new type_specifier(6);}
#line 2206 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 228 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new type_specifier(7);}
#line 2212 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 229 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new type_specifier(8);}
#line 2218 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 230 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new type_specifier(9);}
#line 2224 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 231 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2230 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 232 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2236 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 237 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new struct_or_union_specifier(1,(yyvsp[-4].node),(yyvsp[-3].str),(yyvsp[-1].node));}
#line 2242 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 238 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new struct_or_union_specifier(2,(yyvsp[-3].node),NULL,(yyvsp[-1].node));}
#line 2248 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 239 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new struct_or_union_specifier(3,(yyvsp[-1].node),(yyvsp[0].str),NULL);}
#line 2254 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 243 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new function_definition(1,(yyvsp[-3].node),(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 2260 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 244 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new function_definition(2,(yyvsp[-2].node),(yyvsp[-1].node),NULL,(yyvsp[0].node));}
#line 2266 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 269 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new compound_statement(1,NULL); }
#line 2272 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 270 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new compound_statement(2,(yyvsp[-1].node)); }
#line 2278 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 274 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2284 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 275 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2290 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 278 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new block_item_list(1,(yyvsp[-1].node),(yyvsp[0].node));}
#line 2296 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 279 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2302 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 282 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) =  (yyvsp[0].node);}
#line 2308 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 283 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new declaration_list(1,(yyvsp[0].node), (yyvsp[-1].node));}
#line 2314 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 288 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2320 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 292 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 2326 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 293 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new declaration(1,(yyvsp[-2].node), (yyvsp[-1].node));}
#line 2332 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 297 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2338 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 298 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 2344 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 299 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-2].node);}
#line 2350 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 303 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2356 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 304 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) =new initializer_list(2,(yyvsp[0].node),(yyvsp[-2].node));}
#line 2362 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 310 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2368 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 311 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new struct_declaration_list(1,(yyvsp[0].node), (yyvsp[-1].node));}
#line 2374 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 315 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new struct_declaration(1,(yyvsp[-2].node), (yyvsp[-1].node));}
#line 2380 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 319 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new struct_or_union(1, (yyvsp[0].str)) ;}
#line 2386 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 320 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new struct_or_union(2, (yyvsp[0].str)) ;}
#line 2392 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 324 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2398 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 330 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new specifier_qualifier_list(1,(yyvsp[-1].node),(yyvsp[0].node),NULL);}
#line 2404 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 331 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2410 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 337 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2416 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 338 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new struct_declarator_list(1,(yyvsp[0].node),(yyvsp[-2].node));}
#line 2422 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 342 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2428 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 343 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2434 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 344 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new struct_declarator(1,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2440 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 348 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new enum_specifier(1,(yyvsp[-3].str),NULL,(yyvsp[-1].node));}
#line 2446 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 349 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new enum_specifier(2,(yyvsp[-4].str),(yyvsp[-3].str),(yyvsp[-1].node));}
#line 2452 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 350 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new enum_specifier(3,(yyvsp[-1].str),(yyvsp[0].str),NULL);}
#line 2458 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 353 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2464 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 354 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new enumerator_list(1,(yyvsp[0].node),(yyvsp[-2].node));}
#line 2470 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 358 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new enumerator(1,(yyvsp[0].str),NULL);}
#line 2476 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 359 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new enumerator(2,(yyvsp[-2].str),(yyvsp[0].node));}
#line 2482 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 375 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new direct_declarator(1,(yyvsp[0].str),NULL,NULL,NULL,NULL);}
#line 2488 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 376 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new direct_declarator(2,NULL,NULL,(yyvsp[-1].node),NULL,NULL);}
#line 2494 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 377 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new direct_declarator(3,NULL,(yyvsp[-3].node),NULL,(yyvsp[-1].node),NULL);}
#line 2500 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 378 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new direct_declarator(4,NULL,(yyvsp[-2].node),NULL,NULL,NULL);}
#line 2506 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 379 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new direct_declarator(5,NULL,(yyvsp[-3].node),NULL,NULL,(yyvsp[-1].node));}
#line 2512 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 381 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new direct_declarator(6,NULL,(yyvsp[-2].node),NULL,NULL,NULL);}
#line 2518 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 386 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2524 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 387 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new parameter_list(1,(yyvsp[0].node),(yyvsp[-2].node));}
#line 2530 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 390 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2536 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 394 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new parameter_declaration(1,(yyvsp[-1].node),(yyvsp[0].node),NULL);}
#line 2542 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 396 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new parameter_declaration(2,(yyvsp[0].node),NULL,NULL);}
#line 2548 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 412 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new jump_statement(1,(yyvsp[-1].str),(yyvsp[-2].str),NULL);}
#line 2554 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 413 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new jump_statement(2,(yyvsp[-1].str),NULL,NULL);}
#line 2560 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 414 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new jump_statement(3,(yyvsp[-1].str),NULL,NULL);}
#line 2566 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 415 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new jump_statement(4,(yyvsp[-1].str),NULL,NULL);}
#line 2572 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 416 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new jump_statement(5,(yyvsp[-2].str),NULL,(yyvsp[-1].node));}
#line 2578 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 420 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2584 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 421 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2590 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 422 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2596 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 423 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2602 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 424 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2608 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 425 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2614 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 434 "src/parser.y" /* yacc.c:1646  */
    {/*$$ = new expression_statement();*/}
#line 2620 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 435 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new expression_statement((yyvsp[-1].node));}
#line 2626 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 439 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new selection_statement(1,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2632 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 440 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new selection_statement(2,(yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node));}
#line 2638 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 441 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new selection_statement(3,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2644 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 445 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new iteration_statement(1,(yyvsp[-2].node),(yyvsp[0].node),NULL,NULL);}
#line 2650 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 446 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new iteration_statement(2,(yyvsp[-2].node),(yyvsp[-5].node),NULL,NULL);}
#line 2656 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 447 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new iteration_statement(3,(yyvsp[0].node),NULL,(yyvsp[-3].node),(yyvsp[-2].node));}
#line 2662 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 448 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new iteration_statement(4,(yyvsp[0].node),(yyvsp[-2].node),(yyvsp[-4].node),(yyvsp[-3].node));}
#line 2668 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 452 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new labeled_statement(1,(yyvsp[-2].str),NULL,NULL,(yyvsp[0].node));}
#line 2674 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 453 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new labeled_statement(2,NULL,(yyvsp[-3].str),(yyvsp[-2].node),(yyvsp[0].node));}
#line 2680 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 454 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new labeled_statement(3,NULL,(yyvsp[-2].str),NULL,(yyvsp[0].node));}
#line 2686 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;


#line 2690 "src/parser.tab.cpp" /* yacc.c:1646  */
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
#line 463 "src/parser.y" /* yacc.c:1906  */


const Node *g_root; // Definition of variable (to match declaration earlier)

const Node *parseAST()
{
  g_root=0;
  yyparse();
  return g_root;
}
