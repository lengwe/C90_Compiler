%code requires{
  #include <string>
  #include <iostream>
  #include <cassert>
  #include "../include/ast.hpp"
  extern const Node *g_root; // A way of getting the AST out
  int yylex(void);
  void yyerror(const char*);
}
//%error-verbose
%union{
  int int_num;
  //do we need both double and float?
  double double_num;
  float float_num;
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

%type <number> INT_NUM
%type <float_num> FLOAT_NUM
%type <str> IDENTIFIER VOID CHAR SHORT INT LONG FLOAT DOUBLE SIGNED UNSIGNED
%type <node> type_specifier translation_unit

%start ROOT

%%

ROOT: type_specifier {g_root = $1;}

// translation_unit
// 	: external_declaration                          {$$ = new translation_unit($1);}
// 	| translation_unit external_declaration         {$$ = new translation_unit($1,$2);}
// 	;

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



%%

const Node *g_root; // Definition of variable (to match declaration earlier)

const Node *parseAST()
{
  g_root=0;
  yyparse();
  return g_root;
}
