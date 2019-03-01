%code requires{
  #include <string>
  #include <iostream>
  #include <cassert>
  #include "../include/ast.hpp"
  extern const Node *g_root; // A way of getting the AST out
  int yylex(void);
  void yyerror(const char*);
}
%error-verbose
%union{
  int int_num;
  //do we need both double and float?
  double double_num;
  float float_num;
  std::string *str;
  Node* node;
  type_specifier* type_specifierPtr;
  //TODO: add ast class
}

/*KEYWORD*/
%token AUTO BREAK CASE CHAR CONST CONTINUE DEFAULT DO DOUBLE ELSE ENUM EXTERN FLOAT FOR IF INT LONG REGISTER RETURN SHORT SIGNED UNSIGNED SIZEOF STATIC STRUCT SWITCH TYPEDEF UNION VOID VOLATILE WHILE
/*OPERATOR*/
%token ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSGIN RIGHT_ASSIGN LEFT_ASSIGN AND_ASSIGN XOR_ASSIGN OR_ASSIGN
%token INC_OP DEC_OP EQ_OP GE_OP LE_OP OR_OP AND_OP LEFT_OP RIGHT_OP PTR_OP NE_OP
%token IDENTIFIER FLOAT_NUM HEX_NUM INT_NUM

%type <number> INT_NUM
%type <float_num> FLOAT_NUM
%type <str> IDENTIFIER VOID CHAR SHORT INT LONG FLOAT DOUBLE SIGNED UNSIGNED
%type <node> TYPE_SPECIFIER

%start ROOT

%%

ROOT: TYPE_SPECIFIER {g_root = $1;}
    ;

TYPE_SPECIFIER
	: VOID         {$$ = new type_specifier($1);}
	| CHAR         {$$ = new type_specifier($1);}
	| SHORT        {$$ = new type_specifier($1);}
	| INT          {$$ = new type_specifier($1);}
	| LONG         {$$ = new type_specifier($1);}
	| FLOAT        {$$ = new type_specifier($1);}
	| DOUBLE       {$$ = new type_specifier($1);}
	| SIGNED       {$$ = new type_specifier($1);}
	| UNSIGNED     {$$ = new type_specifier($1);}
	;

%%

const Node *g_root; // Definition of variable (to match declaration earlier)

const Node *parseAST()
{
  g_root=0;
  yyparse();
  return g_root;
}
