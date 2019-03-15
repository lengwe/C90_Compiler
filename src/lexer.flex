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
OPERATOR [\=|\+|\-|\*|\/|\%|\||>|<|!|\|\||\?|\[|\|\(|\)|\{|\}|\:|\,|\;|\->|\.\|]
ASS_OP [\+=|\-=|\*=|\/=|%=|>>=|<<=|&=|\^=|\|=|\+\+|\-\-|==|!=|>=|<=|<<|>>|&&];
EXPONENT    [eE][\+|\-]?[0-9]+
FRACTION_CONSTANT [0-9]*\.[0-9]+|([0-9]+\.)
DECIMAL_CONSTANT  ([1-9][0-9]*)|[0]*
HEX_CONSTANT      [0][xX][0-9A-Fa-f]+
FLOAT_SUFFIX      [f|F|l|L]
INTEGER_SUFFIX    [u|U|l|L|ul|UL|ll|LL|ull|ULL]
CHAR_CONSTANT  ['](([\\]['])|([^']))+[']
WHITESPACE  [ \t\r\f\v]+
STRING_LITERAL  ["](([\\]["])|([^"]))*["]
%%
"+=" {return ADD_ASSIGN;}

"..."			{  return  (ELLIPSIS); }

">>="			{  return  (RIGHT_ASSIGN); }

"<<="		{  return  (LEFT_ASSIGN); }

"+="			{  return  (ADD_ASSIGN); }

"-="			{  return  (SUB_ASSIGN); }

"*="			{  return  (MUL_ASSIGN); }

"/="			{  return  (DIV_ASSIGN); }

"%="			{  return  (MOD_ASSIGN); }

"&="			{  return  (AND_ASSIGN); }

"^="			{  return  (XOR_ASSIGN); }

"|="			{  return  (OR_ASSIGN); }

">>"			{  return  (RIGHT_OP); }

"<<"			{  return  (LEFT_OP); }

"++"			{  return  (INC_OP); }

"--"			{  return  (DEC_OP); }

"->"			{  return  (PTR_OP); }

"&&"			{  return  (AND_OP); }

"||"			{  return  (OR_OP); }

"<="			{  return  (LE_OP); }

">="			{  return  (GE_OP); }

"=="			{  return  (EQ_OP); }


{OPERATOR}        {
  std::string op(yytext);
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

  else if(op == "!"){
    return '!';
  }
  else if(op == "?"){
    return '?';
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
  else if(op == "."){
    return '.';
  }
  else if(op == "&"){
    return '&';
  }
}

{DECIMAL_CONSTANT}{INTEGER_SUFFIX}?                   {yylval.str = new std::string (yytext); return CONSTANT;}

{DECIMAL_CONSTANT}{INTEGER_SUFFIX}?                   {
  yylval.str = new std::string (yytext);
  return CONSTANT;
}


{FRACTION_CONSTANT}{EXPONENT}{FLOAT_SUFFIX}?    {
  yylval.str = new std::string (yytext);
  return CONSTANT;
}

([0-9]+){EXPONENT}{FLOAT_SUFFIX}?               {
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
