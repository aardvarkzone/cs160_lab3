/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_HPP_INCLUDED
# define YY_YY_PARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENTIFIER = 258,              /* IDENTIFIER  */
    INT_LITERAL = 259,             /* INT_LITERAL  */
    CHAR_LITERAL = 260,            /* CHAR_LITERAL  */
    BOOLEAN = 261,                 /* BOOLEAN  */
    CHAR = 262,                    /* CHAR  */
    INTEGER = 263,                 /* INTEGER  */
    STRING = 264,                  /* STRING  */
    INTPTR = 265,                  /* INTPTR  */
    CHARPTR = 266,                 /* CHARPTR  */
    IF = 267,                      /* IF  */
    ELSE = 268,                    /* ELSE  */
    WHILE = 269,                   /* WHILE  */
    VAR = 270,                     /* VAR  */
    PROCEDURE = 271,               /* PROCEDURE  */
    RETURN = 272,                  /* RETURN  */
    NULLTOKEN = 273,               /* NULLTOKEN  */
    AND = 274,                     /* AND  */
    DIV = 275,                     /* DIV  */
    EQUAL = 276,                   /* EQUAL  */
    EQUALS = 277,                  /* EQUALS  */
    GT = 278,                      /* GT  */
    GTE = 279,                     /* GTE  */
    LT = 280,                      /* LT  */
    LTE = 281,                     /* LTE  */
    MINUS = 282,                   /* MINUS  */
    NOT = 283,                     /* NOT  */
    NOTEQUAL = 284,                /* NOTEQUAL  */
    OR = 285,                      /* OR  */
    PLUS = 286,                    /* PLUS  */
    MUL = 287,                     /* MUL  */
    AMP = 288,                     /* AMP  */
    DEREFERENCE = 289,             /* DEREFERENCE  */
    TRUE = 290,                    /* TRUE  */
    FALSE = 291,                   /* FALSE  */
    COMMA = 292,                   /* COMMA  */
    COLON = 293,                   /* COLON  */
    UMINUS = 294,                  /* UMINUS  */
    LBRACE = 295,                  /* LBRACE  */
    RBRACE = 296,                  /* RBRACE  */
    SEMICOLON = 297,               /* SEMICOLON  */
    LPAREN = 298,                  /* LPAREN  */
    RPAREN = 299,                  /* RPAREN  */
    BAR = 300,                     /* BAR  */
    LBRACKET = 301,                /* LBRACKET  */
    RBRACKET = 302,                /* RBRACKET  */
    STRING_LITERAL = 303           /* STRING_LITERAL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 29 "parser.ypp"

    std::list<Proc_ptr>* u_proc_list;
    Program* u_program;
    std::list<Decl_ptr>* u_decl_list;
    Proc* u_proc;
    std::list<Stat_ptr>* u_stat_list;
    Procedure_block* u_procedure_block;
    Nested_block* u_nested_block;
    std::list<SymName_ptr>* u_symname_list;
    Decl* u_decl;
    Stat* u_stat;
    std::list<Expr_ptr>* u_expr_list;
    Return_stat* u_return_stat;
    Type* u_type;
    Expr* u_expr;
    Lhs* u_lhs;
    SymName* u_symname;
    Primitive* u_primitive;
    StringPrimitive* u_stringprimitive;

    // a couple of hardcoded types
    char* u_base_charptr;
    int u_base_int;

#line 137 "parser.hpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_HPP_INCLUDED  */
