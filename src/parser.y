%code requires{
  #include <string>
  #include <iostream>
  #include <cassert>
  #include "../include/ast.hpp"
  extern const Node *g_root; // A way of getting the AST out
  int yylex(void);
  void yyerror(const char*);
}
/*%error-verbose*/
%union{
  std::string *str;
  Node* node;
  //TODO: add ast class
}

/*KEYWORD*/
%token AUTO BREAK CASE CHAR CONST CONTINUE DEFAULT DO DOUBLE ELSE ENUM EXTERN FLOAT FOR IF INT LONG REGISTER RETURN SHORT SIGNED UNSIGNED SIZEOF STATIC STRUCT SWITCH TYPEDEF UNION VOID VOLATILE WHILE
/*OPERATOR*/
%token ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSGIN RIGHT_ASSIGN LEFT_ASSIGN AND_ASSIGN XOR_ASSIGN OR_ASSIGN
%token INC_OP DEC_OP EQ_OP GE_OP LE_OP OR_OP AND_OP LEFT_OP RIGHT_OP PTR_OP NE_OP
%token IDENTIFIER FLOAT_NUM HEX_NUM INT_NUM


%type <str> IDENTIFIER VOID CHAR SHORT INT LONG FLOAT DOUBLE SIGNED UNSIGNED STRING_LITERAL CHAR_CONSTANT CONST
%type <str> ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSGIN RIGHT_ASSIGN LEFT_ASSIGN AND_ASSIGN XOR_ASSIGN OR_ASSIGN
%type <str> unary_operator assignment_operator storage_class_specifier
%type <node> type_specifier translation_unit external_declaration storage_class_specifier
%type <node> expression primary_expression argument_expression_list unary_expression cast_expression

%start ROOT

%%

/*ROOT: type_specifier {g_root = $1;}*/
ROOT: translation_unit {g_root = $1;}

primary_expression
: IDENTIFIER                 {$$ = new primary_expression(1,$1);}
| CONSTANT                   {$$ = new primary_expression(2,$1);}
| STRING_LITERAL             {$$ = new primary_expression(3,$1);}
| '(' expression ')'         {$$ = new primary_expression(4,$1);}
;

postfix_expression
: primary_expression                                    {$$ = new postfix_expression(1,$1);}
| postfix_expression '[' expression ']'                 {$$ = new postfix_expression(2,$1,$3);}
| postfix_expression '(' ')'                            {$$ = new postfix_expression(3,$1);}
| postfix_expression '(' argument_expression_list ')'   {$$ = new postfix_expression(4,$1,$3);}
| postfix_expression '.' IDENTIFIER                     {$$ = new postfix_expression(5,$1,$3);}
| postfix_expression PTR_OP IDENTIFIER                  {$$ = new postfix_expression(6,$1,$3);}
| postfix_expression INC_OP                             {$$ = new postfix_expression(7,$1);}
| postfix_expression DEC_OP                             {$$ = new postfix_expression(8,$1);}
;

argument_expression_list
: assignment_expression                                 {$$ = new argument_expression_list(1,$1);}
| argument_expression_list ',' assignment_expression    {$$ = new argument_expression_list(2,$1,$3)}
;

unary_expression
: postfix_expression                      {$$ = new unary_expression(1,$1);}
| INC_OP unary_expression                 {$$ = new unary_expression(2,$2);}
| DEC_OP unary_expression                 {$$ = new unary_expression(3,$2);}
| unary_operator cast_expression          {$$ = new unary_expression(4,$1,$2);}
// | SIZEOF unary_expression
// | SIZEOF '(' type_name ')'
;

translation_unit
: external_declaration                          {$$ = new translation_unit($1);}
| translation_unit external_declaration         {$$ = new translation_unit($1,$2);}
;

external_declaration
: function_definition           {$$ = new external_declaration(1,$1);}
| declaration                   {$$ = new external_declaration(2,$1);}
;

type_specifier
: VOID         {$$ = new type_specifier(1);}
| CHAR         {$$ = new type_specifier(2);}
| SHORT        {$$ = new type_specifier(3);}
| INT          {$$ = new type_specifier(4);}
| LONG         {$$ = new type_specifier(5);}
| FLOAT        {$$ = new type_specifier(6);}
| DOUBLE       {$$ = new type_specifier(7);}
| SIGNED       {$$ = new type_specifier(8);}
| UNSIGNED     {$$ = new type_specifier(9);}
//| struct_or_union_specifier
//| enum_specifier
//| TYPE_NAME
;


unary_operator
: '&'          {$$ = $1;}
| '*'          {$$ = $1;}
| '+'          {$$ = $1;}
| '-'          {$$ = $1;}
| '~'          {$$ = $1;}
| '!'          {$$ = $1;}
;

assignment_operator
: '='            {$$ = $1;}
| MUL_ASSIGN     {$$ = new std:string ("*=");}
| DIV_ASSIGN     {$$ = new std:string ("/=");}
| MOD_ASSIGN     {$$ = new std:string ("%=");}
| ADD_ASSIGN     {$$ = new std:string ("+=");}
| SUB_ASSIGN     {$$ = new std:string ("-=");}
| LEFT_ASSIGN    {$$ = new std:string ("<<=");}
| RIGHT_ASSIGN   {$$ = new std:string (">>=");}
| AND_ASSIGN     {$$ = new std:string ("&=");}
| XOR_ASSIGN     {$$ = new std:string ("^=");}
| OR_ASSIGN      {$$ = new std:string ("|=");}
;

storage_class_specifier
: TYPEDEF        {$$ = new std:string ("typedef");}
//| EXTERN(not in use)
| STATIC         {$$ = new std:string ("static");}
| AUTO           {$$ = new std:string ("auto");}
| REGISTER       {$$ = new std:string ("register");}
;


%%

const Node *g_root; // Definition of variable (to match declaration earlier)

const Node *parseAST()
{
  g_root=0;
  yyparse();
  return g_root;
}
