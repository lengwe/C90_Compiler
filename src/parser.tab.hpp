/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 1 "src/parser.y" /* yacc.c:1909  */

  #include <string>
  #include <iostream>
  #include <cassert>
  #include "../include/ast.hpp"
  extern const Node *g_root; // A way of getting the AST out
  int yylex(void);
  void yyerror(const char*);

#line 54 "src/parser.tab.hpp" /* yacc.c:1909  */

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
    VOLATILE = 283,
    WHILE = 284,
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
    IDENTIFIER = 306,
    FLOAT_NUM = 307,
    HEX_NUM = 308,
    INT_NUM = 309,
    CHAR_CONSTANT = 310,
    CONSTANT = 311,
    MOD_ASSGIN = 312,
    STRING_LITERAL = 313
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 11 "src/parser.y" /* yacc.c:1909  */

  std::string *str;
  Node* node;
  //TODO: add ast class

#line 131 "src/parser.tab.hpp" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_PARSER_TAB_HPP_INCLUDED  */
