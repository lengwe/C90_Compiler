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
    ELLIPSIS = 306,
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
    STRING_LITERAL = 317
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 11 "src/parser.y" /* yacc.c:355  */

  std::string *str;
  Node* node;
  //TODO: add ast class

#line 188 "src/parser.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_PARSER_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 205 "src/parser.tab.cpp" /* yacc.c:358  */

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
#define YYFINAL  34
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1136

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  183
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  309

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   317

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    67,     2,     2,     2,    77,    68,     2,
      70,    71,    63,    64,    75,    65,    74,    76,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    83,    86,
      78,    69,    79,    82,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    72,     2,    73,    80,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    84,    81,    85,    66,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    44,    44,    47,    48,    49,    50,    54,    55,    56,
      57,    58,    59,    60,    61,    65,    66,    70,    71,    72,
      73,    74,    75,    79,    80,    81,    82,    83,    84,    88,
      89,    93,    94,    95,    96,   100,   101,   102,   106,   107,
     108,   112,   113,   114,   115,   116,   120,   121,   122,   126,
     127,   131,   132,   136,   137,   141,   142,   146,   147,   151,
     152,   156,   157,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   175,   176,   180,   184,   185,   186,
     187,   194,   195,   199,   200,   204,   206,   207,   210,   211,
     216,   217,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   236,   237,   238,   242,   243,   244,   245,
     268,   269,   270,   271,   275,   276,   281,   285,   286,   290,
     291,   292,   296,   297,   303,   304,   308,   312,   313,   317,
     322,   323,   329,   330,   334,   335,   336,   340,   341,   342,
     345,   346,   350,   351,   360,   361,   365,   366,   367,   368,
     369,   370,   371,   376,   377,   380,   381,   384,   386,   402,
     403,   404,   405,   406,   410,   411,   412,   413,   414,   415,
     419,   420,   424,   425,   429,   430,   431,   435,   436,   437,
     438,   442,   443,   444
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
  "LEFT_OP", "RIGHT_OP", "PTR_OP", "NE_OP", "ELLIPSIS", "GOTO", "UNION",
  "VOLATILE", "IDENTIFIER", "FLOAT_NUM", "HEX_NUM", "INT_NUM",
  "CHAR_CONSTANT", "CONSTANT", "MOD_ASSGIN", "STRING_LITERAL", "'*'",
  "'+'", "'-'", "'~'", "'!'", "'&'", "'='", "'('", "')'", "'['", "']'",
  "'.'", "','", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'",
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
  "function_definition", "compound_statement", "declaration_list",
  "declarator", "declaration", "initializer", "initializer_list",
  "struct_declaration_list", "struct_declaration", "struct_or_union",
  "type_name", "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "identifier_list", "direct_declarator", "parameter_list",
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
     315,   316,   317,    42,    43,    45,   126,    33,    38,    61,
      40,    41,    91,    93,    46,    44,    47,    37,    60,    62,
      94,   124,    63,    58,   123,   125,    59
};
# endif

