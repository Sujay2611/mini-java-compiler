/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_IMPORT = 258,
     T_CLASS = 259,
     T_PUBLIC = 260,
     T_PRIVATE = 261,
     T_PROTECTED = 262,
     T_STATIC = 263,
     T_FINAL = 264,
     T_VOID = 265,
     T_INT = 266,
     T_CHAR = 267,
     T_DOUBLE = 268,
     T_IF = 269,
     T_ELSE = 270,
     T_SWITCH = 271,
     T_CASE = 272,
     T_DEFAULT = 273,
     T_BREAK = 274,
     T_CONTINUE = 275,
     T_RETURN = 276,
     T_NEW = 277,
     T_INC = 278,
     T_DEC = 279,
     T_SHA = 280,
     T_SHS = 281,
     T_SHM = 282,
     T_SHD = 283,
     T_SHAND = 284,
     T_SHO = 285,
     T_SHC = 286,
     T_SHMOD = 287,
     T_OR = 288,
     T_AND = 289,
     T_EQ = 290,
     T_NE = 291,
     T_GTE = 292,
     T_LTE = 293,
     T_LS = 294,
     T_RS = 295,
     T_NUM = 296,
     T_ID = 297,
     T_STRING = 298,
     T_ARGS = 299,
     T_PRINT = 300
   };
#endif
/* Tokens.  */
#define T_IMPORT 258
#define T_CLASS 259
#define T_PUBLIC 260
#define T_PRIVATE 261
#define T_PROTECTED 262
#define T_STATIC 263
#define T_FINAL 264
#define T_VOID 265
#define T_INT 266
#define T_CHAR 267
#define T_DOUBLE 268
#define T_IF 269
#define T_ELSE 270
#define T_SWITCH 271
#define T_CASE 272
#define T_DEFAULT 273
#define T_BREAK 274
#define T_CONTINUE 275
#define T_RETURN 276
#define T_NEW 277
#define T_INC 278
#define T_DEC 279
#define T_SHA 280
#define T_SHS 281
#define T_SHM 282
#define T_SHD 283
#define T_SHAND 284
#define T_SHO 285
#define T_SHC 286
#define T_SHMOD 287
#define T_OR 288
#define T_AND 289
#define T_EQ 290
#define T_NE 291
#define T_GTE 292
#define T_LTE 293
#define T_LS 294
#define T_RS 295
#define T_NUM 296
#define T_ID 297
#define T_STRING 298
#define T_ARGS 299
#define T_PRINT 300




