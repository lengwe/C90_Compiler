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
}

/*KEYWORD*/
%token AUTO BREAK CASE CHAR  CONTINUE DEFAULT DO DOUBLE ELSE ENUM FLOAT FOR IF INT LONG RETURN SHORT SIGNED UNSIGNED SIZEOF STATIC STRUCT SWITCH TYPEDEF VOID WHILE CONST ELLIPSIS
/*OPERATOR*/
%token ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN RIGHT_ASSIGN LEFT_ASSIGN AND_ASSIGN XOR_ASSIGN OR_ASSIGN
%token INC_OP DEC_OP EQ_OP GE_OP LE_OP OR_OP AND_OP LEFT_OP RIGHT_OP PTR_OP NE_OP GOTO UNION VOLATILE
%token IDENTIFIER FLOAT_NUM HEX_NUM INT_NUM CHAR_CONSTANT CONSTANT MOD_ASSGIN STRING_LITERAL MORE LESS


%type <str> IDENTIFIER VOID CHAR SHORT INT LONG FLOAT DOUBLE SIGNED UNSIGNED STRING_LITERAL CHAR_CONSTANT CONSTANT SIZEOF STRUCT UNION ENUM CONST
%type <str> TYPEDEF STATIC AUTO ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSGIN RIGHT_ASSIGN LEFT_ASSIGN AND_ASSIGN XOR_ASSIGN OR_ASSIGN '*' '+' '-' '~' '!' '&' '='
%type <str> unary_operator assignment_operator  VOLATILE GOTO CONTINUE BREAK RETURN DEFAULT CASE FOR
%type <node> type_specifier translation_unit external_declaration declaration_specifiers
//expressions
%type <node> primary_expression argument_expression_list unary_expression cast_expression multiplicative_expression additive_expression shift_expression relational_expression
%type <node> equality_expression and_expression exclusive_or_expression inclusive_or_expression logical_and_expression logical_or_expression conditional_expression assignment_expression expression constant_expression
//declarators
%type <node> init_declarator_list storage_class_specifier initializer struct_or_union_specifier postfix_expression function_definition struct_declaration_list
%type <node> declaration_list identifier_list  struct_declaration
%type <node> compound_statement  declarator declaration struct_declarator
%type <node>  struct_or_union type_name specifier_qualifier_list struct_declarator_list initializer_list
%type <node>  direct_declarator parameter_list parameter_type_list parameter_declaration
%type <node> jump_statement statement statement_list expression_statement selection_statement iteration_statement labeled_statement
%type <node>  init_declarator enum_specifier enumerator_list enumerator
%start ROOT

%%

ROOT:  translation_unit  {g_root = $1;}

primary_expression
: IDENTIFIER                 {$$ = new primary_expression(1,$1);}
// | '+' CONSTANT               {$$ = new primary_expression(2,$2);}
// | '-' CONSTANT                {$$ = new primary_expression(6,$2);}
| CONSTANT                   {$$ = new primary_expression(2,$1);}
| STRING_LITERAL             {$$ = new primary_expression(3,$1);}
| '(' expression ')'         {$$ = new primary_expression(4,$2);}
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
| argument_expression_list ',' assignment_expression    {$$ = new argument_expression_list(1,$1,$3);}
;

unary_expression
: postfix_expression                      {$$ = $1;}
| INC_OP unary_expression                 {$$ = new unary_expression(1,$2);}
| DEC_OP unary_expression                 {$$ = new unary_expression(2,$2);}
| unary_operator cast_expression          {$$ = new unary_expression(3,$1,$2);}
| SIZEOF unary_expression                 {$$ = new unary_expression(4,$1,$2);}
| SIZEOF '(' type_name ')'                {$$ = new unary_expression(5,$1,$3);}
;

unary_operator
: '&'          {$$ = new std::string("&");}
| '*'          {$$ = new std::string("*");}
| '+'          {$$ = new std::string("+");}
| '-'          {$$ = new std::string("-");}
| '~'          {$$ = new std::string("~");}
| '!'          {$$ = new std::string("!");}
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
| shift_expression '<''<' additive_expression       {$$ = new shift_expression(1,$1,$4);}
| shift_expression '>''>' additive_expression      {$$ = new shift_expression(2,$1,$4);}
;

