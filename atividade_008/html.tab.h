/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_HTML_TAB_H_INCLUDED
# define YY_YY_HTML_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    DOCTYPE = 258,
    O_HTML = 259,
    C_HTML = 260,
    O_HEAD = 261,
    C_HEAD = 262,
    O_BODY = 263,
    C_BODY = 264,
    O_P = 265,
    C_P = 266,
    O_DIV = 267,
    C_DIV = 268,
    O_H1 = 269,
    C_H1 = 270,
    O_H2 = 271,
    C_H2 = 272,
    O_H3 = 273,
    C_H3 = 274,
    O_H4 = 275,
    C_H4 = 276,
    O_H5 = 277,
    C_H5 = 278,
    O_H6 = 279,
    C_H6 = 280,
    O_BUTTON = 281,
    C_BUTTON = 282,
    O_UL = 283,
    C_UL = 284,
    O_OL = 285,
    C_OL = 286,
    O_LI = 287,
    C_LI = 288,
    O_A = 289,
    C_A = 290,
    IMG = 291
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_HTML_TAB_H_INCLUDED  */