/* Copy the first part of user declarations.  */
#line 1 "opt3.y"

	#include<stdio.h>
	#include<string.h>
	#include<stdlib.h>
	#include<stdbool.h>
    #include<limits.h>
	#include "header.c"			
	#define YYSTYPE YACC
	FILE *yyin;
	FILE *fp;
	int yylex();

	void yyerror(const char *);
	
	
	
	FILE *yyin;
	int yylex();
	
	int i =0;
	
	char* newLabel(int *ln);
	char* newTemp(int *tn);
	int lbflag = 0;
	int tn = 1;
	int ln = 1;
    int z;	
    int ss=0;
    NODE *a;
    LIST *l;
    typedef struct Stack { 
    int top; 
    unsigned capacity; 
    int* array; 
    }STACK; 
    STACK* s;
    void append(LIST *a,char *b,char *c);
    char* search(LIST* a,char *b);
    void print(LIST* c);
    int isFull(STACK* s);
    int isEmpty(STACK* s);
    void push(STACK* s, int item);
    int pop(STACK* s); 
    int peek(STACK* s);
    char* pp;
    char* qq;
    char* rr;
    char* tt;
    int count=1;
	


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 248 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   265

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  114
/* YYNRULES -- Number of states.  */
#define YYNSTATES  213

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    65,    59,     2,
      51,    52,    47,    62,    53,    63,    46,    64,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    48,
      60,    56,    61,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    54,     2,    55,    58,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    49,    57,    50,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     7,    10,    18,    25,    27,    30,
      33,    34,    37,    45,    49,    51,    53,    54,    56,    57,
      59,    62,    67,    72,    76,    79,    80,    85,    89,    90,
      91,    92,   103,   108,   109,   110,   121,   124,   128,   132,
     139,   142,   143,   144,   148,   149,   152,   155,   157,   159,
     163,   164,   167,   169,   178,   183,   189,   193,   194,   198,
     202,   206,   209,   213,   218,   220,   222,   226,   228,   232,
     236,   238,   240,   244,   246,   248,   250,   252,   254,   259,
     260,   269,   270,   279,   281,   283,   285,   287,   289,   291,
     293,   295,   297,   299,   301,   303,   305,   307,   309,   311,
     313,   315,   317,   319,   321,   323,   325,   327,   329,   331,
     333,   335,   339,   343,   345
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      67,     0,    -1,    69,    67,    -1,    -1,    68,    70,    -1,
       3,    42,    46,    42,    46,    47,    48,    -1,    75,     4,
      71,    49,    72,    50,    -1,    42,    -1,    73,    72,    -1,
      74,    72,    -1,    -1,    75,    95,    -1,    75,   105,    42,
      51,    79,    52,    81,    -1,    76,    77,    78,    -1,     5,
      -1,     8,    -1,    -1,     9,    -1,    -1,    80,    -1,   105,
      42,    -1,   105,    42,    53,    79,    -1,   105,    54,    55,
      44,    -1,    49,    82,    50,    -1,   106,    82,    -1,    -1,
      19,    48,    83,    82,    -1,    20,    48,    82,    -1,    -1,
      -1,    -1,    14,    51,   111,    52,    84,    81,    85,    89,
      86,    82,    -1,    21,   111,    48,    82,    -1,    -1,    -1,
      16,    51,   111,    52,    87,    49,    93,    50,    88,    82,
      -1,    95,    82,    -1,    97,    48,    82,    -1,   101,    48,
      82,    -1,    45,    51,   111,    52,    48,    82,    -1,    91,
      48,    -1,    -1,    -1,    15,    90,    81,    -1,    -1,   112,
      92,    -1,    92,   112,    -1,    23,    -1,    24,    -1,    94,
      82,    93,    -1,    -1,    17,   111,    -1,    18,    -1,   105,
     112,    56,   112,   110,   112,    96,    48,    -1,   105,   112,
      96,    48,    -1,    53,   112,    56,   111,    96,    -1,    53,
      42,    96,    -1,    -1,   105,    98,   112,    -1,   105,   112,
      98,    -1,    54,    55,    98,    -1,    54,    55,    -1,    54,
     100,    55,    -1,    54,   100,    55,    99,    -1,    41,    -1,
      42,    -1,    97,   109,   102,    -1,   103,    -1,   103,    53,
     102,    -1,    22,   105,    99,    -1,    41,    -1,   104,    -1,
      49,   102,    50,    -1,    11,    -1,    13,    -1,    12,    -1,
      43,    -1,    10,    -1,   112,   109,   111,    48,    -1,    -1,
     112,   109,   112,    54,   111,    55,   107,    48,    -1,    -1,
     112,    54,   111,    55,   109,   111,   108,    48,    -1,    56,
      -1,    25,    -1,    26,    -1,    27,    -1,    28,    -1,    29,
      -1,    30,    -1,    31,    -1,    32,    -1,    33,    -1,    34,
      -1,    57,    -1,    58,    -1,    59,    -1,    35,    -1,    36,
      -1,    60,    -1,    61,    -1,    38,    -1,    37,    -1,    39,
      -1,    40,    -1,    62,    -1,    63,    -1,    47,    -1,    64,
      -1,    65,    -1,   112,    -1,   112,   110,   111,    -1,    51,
     111,    52,    -1,    41,    -1,    42,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    55,    55,    55,    55,    56,    57,    58,    59,    59,
      59,    60,    61,    62,    63,    64,    64,    65,    65,    66,
      67,    67,    67,    68,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      70,    70,    71,    71,    71,    72,    72,    73,    73,    74,
      74,    75,    75,    76,    76,    77,    77,    77,    78,    78,
      79,    79,    80,    80,    81,    81,    82,    83,    83,    83,
      84,    84,    85,    86,    86,    86,    86,    86,    87,    87,
      87,    87,    87,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      90,    90,    91,    91,    91
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_IMPORT", "T_CLASS", "T_PUBLIC",
  "T_PRIVATE", "T_PROTECTED", "T_STATIC", "T_FINAL", "T_VOID", "T_INT",
  "T_CHAR", "T_DOUBLE", "T_IF", "T_ELSE", "T_SWITCH", "T_CASE",
  "T_DEFAULT", "T_BREAK", "T_CONTINUE", "T_RETURN", "T_NEW", "T_INC",
  "T_DEC", "T_SHA", "T_SHS", "T_SHM", "T_SHD", "T_SHAND", "T_SHO", "T_SHC",
  "T_SHMOD", "T_OR", "T_AND", "T_EQ", "T_NE", "T_GTE", "T_LTE", "T_LS",
  "T_RS", "T_NUM", "T_ID", "T_STRING", "T_ARGS", "T_PRINT", "'.'", "'*'",
  "';'", "'{'", "'}'", "'('", "')'", "','", "'['", "']'", "'='", "'|'",
  "'^'", "'&'", "'<'", "'>'", "'+'", "'-'", "'/'", "'%'", "$accept",
  "Start", "@1", "Import_S", "Class_declaration", "CLASSNAME",
  "Class_body", "Global_variable_declaration", "Method_declaration",
  "Modifier", "W1", "W2", "W3", "Parameters", "List_of_parameters",
  "Block", "S", "@2", "@3", "@4", "@5", "@6", "@7", "WW", "@8", "H", "W",
  "SwitchBlock", "SwitchLabel", "Variable_declaration", "Identifier_list",
  "Array_declaration", "B", "BB", "BNUM", "Array_initialisation", "K", "V",
  "R", "Type", "Assignment", "@9", "@10", "Assignment_operator",
  "Operators", "Expression", "Expr", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,    46,    42,    59,   123,
     125,    40,    41,    44,    91,    93,    61,   124,    94,    38,
      60,    62,    43,    45,    47,    37
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    66,    67,    68,    67,    69,    70,    71,    72,    72,
      72,    73,    74,    75,    76,    77,    77,    78,    78,    79,
      80,    80,    80,    81,    82,    83,    82,    82,    84,    85,
      86,    82,    82,    87,    88,    82,    82,    82,    82,    82,
      82,    82,    90,    89,    89,    91,    91,    92,    92,    93,
      93,    94,    94,    95,    95,    96,    96,    96,    97,    97,
      98,    98,    99,    99,   100,   100,   101,   102,   102,   102,
     103,   103,   104,   105,   105,   105,   105,   105,   106,   107,
     106,   108,   106,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     111,   111,   112,   112,   112
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     2,     7,     6,     1,     2,     2,
       0,     2,     7,     3,     1,     1,     0,     1,     0,     1,
       2,     4,     4,     3,     2,     0,     4,     3,     0,     0,
       0,    10,     4,     0,     0,    10,     2,     3,     3,     6,
       2,     0,     0,     3,     0,     2,     2,     1,     1,     3,
       0,     2,     1,     8,     4,     5,     3,     0,     3,     3,
       3,     2,     3,     4,     1,     1,     3,     1,     3,     3,
       1,     1,     3,     1,     1,     1,     1,     1,     4,     0,
       8,     0,     8,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     0,     3,     0,     1,    14,     4,     0,
      16,     2,     0,     0,    15,    18,     0,     7,     0,    17,
      13,     0,    10,     0,     0,    10,    10,     0,     5,     6,
       8,     9,    77,    73,    75,    74,    76,    11,     0,   113,
     114,     0,    57,     0,   114,     0,   110,     0,     0,     0,
       0,    19,     0,   112,    92,    93,    97,    98,   102,   101,
     103,   104,   107,    94,    95,    96,    99,   100,   105,   106,
     108,   109,     0,    57,     0,     0,    54,     0,    20,     0,
     111,    56,     0,     0,    41,    12,     0,     0,    57,    57,
       0,     0,     0,     0,     0,    47,    48,     0,     0,     0,
       0,    41,     0,     0,     0,    41,     0,    21,    22,    55,
       0,     0,     0,    25,    41,     0,     0,    23,    40,    46,
      36,    84,    85,    86,    87,    88,    89,    90,    91,    41,
      83,     0,    41,     0,     0,    57,    24,     0,    45,     0,
      53,     0,     0,    41,    27,    41,     0,    37,     0,    70,
       0,    66,    67,    71,    38,    61,    58,    59,     0,     0,
     110,    28,    33,    26,    32,     0,     0,     0,     0,    60,
       0,    78,     0,     0,     0,    41,     0,    69,    72,    68,
       0,     0,    29,    50,    39,    64,    65,     0,    81,    79,
      44,     0,    52,     0,    41,    62,     0,     0,    42,    30,
      51,    34,    50,    63,    82,    80,     0,    41,    41,    49,
      43,    31,    35
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     8,    18,    24,    25,    26,    27,
      10,    15,    20,    50,    51,    85,    98,   143,   173,   190,
     207,   174,   208,   199,   206,    99,   100,   193,   194,   101,
      49,   102,   134,   177,   187,   103,   151,   152,   153,   104,
     105,   197,   196,   131,    72,    45,   106
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -168
static const yytype_int16 yypact[] =
{
       5,   -27,    22,    28,     5,    -3,  -168,  -168,  -168,    33,
      42,  -168,    17,    19,  -168,    63,    36,  -168,    26,  -168,
    -168,    58,    28,    41,    56,    28,    28,    15,  -168,  -168,
    -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,     6,  -168,
      60,    12,   -35,    15,  -168,    55,   154,    67,    12,    64,
      68,  -168,   -23,  -168,  -168,  -168,  -168,  -168,  -168,  -168,
    -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,
    -168,  -168,    12,    -1,    70,   154,  -168,    75,    76,    72,
    -168,  -168,    12,    12,    74,  -168,    15,    79,    77,    77,
      80,    81,    85,    87,    12,  -168,  -168,    86,    88,    91,
      12,    74,   177,    92,    29,    74,   120,  -168,  -168,  -168,
      93,    12,    12,  -168,    74,   114,    12,  -168,  -168,  -168,
    -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,    74,
    -168,    -9,    74,    73,    12,    23,  -168,    12,  -168,    12,
    -168,    84,   111,    74,  -168,    74,   112,  -168,    15,  -168,
      -9,  -168,   113,  -168,  -168,   115,  -168,  -168,   110,   119,
     121,  -168,  -168,  -168,  -168,   122,   117,   123,    -9,  -168,
     209,  -168,    12,    75,   128,    74,    50,  -168,  -168,  -168,
      12,   140,  -168,    47,  -168,  -168,  -168,   141,  -168,  -168,
     157,    12,  -168,   147,    74,   117,   150,   151,  -168,  -168,
    -168,  -168,    47,  -168,  -168,  -168,    75,    74,    74,  -168,
    -168,  -168,  -168
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -168,   196,  -168,  -168,  -168,  -168,    78,  -168,  -168,   207,
    -168,  -168,  -168,   134,  -168,  -167,   -94,  -168,  -168,  -168,
    -168,  -168,  -168,  -168,  -168,  -168,   116,    21,  -168,   194,
     -59,  -168,  -119,    31,  -168,  -168,  -145,  -168,  -168,   -26,
    -168,  -168,  -168,  -102,   149,   -70,   -38
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -115
static const yytype_int16 yytable[] =
{
      42,    38,    80,    46,   139,   167,   182,   120,     1,    74,
      75,   136,    88,   148,    81,     5,   157,    52,    47,    78,
     144,    48,     6,   179,   115,    32,    33,    34,    35,   109,
     110,    79,   149,     7,    46,   147,   169,    13,   154,   210,
     150,   141,   142,    12,    46,    89,   146,    39,    40,   163,
      14,   164,    47,    39,    44,  -114,    46,    41,    36,    16,
      52,    17,   119,    41,   191,   192,   135,   158,   180,   159,
      39,    44,    19,    46,    46,    22,    47,   133,    46,    48,
      41,   184,    21,   133,    32,    33,    34,    35,    90,    28,
      91,   185,   186,    92,    93,    94,   156,    95,    96,    46,
     202,   160,   181,    30,    31,    23,    29,    53,    39,    73,
     188,    43,    76,   211,   212,    39,    44,    36,    41,    97,
      77,   200,   166,   108,    84,    41,    82,    87,   155,    86,
      47,   111,   112,   113,    46,   114,   161,   116,   117,   118,
     132,   140,    46,    95,    96,   121,   122,   123,   124,   125,
     126,   127,   128,    46,    54,    55,    56,    57,    58,    59,
      60,    61,   145,   162,   165,   170,   168,   171,    62,   133,
     175,   176,   198,   178,   137,   172,   130,   183,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    54,    55,    56,
      57,    58,    59,    60,    61,   189,   195,   201,   204,   205,
      11,    62,   121,   122,   123,   124,   125,   126,   127,   128,
       9,    63,    64,    65,    66,    67,    68,    69,    70,    71,
     107,    37,   138,   209,    83,   129,   203,     0,     0,     0,
       0,     0,     0,   130,   121,   122,   123,   124,   125,   126,
     127,   128,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   130
};

static const yytype_int16 yycheck[] =
{
      38,    27,    72,    41,   106,   150,   173,   101,     3,    47,
      48,   105,    82,    22,    73,    42,   135,    43,    53,    42,
     114,    56,     0,   168,    94,    10,    11,    12,    13,    88,
      89,    54,    41,     5,    72,   129,   155,     4,   132,   206,
      49,   111,   112,    46,    82,    83,   116,    41,    42,   143,
       8,   145,    53,    41,    42,    56,    94,    51,    43,    42,
      86,    42,   100,    51,    17,    18,   104,   137,   170,   139,
      41,    42,     9,   111,   112,    49,    53,    54,   116,    56,
      51,   175,    46,    54,    10,    11,    12,    13,    14,    48,
      16,    41,    42,    19,    20,    21,   134,    23,    24,   137,
     194,   139,   172,    25,    26,    47,    50,    52,    41,    42,
     180,    51,    48,   207,   208,    41,    42,    43,    51,    45,
      52,   191,   148,    44,    49,    51,    56,    55,    55,    53,
      53,    51,    51,    48,   172,    48,    52,    51,    50,    48,
      48,    48,   180,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,   191,    33,    34,    35,    36,    37,    38,
      39,    40,    48,    52,    52,    55,    53,    48,    47,    54,
      48,    54,    15,    50,    54,    54,    56,    49,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    33,    34,    35,
      36,    37,    38,    39,    40,    55,    55,    50,    48,    48,
       4,    47,    25,    26,    27,    28,    29,    30,    31,    32,
       3,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      86,    27,   106,   202,    75,    48,   195,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    67,    68,    69,    42,     0,     5,    70,    75,
      76,    67,    46,     4,     8,    77,    42,    42,    71,     9,
      78,    46,    49,    47,    72,    73,    74,    75,    48,    50,
      72,    72,    10,    11,    12,    13,    43,    95,   105,    41,
      42,    51,   112,    51,    42,   111,   112,    53,    56,    96,
      79,    80,   105,    52,    33,    34,    35,    36,    37,    38,
      39,    40,    47,    57,    58,    59,    60,    61,    62,    63,
      64,    65,   110,    42,   112,   112,    48,    52,    42,    54,
     111,    96,    56,   110,    49,    81,    53,    55,   111,   112,
      14,    16,    19,    20,    21,    23,    24,    45,    82,    91,
      92,    95,    97,   101,   105,   106,   112,    79,    44,    96,
      96,    51,    51,    48,    48,   111,    51,    50,    48,   112,
      82,    25,    26,    27,    28,    29,    30,    31,    32,    48,
      56,   109,    48,    54,    98,   112,    82,    54,    92,   109,
      48,   111,   111,    83,    82,    48,   111,    82,    22,    41,
      49,   102,   103,   104,    82,    55,   112,    98,   111,   111,
     112,    52,    52,    82,    82,    52,   105,   102,    53,    98,
      55,    48,    54,    84,    87,    48,    54,    99,    50,   102,
     109,   111,    81,    49,    82,    41,    42,   100,   111,    55,
      85,    17,    18,    93,    94,    55,   108,   107,    15,    89,
     111,    50,    82,    99,    48,    48,    90,    86,    88,    93,
      81,    82,    82
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:
#line 55 "opt3.y"
    {l=(LIST*)malloc(sizeof(LIST));l->head=NULL;s=(STACK*)malloc(sizeof(STACK));s->capacity = 10;s->top = -1;s->array = (int*)malloc(s->capacity * sizeof(int)); }
    break;

  case 25:
#line 69 "opt3.y"
    {if(ss==0){ss=1;(yyval).addr=newLabel(&ln);tt=(yyval).addr;(yyval).code = (char*)malloc(sizeof(char)*100);sprintf((yyval).code,"goto %s\n",(yyval).addr); fprintf(fp,"%s",(yyval).code);}else{(yyval).code = (char*)malloc(sizeof(char)*100);sprintf((yyval).code,"goto %s\n",tt);fprintf(fp,"%s",(yyval).code);}}
    break;

  case 28:
#line 69 "opt3.y"
    {(yyval).tr=newLabel(&ln);(yyval).addr=newLabel(&ln);pp=(yyval).addr;(yyval).code = (char*)malloc(sizeof(char)*100);sprintf((yyval).code,"if %s goto %s\nelse goto LABEL%d\n%s:",(yyvsp[(3) - (4)]).addr,(yyval).tr,count,(yyval).tr);count+=1;fprintf(fp,"%s",(yyval).code);}
    break;

  case 29:
#line 69 "opt3.y"
    {(yyval).tr=newLabel(&ln);qq=(yyval).tr;(yyval).code = (char*)malloc(sizeof(char)*100);sprintf((yyval).code,"goto %s\n",(yyval).tr);fprintf(fp,"%s",(yyval).code);}
    break;

  case 30:
#line 69 "opt3.y"
    {(yyval).code = (char*)malloc(sizeof(char)*100);sprintf((yyval).code,"%s:",qq);fprintf(fp,"%s",(yyval).code);}
    break;

  case 33:
#line 69 "opt3.y"
    {rr=(yyvsp[(3) - (4)]).addr;}
    break;

  case 34:
#line 69 "opt3.y"
    {if(ss==1){(yyval).addr=tt;(yyval).code = (char*)malloc(sizeof(char)*100);sprintf((yyval).code,"%s:",(yyval).addr); fprintf(fp,"%s",(yyval).code);}}
    break;

  case 42:
#line 71 "opt3.y"
    {count-=1;(yyval).code = (char*)malloc(sizeof(char)*100);sprintf((yyval).code,"LABEL%d:",count);fprintf(fp,"%s",(yyval).code);}
    break;

  case 44:
#line 71 "opt3.y"
    {count-=1;(yyval).code = (char*)malloc(sizeof(char)*100);sprintf((yyval).code,"%s:\n",pp);fprintf(fp,"%s",(yyval).code);}
    break;

  case 51:
#line 75 "opt3.y"
    {(yyval).addr=newLabel(&ln);(yyval).tr=newTemp(&tn);(yyval).code = (char*)malloc(sizeof(char)*100);sprintf((yyval).code,"%s = %s==%s\nif %s goto %s\n%s:",(yyval).tr,rr,(yyvsp[(2) - (2)]).addr,(yyval).tr,(yyval).addr,(yyval).addr);fprintf(fp,"%s",(yyval).code);}
    break;

  case 52:
#line 75 "opt3.y"
    {(yyval).addr=newLabel(&ln);(yyval).code = (char*)malloc(sizeof(char)*100);sprintf((yyval).code,"%s:",(yyval).addr);fprintf(fp,"%s",(yyval).code);}
    break;

  case 53:
#line 76 "opt3.y"
    {if(((strcmp((yyvsp[(5) - (8)]).addr,"+") || strcmp((yyvsp[(5) - (8)]).addr,"-")) && strcmp((yyvsp[(6) - (8)]).addr,"0")) ||  ((strcmp((yyvsp[(5) - (8)]).addr,"*") || strcmp((yyvsp[(5) - (8)]).addr,"/")) && strcmp((yyvsp[(6) - (8)]).addr,"1"))){append(l,(yyvsp[(4) - (8)]).addr,(yyvsp[(2) - (8)]).addr);(yyval).code = (char*)malloc(sizeof(char)*100); sprintf((yyval).code,"%s = %s\n",(yyvsp[(2) - (8)]).addr,(yyvsp[(4) - (8)]).addr);fprintf(fp,"%s",(yyval).code);} else {append(l,(yyvsp[(4) - (8)]).addr,(yyvsp[(2) - (8)]).addr);(yyval).code = (char*)malloc(sizeof(char)*100); sprintf((yyval).code,"%s = %s %s %s\n",(yyvsp[(2) - (8)]).addr,(yyvsp[(4) - (8)]).addr,(yyvsp[(5) - (8)]).addr,(yyvsp[(6) - (8)]).addr);fprintf(fp,"%s",(yyval).code);}}
    break;

  case 78:
#line 87 "opt3.y"
    {append(l,(yyvsp[(3) - (4)]).addr,(yyval).addr);(yyval).addr=strdup((yyvsp[(1) - (4)]).v);(yyval).code = (char*)malloc(sizeof(char)*200);sprintf((yyval).code,"%s = %s\n",(yyval).addr,(yyvsp[(3) - (4)]).addr);fprintf(fp,"%s",(yyval).code);}
    break;

  case 79:
#line 87 "opt3.y"
    {(yyval).a = newTemp(&tn);(yyval).addr=newTemp(&tn);(yyval).code = (char*)malloc(sizeof(char)*100);sprintf((yyval).code,"%s = 4 * %s\n%s = %s + %s\n%s = %s\n",(yyval).a,(yyvsp[(5) - (6)]).addr,(yyval).addr,(yyvsp[(3) - (6)]).addr,(yyval).a,(yyvsp[(1) - (6)]).addr,(yyval).addr);fprintf(fp,"%s",(yyval).code);}
    break;

  case 81:
#line 87 "opt3.y"
    {(yyval).a = newTemp(&tn);(yyval).addr=newTemp(&tn);(yyval).code = (char*)malloc(sizeof(char)*100);sprintf((yyval).code,"%s = 4 * %s\n%s = %s + %s\n",(yyval).a,(yyvsp[(3) - (6)]).addr,(yyval).addr,(yyvsp[(1) - (6)]).addr,(yyval).a);fprintf(fp,"%s",(yyval).code);}
    break;

  case 83:
#line 88 "opt3.y"
    {(yyval).code = strdup("=");}
    break;

  case 84:
#line 88 "opt3.y"
    {(yyval).code = strdup("+");}
    break;

  case 85:
#line 88 "opt3.y"
    {(yyval).code = strdup("-");}
    break;

  case 86:
#line 88 "opt3.y"
    {(yyval).code = strdup("*");}
    break;

  case 87:
#line 88 "opt3.y"
    {(yyval).code = strdup("/");}
    break;

  case 88:
#line 88 "opt3.y"
    {(yyval).code = strdup("&");}
    break;

  case 89:
#line 88 "opt3.y"
    {(yyval).code = strdup("|");}
    break;

  case 90:
#line 88 "opt3.y"
    {(yyval).code = strdup("^");}
    break;

  case 91:
#line 88 "opt3.y"
    {(yyval).code = strdup("%");}
    break;

  case 92:
#line 89 "opt3.y"
    {(yyval).addr = strdup((yyvsp[(1) - (1)]).v); (yyval).code = strdup("");}
    break;

  case 93:
#line 89 "opt3.y"
    {(yyval).addr = strdup((yyvsp[(1) - (1)]).v); (yyval).code = strdup("");}
    break;

  case 94:
#line 89 "opt3.y"
    {(yyval).addr = strdup((yyvsp[(1) - (1)]).v); (yyval).code = strdup("");}
    break;

  case 95:
#line 89 "opt3.y"
    {(yyval).addr = strdup((yyvsp[(1) - (1)]).v); (yyval).code = strdup("");}
    break;

  case 96:
#line 89 "opt3.y"
    {(yyval).addr = strdup((yyvsp[(1) - (1)]).v); (yyval).code = strdup("");}
    break;

  case 97:
#line 89 "opt3.y"
    {(yyval).addr = strdup((yyvsp[(1) - (1)]).v); (yyval).code = strdup("");}
    break;

  case 99:
#line 89 "opt3.y"
    {(yyval).addr = strdup((yyvsp[(1) - (1)]).v); (yyval).code = strdup("");}
    break;

  case 100:
#line 89 "opt3.y"
    {(yyval).addr = strdup((yyvsp[(1) - (1)]).v); (yyval).code = strdup("");}
    break;

  case 101:
#line 89 "opt3.y"
    {(yyval).addr = strdup((yyvsp[(1) - (1)]).v); (yyval).code = strdup("");}
    break;

  case 102:
#line 89 "opt3.y"
    {(yyval).addr = strdup((yyvsp[(1) - (1)]).v); (yyval).code = strdup("");}
    break;

  case 103:
#line 89 "opt3.y"
    {(yyval).addr = strdup((yyvsp[(1) - (1)]).v); (yyval).code = strdup("");}
    break;

  case 104:
#line 89 "opt3.y"
    {(yyval).addr = strdup((yyvsp[(1) - (1)]).v); (yyval).code = strdup("");}
    break;

  case 105:
#line 89 "opt3.y"
    {(yyval).addr = strdup((yyvsp[(1) - (1)]).v); (yyval).code = strdup("");}
    break;

  case 106:
#line 89 "opt3.y"
    {(yyval).addr = strdup((yyvsp[(1) - (1)]).v); (yyval).code = strdup("");}
    break;

  case 107:
#line 89 "opt3.y"
    {(yyval).addr = strdup((yyvsp[(1) - (1)]).v); (yyval).code = strdup("");}
    break;

  case 108:
#line 89 "opt3.y"
    {(yyval).addr = strdup((yyvsp[(1) - (1)]).v); (yyval).code = strdup("");}
    break;

  case 109:
#line 89 "opt3.y"
    {(yyval).addr = strdup((yyvsp[(1) - (1)]).v); (yyval).code = strdup("");}
    break;

  case 113:
#line 91 "opt3.y"
    {(yyval).addr = strdup((yyvsp[(1) - (1)]).v);}
    break;

  case 114:
#line 91 "opt3.y"
    {(yyval).addr = search(l,(yyvsp[(1) - (1)]).v);}
    break;


/* Line 1267 of yacc.c.  */
#line 1869 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 93 "opt3.y"



char* newLabel(int *ln)
{
	char *s = (char*)malloc(4*sizeof(char));
	sprintf(s,"L%d",*ln);
	//printf("%s",s);
	(*ln)++;
	return s;
}
char* newTemp(int *tn)
{
	char *s = (char*)malloc(4*sizeof(char));
	sprintf(s,"T%d",*tn);
	//printf("%s",s);
	(*tn)++;
	return s;
}


void append(LIST *a,char *b,char *c)
{
    //printf("%s %s\n",b,c);
    if(atoi(b) || strcmp(b,"0")==0)
    {
        return;
    }
    else
    {
        //printf("%s %s\n",b,c);
        NODE *p=(NODE*)malloc(sizeof(NODE));
        NODE *q=NULL;
        p->temp=b;
        p->var=c;
        p->next=a->head;
        a->head=p;
        //print(a);
    }

}
char* search(LIST* a,char *b)
{
    NODE* c=a->head;
    //printf("%s 1\n",b);
    while(c!=NULL && strcmp(c->var,b))
    {
        //printf("%s %s\n",c->var,b);
        c=c->next;
    }
    if(c==NULL)
    {
        //printf("%s\n",b);
        return b;
    }
    else
    {
        //printf("%s\n",c->temp);
        return c->temp;
    }
    
}




void yyerror(const char *s)
{
	yynerrs+=1;
}
int main(int argc, char* argv[])
{
    
	yyin = fopen(argv[1], "r");
	fp = fopen("icg3.txt","w");
	int flag = 1;
	if(!yyparse())
			{printf("Parsing successful \n");flag = 0;}
		else
			{printf("Unsuccessful \n");}
	return flag;
}


