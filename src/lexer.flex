%option noyywrap

%{
// Avoid error "error: `fileno' was not declared in this scope"
extern "C" int fileno(FILE *stream);

#include "lexer.tab.hpp"
%}


KEYWORD {auto|break|case|char|const|continue|default|do|double|else|enum|extern|float|for|goto|if|int|long|register|return|short|signed|sizeof|static|struct|switch|typedef|union|unisgned|void|volatile|while}
IDENTIFIER [A-Za-z_][A-Za-z0-9_]*
OPERATOR {\.\.\.|=|+|-|*|/|%|\+=|\-=|\*=|/=|%=|>>=|<<=|&=|\^=|\+\+|\-\-|==|!=|>|<|>=|<=|!|\|\|&&|/?|<<|>>}
EXPONENT    [e|E][\+|\-]?[0-9]+
FRACTION_CONSTANT [0-9]*\.[0-9]+|[0-9]+\.












%%





[*]             { return T_TIMES; }
[+]             { return T_PLUS; }
[\^]            { return T_EXPONENT; }
[/]             {return T_DIVIDE;}
[-]             {return T_MINUS;}
[(]             { return T_LBRACKET; }
[)]             { return T_RBRACKET; }

log             { return T_LOG;   }
exp             { return T_EXP; }
sqrt            { return T_SQRT; }

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
