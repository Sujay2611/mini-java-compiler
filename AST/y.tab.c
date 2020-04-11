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
#line 1 "sym2.y"

	#include <stdlib.h>
	#include <string.h>
	#include <stdio.h>
	#include "header.c"
	FILE *yyin;
	
	#define YYSTYPE YACC
	int yylex();
	char* type;
	int err = 0;
	FILE* fp;
	
	int scope = 0;
	

	AST* ast;
	TREE* nptr=NULL;

	TREE* newnode(char*,TREE*,TREE*,TREE*,TREE*);
	TREE* newleaf(char*,char*);
	void display(TREE*);
	void yyerror(char* s);
	void printBT(char* prefix, TREE* node, int isLeft);
	


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
#line 223 "y.tab.c"

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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   284

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  103
/* YYNRULES -- Number of states.  */
#define YYNSTATES  193

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
       0,     0,     3,     6,     8,    16,    23,    25,    28,    31,
      32,    35,    43,    47,    49,    51,    52,    54,    55,    57,
      60,    65,    70,    74,    77,    81,    85,    91,    98,   106,
     111,   120,   123,   127,   131,   138,   141,   145,   146,   149,
     152,   154,   156,   160,   161,   164,   166,   173,   178,   184,
     188,   189,   193,   197,   201,   204,   208,   213,   215,   217,
     221,   223,   227,   231,   233,   235,   239,   241,   243,   245,
     247,   249,   254,   256,   258,   260,   262,   264,   266,   268,
     270,   272,   274,   276,   278,   280,   282,   284,   286,   288,
     290,   292,   294,   296,   298,   300,   302,   304,   306,   308,
     310,   314,   318,   320
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      67,     0,    -1,    68,    67,    -1,    69,    -1,     3,    42,
      46,    42,    46,    47,    48,    -1,    74,     4,    70,    49,
      71,    50,    -1,    42,    -1,    72,    71,    -1,    73,    71,
      -1,    -1,    74,    86,    -1,    74,    96,    42,    51,    78,
      52,    80,    -1,    75,    76,    77,    -1,     5,    -1,     8,
      -1,    -1,     9,    -1,    -1,    79,    -1,    96,    42,    -1,
      96,    42,    53,    78,    -1,    96,    54,    55,    44,    -1,
      49,    81,    50,    -1,    97,    81,    -1,    19,    48,    81,
      -1,    20,    48,    81,    -1,    14,    51,   100,    52,    81,
      -1,    14,    51,   100,    52,    80,    81,    -1,    14,    51,
     100,    52,    80,    15,    80,    -1,    21,   100,    48,    81,
      -1,    16,    51,   100,    52,    49,    84,    50,    81,    -1,
      86,    81,    -1,    88,    48,    81,    -1,    92,    48,    81,
      -1,    45,    51,   100,    52,    48,    81,    -1,    82,    48,
      -1,     1,    48,    81,    -1,    -1,   101,    83,    -1,    83,
     101,    -1,    23,    -1,    24,    -1,    85,    81,    84,    -1,
      -1,    17,   100,    -1,    18,    -1,    96,   101,    56,   100,
      87,    48,    -1,    96,   101,    87,    48,    -1,    53,   101,
      56,   100,    87,    -1,    53,    42,    87,    -1,    -1,    96,
      89,   101,    -1,    96,   101,    89,    -1,    54,    55,    89,
      -1,    54,    55,    -1,    54,    91,    55,    -1,    54,    91,
      55,    90,    -1,    41,    -1,    42,    -1,    88,    98,    93,
      -1,    94,    -1,    94,    53,    93,    -1,    22,    96,    90,
      -1,    41,    -1,    95,    -1,    49,    93,    50,    -1,    11,
      -1,    13,    -1,    12,    -1,    43,    -1,    10,    -1,   101,
      98,   100,    48,    -1,    56,    -1,    25,    -1,    26,    -1,
      27,    -1,    28,    -1,    29,    -1,    30,    -1,    31,    -1,
      32,    -1,    33,    -1,    34,    -1,    57,    -1,    58,    -1,
      59,    -1,    35,    -1,    36,    -1,    60,    -1,    61,    -1,
      38,    -1,    37,    -1,    39,    -1,    40,    -1,    62,    -1,
      63,    -1,    47,    -1,    64,    -1,    65,    -1,   101,    -1,
     101,    99,   100,    -1,    51,   100,    52,    -1,    41,    -1,
      42,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    30,    30,    31,    33,    34,    35,    36,    36,    36,
      37,    38,    39,    40,    41,    41,    42,    42,    43,    44,
      44,    44,    45,    46,    46,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    46,    47,    47,    47,    48,    48,
      49,    49,    50,    50,    51,    51,    52,    52,    53,    53,
      53,    54,    54,    55,    55,    56,    56,    57,    57,    58,
      59,    59,    59,    60,    60,    61,    62,    62,    62,    62,
      62,    63,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    66,
      66,    67,    67,    67
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
  "Start", "Import_S", "Class_declaration", "CLASSNAME", "Class_body",
  "Global_variable_declaration", "Method_declaration", "Modifier", "W1",
  "W2", "W3", "Parameters", "List_of_parameters", "Block", "S", "H", "W",
  "SwitchBlock", "SwitchLabel", "Variable_declaration", "Identifier_list",
  "Array_declaration", "B", "BB", "BNUM", "Array_initialisation", "K", "V",
  "R", "Type", "Assignment", "Assignment_operator", "Operators",
  "Expression", "Expr", 0
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
       0,    66,    67,    67,    68,    69,    70,    71,    71,    71,
      72,    73,    74,    75,    76,    76,    77,    77,    78,    79,
      79,    79,    80,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    82,    82,
      83,    83,    84,    84,    85,    85,    86,    86,    87,    87,
      87,    88,    88,    89,    89,    90,    90,    91,    91,    92,
      93,    93,    93,    94,    94,    95,    96,    96,    96,    96,
      96,    97,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,   100,
     100,   101,   101,   101
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     7,     6,     1,     2,     2,     0,
       2,     7,     3,     1,     1,     0,     1,     0,     1,     2,
       4,     4,     3,     2,     3,     3,     5,     6,     7,     4,
       8,     2,     3,     3,     6,     2,     3,     0,     2,     2,
       1,     1,     3,     0,     2,     1,     6,     4,     5,     3,
       0,     3,     3,     3,     2,     3,     4,     1,     1,     3,
       1,     3,     3,     1,     1,     3,     1,     1,     1,     1,
       1,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    13,     0,     0,     3,     0,    15,     0,     1,
       2,     0,    14,    17,     0,     6,     0,    16,    12,     0,
       9,     0,     0,     9,     9,     0,     0,     5,     7,     8,
      70,    66,    68,    67,    69,    10,     0,     4,   102,   103,
       0,    50,     0,   103,     0,    99,     0,     0,     0,     0,
      18,     0,   101,    81,    82,    86,    87,    91,    90,    92,
      93,    96,    83,    84,    85,    88,    89,    94,    95,    97,
      98,     0,    50,     0,    50,    47,     0,    19,     0,   100,
      49,     0,     0,     0,    11,     0,     0,    50,    46,     0,
       0,     0,     0,     0,     0,    40,    41,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    20,    21,    48,
       0,     0,     0,     0,     0,     0,     0,    22,    35,    39,
      31,    73,    74,    75,    76,    77,    78,    79,    80,     0,
      72,     0,     0,     0,     0,    50,    23,    38,     0,    36,
       0,     0,    24,    25,     0,     0,    32,     0,    63,     0,
      59,    60,    64,    33,    54,    51,    52,     0,     0,     0,
      29,     0,     0,     0,     0,    53,    71,     0,    26,    43,
       0,     0,    62,    65,    61,     0,    27,     0,    45,     0,
       0,    34,    57,    58,     0,    28,    44,     0,    43,    55,
      30,    42,    56
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,    16,    22,    23,    24,    25,     7,
      13,    18,    49,    50,    84,    98,    99,   100,   179,   180,
     101,    48,   102,   134,   172,   184,   103,   150,   151,   152,
     104,   105,   131,    71,    44,   106
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -146
static const yytype_int16 yypact[] =
{
      80,   -33,  -146,    33,    80,  -146,    10,    36,     4,  -146,
    -146,    42,  -146,    50,    44,  -146,    43,  -146,  -146,    49,
      91,    52,    47,    91,    91,     9,    53,  -146,  -146,  -146,
    -146,  -146,  -146,  -146,  -146,  -146,   -14,  -146,  -146,    57,
       6,    17,     9,  -146,    48,   219,    14,     6,    70,    63,
    -146,   -25,  -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,
    -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,
    -146,     6,    21,    64,    66,  -146,    72,    69,    71,  -146,
    -146,     6,    76,   222,  -146,     9,    81,    66,  -146,    79,
      77,    78,    82,    83,     6,  -146,  -146,    88,    90,    85,
       6,   179,   183,    97,     0,   179,   138,  -146,  -146,  -146,
     179,     6,     6,   179,   179,   110,     6,  -146,  -146,  -146,
    -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,   179,
    -146,   -17,   179,   116,     6,    25,  -146,  -146,     6,  -146,
     120,   121,  -146,  -146,   179,   122,  -146,     9,  -146,   -17,
    -146,   123,  -146,  -146,   128,  -146,  -146,   127,    93,   134,
    -146,   137,   130,   151,   -17,  -146,  -146,   136,  -146,    45,
     179,    46,  -146,  -146,  -146,    72,  -146,     6,  -146,   154,
     179,  -146,  -146,  -146,   133,  -146,  -146,   179,    45,   130,
    -146,  -146,  -146
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -146,   201,  -146,  -146,  -146,    67,  -146,  -146,    39,  -146,
    -146,  -146,   131,  -146,  -145,   -98,  -146,   100,    19,  -146,
     192,   -34,  -146,  -129,    29,  -146,  -146,  -141,  -146,  -146,
     -24,  -146,   113,  -146,   -45,   -36
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -104
static const yytype_int16 yytable[] =
{
      41,    36,    74,   120,    45,   147,   156,   136,   163,     8,
      73,    45,   139,   167,    11,   142,   143,    77,    51,    30,
      31,    32,    33,   174,   148,   165,    79,    38,    39,    78,
     185,   146,   149,     9,   153,    45,    87,    40,    80,     6,
      82,    38,    43,     6,    12,    45,   160,    38,    43,   115,
      14,    40,    34,   109,   133,    38,    72,    40,    45,    17,
     168,    51,   177,   178,   119,    40,   140,   141,   135,   176,
      46,   145,   181,    47,    46,    45,    45,  -103,    46,   133,
      45,    47,   188,     1,    15,     2,    19,   182,   183,   190,
      28,    29,    20,   157,    89,    21,     2,    27,   155,    26,
      52,    37,    45,    30,    31,    32,    33,    90,    42,    91,
     -37,   -37,    92,    93,    94,    76,    95,    96,    75,    46,
      81,    83,    85,   162,    88,   108,    86,   110,   111,   112,
     113,   114,   186,   118,    38,    43,    34,    89,    97,   116,
     117,    45,    83,   -37,    40,   132,    30,    31,    32,    33,
      90,   175,    91,   -37,   -37,    92,    93,    94,   144,    95,
      96,    95,    96,   121,   122,   123,   124,   125,   126,   127,
     128,   154,   158,   159,   161,   166,   164,    38,    43,    34,
      89,    97,   133,   169,   171,   170,   -37,    40,   189,    30,
      31,    32,    33,    90,   130,    91,   -37,   -37,    92,    93,
      94,   173,    95,    96,   187,    10,   137,   191,   121,   122,
     123,   124,   125,   126,   127,   128,   107,    35,   192,   138,
      38,    43,    34,    89,    97,     0,     0,     0,     0,   -37,
      40,   129,    30,    31,    32,    33,    90,     0,    91,   130,
       0,    92,    93,    94,     0,    95,    96,     0,     0,     0,
       0,     0,    53,    54,    55,    56,    57,    58,    59,    60,
       0,     0,     0,    38,    43,    34,    61,    97,     0,     0,
       0,     0,   -37,    40,     0,     0,    62,    63,    64,    65,
      66,    67,    68,    69,    70
};

static const yytype_int16 yycheck[] =
{
      36,    25,    47,   101,    40,    22,   135,   105,   149,    42,
      46,    47,   110,   158,     4,   113,   114,    42,    42,    10,
      11,    12,    13,   164,    41,   154,    71,    41,    42,    54,
     175,   129,    49,     0,   132,    71,    81,    51,    72,     0,
      74,    41,    42,     4,     8,    81,   144,    41,    42,    94,
      46,    51,    43,    87,    54,    41,    42,    51,    94,     9,
     158,    85,    17,    18,   100,    51,   111,   112,   104,   167,
      53,   116,   170,    56,    53,   111,   112,    56,    53,    54,
     116,    56,   180,     3,    42,     5,    42,    41,    42,   187,
      23,    24,    49,   138,     1,    46,     5,    50,   134,    47,
      52,    48,   138,    10,    11,    12,    13,    14,    51,    16,
      17,    18,    19,    20,    21,    52,    23,    24,    48,    53,
      56,    49,    53,   147,    48,    44,    55,    48,    51,    51,
      48,    48,   177,    48,    41,    42,    43,     1,    45,    51,
      50,   177,    49,    50,    51,    48,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    48,    23,
      24,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    55,    52,    52,    52,    48,    53,    41,    42,    43,
       1,    45,    54,    49,    54,    48,    50,    51,    55,    10,
      11,    12,    13,    14,    56,    16,    17,    18,    19,    20,
      21,    50,    23,    24,    50,     4,   106,   188,    25,    26,
      27,    28,    29,    30,    31,    32,    85,    25,   189,   106,
      41,    42,    43,     1,    45,    -1,    -1,    -1,    -1,    50,
      51,    48,    10,    11,    12,    13,    14,    -1,    16,    56,
      -1,    19,    20,    21,    -1,    23,    24,    -1,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    38,    39,    40,
      -1,    -1,    -1,    41,    42,    43,    47,    45,    -1,    -1,
      -1,    -1,    50,    51,    -1,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,    67,    68,    69,    74,    75,    42,     0,
      67,     4,     8,    76,    46,    42,    70,     9,    77,    42,
      49,    46,    71,    72,    73,    74,    47,    50,    71,    71,
      10,    11,    12,    13,    43,    86,    96,    48,    41,    42,
      51,   101,    51,    42,   100,   101,    53,    56,    87,    78,
      79,    96,    52,    33,    34,    35,    36,    37,    38,    39,
      40,    47,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    99,    42,   101,   100,    48,    52,    42,    54,   100,
      87,    56,    87,    49,    80,    53,    55,   100,    48,     1,
      14,    16,    19,    20,    21,    23,    24,    45,    81,    82,
      83,    86,    88,    92,    96,    97,   101,    78,    44,    87,
      48,    51,    51,    48,    48,   100,    51,    50,    48,   101,
      81,    25,    26,    27,    28,    29,    30,    31,    32,    48,
      56,    98,    48,    54,    89,   101,    81,    83,    98,    81,
     100,   100,    81,    81,    48,   100,    81,    22,    41,    49,
      93,    94,    95,    81,    55,   101,    89,   100,    52,    52,
      81,    52,    96,    93,    53,    89,    48,    80,    81,    49,
      48,    54,    90,    50,    93,    15,    81,    17,    18,    84,
      85,    81,    41,    42,    91,    80,   100,    50,    81,    55,
      81,    84,    90
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
        case 2:
#line 30 "sym2.y"
    {(yyval).ptr=newnode("import statement",(yyvsp[(1) - (2)]).ptr,(yyvsp[(2) - (2)]).ptr,nptr,nptr);
	ast->root  = (yyval).ptr;}
    break;

  case 3:
#line 31 "sym2.y"
    {(yyval).ptr = (yyvsp[(1) - (1)]).ptr;
										ast->root = (yyval).ptr;}
    break;

  case 4:
#line 33 "sym2.y"
    {(yyvsp[(1) - (7)]).ptr=newleaf("keyword","import");}
    break;

  case 5:
#line 34 "sym2.y"
    {(yyval).ptr=newnode("CLASS DECLARATION",(yyvsp[(1) - (6)]).ptr,(yyvsp[(3) - (6)]).ptr,(yyvsp[(5) - (6)]).ptr,nptr);}
    break;

  case 6:
#line 35 "sym2.y"
    {(yyval).ptr=newleaf("classname",(yyvsp[(1) - (1)]).v);}
    break;

  case 7:
#line 36 "sym2.y"
    {(yyval).ptr=newnode("CLASS BODY",(yyvsp[(1) - (2)]).ptr,(yyvsp[(2) - (2)]).ptr,nptr,nptr);}
    break;

  case 8:
#line 36 "sym2.y"
    {(yyval).ptr=newnode("CLASS BODY",(yyvsp[(1) - (2)]).ptr,(yyvsp[(2) - (2)]).ptr,nptr,nptr);}
    break;

  case 9:
#line 36 "sym2.y"
    {(yyval).ptr=nptr;}
    break;

  case 10:
#line 37 "sym2.y"
    {(yyval).ptr=newnode("GLOBAL VARIABLE DECLARATION",(yyvsp[(1) - (2)]).ptr,(yyvsp[(2) - (2)]).ptr,nptr,nptr);}
    break;

  case 11:
#line 38 "sym2.y"
    {(yyval).ptr=newnode("METHOD DECLARATION",(yyvsp[(1) - (7)]).ptr,(yyvsp[(2) - (7)]).ptr,(yyvsp[(5) - (7)]).ptr,(yyvsp[(7) - (7)]).ptr);}
    break;

  case 12:
#line 39 "sym2.y"
    {(yyval).ptr=newnode("modifier",(yyvsp[(1) - (3)]).ptr,(yyvsp[(2) - (3)]).ptr,(yyvsp[(3) - (3)]).ptr,nptr);}
    break;

  case 13:
#line 40 "sym2.y"
    {(yyval).ptr=newleaf("access modifier",(yyvsp[(1) - (1)]).v);}
    break;

  case 14:
#line 41 "sym2.y"
    {(yyval).ptr=newleaf("access modifier",(yyvsp[(1) - (1)]).v);}
    break;

  case 15:
#line 41 "sym2.y"
    {(yyval).ptr=nptr;}
    break;

  case 16:
#line 42 "sym2.y"
    {(yyval).ptr=newleaf("access modifier",(yyvsp[(1) - (1)]).v);}
    break;

  case 17:
#line 42 "sym2.y"
    {(yyval).ptr=nptr;}
    break;

  case 18:
#line 43 "sym2.y"
    {(yyval).ptr=(yyvsp[(1) - (1)]).ptr;}
    break;

  case 19:
#line 44 "sym2.y"
    {(yyval).ptr=(yyvsp[(1) - (2)]).ptr;}
    break;

  case 20:
#line 44 "sym2.y"
    {(yyval).ptr=newnode("parameter list",(yyvsp[(1) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr,nptr,nptr);}
    break;

  case 21:
#line 44 "sym2.y"
    {(yyval).ptr=(yyvsp[(1) - (4)]).ptr;}
    break;

  case 22:
#line 45 "sym2.y"
    {(yyval).ptr=(yyvsp[(2) - (3)]).ptr;}
    break;

  case 23:
#line 46 "sym2.y"
    {(yyval).ptr=newnode("ASSIGNMENT STATEMENT",(yyvsp[(1) - (2)]).ptr,(yyvsp[(2) - (2)]).ptr,nptr,nptr);}
    break;

  case 24:
#line 46 "sym2.y"
    {(yyval).ptr=(yyvsp[(3) - (3)]).ptr;}
    break;

  case 25:
#line 46 "sym2.y"
    {(yyval).ptr=(yyvsp[(3) - (3)]).ptr;}
    break;

  case 26:
#line 46 "sym2.y"
    {(yyval).ptr=newnode("IF STATEMENT",(yyvsp[(3) - (5)]).ptr,(yyvsp[(5) - (5)]).ptr,nptr,nptr);}
    break;

  case 27:
#line 46 "sym2.y"
    {(yyval).ptr=newnode("IF STATEMENT",(yyvsp[(3) - (6)]).ptr,(yyvsp[(5) - (6)]).ptr,(yyvsp[(6) - (6)]).ptr,nptr);}
    break;

  case 28:
#line 46 "sym2.y"
    {(yyval).ptr=newnode("IF ELSE STATEMENT",(yyvsp[(3) - (7)]).ptr,(yyvsp[(5) - (7)]).ptr,(yyvsp[(7) - (7)]).ptr,nptr);}
    break;

  case 29:
#line 46 "sym2.y"
    {(yyval).ptr=newnode("RETURN STATEMENT",(yyvsp[(2) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr,nptr,nptr);}
    break;

  case 30:
#line 46 "sym2.y"
    {(yyval).ptr=newnode("SWITCH STATEMENT",(yyvsp[(3) - (8)]).ptr,(yyvsp[(6) - (8)]).ptr,(yyvsp[(8) - (8)]).ptr,nptr);}
    break;

  case 31:
#line 46 "sym2.y"
    {(yyval).ptr=newnode("VARIABLE DECLARATION/INITIALISATION STATEMENT",(yyvsp[(1) - (2)]).ptr,(yyvsp[(2) - (2)]).ptr,nptr,nptr);}
    break;

  case 32:
#line 46 "sym2.y"
    {(yyval).ptr=newnode("ARRAY DECLARATION STATEMENT",(yyvsp[(1) - (3)]).ptr,(yyvsp[(3) - (3)]).ptr,nptr,nptr);}
    break;

  case 33:
#line 46 "sym2.y"
    {(yyval).ptr=newnode("ARRAY INITIALISATION STATEMENT",(yyvsp[(1) - (3)]).ptr,(yyvsp[(3) - (3)]).ptr,nptr,nptr);}
    break;

  case 34:
#line 46 "sym2.y"
    {(yyval).ptr=newnode("PRINT STATEMENT",(yyvsp[(3) - (6)]).ptr,(yyvsp[(6) - (6)]).ptr,nptr,nptr);}
    break;

  case 35:
#line 47 "sym2.y"
    {(yyval).ptr=newnode("STATEMENT",(yyvsp[(1) - (2)]).ptr,nptr,nptr,nptr);}
    break;

  case 37:
#line 47 "sym2.y"
    {(yyval).ptr=nptr;}
    break;

  case 38:
#line 48 "sym2.y"
    {(yyval).ptr=newnode("UNARY OPERATION",(yyvsp[(1) - (2)]).ptr,(yyvsp[(2) - (2)]).ptr,nptr,nptr);}
    break;

  case 39:
#line 48 "sym2.y"
    {(yyval).ptr=newnode("UNARY OPERATION",(yyvsp[(1) - (2)]).ptr,(yyvsp[(2) - (2)]).ptr,nptr,nptr);}
    break;

  case 40:
#line 49 "sym2.y"
    {(yyval).ptr = newleaf("increment",(yyvsp[(1) - (1)]).v);}
    break;

  case 41:
#line 49 "sym2.y"
    {(yyval).ptr = newleaf("decrement",(yyvsp[(1) - (1)]).v);}
    break;

  case 42:
#line 50 "sym2.y"
    {(yyval).ptr=newnode("switch",(yyvsp[(1) - (3)]).ptr,(yyvsp[(2) - (3)]).ptr,(yyvsp[(3) - (3)]).ptr,nptr);}
    break;

  case 43:
#line 50 "sym2.y"
    {(yyval).ptr=nptr;}
    break;

  case 44:
#line 51 "sym2.y"
    {(yyvsp[(1) - (2)]).ptr=newleaf("keyword","case");(yyval).ptr=(yyvsp[(2) - (2)]).ptr;}
    break;

  case 45:
#line 51 "sym2.y"
    {(yyval).ptr=newleaf("keyword","default");}
    break;

  case 46:
#line 52 "sym2.y"
    {(yyval).ptr=newnode("variable initialisation",(yyvsp[(1) - (6)]).ptr,(yyvsp[(2) - (6)]).ptr,(yyvsp[(4) - (6)]).ptr,(yyvsp[(5) - (6)]).ptr);}
    break;

  case 47:
#line 52 "sym2.y"
    {(yyval).ptr=newnode("variable declaration",(yyvsp[(1) - (4)]).ptr,(yyvsp[(2) - (4)]).ptr,(yyvsp[(3) - (4)]).ptr,nptr);}
    break;

  case 48:
#line 53 "sym2.y"
    {(yyval).ptr=newnode("identifier list",(yyvsp[(2) - (5)]).ptr,(yyvsp[(4) - (5)]).ptr,(yyvsp[(5) - (5)]).ptr,nptr);}
    break;

  case 49:
#line 53 "sym2.y"
    {(yyval).ptr=newnode("identifier list",(yyvsp[(2) - (3)]).ptr,(yyvsp[(3) - (3)]).ptr,nptr,nptr);}
    break;

  case 50:
#line 53 "sym2.y"
    {(yyval).ptr=nptr;}
    break;

  case 51:
#line 54 "sym2.y"
    {(yyval).ptr=newnode("array declaration",(yyvsp[(1) - (3)]).ptr,(yyvsp[(2) - (3)]).ptr,(yyvsp[(3) - (3)]).ptr,nptr);}
    break;

  case 52:
#line 54 "sym2.y"
    {(yyval).ptr=newnode("array declaration",(yyvsp[(1) - (3)]).ptr,(yyvsp[(2) - (3)]).ptr,(yyvsp[(3) - (3)]).ptr,nptr);}
    break;

  case 53:
#line 55 "sym2.y"
    {(yyval).ptr=(yyvsp[(3) - (3)]).ptr;}
    break;

  case 55:
#line 56 "sym2.y"
    {(yyval).ptr=(yyvsp[(2) - (3)]).ptr;}
    break;

  case 56:
#line 56 "sym2.y"
    {(yyval).ptr=newnode("bracket",(yyvsp[(2) - (4)]).ptr,(yyvsp[(4) - (4)]).ptr,nptr,nptr);}
    break;

  case 57:
#line 57 "sym2.y"
    {(yyval).ptr=newleaf("num",(yyvsp[(1) - (1)]).v);}
    break;

  case 58:
#line 57 "sym2.y"
    {(yyval).ptr=newleaf("id",(yyvsp[(1) - (1)]).v);}
    break;

  case 59:
#line 58 "sym2.y"
    {(yyval).ptr=newnode((yyvsp[(2) - (3)]).v,(yyvsp[(1) - (3)]).ptr,(yyvsp[(2) - (3)]).ptr,(yyvsp[(3) - (3)]).ptr,nptr);}
    break;

  case 60:
#line 59 "sym2.y"
    {(yyval).ptr=(yyvsp[(1) - (1)]).ptr;}
    break;

  case 61:
#line 59 "sym2.y"
    {(yyval).ptr=newnode(",",(yyvsp[(1) - (3)]).ptr,(yyvsp[(3) - (3)]).ptr,nptr,nptr);}
    break;

  case 62:
#line 59 "sym2.y"
    {(yyval).ptr=newnode("new",(yyvsp[(2) - (3)]).ptr,(yyvsp[(3) - (3)]).ptr,nptr,nptr);}
    break;

  case 63:
#line 60 "sym2.y"
    {(yyval).ptr=newleaf("num",(yyvsp[(1) - (1)]).v);}
    break;

  case 64:
#line 60 "sym2.y"
    {(yyval).ptr=(yyvsp[(1) - (1)]).ptr;}
    break;

  case 65:
#line 61 "sym2.y"
    {(yyval).ptr=(yyvsp[(2) - (3)]).ptr;}
    break;

  case 66:
#line 62 "sym2.y"
    {(yyval).ptr=newleaf("datatype",(yyvsp[(1) - (1)]).v);}
    break;

  case 67:
#line 62 "sym2.y"
    {(yyval).ptr=newleaf("datatype",(yyvsp[(1) - (1)]).v);}
    break;

  case 68:
#line 62 "sym2.y"
    {(yyval).ptr=newleaf("datatype",(yyvsp[(1) - (1)]).v);}
    break;

  case 69:
#line 62 "sym2.y"
    {(yyval).ptr=newleaf("datatype",(yyvsp[(1) - (1)]).v);}
    break;

  case 70:
#line 62 "sym2.y"
    {(yyval).ptr=newleaf("datatype",(yyvsp[(1) - (1)]).v);}
    break;

  case 71:
#line 63 "sym2.y"
    {(yyval).ptr=newnode((yyvsp[(2) - (4)]).v,(yyvsp[(1) - (4)]).ptr,(yyvsp[(3) - (4)]).ptr,nptr,nptr);}
    break;

  case 72:
#line 64 "sym2.y"
    {(yyval).v = strdup((yyvsp[(1) - (1)]).v);}
    break;

  case 73:
#line 64 "sym2.y"
    {(yyval).v = strdup((yyvsp[(1) - (1)]).v);}
    break;

  case 74:
#line 64 "sym2.y"
    {(yyval).v = strdup((yyvsp[(1) - (1)]).v);}
    break;

  case 75:
#line 64 "sym2.y"
    {(yyval).v = strdup((yyvsp[(1) - (1)]).v);}
    break;

  case 76:
#line 64 "sym2.y"
    {(yyval).v = strdup((yyvsp[(1) - (1)]).v);}
    break;

  case 77:
#line 64 "sym2.y"
    {(yyval).v = strdup((yyvsp[(1) - (1)]).v);}
    break;

  case 78:
#line 64 "sym2.y"
    {(yyval).v = strdup((yyvsp[(1) - (1)]).v);}
    break;

  case 79:
#line 64 "sym2.y"
    {(yyval).v = strdup((yyvsp[(1) - (1)]).v);}
    break;

  case 80:
#line 64 "sym2.y"
    {(yyval).v = strdup((yyvsp[(1) - (1)]).v);}
    break;

  case 81:
#line 65 "sym2.y"
    {(yyval).v = strdup((yyvsp[(1) - (1)]).v);}
    break;

  case 82:
#line 65 "sym2.y"
    {(yyval).v = strdup((yyvsp[(1) - (1)]).v);}
    break;

  case 83:
#line 65 "sym2.y"
    {(yyval).v = strdup((yyvsp[(1) - (1)]).v);}
    break;

  case 84:
#line 65 "sym2.y"
    {(yyval).v = strdup((yyvsp[(1) - (1)]).v);}
    break;

  case 85:
#line 65 "sym2.y"
    {(yyval).v = strdup((yyvsp[(1) - (1)]).v);}
    break;

  case 86:
#line 65 "sym2.y"
    {(yyval).v = strdup((yyvsp[(1) - (1)]).v);}
    break;

  case 87:
#line 65 "sym2.y"
    {(yyval).v = strdup((yyvsp[(1) - (1)]).v);}
    break;

  case 88:
#line 65 "sym2.y"
    {(yyval).v = strdup((yyvsp[(1) - (1)]).v);}
    break;

  case 89:
#line 65 "sym2.y"
    {(yyval).v = strdup((yyvsp[(1) - (1)]).v);}
    break;

  case 90:
#line 65 "sym2.y"
    {(yyval).v = strdup((yyvsp[(1) - (1)]).v);}
    break;

  case 91:
#line 65 "sym2.y"
    {(yyval).v = strdup((yyvsp[(1) - (1)]).v);}
    break;

  case 92:
#line 65 "sym2.y"
    {(yyval).v = strdup((yyvsp[(1) - (1)]).v);}
    break;

  case 93:
#line 65 "sym2.y"
    {(yyval).v = strdup((yyvsp[(1) - (1)]).v);}
    break;

  case 94:
#line 65 "sym2.y"
    {(yyval).v = strdup((yyvsp[(1) - (1)]).v);}
    break;

  case 95:
#line 65 "sym2.y"
    {(yyval).v = strdup((yyvsp[(1) - (1)]).v);}
    break;

  case 96:
#line 65 "sym2.y"
    {(yyval).v = strdup((yyvsp[(1) - (1)]).v);}
    break;

  case 97:
#line 65 "sym2.y"
    {(yyval).v = strdup((yyvsp[(1) - (1)]).v);}
    break;

  case 98:
#line 65 "sym2.y"
    {(yyval).v = strdup((yyvsp[(1) - (1)]).v);}
    break;

  case 99:
#line 66 "sym2.y"
    {(yyval).ptr=(yyvsp[(1) - (1)]).ptr;}
    break;

  case 100:
#line 66 "sym2.y"
    {(yyval).ptr=newnode((yyvsp[(2) - (3)]).v,(yyvsp[(1) - (3)]).ptr,(yyvsp[(3) - (3)]).ptr,nptr,nptr);}
    break;

  case 101:
#line 67 "sym2.y"
    {(yyval).ptr=(yyvsp[(2) - (3)]).ptr;}
    break;

  case 102:
#line 67 "sym2.y"
    {(yyval).ptr=newleaf("num",(yyvsp[(1) - (1)]).v);}
    break;

  case 103:
#line 67 "sym2.y"
    {(yyval).ptr=newleaf("id",(yyvsp[(1) - (1)]).v);}
    break;


/* Line 1267 of yacc.c.  */
#line 2120 "y.tab.c"
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


#line 69 "sym2.y"

void yyerror(char *s)
{
	yynerrs+=1;
}
int main(int argc, char* argv[])
{
	fp = fopen("AST2.txt", "w");
	ast = (AST*)malloc(sizeof(AST));
	ast->root = NULL;
	yyin = fopen(argv[1], "r");
	if(!yyparse())
	{
		
		printf("\nParsing succesful\n");
		printf("AST generated\n");

		fprintf(fp,"Abstract Syntax Tree\n");
		//display(ast->root);
		
		printBT("",ast->root,0);
		fprintf(fp,"\n");
		fclose(fp);
		return 0;
	}
	else
	{
		printf("Unsuccessful\n");
	}
	return 0;
}


TREE* newnode(char* o,TREE* c1,TREE* c2,TREE* c3,TREE* c4)
{
	TREE* temp = (TREE*)malloc(sizeof(TREE));
	temp->opr= strdup(o);
	temp->value = strdup("N/A");
	temp->c1 = c1;
	temp->c2 = c2;
	temp->c3 = c3;
	temp->c4 = c4;
	return temp;
}

TREE* newleaf(char* o, char* v)
{
	TREE* temp = (TREE*)malloc(sizeof(TREE));
	temp->opr = strdup(o);
	temp->value = strdup(v);
	temp->c1 = NULL;
	temp->c2 = NULL;
	temp->c3 = NULL;
	temp->c4 = NULL;
	return temp;
}

void display(TREE* r)
{	
	
	if(r==NULL)
		return;
	if(r->c1==NULL && r->c2==NULL && r->c3==NULL)
	{
		printf("(");
		printf("%s\t%s)\n",r->opr,r->value);
	}
	else
		printf("%s\n",r->opr);
	display(r->c1);
	display(r->c2);
	display(r->c3);
	display(r->c4);
}

void printBT(char* prefix, TREE* node, int isLeft)
{	
	
	if(node==NULL)
		return;
    if( node != NULL)
    {
       fprintf(fp,"%s",prefix);

       	if(isLeft==0)
       		fprintf(fp,"└──");
       	else
       		fprintf(fp,"├──");
 
        // print the value of the node

     if(node->c1==NULL && node->c2==NULL && node->c3==NULL && node->c4==NULL)
	{
		
		fprintf(fp,"(%s, %s)\n",node->opr,node->value);
	}
	else
		fprintf(fp,"%s\n",node->opr);
        // enter the next tree level - left and right branch
        char new_prefix[1000];
       	if(isLeft==0){
       		strcpy(new_prefix,prefix);
       		strcat(new_prefix,"    ");
       	}
       	else
       		{
       		strcpy(new_prefix,prefix);
       		strcat(new_prefix,"│   ");
       	}


     if(node->c1!=NULL && node->c2==NULL && node->c3==NULL && node->c4==NULL)
	{
		printBT(new_prefix, node->c1, 0);
        printBT(new_prefix, node->c2, 0);
        printBT(new_prefix, node->c3, 0);
        printBT(new_prefix, node->c4, 0);
        return;
	}
	if(node->c1!=NULL && node->c2!=NULL && node->c3==NULL && node->c4==NULL)
	{
		printBT(new_prefix, node->c1, 1);
        printBT(new_prefix, node->c2, 0);
        printBT(new_prefix, node->c3, 0);
        printBT(new_prefix, node->c4, 0);
        return;
	}
	if(node->c1!=NULL && node->c2!=NULL && node->c3!=NULL && node->c4==NULL)
	{
		printBT(new_prefix, node->c1, 1);
        printBT(new_prefix, node->c2, 1);
        printBT(new_prefix, node->c3, 0);
        printBT(new_prefix, node->c4, 0);
        return;
	}	
	if(node->c1!=NULL && node->c2!=NULL && node->c3!=NULL && node->c4!=NULL)
	{
		printBT(new_prefix, node->c1, 1);
        printBT(new_prefix, node->c2, 1);
        printBT(new_prefix, node->c3, 1);
        printBT(new_prefix, node->c4, 0);
        return;
	}	
        
    }
    	
}





