%option noyywrap

%{
// Avoid error "error: `fileno' was not declared in this scope"
extern "C" int fileno(FILE *stream);

#include "lexer.tab.hpp"
#include <string>
#include <iostream>

int Line = 1;
%}


KEYWORD {auto|break|case|char|const|continue|default|do|double|else|enum|extern|float|for|if|int|long|register|return|short|signed|unsigned|sizeof|static|struct|switch|typedef|union|void|volatile|while}
IDENTIFIER [A-Za-z_][A-Za-z0-9_]*
OPERATOR {\=|\+|\-|\*|\/|\%|\||\+=|\-=|\*=|\/=|%=|>>=|<<=|&=|\^=|\|=|\+\+|\-\-|==|!=|>|<|>=|<=|!|\|\||&&|\?|<<|>>|\[|\|\(|\)|\{|\}|\:|\,|\;|\->|\.\|&]
EXPONENT    [eE][\+|\-]?[0-9]+
FRACTION_CONSTANT [0-9]*\.[0-9]+|([0-9]+\.)
DECIMAL_CONSTANT  [1-9][0-9]*
HEX_CONSTANT      [0][xX][0-9A-Fa-f]+
FLOAT_SUFFIX      [f|F|l|L]
INTEGER_SUFFIX    [u|U|l|L|ul|UL|ll|LL|ull|ULL]
CHAR_CONSTANT  ['](([\\]['])|([^']))+[']
WHITESPACE  [ \t\r\f\v]+
PREPROCESSER  #[^\n]*\n
STRING_LITERAL  ["](([\\]["])|([^"]))*["]

//INTEGER_NUM
{DECIMAL_CONSTANT}{INTEGER_SUFFIX}?                   {
  yylval.int_num = atoi(yytext);
  return INT_NUM;
}

/*HEX_NUM*/
[+-]?{DECIMAL_CONSTANT}{INTEGER_SUFFIX}?                   {
  yylval.int_num = atoi(yytext);
  return HEX_NUM;
}

([+-])?{FRACTION_CONSTANT}{EXPONENT}{FLOAT_SUFFIX}?    {
  yylval.float_num = atof(yytext);
  return FLOAT_NUM;
}

([+-])?([0-9]+){EXPONENT}{FLOAT_SUFFIX}?               {
  yylval.float_num = atof(yytext);
  return FLOAT_NUM;
}

//TODO: take out token and change it to yyval.str
{KEYWORD}           {
                    std::string keyword(yytext);
                    if(keyword == "auto"){
                      return token(AUTO);
                    }
                    else if(keyword == "break"){
                      return token(BREAK);
                    }
                    else if(keyword == "case"){
                      return token(CASE);
                    }
                    else if(keyword == "char"){
                      return token(CHAR);
                    }
                    else if(keyword == "const"){
                      return token(CONST);
                    }
                    else if(keyword == "continue"){
                      return token(CONTINUE);
                    }
                    else if(keyword == "default"){
                      return token(DEFAULT);
                    }
                    else if(keyword == "do"){
                      return token(DO);
                    }
                    else if(keyword == "double"){
                      return token(DOUBLE);
                    }
                    else if(keyword == "else"){
                      return token(ELSE);
                    }
                    else if(keyword == "enum"){
                      return token(ENUM);
                    }
                    else if(keyword == "extern"){
                      return token(EXTERN);
                    }
                    else if(keyword == "for"){
                      return token(FOR);
                    }
                    else if(keyword == "if"){
                      return token(IF);
                    }
                    else if(keyword == "int"){
                      return token(INT);
                    }
                    else if(keyword == "long"){
                      return token(LONG);
                    }
                    else if(keyword == "register"){
                      return token(REGISTER);
                    }
                    else if(keyword == "return"){
                      return token(RETURN);
                    }
                    else if(keyword == "short"){

                      return token(SHORT);
                    }
                    else if(keyword == "signed"){
                      return token(SIGNED);
                    }
                    else if(keyword == "unsigned"){
                      return token(UNSIGNED);
                    }
                    else if(keyword == "sizeof"){
                      return token(SIZEOF);
                    }
                    else if(keyword == "static"){
                      return token(STATIC);
                    }
                    else if(keyword == "struct"){
                      return token(STRUCT);
                    }
                    else if(keyword == "switch"){
                      return token(SWITCH);
                    }
                    else if(keyword == "typedef"){
                      return token(TYPEDEF);
                    }
                    else if(keyword == "union"){
                      return token(UNION);
                    }
                    else if(keyword == "void"){
                      return token(VOID);
                    }
                    else if(keyword == "volatile"){
                      return token(VOLATILE);
                    }
                    else if(keyword == "while"){
                      return token(WHILE);
                    }
                  }

{IDENTIFIER}      {
                    //duplicate the string to yylval.str(which defined in parser.y)
                    yylval.str = new std::string (yytext);
                    return IDENTIFIER;
                  }

{OPERATOR}        {
                    std::string op(yytext);
                    yylval.str = new std::string (yytext);
                    if(op == "="){
                      return '=';
                    }
                    else if(op == "+"){
                      return '+';
                    }
                    else if(op == "-"){
                      return '-';
                    }
                    else if(op == "*"){
                      return '*';
                    }
                    else if(op == "/"){
                      return '/'
                    }
                    else if(op == "%"){
                      return '%';
                    }
                    else if(op == "|"){
                      return '|';
                    }
                    else if(op == "+="){
                      return ADD_ASSIGN;
                    }
                    else if(op == "-="){
                      return SUB_ASSIGN;
                    }
                    else if(op == "*="){
                      return MUL_ASSIGN;
                    }
                    else if(op == "/="){
                      return DIV_ASSIGN;
                    }
                    else if(op == "%="){
                      return MOD_ASSIGN;
                    }
                    else if(op == ">>="){
                      return RIGHT_ASSIGN;
                    }
                    else if(op == "<<="){
                      return LEFT_ASSIGN;
                    }
                    else if(op == "&="){
                      return AND_ASSIGN;
                    }
                    else if(op == "^="){
                      return XOR_ASSIGN;
                    }
                    else if(op == "|="){
                      return OR_ASSIGN;
                    }
                    else if(op == "++"){
                      return INC_OP;
                    }
                    else if(op == "--"){
                      return DEC_OP;
                    }
                    else if(op == "=="){
                      return EQ_OP;
                    }
                    else if(op == "!="){
                      return NE_OP;
                    }
                    else if(op == ">"){
                      return '>';
                    }
                    else if(op == "<"){
                      return '<';
                    }
                    else if(op == ">="){
                      return GE_OP;
                    }
                    else if(op == "<="){
                      return LE_OP;
                    }
                    else if(op == "!"){
                      return '!';
                    }
                    else if(op == "||"){
                      return OR_OP;
                    }
                    else if(op == "&&"){
                      return AND_OP;
                    }
                    else if(op == "?"){
                      return '?';
                    }
                    else if(op == "<<"){
                      return LEFT_OP;
                    }
                    else if(op == ">>"){
                      return RIGHT_OP;
                    }
                    else if(op == "("){
                      return '(';
                    }
                    else if(op == ")"){
                      return ')';
                    }
                    else if(op == "["){
                      return '[';
                    }
                    else if(op == "]"){
                      return ']';
                    }
                    else if(op == "{"){
                      return '{';
                    }
                    else if(op == "}"){
                      return '}';
                    }
                    else if(op == ":"){
                      return ':';
                    }
                    else if(op == ","){
                      return ',';
                    }
                    else if(op == ";"){
                      return ';';
                    }
                    else if(op == "->"){
                      return PTR_OP;
                    }
                    else if(op == "."){
                      return '.';
                    }
                    else if(op == "&"){
                      return '&';
                    }
                  }

{INTEGER_CONSTANT}  {
                      yylval.int_num =  atoi(yytext);
                      return INTEGER_NUM
                    }

{FLOAT_CONSTANT}    {
                      yylval.float_num = atof(yytext);
                      return FLOAT_NUM;
                    }

{CHAR_CONSTANT}  {
                        char* tmp_ptr = yytext+1;
                        yylval.str = new std::string (tmp_ptr, tmp_ptr-1);
                        return CHAR_CONSTANTL;
                      }

{STRING_LITERAL}      {
                        char* tmp_ptr = yytext+1;
                        yylval.str = new std::string (tmp_ptr, tmp_ptr-1);
                        return STRING_LITERAL;
                      }
{PREPROCESSER}        {
                        char* tmp_ptr = yytext+1;
                        yylval.str = new std::string (tmp_ptr);
                        return STRING_LITERAL;
                      }


{WHITESPACE}        {;}

.                   { std::stderr<< "Invalid tokens"<<std::endl; }

[\n]                {Line++;}

%%

void yyerror (char const *s)
{
  fprintf (stderr, "Parse error : %s\n", s);
  exit(1);
}

int token(int IN){
  yyval.str = new std::string(yytext);
  return IN
}
