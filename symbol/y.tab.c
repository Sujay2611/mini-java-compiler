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
#line 1 "symb.y"

	#include <stdlib.h>
	#include <string.h>
	#include <stdio.h>
	#define YYSTYPE char*
	FILE *yyin;
	int yylex();
	char* type;
	int err = 0;
	FILE* fp;
	typedef struct NODE
	{
	char name[10];
	int value;
	char type[10];
	int scope;
	int lineno;
	int size;
	struct NODE* next;
	}NODE;

	typedef struct symbol_table
	{
		NODE* head;
		int entries;
	}TABLE;
	TABLE* s;
	int scope = 0;
	void yyerror(char* s);
	void print();
	int exists(char* name);
	void scopered(int scope);
	void update(char* name, int val,int lineno);
	void insert(char* name, int value, char* type,int lineno) ;
	char* calculate(char* opr,int op1,int op2);
	extern int yylineno;


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
#line 234 "y.tab.c"

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
#define YYFINAL  18
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   295

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  110
/* YYNRULES -- Number of states.  */
#define YYNSTATES  207

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
       0,     0,     3,     6,     8,    16,    23,    26,    29,    30,
      33,    41,    49,    52,    55,    58,    60,    63,    65,    67,
      68,    70,    73,    78,    83,    84,    89,    92,    96,   100,
     106,   113,   121,   126,   127,   128,   139,   142,   146,   150,
     157,   160,   164,   165,   168,   171,   174,   177,   181,   182,
     185,   187,   188,   196,   197,   203,   209,   213,   214,   218,
     222,   226,   229,   233,   238,   240,   242,   246,   248,   252,
     256,   258,   260,   264,   266,   268,   270,   272,   277,   279,
     281,   283,   285,   287,   289,   291,   293,   295,   297,   299,
     301,   303,   305,   307,   309,   311,   313,   315,   317,   319,
     321,   323,   325,   327,   329,   331,   333,   335,   339,   343,
     345
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      67,     0,    -1,    68,    67,    -1,    69,    -1,     3,    42,
      46,    42,    46,    47,    48,    -1,    73,     4,    42,    49,
      70,    50,    -1,    71,    70,    -1,    72,    70,    -1,    -1,
      73,    86,    -1,    73,    98,    42,    51,    76,    52,    78,
      -1,    73,    10,    42,    51,    76,    52,    78,    -1,     5,
      74,    -1,     6,    74,    -1,     7,    74,    -1,    74,    -1,
       8,    75,    -1,    75,    -1,     9,    -1,    -1,    77,    -1,
      98,    42,    -1,    98,    42,    53,    76,    -1,    98,    54,
      55,    44,    -1,    -1,    49,    79,    80,    50,    -1,    99,
      80,    -1,    19,    48,    80,    -1,    20,    48,    80,    -1,
      14,    51,   102,    52,    80,    -1,    14,    51,   102,    52,
      78,    80,    -1,    14,    51,   102,    52,    78,    15,    78,
      -1,    21,   102,    48,    80,    -1,    -1,    -1,    16,    51,
     102,    52,    49,    81,    84,    50,    82,    80,    -1,    86,
      80,    -1,    90,    48,    80,    -1,    94,    48,    80,    -1,
      45,    51,   102,    52,    48,    80,    -1,    83,    48,    -1,
       1,    48,    80,    -1,    -1,    42,    23,    -1,    42,    24,
      -1,    23,    42,    -1,    24,    42,    -1,    85,    80,    84,
      -1,    -1,    17,   102,    -1,    18,    -1,    -1,    98,    42,
      56,   102,    87,    89,    48,    -1,    -1,    98,    42,    88,
      89,    48,    -1,    53,    42,    56,   102,    89,    -1,    53,
      42,    89,    -1,    -1,    98,    91,    42,    -1,    98,    42,
      91,    -1,    54,    55,    91,    -1,    54,    55,    -1,    54,
      93,    55,    -1,    54,    93,    55,    92,    -1,    41,    -1,
      42,    -1,    90,   100,    95,    -1,    96,    -1,    96,    53,
      95,    -1,    22,    98,    92,    -1,    41,    -1,    97,    -1,
      49,    95,    50,    -1,    11,    -1,    13,    -1,    12,    -1,
      43,    -1,    42,   100,   102,    48,    -1,    56,    -1,    25,
      -1,    26,    -1,    27,    -1,    28,    -1,    29,    -1,    30,
      -1,    31,    -1,    32,    -1,    48,    -1,    33,    -1,    34,
      -1,    57,    -1,    58,    -1,    59,    -1,    35,    -1,    36,
      -1,    60,    -1,    61,    -1,    38,    -1,    37,    -1,    39,
      -1,    40,    -1,    62,    -1,    63,    -1,    47,    -1,    64,
      -1,    65,    -1,   103,    -1,   103,   101,   102,    -1,    51,
     102,    52,    -1,    41,    -1,    42,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    41,    41,    41,    42,    43,    44,    44,    44,    45,
      46,    46,    47,    47,    47,    47,    48,    48,    49,    49,
      50,    51,    51,    51,    52,    52,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      54,    54,    54,    55,    55,    55,    55,    56,    56,    57,
      57,    58,    58,    58,    58,    59,    59,    59,    60,    60,
      61,    61,    62,    62,    63,    63,    64,    65,    65,    65,
      66,    66,    67,    68,    68,    68,    68,    69,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    81,    81,    82,    82,
      82
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
  "Start", "Import_S", "Class_declaration", "Class_body",
  "Global_variable_declaration", "Method_declaration", "Modifier",
  "Modifier1", "Modifier2", "Parameters", "List_of_parameters", "Block",
  "@1", "S", "@2", "@3", "H", "SwitchBlock", "SwitchLabel",
  "Variable_declaration", "@4", "@5", "Identifier_list",
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
       0,    66,    67,    67,    68,    69,    70,    70,    70,    71,
      72,    72,    73,    73,    73,    73,    74,    74,    75,    75,
      76,    77,    77,    77,    79,    78,    80,    80,    80,    80,
      80,    80,    80,    81,    82,    80,    80,    80,    80,    80,
      80,    80,    80,    83,    83,    83,    83,    84,    84,    85,
      85,    87,    86,    88,    86,    89,    89,    89,    90,    90,
      91,    91,    92,    92,    93,    93,    94,    95,    95,    95,
      96,    96,    97,    98,    98,    98,    98,    99,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   102,   102,   103,   103,
     103
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     7,     6,     2,     2,     0,     2,
       7,     7,     2,     2,     2,     1,     2,     1,     1,     0,
       1,     2,     4,     4,     0,     4,     2,     3,     3,     5,
       6,     7,     4,     0,     0,    10,     2,     3,     3,     6,
       2,     3,     0,     2,     2,     2,     2,     3,     0,     2,
       1,     0,     7,     0,     5,     5,     3,     0,     3,     3,
       3,     2,     3,     4,     1,     1,     3,     1,     3,     3,
       1,     1,     3,     1,     1,     1,     1,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      19,     0,    19,    19,    19,    19,    18,     0,    19,     3,
       0,    15,    17,     0,    12,    13,    14,    16,     1,     2,
       0,     0,     0,     0,    19,     0,     0,    19,    19,     0,
       0,     5,     6,     7,     0,    73,    75,    74,    76,     9,
       0,     4,     0,    53,     0,     0,     0,    57,     0,    20,
       0,     0,   109,   110,     0,    51,   106,     0,     0,     0,
      21,     0,     0,     0,    57,    88,    89,    93,    94,    98,
      97,    99,   100,   103,    90,    91,    92,    95,    96,   101,
     102,   104,   105,     0,    57,    54,    24,    11,     0,     0,
      10,   108,     0,   107,     0,    56,     0,    22,    23,    52,
      57,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    55,     0,
       0,     0,     0,     0,     0,    45,    46,    43,    44,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    78,     0,
       0,    25,    40,    36,     0,     0,     0,    53,     0,     0,
      26,    41,     0,     0,    27,    28,     0,     0,     0,    37,
       0,    70,     0,    66,    67,    71,    38,    59,    61,    58,
       0,     0,    32,    77,     0,     0,     0,     0,    60,     0,
      29,    33,     0,     0,    69,    72,    68,     0,    30,    48,
      39,    64,    65,     0,    31,     0,    50,     0,     0,    62,
      49,    34,    48,    63,     0,    47,    35
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,    26,    27,    28,    29,    11,    12,
      48,    49,    87,    96,   111,   189,   204,   112,   197,   198,
     113,    64,    47,    58,   114,   149,   184,   193,   115,   163,
     164,   165,   116,   117,   139,    83,    55,    56
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -154
static const yytype_int16 yypact[] =
{
      69,   -36,    41,    41,    41,    14,  -154,    45,    69,  -154,
      61,  -154,  -154,    25,  -154,  -154,  -154,  -154,  -154,  -154,
      42,    46,    38,    44,    13,    72,    58,    13,    13,    21,
      76,  -154,  -154,  -154,    67,  -154,  -154,  -154,  -154,  -154,
      78,  -154,    75,   -44,    15,    15,     2,    82,    79,  -154,
      -3,    84,  -154,  -154,     2,  -154,   230,    95,    90,    91,
     101,    73,    91,    87,    82,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,     2,     6,  -154,  -154,  -154,    15,   124,
    -154,  -154,   123,  -154,     2,  -154,   200,  -154,  -154,  -154,
      82,   125,   121,   127,   128,   131,     2,   138,   141,   228,
     133,   135,   142,   186,    86,   144,     0,   186,  -154,   186,
       2,     2,   186,   186,   145,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,     2,
       2,  -154,  -154,  -154,    80,   -11,   186,     1,   139,   153,
    -154,  -154,   134,   156,  -154,  -154,   186,   167,   165,  -154,
      15,  -154,   -11,  -154,   169,  -154,  -154,  -154,   164,  -154,
     132,   176,  -154,  -154,   178,   173,   180,   -11,  -154,   146,
    -154,  -154,   186,    27,  -154,  -154,  -154,    91,  -154,    62,
    -154,  -154,  -154,   177,  -154,     2,  -154,   183,   186,   173,
    -154,  -154,    62,  -154,   186,  -154,  -154
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -154,   226,  -154,  -154,    55,  -154,  -154,    48,   103,   232,
     -42,  -154,   -60,  -154,  -109,  -154,  -154,  -154,    33,  -154,
     209,  -154,  -154,   -59,  -154,  -132,    40,  -154,  -154,  -153,
    -154,  -154,   -28,  -154,   126,  -154,   -54,  -154
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -88
static const yytype_int16 yytable[] =
{
      63,    40,    90,    51,   143,    92,    13,    45,   150,   176,
     151,   160,    46,   154,   155,   167,    50,    50,     2,     3,
       4,     5,     6,     6,   186,    95,    35,    36,    37,    93,
     161,    34,    35,    36,    37,   159,   178,   166,   162,    60,
     100,   118,   147,    52,    53,    18,    97,   172,    10,     5,
       6,    61,   124,    54,   148,   148,    10,    46,    38,    57,
      50,   180,    94,    -8,    38,    20,   152,   153,   191,   192,
     188,    21,     1,   190,     2,     3,     4,     5,     6,   195,
     196,   101,    32,    33,    22,   157,   158,    24,    23,   202,
      25,    35,    36,    37,   102,   206,   103,   -42,   -42,   104,
     105,   106,   -87,   107,   108,    14,    15,    16,    31,    42,
     179,   129,   130,   131,   132,   133,   134,   135,   136,    30,
      43,   -87,   109,    38,    41,   110,    44,   194,    89,   -87,
     -42,    59,   175,   101,   144,    57,    62,    84,    85,    91,
      86,   200,   138,    35,    36,    37,   102,   101,   103,   -42,
     -42,   104,   105,   106,    88,   107,   108,    35,    36,    37,
     102,   187,   103,   -42,   -42,   104,   105,   106,    98,   107,
     108,    99,   120,   119,   109,    38,   122,   110,   121,   123,
     125,    86,   -42,   126,   140,   141,   170,   101,   109,    38,
     142,   110,   146,   156,   168,   169,   -42,    35,    36,    37,
     102,   101,   103,   -42,   -42,   104,   105,   106,   171,   107,
     108,    35,    36,    37,   102,   173,   103,   174,   148,   104,
     105,   106,   177,   107,   108,   181,   182,   183,   109,    38,
     185,   110,   199,   201,    19,   205,   -42,    17,    39,   203,
     145,     0,   109,    38,     0,   110,     0,     0,     0,     0,
     -42,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,     0,     0,    65,    66,    67,    68,    69,    70,    71,
      72,     0,     0,     0,     0,     0,   137,    73,     0,     0,
       0,     0,     0,     0,   138,     0,     0,    74,    75,    76,
      77,    78,    79,    80,    81,    82
};

static const yytype_int16 yycheck[] =
{
      54,    29,    62,    45,   113,    64,    42,    51,   117,   162,
     119,    22,    56,   122,   123,   147,    44,    45,     5,     6,
       7,     8,     9,     9,   177,    84,    11,    12,    13,    83,
      41,    10,    11,    12,    13,   144,   168,   146,    49,    42,
      94,   100,    42,    41,    42,     0,    88,   156,     0,     8,
       9,    54,   106,    51,    54,    54,     8,    56,    43,    53,
      88,   170,    56,    50,    43,     4,   120,   121,    41,    42,
     179,    46,     3,   182,     5,     6,     7,     8,     9,    17,
      18,     1,    27,    28,    42,   139,   140,    49,    42,   198,
      46,    11,    12,    13,    14,   204,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     2,     3,     4,    50,    42,
     170,    25,    26,    27,    28,    29,    30,    31,    32,    47,
      42,    41,    42,    43,    48,    45,    51,   187,    55,    49,
      50,    52,   160,     1,    48,    53,    52,    42,    48,    52,
      49,   195,    56,    11,    12,    13,    14,     1,    16,    17,
      18,    19,    20,    21,    53,    23,    24,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    44,    23,
      24,    48,    51,    48,    42,    43,    48,    45,    51,    48,
      42,    49,    50,    42,    51,    50,    52,     1,    42,    43,
      48,    45,    48,    48,    55,    42,    50,    11,    12,    13,
      14,     1,    16,    17,    18,    19,    20,    21,    52,    23,
      24,    11,    12,    13,    14,    48,    16,    52,    54,    19,
      20,    21,    53,    23,    24,    49,    48,    54,    42,    43,
      50,    45,    55,    50,     8,   202,    50,     5,    29,   199,
     114,    -1,    42,    43,    -1,    45,    -1,    -1,    -1,    -1,
      50,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    33,    34,    35,    36,    37,    38,    39,
      40,    -1,    -1,    -1,    -1,    -1,    48,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    -1,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     6,     7,     8,     9,    67,    68,    69,
      73,    74,    75,    42,    74,    74,    74,    75,     0,    67,
       4,    46,    42,    42,    49,    46,    70,    71,    72,    73,
      47,    50,    70,    70,    10,    11,    12,    13,    43,    86,
      98,    48,    42,    42,    51,    51,    56,    88,    76,    77,
      98,    76,    41,    42,    51,   102,   103,    53,    89,    52,
      42,    54,    52,   102,    87,    33,    34,    35,    36,    37,
      38,    39,    40,    47,    57,    58,    59,    60,    61,    62,
      63,    64,    65,   101,    42,    48,    49,    78,    53,    55,
      78,    52,    89,   102,    56,    89,    79,    76,    44,    48,
     102,     1,    14,    16,    19,    20,    21,    23,    24,    42,
      45,    80,    83,    86,    90,    94,    98,    99,    89,    48,
      51,    51,    48,    48,   102,    42,    42,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    48,    56,   100,
      51,    50,    48,    80,    48,   100,    48,    42,    54,    91,
      80,    80,   102,   102,    80,    80,    48,   102,   102,    80,
      22,    41,    49,    95,    96,    97,    80,    91,    55,    42,
      52,    52,    80,    48,    52,    98,    95,    53,    91,    78,
      80,    49,    48,    54,    92,    50,    95,    15,    80,    81,
      80,    41,    42,    93,    78,    17,    18,    84,    85,    55,
     102,    50,    80,    92,    82,    84,    80
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
        case 24:
#line 52 "symb.y"
    {scope+=1;}
    break;

  case 25:
#line 52 "symb.y"
    {scope-=1;}
    break;

  case 33:
#line 53 "symb.y"
    {scope+=1;}
    break;

  case 34:
#line 53 "symb.y"
    {scope-=1;}
    break;

  case 51:
#line 58 "symb.y"
    {insert((yyvsp[(2) - (4)]), atoi((yyvsp[(4) - (4)])), (yyvsp[(1) - (4)]),yylineno);	}
    break;

  case 53:
#line 58 "symb.y"
    {insert((yyvsp[(2) - (2)]), 0, (yyvsp[(1) - (2)]),yylineno);}
    break;

  case 55:
#line 59 "symb.y"
    {insert((yyvsp[(2) - (5)]), atoi((yyvsp[(4) - (5)])), type,yylineno);}
    break;

  case 56:
#line 59 "symb.y"
    {insert((yyvsp[(2) - (3)]), 0, type,yylineno);}
    break;

  case 77:
#line 69 "symb.y"
    {
		//printf("declaration: $$=%s $1=%s $2=%s $3=%s\n",$$, $1, $2, $3);
		if(exists((yyvsp[(1) - (4)]))){
			update((yyvsp[(1) - (4)]),atoi((yyvsp[(3) - (4)])),yylineno);
		}
		else
		{
			printf("Variable %s not declared at line %d\n",(yyvsp[(1) - (4)]),yylineno);
		}
	}
    break;

  case 107:
#line 81 "symb.y"
    {(yyval)=calculate((yyvsp[(2) - (3)]), atoi((yyvsp[(1) - (3)])),atoi((yyvsp[(3) - (3)])));}
    break;

  case 110:
#line 82 "symb.y"
    {if(exists((yyvsp[(1) - (1)]))){
	NODE* temp = s->head;
	while(temp != NULL)
	{
		if(strcmp(temp->name,(yyvsp[(1) - (1)])) == 0 && temp->scope <= scope)
			sprintf((yyval),"%d\n",temp->value);
		temp = temp->next;
	}
	}
	else
	{
		printf("Variable %s not declared at line %d\n",(yyvsp[(1) - (1)]),yylineno);
	}}
    break;


/* Line 1267 of yacc.c.  */
#line 1717 "y.tab.c"
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


#line 97 "symb.y"

void yyerror(char *s)
{
	printf("Panic mode recovery at line : %d  \n",yylineno);
	yynerrs+=1;
}
int main(int argc, char* argv[])
{
	s = (TABLE *)malloc(sizeof(TABLE));
	s->head=NULL;
	s->entries=0;
	fp = fopen("symbol_table.txt","w");
	yyin = fopen(argv[1], "r");
	if(!yyparse())
	{
		printf("Succesful parsing\n");
		print();
		return 0;
	}
	else
	{
		printf("Unsuccessful\n");
	}
	return 0;
}
void insert(char* name, int value, char* type,int lineno)
{
	if(exists(name))
	{
		printf("Variable %s already declared\n",name);
		err++;
		return;
	}
    	NODE* test = (NODE*) malloc(sizeof(NODE));
    	strcpy(test->name,name);
	test->value=value;
	test->next=NULL ;
	test->lineno=lineno;
	test->scope=scope;
	if(strcmp(type,"int")==0)
	{
		test->size=4;
	}
	if(strcmp(type,"char")==0)
	{
		test->size=2;
	}
	if(strcmp(type,"float")==0)
	{
		test->size=4;
	}
	if(strcmp(type,"long")==0)
	{
		test->size=8;
	}
	if(strcmp(type,"double")==0)
	{
		test->size=8;
	}
	strcpy(test->type, type);

	NODE* h = s->head;

	if(h==NULL)
	{

		s->head=test;
		s->entries+=1;
		print();
		return;
	}
	while(h->next!=NULL)
	{
		h=h->next;
	}
	h->next=test;
	s->entries+=1;
	//print();
}

int exists(char* name)
{
	NODE* temp = s->head;
	if(s->head == NULL)
		return 0;
	while(temp != NULL)
	{
		if(strcmp(temp->name,name) == 0 && temp->scope <= scope)
			return 1;
		temp = temp->next;
	}
	return 0;
}

void update(char* name, int val,int lineno)
{
	NODE* temp = s->head;
	while(temp!=NULL)
	{
	//printf("%s\n",temp->name);
		if(strcmp(temp->name,name) == 0){
		//printf("%d\n",temp->value);
			temp->value = val;
			temp->lineno=lineno;
		}
		temp = temp->next;
	}
	//print();
}

void print()
{
	NODE* h = s->head;
	fp = fopen("symbol_table.txt","w");
	fprintf(fp,"\nSymbol table \nName  Value  Type 	 	Scope	lineno	   size\n");
	for(int i=0;i<s->entries; i++ )
	{
		fprintf(fp,"%s     %d      %s        %d		%d			%d\n", h->name, h->value, h->type, h->scope,h->lineno,h->size);
		h=h->next;
	}
}
char* calculate(char* opr,int op1,int op2)
{
	char* result;
	result = (char*)malloc(sizeof(char)*30);
	int oper1 = op1;
	int oper2 = op2;
	int res;
	if(strcmp(opr,"+")==0)
	{
		res = oper1 + oper2;
		//printf("%d %d %d\n",oper1,oper2,res);
	}
	else if(strcmp(opr,"-")==0)
	{
		res = oper1 - oper2;
		//printf("%d %d %d\n",oper1,oper2,res);
	}	
	else if(strcmp(opr,"*")==0)
	{
		res = oper1 * oper2;
		//printf("%d %d %d\n",oper1,oper2,res);
	}	
	else if(strcmp(opr,"/")==0)
	{
		if(oper2==0)
		{
			printf("division by zero\n");
			exit(0);
		}
		else
		{

			res = oper1 / oper2;
			printf("%d %d %d\n",oper1,oper2,res);
		}
	}
	else if(strcmp(opr,">")==0)
	{
		res = oper1 > oper2;
		//printf("%d %d %d\n",oper1,oper2,res);
	}
	else if(strcmp(opr,"<")==0)
	{
		res = oper1 < oper2;
		//printf("%d %d %d\n",oper1,oper2,res);
	}
	else if(strcmp(opr,">=")==0)
	{
		res = oper1 >= oper2;
		//printf("%d %d %d\n",oper1,oper2,res);
	}
	else if(strcmp(opr,"<=")==0)
	{
		res = oper1 <= oper2;
		//printf("%d %d %d\n",oper1,oper2,res);
	}
	else if(strcmp(opr,"%")==0)
	{
		res = oper1 % oper2;
		//printf("%d %d %d\n",oper1,oper2,res);
	}
	else if(strcmp(opr,"==")==0)
	{
		res = oper1 == oper2;
		//printf("%d %d %d\n",oper1,oper2,res);
	}
	else if(strcmp(opr,"!=")==0)
	{
		res = oper1 != oper2;
		//printf("%d %d %d\n",oper1,oper2,res);
	}
	else if(strcmp(opr,"&&")==0)
	{
		res = oper1 && oper2;
		//printf("%d %d %d\n",oper1,oper2,res);
	}
	else if(strcmp(opr,"||")==0)
	{
		res = oper1 || oper2;
		//printf("%d %d %d\n",oper1,oper2,res);
	}
	sprintf(result, "%d", res);
	return result;
}

