%option yylineno
%pointer

%{
    #include <cstdlib>
    #include <cstring>
    #include "ast.hpp"
    #include "parser.hpp"

    void yyerror(const char *); 
%}

/** WRITE ME:
 /*  Put any definitions you need here. Add your own regular expressions
 *  below for ALL tokens defined in the manual. You can choose not to use
 *  definitions here.
 */

/* HERE */

DIGIT       [0-9]
ALPHA       [a-zA-Z]
IDENTIFIER  {ALPHA}({ALPHA}|{DIGIT}|_)*
DECIMAL     [0-9]{DIGIT}*
HEX         0[xX][0-9a-fA-F]+
OCTAL       0[0-7]+
BINARY      [01]+[bB]
STRING_LITERAL    \"[^\"]*\"
CHAR_LITERAL     \'[^\']\'

/** The example below is very simple, but it shows almost everything you will
 /*  need to do for this first part. The syntax is as follows:
 *
 *  regular_expression      {  c code  }
 *
 * The lexer will try to match each regular expression. When it does it will
 * execute the corresponding C code.
*/

%x C_COMMENT
%%

 /* [.]* { return USELESS; } */ 
"boolean"       { return BOOLEAN; }
"char"          { return CHAR; }
"integer"       { return INTEGER; }
"string"        { return STRING; }
"intptr"        { return INTPTR; }
"charptr"       { return CHARPTR; }
"if"            { return IF; }
"else"          { return ELSE; }
"while"         { return WHILE; }
"var"           { return VAR; }
"procedure"     { return PROCEDURE; }
"return"        { return RETURN; }
"null"          { return NULLTOKEN; }
"&&"            { return AND; }
"/"             { return DIV; }
"="             { return EQUAL; }
"=="            { return EQUALS; }
">"             { return GT; }
">="            { return GTE; }
"<"             { return LT; }
"<="            { return LTE; }
"-"             { return MINUS; }
"!"             { return NOT; }
"!="            { return NOTEQUAL; }
"||"            { return OR; }
"+"             { return PLUS; }
"*"             { return MUL; }
"&"             { return AMP; }
"^"             { return DEREFERENCE; }
"true"          { return TRUE; }
"false"         { return FALSE; }
"{"             { return LBRACE; }
"}"             { return RBRACE; }
";"             { return SEMICOLON; }
"("             { return LPAREN; }
")"             { return RPAREN; }
"["             { return LBRACKET; }
"]"             { return RBRACKET; }
","             { return COMMA; }
":"             { return COLON; }
"|"             { return BAR; }
{HEX}           { return INT_LITERAL; }
{OCTAL}         { return INT_LITERAL; }
{BINARY}        { return INT_LITERAL; }
{DECIMAL}       { return INT_LITERAL; }
{STRING_LITERAL} { return STRING_LITERAL; }
{CHAR_LITERAL}  { return CHAR_LITERAL; }
{IDENTIFIER}    { return IDENTIFIER; }

[\*\(\)\.\+\-\|]  { return *yytext; }

[ \t\n]             ; /* skip whitespace */

"/%"            { BEGIN(C_COMMENT); }
<C_COMMENT>"%/" { BEGIN(INITIAL); }
<C_COMMENT>\n   { }
<C_COMMENT>.    { }
.                   { yyerror((char *) "invalid character"); }

%%
 /** You shall not pass!
 *  You should not  have to do or edit anything past this.
 */

int yywrap(void) {
    return 1;
}