#define YYPACT_NINF -145

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-145)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     724,  -145,  -145,  -145,   -44,  -145,  -145,  -145,  -145,  -145,
    -145,  -145,  -145,  -145,  -145,  -145,  -145,    19,    67,   -43,
     959,   724,  -145,   959,  -145,  -145,   649,  -145,   -37,  -145,
     -50,   -59,    -5,    27,  -145,  -145,   -67,  -145,   630,  -145,
    -145,  -145,   252,   -43,  -145,   649,  -145,     9,   184,   668,
     874,    -5,    93,    33,  -145,  -145,    19,  -145,   842,  -145,
     649,    81,  1019,    91,   100,   555,   121,   123,   759,  1050,
     129,   137,  1066,  1066,   155,   133,  -145,  -145,  -145,  -145,
    -145,  -145,  -145,  -145,   743,  -145,  -145,  -145,    29,    22,
    1019,  -145,     8,   -27,    25,   -14,    50,   144,   138,   147,
     187,   -40,  -145,  -145,    -9,  -145,   336,  -145,  -145,   409,
    -145,  -145,  -145,  -145,   161,  -145,  -145,   184,   184,   168,
    -145,    -7,  -145,  -145,    19,    57,   169,   172,  -145,  -145,
    -145,  -145,  -145,   176,    45,  1019,    -5,  -145,  -145,   842,
    -145,  -145,  -145,  -145,   167,  -145,   555,   223,   793,  1019,
    -145,    31,   743,  -145,  1019,  1019,  1019,  -145,  -145,   166,
     555,    63,   192,  -145,  -145,  -145,   226,   955,  1019,   227,
    -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,
    -145,  1019,  -145,  1019,  1019,  1019,  1019,  1019,  1019,  1019,
    1019,  1019,  1019,  1019,  1019,  1019,  1019,  1019,  1019,  1019,
    1019,  1019,  1019,  -145,  -145,   482,  -145,  -145,   435,  -145,
    -145,  -145,  1019,   200,    40,  -145,  -145,  -145,   229,   940,
    -145,  -145,  -145,  -145,  -145,  -145,    52,   555,  -145,   215,
     793,    65,  -145,   216,    98,   101,  -145,  -145,  -145,  1019,
    -145,  -145,   104,  -145,    58,  -145,  -145,  -145,  -145,  -145,
       8,     8,   -27,   -27,    25,    25,    25,    25,   -14,   -14,
      50,   144,   138,   147,   187,    30,  -145,  -145,  -145,  -145,
    1019,    -7,  -145,  -145,  -145,  -145,   810,  -145,  -145,  1019,
     987,   555,  -145,   555,   555,  -145,  -145,  1019,  -145,  1019,
    -145,  -145,  -145,  -145,   111,   555,   131,   275,  -145,  -145,
    -145,  -145,   202,  -145,   555,   555,  -145,  -145,  -145
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    87,    93,    98,     0,    97,    95,    96,    94,    99,
     100,    86,   127,    85,    92,   128,   146,     0,     0,     0,
      77,     2,    88,    79,   101,    90,     0,    91,     0,   102,
     116,   139,     0,     0,     1,   117,     0,    81,    83,    78,
      89,    80,     0,     0,   109,     0,   114,   105,     0,     0,
       0,     0,   142,     0,   140,   147,     0,   118,     0,   107,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     3,     4,     5,    24,    25,
      26,    27,    28,    23,     0,   110,   172,     7,    17,    29,
       0,    31,    35,    38,    41,    46,    49,    51,    53,    55,
      57,    59,    61,    74,     0,   165,     0,   169,   170,     0,
     166,   167,   168,   164,    83,   108,   115,     0,   131,     0,
     124,     0,   144,   152,   158,     0,   155,     0,   153,     3,
     149,    29,    76,     0,     0,     0,     0,   137,    82,     0,
     119,    84,   106,   161,     0,   160,     0,     0,     0,     0,
     162,     0,     0,    21,     0,     0,     0,    18,    19,     0,
       0,     0,     0,   129,    13,    14,     0,     0,     0,     0,
      67,    68,    64,    65,    66,    70,    69,    71,    72,    73,
      63,     0,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   173,   112,     0,   111,   171,     0,   130,
     104,   125,     0,   134,     0,   132,   157,   151,     0,     0,
     150,   148,   138,   143,   141,   122,     0,     0,   183,     0,
       0,     0,   163,     0,     0,     0,   159,   181,     6,     0,
      12,     9,     0,    15,     0,    11,    62,    32,    33,    34,
      36,    37,    39,    40,    45,    44,    42,    43,    47,    48,
      50,    52,    54,    56,    58,     0,    75,   113,   103,   135,
       0,     0,   126,   145,   156,   154,     0,   120,   182,     0,
       0,     0,    22,     0,     0,    30,    10,     0,     8,     0,
     136,   133,   121,   123,     0,     0,     0,   174,   176,   177,
      16,    60,     0,   179,     0,     0,   178,   180,   175
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -145,  -145,  -145,  -145,  -145,   -41,  -145,   -73,    28,    47,
      34,    44,    94,    92,    96,    97,    95,  -145,   -47,   -42,
    -145,   -33,   -48,    13,  -145,   235,  -145,  -145,   276,   -38,
    -145,  -145,    64,   171,   -17,    23,  -115,  -145,   181,  -113,
    -145,   148,   -77,  -145,    32,  -145,   248,   165,  -145,  -145,
    -145,  -145,    83,  -145,   -64,   203,  -144,  -145,  -145,  -145
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    18,    87,    88,   242,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     181,   104,   133,    43,    36,    37,    20,    21,    22,    23,
      24,    25,   105,    45,    26,    46,   141,   226,   119,   120,
      28,   162,   121,   214,   215,    29,    53,    54,   125,    30,
     126,   127,   128,   107,   108,   109,   110,   111,   112,   113
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      33,   147,    38,   132,   230,   200,   211,   163,    56,   131,
     118,    31,    16,    19,   144,   132,   140,   182,    47,    57,
      49,   131,    50,    27,   225,    51,   114,    17,   153,   190,
     191,   157,   158,    39,    19,   151,    41,   186,   187,   114,
      32,   209,   201,    35,    27,   207,   118,    48,    16,   131,
      52,   161,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   124,    17,   192,   193,   202,    34,   116,   164,
     165,   183,   188,   189,    16,   163,   212,   203,   166,   118,
     118,   118,   228,   116,   184,   185,   280,   223,   132,    17,
      44,   180,   194,   117,   131,   211,   237,   140,    55,   167,
     195,   168,    59,   169,   213,   202,   202,   216,   136,   115,
     247,   248,   249,   289,   118,   271,   231,   232,   137,   161,
     136,   234,   235,   161,   142,   243,   272,   276,   217,   116,
     222,   288,   218,   202,   238,   244,   281,   277,   202,   246,
     202,   207,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     266,   293,   135,   278,   269,   132,   285,   143,   265,   283,
     118,   131,   284,   202,     2,   286,   202,   145,     3,   287,
       4,     5,   302,   146,     6,     7,   202,     8,     9,    10,
       2,   148,    12,   149,     3,    14,     4,     5,   131,   154,
       6,     7,   304,     8,     9,    10,   202,   155,    12,    60,
     159,    14,   196,   106,   250,   251,   160,   297,   197,   298,
     299,    15,   290,   132,   254,   255,   256,   257,   198,   131,
      58,   303,   124,   199,   140,   252,   253,    15,   258,   259,
     307,   308,   301,   220,   219,   300,   294,   296,   131,   221,
     227,   229,   236,   210,   213,     1,    61,    62,     2,    63,
      64,    65,     3,   239,     4,     5,    66,    67,     6,     7,
      68,     8,     9,    10,    69,    11,    12,    70,    13,    14,
      71,   240,   245,   270,   273,   279,   305,   282,   306,   261,
     260,   138,    72,    73,   262,   264,   263,    40,   208,   134,
     233,   224,   275,   291,    74,    15,     0,    75,     0,   205,
       0,     0,    76,     0,    77,    78,    79,    80,    81,    82,
      83,     0,    84,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    42,    85,    86,     1,
      61,    62,     2,    63,    64,    65,     3,     0,     4,     5,
      66,    67,     6,     7,    68,     8,     9,    10,    69,    11,
      12,    70,    13,    14,    71,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    72,    73,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    74,    15,
       0,    75,     0,     0,     0,     0,    76,     0,    77,    78,
      79,    80,    81,    82,    83,     0,    84,     0,     0,     0,
       0,     0,     0,    61,    62,     0,    63,    64,    65,     0,
      42,   204,    86,    66,    67,     0,     0,    68,     0,     0,
       0,    69,     0,     0,    70,     0,     0,    71,     0,     0,
       0,     2,     0,     0,     0,     3,     0,     4,     5,    72,
      73,     6,     7,     0,     8,     9,    10,     0,     0,    12,
       0,    74,    14,     0,    75,     0,     0,     0,     0,    76,
       0,    77,    78,    79,    80,    81,    82,    83,     0,    84,
       0,     0,     0,     0,     0,     0,    61,    62,    15,    63,
      64,    65,     0,    42,   206,    86,    66,    67,     0,     0,
      68,     0,     0,     0,    69,     0,     0,    70,     0,     0,
      71,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     268,     0,    72,    73,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    74,     0,     0,    75,     0,     0,
       0,     0,    76,     0,    77,    78,    79,    80,    81,    82,
      83,     0,    84,     0,     0,     0,     0,     0,     0,    61,
      62,     0,    63,    64,    65,     0,    42,   267,    86,    66,
      67,     0,     0,    68,     0,     0,     0,    69,     0,     0,
      70,     0,     0,    71,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    72,    73,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    74,     0,     0,
      75,     0,     0,     0,     0,    76,     0,    77,    78,    79,
      80,    81,    82,    83,     0,    84,     0,     0,     0,     0,
       0,     0,     0,     1,     0,     0,     2,     0,     0,    42,
       3,    86,     4,     5,     0,     0,     6,     7,     0,     8,
       9,    10,     1,    11,    12,     2,    13,    14,     0,     3,
       0,     4,     5,     0,     0,     6,     7,     0,     8,     9,
      10,     1,    11,    12,     2,    13,    14,     0,     3,     0,
       4,     5,     0,    15,     6,     7,     0,     8,     9,    10,
       0,    11,    12,     0,    13,    14,     0,     0,     0,    58,
       0,     0,    15,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    42,     0,     0,     0,     0,     0,
       0,    15,     0,   122,     0,     0,     0,     1,     0,     0,
       2,     0,     0,    42,     3,     0,     4,     5,     0,   123,
       6,     7,     0,     8,     9,    10,     0,    11,    12,     2,
      13,    14,     0,     3,     0,     4,     5,     0,     0,     6,
       7,     0,     8,     9,    10,    69,     0,    12,     0,     0,
      14,     0,     0,     0,     0,     0,     0,    15,     0,    16,
       0,    69,     0,    72,    73,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    17,     0,    15,     0,   129,    72,
      73,     0,     0,    76,     0,    77,    78,    79,    80,    81,
      82,    83,     0,    84,   129,    69,     0,     0,     0,    76,
       0,    77,    78,    79,    80,    81,    82,    83,     0,    84,
       0,     0,    69,    72,    73,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   150,     0,     0,   129,     0,
      72,    73,     0,    76,     0,    77,    78,    79,    80,    81,
      82,    83,     0,    84,    69,   129,     0,     0,     0,     0,
      76,     0,    77,    78,    79,    80,    81,    82,    83,    86,
      84,     0,    72,    73,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   139,   292,    69,   129,     0,     0,
       0,     0,    76,     0,    77,    78,    79,    80,    81,    82,
      83,     0,    84,     0,    72,    73,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   139,     0,     0,   129,
       0,     0,     0,     0,    76,     0,    77,    78,    79,    80,
      81,    82,    83,     1,    84,     0,     2,   130,     0,     0,
       3,     0,     4,     5,     0,     0,     6,     7,     0,     8,
       9,    10,     1,    11,    12,     2,    13,    14,     0,     3,
       0,     4,     5,     0,     0,     6,     7,    69,     8,     9,
      10,     0,    11,    12,     0,    13,    14,     0,     0,     0,
       0,   274,     0,    15,     0,    72,    73,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    69,
     129,     0,    15,     0,     0,    76,     0,    77,    78,    79,
      80,    81,    82,    83,     0,    84,   241,    72,    73,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    69,   129,     0,     0,     0,     0,    76,     0,    77,
      78,    79,    80,    81,    82,    83,     0,    84,   295,    72,
      73,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    69,     0,   129,     0,     0,     0,     0,    76,
       0,    77,    78,    79,    80,    81,    82,    83,    69,    84,
      72,    73,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   129,    72,    73,     0,     0,
      76,     0,    77,    78,    79,    80,    81,    82,    83,     0,
     152,   129,     0,     0,     0,     0,    76,     0,    77,    78,
      79,    80,    81,    82,    83,     0,   156
};