relational_expression
: shift_expression                                   {$$ = $1;}
| relational_expression LESS shift_expression         {$$ = new relational_expression(1,$1,$3);}
| relational_expression MORE shift_expression         {$$ = new relational_expression(2,$1,$3);}
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
: '='            {$$ = new std::string ("=");}
| MUL_ASSIGN     {$$ = new std::string ("*=");}
| DIV_ASSIGN     {$$ = new std::string ("/=");}
| MOD_ASSIGN     {$$ = new std::string ("%=");}
| ADD_ASSIGN     {$$ = new std::string ("+=");}
| SUB_ASSIGN     {$$ = new std::string ("-=");}
| LEFT_ASSIGN    {$$ = new std::string ("<<=");}
| RIGHT_ASSIGN   {$$ = new std::string (">>=");}
| AND_ASSIGN     {$$ = new std::string ("&=");}
| XOR_ASSIGN     {$$ = new std::string ("^=");}
| OR_ASSIGN      {$$ = new std::string ("|=");}
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
| storage_class_specifier declaration_specifiers      {$$ = new declaration_specifiers(1,$1,$2,NULL);}
| type_specifier                                      {$$ = $1;}
| type_specifier declaration_specifiers               {$$ = new declaration_specifiers(2,$1,NULL,$2);}
// | type_qualifier                                      {$$ = new declaration_specifiers(5,$1);}
// | type_qualifier declaration_specifiers               {$$ = new declaration_specifiers(6,$1,$2);}
;


init_declarator_list
: init_declarator                               {$$ = $1;}
| init_declarator_list ',' init_declarator      {$$ = new init_declarator_list($1,$3);}
;

init_declarator
: declarator                                    {$$ = new init_declarator($1,NULL);}
| declarator '=' initializer                    {$$ = new init_declarator($1,$3);}
;

storage_class_specifier
: TYPEDEF        {$$ = new storage_class_specifier($1);}
/*| EXTERN(not in use)*/
| STATIC         {$$ = new storage_class_specifier($1);}
| AUTO           {$$ = new storage_class_specifier($1);}

translation_unit
: external_declaration                          {$$ = new translation_unit(1,$1);}
| translation_unit external_declaration         {$$ = new translation_unit(2,$1,$2);}
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
| struct_or_union_specifier     {$$ = $1;}
| enum_specifier                {$$ = $1;}
//| TYPE_NAME
;

struct_or_union_specifier
: struct_or_union IDENTIFIER '{' struct_declaration_list '}'      {$$ = new struct_or_union_specifier(1,$1,$2,$4);}
| struct_or_union '{' struct_declaration_list '}'                 {$$ = new struct_or_union_specifier(2,$1,NULL,$3);}
| struct_or_union IDENTIFIER                                      {$$ = new struct_or_union_specifier(3,$1,$2,NULL);}
;

function_definition
: declaration_specifiers declarator declaration_list compound_statement  {$$ = new function_definition(1,$1,$2,$3,$4);}
| declaration_specifiers declarator compound_statement                   {$$ = new function_definition(2,$1,$2,NULL,$3);}
// | declarator declaration_list compound_statement                      {$$ = new function_definition(3,NULL,$1,$2,$3);}
// | declarator compound_statement                                     {$$ = new function_definition(4,NULL,$1,NULL,$2);}
;


// direct_abstract_declarator
// : '(' direct_abstract_declarator ')' 				                  { $$ = new direct_abstract_declarator(1,$2,NULL,NULL,NULL); }
// | '[' ']'							                                        { $$ = new direct_abstract_declarator(2,NULL,NULL,NULL,NULL); }
// | '[' constant_expression ']'				                        	{ $$ = new direct_abstract_declarator(3,NULL,$2,NULL,NULL); }
// | direct_declarator '[' ']'				                            { $$ = new direct_abstract_declarator(4,NULL,NULL,NULL,$1); }
// | direct_declarator '[' constant_expression ']'              	{ $$ = new direct_abstract_declarator(5,NULL,$3,NULL,$1); }
// | '(' ')'						                                         	{ $$ = new direct_abstract_declarator(6,NULL,NULL,NULL,NULL); }
// | '(' parameter_type_list ')'				                        	{ $$ = new direct_abstract_declarator(7,NULL,NULL,$2,NULL); }
// | direct_abstract_declarator '(' ')'	                		   	{ $$ = new direct_abstract_declarator(8,NULL,NULL,NULL,$1); }
// | direct_abstract_declarator '(' parameter_list ')'          	{ $$ = new direct_abstract_declarator(9,NULL,NULL,$3,$1); } //what
// ;

