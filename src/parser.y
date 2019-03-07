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
%token AUTO BREAK CASE CHAR  CONTINUE DEFAULT DO DOUBLE ELSE ENUM FLOAT FOR IF INT LONG RETURN SHORT SIGNED UNSIGNED SIZEOF STATIC STRUCT SWITCH TYPEDEF VOID WHILE SIZEOF
/*OPERATOR*/
%token ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN RIGHT_ASSIGN LEFT_ASSIGN AND_ASSIGN XOR_ASSIGN OR_ASSIGN
%token INC_OP DEC_OP EQ_OP GE_OP LE_OP OR_OP AND_OP LEFT_OP RIGHT_OP PTR_OP NE_OP
%token IDENTIFIER FLOAT_NUM HEX_NUM INT_NUM CHAR_CONSTANT CONSTANT MOD_ASSGIN STRING_LITERAL


%type <str> IDENTIFIER VOID CHAR SHORT INT LONG FLOAT DOUBLE SIGNED UNSIGNED STRING_LITERAL CHAR_CONSTANT CONSTANT
%type <str> ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSGIN RIGHT_ASSIGN LEFT_ASSIGN AND_ASSIGN XOR_ASSIGN OR_ASSIGN
%type <str> unary_operator assignment_operator storage_class_specifier type_qualifier struct_or_union
%type <node> type_specifier translation_unit external_declaration declaration_specifiers type_name
//expressions
%type <node> expression primary_expression argument_expression_list unary_expression cast_expression multiplicative_expression additive_expression shift_expression relational_expression
%type <node> equality_expression and_expression exclusive_or_expression inclusive_or_expression logical_and_expression logical_or_expression conditional_expression assignment_expression expression constant_expression
//declarators
%type <node> init_declarator_list init_declarator declarator initializer struct_or_union_specifier


%start ROOT

%%

/*ROOT: type_specifier {g_root = $1;}*/
ROOT: translation_unit {g_root = $1;}

primary_expression
: IDENTIFIER                 {$$ = new primary_expression(1,$1);}
| CONSTANT                   {$$ = new primary_expression(2,$1);}
| STRING_LITERAL             {$$ = new primary_expression(3,$1);}
//| '(' expression ')'         {$$ = new primary_expression(4,$1);}
;

postfix_expression
: primary_expression                                    {$$ = $1;}
| postfix_expression '[' expression ']'                 {$$ = new postfix_expression(1,$1,$3);}
| postfix_expression '(' ')'                            {$$ = new postfix_expression(2,$1);}
| postfix_expression '(' argument_expression_list ')'   {$$ = new postfix_expression(3,$1,$3);}
| postfix_expression '.' IDENTIFIER                     {$$ = new postfix_expression(4,$1,$3);}
| postfix_expression PTR_OP IDENTIFIER                  {$$ = new postfix_expression(5,$1,$3);}
| postfix_expression INC_OP                             {$$ = new postfix_expression(6,$1);}
| postfix_expression DEC_OP                             {$$ = new postfix_expression(7,$1);}
;

argument_expression_list
: assignment_expression                                 {$$ = $1;}
| argument_expression_list ',' assignment_expression    {$$ = new argument_expression_list(1,$1,$3)}
;

unary_expression
: postfix_expression                      {$$ = $1;}
| INC_OP unary_expression                 {$$ = new unary_expression(1,$2);}
| DEC_OP unary_expression                 {$$ = new unary_expression(2,$2);}
| unary_operator cast_expression          {$$ = new unary_expression(3,$1,$2);}
| SIZEOF unary_expression                 {$$ = new unary_expression(4,$1,$2);}
| SIZEOF '(' type_name ')'                {$$ = new unary_expression(5,$1,$3)}
;

unary_operator
: '&'          {$$ = $1;}
| '*'          {$$ = $1;}
| '+'          {$$ = $1;}
| '-'          {$$ = $1;}
| '~'          {$$ = $1;}
| '!'          {$$ = $1;}
;

cast_expression
: unary_expression                      {$$ = $1;}
| '(' type_name ')' cast_expression     {$$ = new cast_expression($2,$4);}
;

multiplicative_expression
: cast_expression                                     {$$ = $1;}
| multiplicative_expression '*' cast_expression       {$$ = new multiplicative_expression(1,$1,$3);}
| multiplicative_expression '/' cast_expression       {$$ = new multiplicative_expression(2,$1,$3);}
| multiplicative_expression '%' cast_expression       {$$ = new multiplicative_expression(3,$1,$3);}
;

additive_expression
: multiplicative_expression                          {$$ = $1;}
| additive_expression '+' multiplicative_expression  {$$ = new additive_expression(1,$1,$3);}
| additive_expression '-' multiplicative_expression  {$$ = new additive_expression(2,$1,$3);}
;

