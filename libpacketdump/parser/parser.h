/* A Bison parser, made by GNU Bison 2.1.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TOK_BIGENDIAN = 258,
     TOK_LITTLEENDIAN = 259,
     TOK_NEXT = 260,
     TOK_OUTPUT_INT = 261,
     TOK_OUTPUT_HEX = 262,
     TOK_OUTPUT_IPV4 = 263,
     TOK_OUTPUT_FLAG = 264,
     TOK_CONSTANT = 265,
     TOK_IDENTIFIER = 266,
     TOK_OUTPUT_MAC = 267,
     TOK_OUTPUT_NONE = 268
   };
#endif
/* Tokens.  */
#define TOK_BIGENDIAN 258
#define TOK_LITTLEENDIAN 259
#define TOK_NEXT 260
#define TOK_OUTPUT_INT 261
#define TOK_OUTPUT_HEX 262
#define TOK_OUTPUT_IPV4 263
#define TOK_OUTPUT_FLAG 264
#define TOK_CONSTANT 265
#define TOK_IDENTIFIER 266
#define TOK_OUTPUT_MAC 267
#define TOK_OUTPUT_NONE 268




#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 27 "parser.y"
typedef union YYSTYPE {
    int intval;
    char *textval;
    element_t *ptr;
} YYSTYPE;
/* Line 1447 of yacc.c.  */
#line 70 "parser.h"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;