// abstract_declarator
// : pointer                                                      { $$ = $1 ; }
// | direct_abstract_declarator                                   { $$ = $1; }
// | pointer direct_abstract_declarator                           { $$ = new abstract_declarator(3,$1,$2); }
// ;

compound_statement
: '{' '}'                                                      {$$ = new compound_statement(1,NULL,NULL); }
| '{' statement_list '}'                                       {$$ = new compound_statement(2,$2,NULL); }
| '{' declaration_list '}'                                     {$$ = new compound_statement(3,NULL,$2); }
| '{' declaration_list statement_list '}'                      {$$ = new compound_statement(4,$3,$2); }
;

declaration_list
: declaration                                                  {$$ =  $1;}
| declaration_list declaration                                 {$$ = new declaration_list(1,$2, $1);}
;

declarator
//: pointer direct_declarator                                    {$$ = new declarator(1,$1, $2);}
: direct_declarator                                            {$$ = $1;}
;

declaration
: declaration_specifiers ';'                                   {$$ = $1;}
| declaration_specifiers init_declarator_list ';'              {$$ = new declaration(1,$1, $2);}
;

initializer
: assignment_expression                                        {$$ = $1;}
| '{' initializer_list '}'                                     {$$ = $2;}
| '{' initializer_list ',' '}'                                 {$$ = $2;}
;

initializer_list
: initializer                                                    {$$ = $1;}
| initializer_list ',' initializer                               {$$ =new initializer_list(2,$3,$1);}
;



struct_declaration_list
: struct_declaration                                           {$$ = $1;}
| struct_declaration_list struct_declaration                   {$$ = new struct_declaration_list(1,$2, $1);}
;

struct_declaration
: specifier_qualifier_list struct_declarator_list ';'         {$$ = new struct_declaration(1,$1, $2);}
;

struct_or_union
: STRUCT                                                      {$$ = new struct_or_union(1, $1) ;}
| UNION                                                       {$$ = new struct_or_union(2, $1) ;}
;

type_name
: specifier_qualifier_list                                     {$$ = $1;}
//| specifier_qualifier_list abstract_declarator                 {$$ = new type_name(1,$1, $2);}
;


specifier_qualifier_list
: type_specifier specifier_qualifier_list                            {$$ = new specifier_qualifier_list(1,$1,$2,NULL);}
| type_specifier                                                     {$$ = $1;}
//| type_qualifier specifier_qualifier_list                            {$$ = new specifier_qualifier_list(2,NULL,$2,$1);}
//| type_qualifier                                                     {$$ = $1;}
;

struct_declarator_list
: struct_declarator                                                  {$$ = $1;}
| struct_declarator_list ',' struct_declarator                       {$$ = new struct_declarator_list(1,$3,$1);}
;

struct_declarator
: declarator                                                         {$$ = $1;}
| ':' constant_expression                                            {$$ = $2;}
| declarator ':' constant_expression                                 {$$ = new struct_declarator(1,$1,$3);}
;

enum_specifier
: ENUM '{' enumerator_list '}'                                       {$$ = new enum_specifier(1,$1,NULL,$3);}
| ENUM IDENTIFIER '{' enumerator_list '}'                            {$$ = new enum_specifier(2,$1,$2,$4);}
| ENUM IDENTIFIER                                                    {$$ = new enum_specifier(3,$1,$2,NULL);}
;
enumerator_list
: enumerator                                                         {$$ = $1;}
| enumerator_list ',' enumerator                                     {$$ = new enumerator_list(1,$3,$1);}
;

enumerator
: IDENTIFIER                                                         {$$ = new enumerator(1,$1,NULL);}
| IDENTIFIER '=' constant_expression                                 {$$ = new enumerator(2,$1,$3);}
;

// type_qualifier
// : CONST                                                              {$$ = new type_qualifier(1,$1);}
// | VOLATILE                                                           {$$ = new type_qualifier(2,$1);}
// ;
//
// identifier_list
// : IDENTIFIER                                                         {$$ = new identifier_list(1,$1,NULL);}
// | identifier_list ',' IDENTIFIER                                     {$$ = new identifier_list(2,$3,$1);}




