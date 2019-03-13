%option noyywrap

%{
// Avoid error "error: `fileno' was not declared in this scope"
extern "C" int fileno(FILE *stream);

#include "parser.tab.hpp"
#include <string>
#include <iostream>
%}
KEYWORD [auto|break|case|char|const|continue|default|do|double|else|enum|sizeof|float|for|if|long|return|short|signed|unsigned|static|struct|switch|typedef|void|while]
IDENTIFIER [A-Za-z_][A-Za-z0-9_]*
OPERATOR [\=|+|\-|\*|\/|\%|\||\+=|\-=|\*=|\/=|%=|>>=|<<=|&=|\^=|\|=|\+\+|\-\-|==|!=|>|<|>=|<=|!|\|\||&&|\?|<<|>>|\[|\|\(|\)|\{|\}|\:|\,|\;|\->|\.\|]
EXPONENT    [eE][\+|\-]?[0-9]+
FRACTION_CONSTANT [0-9]*\.[0-9]+|([0-9]+\.)
DECIMAL_CONSTANT  [1-9][0-9]*
HEX_CONSTANT      [0][xX][0-9A-Fa-f]+
FLOAT_SUFFIX      [f|F|l|L]
INTEGER_SUFFIX    [u|U|l|L|ul|UL|ll|LL|ull|ULL]
CHAR_CONSTANT  ['](([\\]['])|([^']))+[']
WHITESPACE  [ \t\r\f\v]+
STRING_LITERAL  ["](([\\]["])|([^"]))*["]
%%

{OPERATOR}        {
  std::string op(yytext);
  std::cerr << yytext << '\n';
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
    return '/';
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
    return MOD_ASSGIN;
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
{DECIMAL_CONSTANT}{INTEGER_SUFFIX}?                   {yylval.str = new std::string (yytext); return CONSTANT;}

[+-]?{DECIMAL_CONSTANT}{INTEGER_SUFFIX}?                   {
  yylval.str = new std::string (yytext);
  return CONSTANT;
}


([+-])?{FRACTION_CONSTANT}{EXPONENT}{FLOAT_SUFFIX}?    {
  yylval.str = new std::string (yytext);
  return CONSTANT;
}

([+-])?([0-9]+){EXPONENT}{FLOAT_SUFFIX}?               {
  yylval.str = new std::string (yytext);
  return CONSTANT;
}

auto {return AUTO;}
break {return BREAK;}
case {return CASE;}
char {return CHAR;}
const {return CONST;}
continue {return CONTINUE;}
default {return DEFAULT;}
do {return DO;}
double {return DOUBLE;}
else {return ELSE;}
enum {return ENUM;}
for {return FOR;}
if {return IF;}
int {return INT;}
long {return LONG;}
return {return RETURN;}
short {return SHORT;}
signed {return SIGNED;}
unsigned {return UNSIGNED;}
static {return STATIC;}
struct {return STRUCT;}
switch {return SWITCH;}
typedef {return TYPEDEF;}
void {return VOID;}
while {return WHILE;}
sizeof {return SIZEOF;}
goto {return GOTO;}
union {return UNION;}
volatile {return VOLATILE;}


{IDENTIFIER}      {
                    //duplicate the string to yylval.str(which defined in parser.y)
                    yylval.str = new std::string (yytext);
                    return IDENTIFIER;
                  }




{WHITESPACE}        {;}

.                   { }




%%

void yyerror (char const *s)
{
  fprintf (stderr, "Parse error : %s\n", s);
  exit(1);
}