static const yytype_int16 yycheck[] =
{
      17,    65,    19,    50,   148,    45,   119,    84,    75,    50,
      48,    55,    55,     0,    62,    62,    58,    90,    55,    86,
      70,    62,    72,     0,   139,    84,    43,    70,    69,    43,
      44,    72,    73,    20,    21,    68,    23,    64,    65,    56,
      84,   118,    82,    86,    21,   109,    84,    84,    55,    90,
      55,    84,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    49,    70,    78,    79,    75,     0,    45,    40,
      41,    63,    47,    48,    55,   152,    83,    86,    49,   117,
     118,   119,   146,    60,    76,    77,   230,   135,   135,    70,
      26,    69,    42,    84,   135,   208,   160,   139,    71,    70,
      50,    72,    38,    74,   121,    75,    75,   124,    75,    45,
     183,   184,   185,    83,   152,    75,   149,    86,    85,   152,
      75,   154,   155,   156,    60,   167,    86,    75,    71,   106,
      85,    73,    75,    75,    71,   168,    71,    85,    75,   181,
      75,   205,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     202,   276,    69,   227,   212,   212,   239,    86,   201,    71,
     208,   212,    71,    75,     6,    71,    75,    86,    10,    75,
      12,    13,    71,    83,    16,    17,    75,    19,    20,    21,
       6,    70,    24,    70,    10,    27,    12,    13,   239,    70,
      16,    17,    71,    19,    20,    21,    75,    70,    24,    38,
      55,    27,    68,    42,   186,   187,    83,   281,    80,   283,
     284,    53,   270,   270,   190,   191,   192,   193,    81,   270,
      69,   295,   219,    46,   276,   188,   189,    53,   194,   195,
     304,   305,   289,    71,    75,   287,   279,   280,   289,    73,
      83,    28,    86,    85,   271,     3,     4,     5,     6,     7,
       8,     9,    10,    71,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    55,    55,    83,    55,    70,    11,    71,    86,   197,
     196,    56,    40,    41,   198,   200,   199,    21,   117,    51,
     152,   136,   219,   271,    52,    53,    -1,    55,    -1,   106,
      -1,    -1,    60,    -1,    62,    63,    64,    65,    66,    67,
      68,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      -1,    55,    -1,    -1,    -1,    -1,    60,    -1,    62,    63,
      64,    65,    66,    67,    68,    -1,    70,    -1,    -1,    -1,
      -1,    -1,    -1,     4,     5,    -1,     7,     8,     9,    -1,
      84,    85,    86,    14,    15,    -1,    -1,    18,    -1,    -1,
      -1,    22,    -1,    -1,    25,    -1,    -1,    28,    -1,    -1,
      -1,     6,    -1,    -1,    -1,    10,    -1,    12,    13,    40,
      41,    16,    17,    -1,    19,    20,    21,    -1,    -1,    24,
      -1,    52,    27,    -1,    55,    -1,    -1,    -1,    -1,    60,
      -1,    62,    63,    64,    65,    66,    67,    68,    -1,    70,
      -1,    -1,    -1,    -1,    -1,    -1,     4,     5,    53,     7,
       8,     9,    -1,    84,    85,    86,    14,    15,    -1,    -1,
      18,    -1,    -1,    -1,    22,    -1,    -1,    25,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,
      -1,    -1,    60,    -1,    62,    63,    64,    65,    66,    67,
      68,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,     4,
       5,    -1,     7,     8,     9,    -1,    84,    85,    86,    14,
      15,    -1,    -1,    18,    -1,    -1,    -1,    22,    -1,    -1,
      25,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      55,    -1,    -1,    -1,    -1,    60,    -1,    62,    63,    64,
      65,    66,    67,    68,    -1,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,    -1,     6,    -1,    -1,    84,
      10,    86,    12,    13,    -1,    -1,    16,    17,    -1,    19,
      20,    21,     3,    23,    24,     6,    26,    27,    -1,    10,
      -1,    12,    13,    -1,    -1,    16,    17,    -1,    19,    20,
      21,     3,    23,    24,     6,    26,    27,    -1,    10,    -1,
      12,    13,    -1,    53,    16,    17,    -1,    19,    20,    21,
      -1,    23,    24,    -1,    26,    27,    -1,    -1,    -1,    69,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    55,    -1,    -1,    -1,     3,    -1,    -1,
       6,    -1,    -1,    84,    10,    -1,    12,    13,    -1,    71,
      16,    17,    -1,    19,    20,    21,    -1,    23,    24,     6,
      26,    27,    -1,    10,    -1,    12,    13,    -1,    -1,    16,
      17,    -1,    19,    20,    21,    22,    -1,    24,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    55,
      -1,    22,    -1,    40,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    -1,    53,    -1,    55,    40,
      41,    -1,    -1,    60,    -1,    62,    63,    64,    65,    66,
      67,    68,    -1,    70,    55,    22,    -1,    -1,    -1,    60,
      -1,    62,    63,    64,    65,    66,    67,    68,    -1,    70,
      -1,    -1,    22,    40,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    55,    -1,
      40,    41,    -1,    60,    -1,    62,    63,    64,    65,    66,
      67,    68,    -1,    70,    22,    55,    -1,    -1,    -1,    -1,
      60,    -1,    62,    63,    64,    65,    66,    67,    68,    86,
      70,    -1,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    85,    22,    55,    -1,    -1,
      -1,    -1,    60,    -1,    62,    63,    64,    65,    66,    67,
      68,    -1,    70,    -1,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    55,
      -1,    -1,    -1,    -1,    60,    -1,    62,    63,    64,    65,
      66,    67,    68,     3,    70,    -1,     6,    73,    -1,    -1,
      10,    -1,    12,    13,    -1,    -1,    16,    17,    -1,    19,
      20,    21,     3,    23,    24,     6,    26,    27,    -1,    10,
      -1,    12,    13,    -1,    -1,    16,    17,    22,    19,    20,
      21,    -1,    23,    24,    -1,    26,    27,    -1,    -1,    -1,
      -1,    51,    -1,    53,    -1,    40,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      55,    -1,    53,    -1,    -1,    60,    -1,    62,    63,    64,
      65,    66,    67,    68,    -1,    70,    71,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    55,    -1,    -1,    -1,    -1,    60,    -1,    62,
      63,    64,    65,    66,    67,    68,    -1,    70,    71,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    -1,    55,    -1,    -1,    -1,    -1,    60,
      -1,    62,    63,    64,    65,    66,    67,    68,    22,    70,
      40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    40,    41,    -1,    -1,
      60,    -1,    62,    63,    64,    65,    66,    67,    68,    -1,
      70,    55,    -1,    -1,    -1,    -1,    60,    -1,    62,    63,
      64,    65,    66,    67,    68,    -1,    70
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,    10,    12,    13,    16,    17,    19,    20,
      21,    23,    24,    26,    27,    53,    55,    70,    88,   110,
     113,   114,   115,   116,   117,   118,   121,   122,   127,   132,
     136,    55,    84,   121,     0,    86,   111,   112,   121,   110,
     115,   110,    84,   110,   119,   120,   122,    55,    84,    70,
      72,    84,    55,   133,   134,    71,    75,    86,    69,   119,
     120,     4,     5,     7,     8,     9,    14,    15,    18,    22,
      25,    28,    40,    41,    52,    55,    60,    62,    63,    64,
      65,    66,    67,    68,    70,    85,    86,    89,    90,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   108,   119,   120,   140,   141,   142,
     143,   144,   145,   146,   121,   119,   122,    84,   116,   125,
     126,   129,    55,    71,   110,   135,   137,   138,   139,    55,
      73,    92,   105,   109,   133,    69,    75,    85,   112,    84,
     106,   123,   119,    86,   109,    86,    83,   141,    70,    70,
      86,   108,    70,    92,    70,    70,    70,    92,    92,    55,
      83,   108,   128,   129,    40,    41,    49,    70,    72,    74,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      69,   107,    94,    63,    76,    77,    64,    65,    47,    48,
      43,    44,    78,    79,    42,    50,    68,    80,    81,    46,
      45,    82,    75,    86,    85,   142,    85,   141,   125,   129,
      85,   126,    83,   121,   130,   131,   121,    71,    75,    75,
      71,    73,    85,   109,   134,   123,   124,    83,   141,    28,
     143,   108,    86,   128,   108,   108,    86,   141,    71,    71,
      55,    71,    91,   106,   108,    55,   106,    94,    94,    94,
      95,    95,    96,    96,    97,    97,    97,    97,    98,    98,
      99,   100,   101,   102,   103,   108,   106,    85,    85,   109,
      83,    75,    86,    55,    51,   139,    75,    85,   141,    70,
     143,    71,    71,    71,    71,    94,    71,    75,    73,    83,
     109,   131,    85,   123,   108,    71,   108,   141,   141,   141,
     106,   105,    71,   141,    71,    11,    86,   141,   141
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
     116,   116,   116,   117,   117,   117,   118,   118,   118,   118,
     119,   119,   119,   119,   120,   120,   121,   122,   122,   123,
     123,   123,   124,   124,   125,   125,   126,   127,   127,   128,
     129,   129,   130,   130,   131,   131,   131,   132,   132,   132,
     133,   133,   134,   134,   135,   135,   136,   136,   136,   136,
     136,   136,   136,   137,   137,   138,   138,   139,   139,   140,
     140,   140,   140,   140,   141,   141,   141,   141,   141,   141,
     142,   142,   143,   143,   144,   144,   144,   145,   145,   145,
     145,   146,   146,   146
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
       1,     1,     1,     5,     4,     2,     4,     3,     3,     2,
       2,     3,     3,     4,     1,     2,     1,     2,     3,     1,
       3,     4,     1,     3,     1,     2,     3,     1,     1,     1,
       2,     1,     1,     3,     1,     2,     3,     4,     5,     2,
       1,     3,     1,     3,     1,     3,     1,     3,     4,     3,
       4,     4,     3,     1,     3,     1,     3,     2,     1,     3,
       2,     2,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     2,     5,     7,     5,     5,     7,     6,
       7,     3,     4,     3
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
#line 44 "src/parser.y" /* yacc.c:1646  */
    {g_root = (yyvsp[0].node);}
#line 1694 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 47 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new primary_expression(1,(yyvsp[0].str));}
#line 1700 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 48 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new primary_expression(2,(yyvsp[0].str));}
#line 1706 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 49 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new primary_expression(3,(yyvsp[0].str));}
#line 1712 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 50 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new primary_expression(4,(yyvsp[-1].node));}
#line 1718 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 54 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1724 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 55 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new postfix_expression(1,(yyvsp[-3].node),(yyvsp[-1].node));}
#line 1730 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 56 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new postfix_expression(2,(yyvsp[-2].node));}
#line 1736 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 57 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new postfix_expression(3,(yyvsp[-3].node),(yyvsp[-1].node));}
#line 1742 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 58 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new postfix_expression(4,(yyvsp[-2].node),(yyvsp[0].str));}
#line 1748 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 59 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new postfix_expression(5,(yyvsp[-2].node),(yyvsp[0].str));}
#line 1754 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 60 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new postfix_expression(6,(yyvsp[-1].node));}
#line 1760 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 61 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new postfix_expression(7,(yyvsp[-1].node));}
#line 1766 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 65 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1772 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 66 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new argument_expression_list(1,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1778 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 70 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1784 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 71 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new unary_expression(1,(yyvsp[0].node));}
#line 1790 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 72 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new unary_expression(2,(yyvsp[0].node));}
#line 1796 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 73 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new unary_expression(3,(yyvsp[-1].str),(yyvsp[0].node));}
#line 1802 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 74 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new unary_expression(4,(yyvsp[-1].str),(yyvsp[0].node));}
#line 1808 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 75 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new unary_expression(5,(yyvsp[-3].str),(yyvsp[-1].node));}
#line 1814 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 79 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 1820 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 80 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 1826 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 81 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 1832 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 82 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 1838 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 83 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 1844 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 84 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 1850 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 88 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1856 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 89 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new cast_expression((yyvsp[-2].node),(yyvsp[0].node));}
#line 1862 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 93 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1868 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 94 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new multiplicative_expression(1,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1874 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 95 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new multiplicative_expression(2,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1880 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 96 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new multiplicative_expression(3,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1886 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 100 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1892 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 101 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new additive_expression(1,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1898 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 102 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new additive_expression(2,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1904 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 106 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1910 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 107 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new shift_expression(1,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1916 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 108 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new shift_expression(1,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1922 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 112 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1928 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 113 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new relational_expression(1,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1934 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 114 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new relational_expression(2,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1940 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 115 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new relational_expression(3,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1946 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 116 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new relational_expression(4,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1952 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 120 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1958 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 121 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new equality_expression(1,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1964 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 122 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new equality_expression(2,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1970 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 126 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1976 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 127 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new and_expression((yyvsp[-2].node),(yyvsp[0].node));}
#line 1982 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 131 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1988 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 132 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new exclusive_or_expression((yyvsp[-2].node),(yyvsp[0].node));}
#line 1994 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 136 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2000 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 137 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new inclusive_or_expression((yyvsp[-2].node),(yyvsp[0].node));}
#line 2006 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 141 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2012 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 142 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new logical_and_expression((yyvsp[-2].node),(yyvsp[0].node));}
#line 2018 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 146 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2024 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 147 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new logical_or_expression((yyvsp[-2].node),(yyvsp[0].node));}
#line 2030 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 151 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2036 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 152 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new conditional_expression((yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node));}
#line 2042 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 156 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2048 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 157 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new assignment_expression((yyvsp[-2].node),(yyvsp[-1].str),(yyvsp[0].node));}
#line 2054 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 161 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 2060 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 162 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string ("*=");}
#line 2066 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 163 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string ("/=");}
#line 2072 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 164 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string ("%=");}
#line 2078 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 165 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string ("+=");}
#line 2084 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 166 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string ("-=");}
#line 2090 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 167 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string ("<<=");}
#line 2096 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 168 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string (">>=");}
#line 2102 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 169 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string ("&=");}
#line 2108 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 170 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string ("^=");}
#line 2114 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 171 "src/parser.y" /* yacc.c:1646  */
    {(yyval.str) = new std::string ("|=");}
#line 2120 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 175 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2126 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 176 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new expression((yyvsp[-2].node),(yyvsp[0].node));}
#line 2132 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 180 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2138 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 184 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2144 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 185 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new declaration_specifiers(1,(yyvsp[-1].node),(yyvsp[0].node),NULL);}
#line 2150 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 186 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2156 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 187 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new declaration_specifiers(2,(yyvsp[-1].node),NULL,(yyvsp[0].node));}
#line 2162 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 194 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2168 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 195 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new init_declarator_list((yyvsp[-2].node),(yyvsp[0].node));}
#line 2174 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 199 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2180 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 200 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new init_declarator((yyvsp[-2].node),(yyvsp[0].node));}
#line 2186 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 204 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new storage_class_specifier((yyvsp[0].str));}
#line 2192 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 206 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new storage_class_specifier((yyvsp[0].str));}
#line 2198 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 207 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new storage_class_specifier((yyvsp[0].str));}
#line 2204 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 210 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new translation_unit(1,(yyvsp[0].node));}
#line 2210 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 211 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new translation_unit(2,(yyvsp[-1].node),(yyvsp[0].node));}
#line 2216 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 216 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new external_declaration(1,(yyvsp[0].node));}
#line 2222 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 217 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new external_declaration(2,(yyvsp[0].node));}
#line 2228 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 221 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new type_specifier(1);}
#line 2234 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 222 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new type_specifier(2);}
#line 2240 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 223 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new type_specifier(3);}
#line 2246 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 224 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new type_specifier(4);}
#line 2252 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 225 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new type_specifier(5);}
#line 2258 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 226 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new type_specifier(6);}
#line 2264 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 227 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new type_specifier(7);}
#line 2270 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 228 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new type_specifier(8);}
#line 2276 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 229 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new type_specifier(9);}
#line 2282 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 230 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2288 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 231 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2294 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 236 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new struct_or_union_specifier(1,(yyvsp[-4].node),(yyvsp[-3].str),(yyvsp[-1].node));}
#line 2300 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 237 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new struct_or_union_specifier(2,(yyvsp[-3].node),NULL,(yyvsp[-1].node));}
#line 2306 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 238 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new struct_or_union_specifier(3,(yyvsp[-1].node),(yyvsp[0].str),NULL);}
#line 2312 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 242 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new function_definition(1,(yyvsp[-3].node),(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 2318 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 243 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new function_definition(2,(yyvsp[-2].node),(yyvsp[-1].node),NULL,(yyvsp[0].node));}
#line 2324 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 244 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new function_definition(3,NULL,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 2330 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 245 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new function_definition(4,NULL,(yyvsp[-1].node),NULL,(yyvsp[0].node));}
#line 2336 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 268 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new compound_statement(1,NULL,NULL); }
#line 2342 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 269 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node); }
#line 2348 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 270 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node); }
#line 2354 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 271 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new compound_statement(2,(yyvsp[-1].node),(yyvsp[-2].node)); }
#line 2360 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 275 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) =  (yyvsp[0].node);}
#line 2366 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 276 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new declaration_list(1,(yyvsp[0].node), (yyvsp[-1].node));}
#line 2372 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 281 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2378 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 285 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 2384 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 286 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new declaration(1,(yyvsp[-2].node), (yyvsp[-1].node));}
#line 2390 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 290 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2396 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 291 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 2402 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 292 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-2].node);}
#line 2408 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 296 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2414 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 297 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) =new initializer_list(2,(yyvsp[0].node),(yyvsp[-2].node));}
#line 2420 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 303 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2426 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 304 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new struct_declaration_list(1,(yyvsp[0].node), (yyvsp[-1].node));}
#line 2432 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 308 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new struct_declaration(1,(yyvsp[-2].node), (yyvsp[-1].node));}
#line 2438 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 312 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new struct_or_union(1, (yyvsp[0].str)) ;}
#line 2444 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 313 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new struct_or_union(2, (yyvsp[0].str)) ;}
#line 2450 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 317 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2456 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 322 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new specifier_qualifier_list(1,(yyvsp[-1].node),(yyvsp[0].node),NULL);}
#line 2462 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 323 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2468 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 329 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2474 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 330 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new struct_declarator_list(1,(yyvsp[0].node),(yyvsp[-2].node));}
#line 2480 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 334 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2486 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 335 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2492 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 336 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new struct_declarator(1,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2498 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 340 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new enum_specifier(1,(yyvsp[-3].str),NULL,(yyvsp[-1].node));}
#line 2504 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 341 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new enum_specifier(2,(yyvsp[-4].str),(yyvsp[-3].str),(yyvsp[-1].node));}
#line 2510 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 342 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new enum_specifier(3,(yyvsp[-1].str),(yyvsp[0].str),NULL);}
#line 2516 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 345 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2522 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 346 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new enumerator_list(1,(yyvsp[0].node),(yyvsp[-2].node));}
#line 2528 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 350 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new enumerator(1,(yyvsp[0].str),NULL);}
#line 2534 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 351 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new enumerator(2,(yyvsp[-2].str),(yyvsp[0].node));}
#line 2540 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 360 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new identifier_list(1,(yyvsp[0].str),NULL);}
#line 2546 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 361 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new identifier_list(2,(yyvsp[0].str),(yyvsp[-2].node));}
#line 2552 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 365 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new direct_declarator(1,(yyvsp[0].str),NULL,NULL,NULL,NULL,NULL);}
#line 2558 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 366 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new direct_declarator(2,NULL,NULL,(yyvsp[-1].node),NULL,NULL,NULL);}
#line 2564 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 367 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new direct_declarator(3,NULL,(yyvsp[-3].node),NULL,(yyvsp[-1].node),NULL,NULL);}
#line 2570 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 368 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new direct_declarator(4,NULL,(yyvsp[-2].node),NULL,NULL,NULL,NULL);}
#line 2576 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 369 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new direct_declarator(5,NULL,(yyvsp[-3].node),NULL,NULL,(yyvsp[-1].node),NULL);}
#line 2582 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 370 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new direct_declarator(6,NULL,(yyvsp[-3].node),NULL,NULL,NULL,(yyvsp[-1].node));}
#line 2588 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 371 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new direct_declarator(7,NULL,(yyvsp[-2].node),NULL,NULL,NULL,NULL);}
#line 2594 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 376 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2600 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 377 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new parameter_list(1,(yyvsp[0].node),(yyvsp[-2].node));}
#line 2606 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 380 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2612 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 381 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new parameter_type_list(1,(yyvsp[-2].node),(yyvsp[0].str));}
#line 2618 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 384 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new parameter_declaration(1,(yyvsp[-1].node),(yyvsp[0].node),NULL);}
#line 2624 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 386 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new parameter_declaration(2,(yyvsp[0].node),NULL,NULL);}
#line 2630 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 402 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new jump_statement(1,(yyvsp[-1].str),(yyvsp[-2].str),NULL);}
#line 2636 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 403 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new jump_statement(2,(yyvsp[-1].str),NULL,NULL);}
#line 2642 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 404 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new jump_statement(3,(yyvsp[-1].str),NULL,NULL);}
#line 2648 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 405 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new jump_statement(4,(yyvsp[-1].str),NULL,NULL);}
#line 2654 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 406 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new jump_statement(5,(yyvsp[-2].str),NULL,(yyvsp[-1].node));}
#line 2660 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 410 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2666 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 411 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2672 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 412 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2678 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 413 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2684 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 414 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2690 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 415 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2696 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 419 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new statement_list(1,(yyvsp[0].node),NULL);}
#line 2702 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 420 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new statement_list(2,(yyvsp[0].node),(yyvsp[-1].node));}
#line 2708 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 424 "src/parser.y" /* yacc.c:1646  */
    {/*$$ = new expression_statement();*/}
#line 2714 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 425 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new expression_statement((yyvsp[-1].node));}
#line 2720 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 429 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new selection_statement(1,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2726 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 430 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new selection_statement(2,(yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node));}
#line 2732 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 431 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new selection_statement(3,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2738 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 435 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new iteration_statement(1,(yyvsp[-2].node),(yyvsp[0].node),NULL,NULL);}
#line 2744 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 436 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new iteration_statement(2,(yyvsp[-2].node),(yyvsp[-5].node),NULL,NULL);}
#line 2750 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 437 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new iteration_statement(3,(yyvsp[0].node),NULL,(yyvsp[-3].node),(yyvsp[-2].node));}
#line 2756 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 438 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new iteration_statement(4,(yyvsp[0].node),(yyvsp[-2].node),(yyvsp[-4].node),(yyvsp[-3].node));}
#line 2762 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 442 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new labeled_statement(1,(yyvsp[-2].str),NULL,NULL,(yyvsp[0].node));}
#line 2768 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 443 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new labeled_statement(2,NULL,(yyvsp[-3].str),(yyvsp[-2].node),(yyvsp[0].node));}
#line 2774 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 444 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = new labeled_statement(3,NULL,(yyvsp[-2].str),NULL,(yyvsp[0].node));}
#line 2780 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;


#line 2784 "src/parser.tab.cpp" /* yacc.c:1646  */
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
#line 453 "src/parser.y" /* yacc.c:1906  */


const Node *g_root; // Definition of variable (to match declaration earlier)

const Node *parseAST()
{
  g_root=0;
  yyparse();
  return g_root;
}
