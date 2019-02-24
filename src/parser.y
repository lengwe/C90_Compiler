%code requires{
  #include <string>
  #include <iostream>

  int yylex(void);
  void yyerror(const char*);
}

%union{
  int int_num;
  //do we need both double and float?
  double double_num;
  float float_num;
  char* str;
  //TODO: add ast class
}

/*KEYWORD*/
%token AUTO BREAK CASE CHAR CONST CONTINUE DEFAULT DO DOUBLE ELSE ENUM EXTERN FLOAT FOR IF INT LONG REGISTER RETURN SHORT SIGNED UNSIGNED SIZEOF STATIC STRUCT SWITCH TYPEDEF UNION VOID VOLATILE WHILE
/*OPERATOR*/
%token ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSGIN RIGHT_ASSIGN LEFT_ASSIGN AND_ASSIGN XOR_ASSIGN OR_ASSIGN
%token INC_OP DEC_OP EQ_OP GE_OP LE_OP OR_OP AND_OP LEFT_OP RIGHT_OP PTR_OP NE_OP

%type <number> INTEGER_NUM
%type <float_num> FLOAT_NUM
%type <str> IDENTIFIER