direct_declarator
: IDENTIFIER                                                         {$$ = new direct_declarator(1,$1,NULL,NULL,NULL,NULL);}
| '(' declarator ')'                                                 {$$ = new direct_declarator(2,NULL,NULL,$2,NULL,NULL);}
| direct_declarator '[' constant_expression ']'                      {$$ = new direct_declarator(3,NULL,$1,NULL,$3,NULL);}
| direct_declarator '[' ']'                                          {$$ = new direct_declarator(4,NULL,$1,NULL,NULL,NULL);}
| direct_declarator '(' parameter_type_list ')'                      {$$ = new direct_declarator(5,NULL,$1,NULL,NULL,$3);}
//| direct_declarator '(' identifier_list ')'                          {$$ = new direct_declarator(6,NULL,$1,NULL,NULL,NULL,$3);}
| direct_declarator '(' ')'                                          {$$ = new direct_declarator(6,NULL,$1,NULL,NULL,NULL);}
;


parameter_list
: parameter_declaration                                              {$$ = $1;}
| parameter_list ',' parameter_declaration                           {$$ = new parameter_list(1,$3,$1);}
;
parameter_type_list
: parameter_list                                                     {$$ = $1;}
//| parameter_list ',' ELLIPSIS                                        {$$ = new parameter_type_list(1,$1,$3);}
;
parameter_declaration
: declaration_specifiers declarator                                  {$$ = new parameter_declaration(1,$1,$2,NULL);}
//| declaration_specifiers abstract_declarator                         {$$ = new parameter_declaration(2,$1,NULL,$2);}
| declaration_specifiers                                             {$$ = new parameter_declaration(2,$1,NULL,NULL);}
;

// type_qualifier_list
//: type_qualifier                                                      {$$ = $1;}
// | type_qualifier_list type_qualifier                                  {$$ = new type_qualifier_list(2,$2,$1);}
// ;

// pointer
// : '*'                              {$$ = new pointer(1,NULL, NULL);}
// | '*' type_qualifier_list          {$$ = new pointer(2,NULL,$2);}
// | '*' pointer                      {$$ = new pointer(3,$2,NULL);}
// | '*' type_qualifier_list pointer  {$$ = new pointer(4,$3,$2);}
// ;

jump_statement
: GOTO IDENTIFIER ';'                                                  {$$ = new jump_statement(1,$2,$1,NULL);}
| CONTINUE ';'                                                         {$$ = new jump_statement(2,$1,NULL,NULL);}
| BREAK ';'                                                            {$$ = new jump_statement(3,$1,NULL,NULL);}
| RETURN ';'                                                           {$$ = new jump_statement(4,$1,NULL,NULL);}
| RETURN expression ';'                                                {$$ = new jump_statement(5,$1,NULL,$2);}
;

statement
: labeled_statement                                                    {$$ = $1;} //not sure
| compound_statement                                                   {$$ = $1;}
| expression_statement                                                 {$$ = $1;}
| selection_statement                                                  {$$ = $1;}
| iteration_statement                                                  {$$ = $1;}
| jump_statement                                                       {$$ = $1;}
;

statement_list
: statement                                                            {$$ = new statement_list(1,$1,NULL);}
| statement_list statement                                             {$$ = new statement_list(2,$2,$1);}
;

expression_statement
: ';'                                                                  {/*$$ = new expression_statement();*/}
| expression ';'                                                       {$$ = new expression_statement($1);}
;

selection_statement
: IF '(' expression ')' statement                                      {$$ = new selection_statement(1,$3,$5,NULL);}
| IF '(' expression ')' statement ELSE statement                       {$$ = new selection_statement(2,$3,$5,$7);}
| SWITCH '(' expression ')' statement                                  {$$ = new selection_statement(3,$3,$5,NULL);}
;

iteration_statement
: WHILE '(' expression ')' statement                                           {$$ = new iteration_statement(1,$3,$5,NULL,NULL);}
| DO statement WHILE '(' expression ')' ';'                                    {$$ = new iteration_statement(2,$5,$2,NULL,NULL);}
| FOR '(' expression_statement expression_statement ')' statement              {$$ = new iteration_statement(3,$6,NULL,$3,$4);}
| FOR '(' expression_statement expression_statement expression ')' statement   {$$ = new iteration_statement(4,$7,$5,$3,$4);}
;

labeled_statement
: IDENTIFIER ':' statement                                                     {$$ = new labeled_statement(1,$1,NULL,NULL,$3);}
| CASE constant_expression ':' statement                                       {$$ = new labeled_statement(2,NULL,$1,$2,$4);}
| DEFAULT ':' statement                                                        {$$ = new labeled_statement(3,NULL,$1,NULL,$3);}
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