shift_expression
: additive_expression                                {$$ = $1;}
| shift_expression LEFT_OP additive_expression       {$$ = new shift_expression(1,$1,$3);}
| shift_expression RIGHT_OP additive_expression      {$$ = new shift_expression(1,$1,$3);}
;

relational_expression
: shift_expression                                   {$$ = $1;}
| relational_expression '<' shift_expression         {$$ = new relational_expression(1,$1,$3);}
| relational_expression '>' shift_expression         {$$ = new relational_expression(2,$1,$3);}
| relational_expression LE_OP shift_expression       {$$ = new relational_expression(3,$1,$3);}
| relational_expression GE_OP shift_expression       {$$ = new relational_expression(4,$1,$3);}
;

equality_expression
: relational_expression                              {$$ = $1;}
| equality_expression EQ_OP relational_expression    {$$ = new equality_expression(1,$1,$3);}
| equality_expression NE_OP relational_expression    {$$ = new equality_expression(2,$1,$3);}
;

and_expression
: equality_expression                                {$$ = $1;}
| and_expression '&' equality_expression             {$$ = new and_expression($1,$3);}
;

exclusive_or_expression
: and_expression                                     {$$ = $1;}
| exclusive_or_expression '^' and_expression         {$$ = new exclusive_or_expression($1,$3);}
;

inclusive_or_expression
: exclusive_or_expression                                 {$$ = $1;}
| inclusive_or_expression '|' exclusive_or_expression     {$$ = new inclusive_or_expression($1,$3);}
;

logical_and_expression
: inclusive_or_expression                                 {$$ = $1;}
| logical_and_expression AND_OP inclusive_or_expression   {$$ = new logical_and_expression($1,$3);}
;

logical_or_expression
: logical_and_expression                                  {$$ = $1;}
| logical_or_expression OR_OP logical_and_expression      {$$ = new logical_or_expression($1,$3);}
;

conditional_expression
: logical_or_expression                                                 {$$ = $1;}
| logical_or_expression '?' expression ':' conditional_expression       {$$ = new conditional_expression($1,$3,$5);}
;

assignment_expression
: conditional_expression                                                {$$ = $1;}
| unary_expression assignment_operator assignment_expression            {$$ = new assignment_expression($1,$2,$3);}
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

expression
: assignment_expression                               {$$ = $1;}
| expression ',' assignment_expression                {$$ = new expression($1,$3);}
;

constant_expression
: conditional_expression                              {$$ = $1;}
;

declaration_specifiers
: storage_class_specifier                             {$$ = $1;}
| storage_class_specifier declaration_specifiers      {$$ = new declaration_specifiers(1,$1,$2);}
| type_specifier                                      {$$ = $1;}
| type_specifier declaration_specifiers               {$$ = new declaration_specifiers(2,$1,$2);}
// | type_qualifier                                      {$$ = new declaration_specifiers(5,$1);}
// | type_qualifier declaration_specifiers               {$$ = new declaration_specifiers(6,$1,$2);}
;


init_declarator_list
: init_declarator                               {$$ = $1;}
| init_declarator_list ',' init_declarator      {$$ = new init_declarator_list($1,$3);}
;

init_declarator
: declarator                                    {$$ = $1;}
| declarator '=' initializer                    {$$ = new init_declarator($1,$3);}
;

storage_class_specifier
: TYPEDEF        {$$ = new std:string ("typedef");}
/*| EXTERN(not in use)*/
| STATIC         {$$ = new std:string ("static");}
| AUTO           {$$ = new std:string ("auto");}

translation_unit
: external_declaration                          {$$ = new translation_unit(1,$1);}
| translation_unit external_declaration         {$$ = new translation_unit(2,$1,$2);}
;

external_declaration
//???{$$=$1 or class}
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
| struct_or_union_specifier     {$$ = $1;}
//| enum_specifier
//| TYPE_NAME
;

struct_or_union_specifier
: struct_or_union IDENTIFIER '{' struct_declaration_list '}'      {$$ = new struct_or_union_specifier(1,$1,$2,$4);}
| struct_or_union '{' struct_declaration_list '}'                 {$$ = new struct_or_union_specifier(2,$1,$3);}
| struct_or_union IDENTIFIER                                      {$$ = new struct_or_union_specifier(3,$1,$2);}
;

// type_qualifier (not in use?)
// : CONST        {$$ = new std::string ("const");}
//| VOLATILE
// ;








%%

const Node *g_root; // Definition of variable (to match declaration earlier)

const Node *parseAST()
{
  g_root=0;
  yyparse();
  return g_root;
}
