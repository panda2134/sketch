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

#ifndef YY_YY_INPUTPARSER_HPP_INCLUDED
# define YY_YY_INPUTPARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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
    T_dbl = 258,                   /* T_dbl  */
    T_int = 259,                   /* T_int  */
    T_bool = 260,                  /* T_bool  */
    T_ident = 261,                 /* T_ident  */
    T_OutIdent = 262,              /* T_OutIdent  */
    T_NativeCode = 263,            /* T_NativeCode  */
    T_string = 264,                /* T_string  */
    T_true = 265,                  /* T_true  */
    T_false = 266,                 /* T_false  */
    T_vartype = 267,               /* T_vartype  */
    T_rightAC = 268,               /* T_rightAC  */
    T_leftAC = 269,                /* T_leftAC  */
    T_rightTC = 270,               /* T_rightTC  */
    T_leftTC = 271,                /* T_leftTC  */
    T_leftAR = 272,                /* T_leftAR  */
    T_rightAR = 273,               /* T_rightAR  */
    T_arrow = 274,                 /* T_arrow  */
    T_twoS = 275,                  /* T_twoS  */
    T_ppls = 276,                  /* T_ppls  */
    T_mmns = 277,                  /* T_mmns  */
    T_eq = 278,                    /* T_eq  */
    T_neq = 279,                   /* T_neq  */
    T_and = 280,                   /* T_and  */
    T_or = 281,                    /* T_or  */
    T_For = 282,                   /* T_For  */
    T_ge = 283,                    /* T_ge  */
    T_le = 284,                    /* T_le  */
    T_fixes = 285,                 /* T_fixes  */
    T_File = 286,                  /* T_File  */
    T_Native = 287,                /* T_Native  */
    T_NativeMethod = 288,          /* T_NativeMethod  */
    T_Sketches = 289,              /* T_Sketches  */
    T_new = 290,                   /* T_new  */
    T_Typedef = 291,               /* T_Typedef  */
    T_def = 292,                   /* T_def  */
    T_mdldef = 293,                /* T_mdldef  */
    T_Min = 294,                   /* T_Min  */
    T_sp = 295,                    /* T_sp  */
    T_assert = 296,                /* T_assert  */
    T_assume = 297,                /* T_assume  */
    T_hassert = 298,               /* T_hassert  */
    T_equals = 299,                /* T_equals  */
    T_replace = 300,               /* T_replace  */
    T_eof = 301                    /* T_eof  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define T_dbl 258
#define T_int 259
#define T_bool 260
#define T_ident 261
#define T_OutIdent 262
#define T_NativeCode 263
#define T_string 264
#define T_true 265
#define T_false 266
#define T_vartype 267
#define T_rightAC 268
#define T_leftAC 269
#define T_rightTC 270
#define T_leftTC 271
#define T_leftAR 272
#define T_rightAR 273
#define T_arrow 274
#define T_twoS 275
#define T_ppls 276
#define T_mmns 277
#define T_eq 278
#define T_neq 279
#define T_and 280
#define T_or 281
#define T_For 282
#define T_ge 283
#define T_le 284
#define T_fixes 285
#define T_File 286
#define T_Native 287
#define T_NativeMethod 288
#define T_Sketches 289
#define T_new 290
#define T_Typedef 291
#define T_def 292
#define T_mdldef 293
#define T_Min 294
#define T_sp 295
#define T_assert 296
#define T_assume 297
#define T_hassert 298
#define T_equals 299
#define T_replace 300
#define T_eof 301

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 30 "InputParser/InputParser.yy"

	int intConst;
	bool boolConst;
	std::string* strConst;
	double doubleConst;		
	std::list<int>* iList;
	list<bool_node*>* nList;
	list<string*>* sList;
	vartype variableType;
	BooleanDAG* bdag;
	bool_node* bnode;
  OutType* otype;
  vector<OutType*>* tVector;
  vector<string>* sVector;

#line 175 "InputParser.hpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif




int yyparse (yyscan_t yyscanner);


#endif /* !YY_YY_INPUTPARSER_HPP_INCLUDED  */
