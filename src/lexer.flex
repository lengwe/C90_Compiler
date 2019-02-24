%option noyywrap

%{
// Avoid error "error: `fileno' was not declared in this scope"
extern "C" int fileno(FILE *stream);

#include "lexer.tab.hpp"
#include <string>
%}


KEYWORD {auto|break|case|char|const|continue|default|do|double|else|enum|extern|float|for|if|int|long|register|return|short|signed|unsigned|sizeof|static|struct|switch|typedef|union|void|volatile|while}
IDENTIFIER [A-Za-z_][A-Za-z0-9_]*
OPERATOR {\.\.\.|=|+|-|*|/|%|\+=|\-=|\*=|\/=|%=|>>=|<<=|&=|\^=|\|=|\+\+|\-\-|==|!=|>|<|>=|<=|!|\|\||&&|\?|<<|>>|\[|\|\(|\)|\{|\}|\:|\,|\;]
EXPONENT    [e|E][\+|\-]?[0-9]+
FRACTION_CONSTANT [0-9]*\.[0-9]+|[0-9]+\.
INTEGER_CONSTANT
CHARACTER_CONSTANT
WHITESPACE [ \t\r]+



{KEYWORD}         {
                    std::string keyword(yytext);
                    if(keyword == "auto"){
                      return AUTO;
                    }
                    else if(keyword == "break"){
                      return BREAK;
                    }
                    else if(keyword == "case"){
                      return CASE;
                    }
                    else if(keyword == "char"){
                      return CHAR;
                    }
                    else if(keyword == "const"){
                      return CONST;
                    }
                    else if(keyword == "continue"){
                      return CONTINUE;
                    }
                    else if(keyword == "default"){
                      return DEFAULT;
                    }
                    else if(keyword == "do"){
                      return DO;
                    }
                    else if(keyword == "double"){
                      return DOUBLE;
                    }
                    else if(keyword == "else"){
                      return ELSE;
                    }
                    else if(keyword == "enum"){
                      return ENUM;
                    }
                    else if(keyword == "extern"){
                      return EXTERN;
                    }
                    else if(keyword == "for"){
                      return FOR;
                    }
                    else if(keyword == "if"){
                      return IF;
                    }
                    else if(keyword == "int"){
                      return INT;
                    }
                    else if(keyword == "long"){
                      return LONG;
                    }
                    else if(keyword == "register"){
                      return REGISTER;
                    }
                    else if(keyword == "return"){
                      return RETURN;
                    }
                    else if(keyword == "short"){
                      return SHORT;
                    }
                    else if(keyword == "signed"){
                      return SIGNED;
                    }
                    else if(keyword == "unsigned"){
                      return UNSIGNED;
                    }
                    else if(keyword == "sizeof"){
                      return SIZEOF;
                    }
                    else if(keyword == "static"){
                      return STATIC;
                    }
                    else if(keyword == "struct"){
                      return STRUCT;
                    }
                    else if(keyword == "switch"){
                      return SWITCH;
                    }
                    else if(keyword == "typedef"){
                      return TYPEDEF;
                    }
                    else if(keyword == "union"){
                      return UNION;
                    }
                    else if(keyword == "void"){
                      return VOID;
                    }
                    else if(keyword == "volatile"){
                      return VOLATILE;
                    }
                    else if(keyword == "while"){
                      return WHILE;
                    }
                  }

{OPERATOR}        {
                    std::string op(yytext);
                    if(op == "..."){
                      return ELLIPSIS;
                    }
                    else if(op == "="){
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
                      return NE_ASSIGN;
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
                      return '()';
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



                  }












%%




[0-9]+([.][0-9]*)? { yylval.number=strtod(yytext, 0); return T_NUMBER; }
[a-z]+          { yylval.string=new std::string(yytext); return T_VARIABLE; }
[ \t\r\n]+		{;}

.               { fprintf(stderr, "Invalid token\n"); exit(1); }
%%

void yyerror (char const *s)
{
  fprintf (stderr, "Parse error : %s\n", s);
  exit(1);
}
