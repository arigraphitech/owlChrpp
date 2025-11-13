/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* "%code top" blocks.  */
#line 42 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"

    #include "cowl_func_yyparser.h"
    #include "cowl_func_yylexer.h"
    #include "cowl.h"
    #include "cowl_ontology_private.h"
    #include "cowl_ostream_private.h"
    #include "cowl_vector_private.h"
    #include "ulib.h"
    #include <stddef.h>
    #include <string.h>

    #define COWL_HANDLE_ERROR(CODE) cowl_handle_error_code((CODE), stream)
    #define COWL_HANDLE_MEM_ERROR() cowl_handle_error_code(COWL_ERR_MEM, stream)
    #define COWL_HANDLE_SYNTAX_ERROR(DESC) \
        cowl_handle_syntax_error((DESC), stream, (CowlErrorLoc) { .line = yylloc.last_line })

    static void cowl_func_yyerror(COWL_FUNC_YYLTYPE *yylloc,
                                  cowl_unused yyscan_t scanner,
                                  CowlIStream *stream, const char *s) {
        if (strcmp(s, "memory exhausted") == 0) {
            COWL_HANDLE_MEM_ERROR();
        } else {
            cowl_handle_syntax_error(ustring_wrap_buf(s), stream,
                                     (CowlErrorLoc) { .line = yylloc->last_line });
        }
    }

    #ifdef YYNOMEM
        #define COWL_ERROR_MEM YYNOMEM
    #else
        #define COWL_ERROR_MEM do {                                                                \
            COWL_HANDLE_MEM_ERROR();                                                               \
            YYABORT;                                                                               \
        } while (0)
    #endif

    #define COWL_ERROR(CODE) do {                                                                  \
        if ((CODE) == COWL_ERR_MEM) {                                                              \
            COWL_ERROR_MEM;                                                                        \
        } else {                                                                                   \
            COWL_HANDLE_ERROR(CODE);                                                               \
            YYERROR;                                                                               \
        }                                                                                          \
    } while (0)

    #define COWL_VEC_PUSH(T, VEC, OBJ) do {                                                        \
        if (cowl_vector_push(VEC, OBJ)) COWL_ERROR_MEM;                                            \
    } while (0)

    #define COWL_VEC_FINALIZE(VEC) do {                                                            \
        if (VEC) {                                                                                 \
            cowl_release(VEC);                                                                     \
            if (cowl_vector_shrink(VEC)) COWL_ERROR_MEM;                                           \
        }                                                                                          \
    } while (0)

#line 125 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
/* Substitute the type names.  */
#define YYSTYPE         COWL_FUNC_YYSTYPE
#define YYLTYPE         COWL_FUNC_YYLTYPE
/* Substitute the variable and function names.  */
#define yyparse         cowl_func_yyparse
#define yylex           cowl_func_yylex
#define yyerror         cowl_func_yyerror
#define yydebug         cowl_func_yydebug
#define yynerrs         cowl_func_yynerrs


# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "cowl_func_yyparser.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NON_NEGATIVE_INTEGER = 3,       /* NON_NEGATIVE_INTEGER  */
  YYSYMBOL_QUOTED_STRING = 4,              /* QUOTED_STRING  */
  YYSYMBOL_BLANK_NODE_LABEL = 5,           /* BLANK_NODE_LABEL  */
  YYSYMBOL_PNAME_NS = 6,                   /* PNAME_NS  */
  YYSYMBOL_PNAME_LN = 7,                   /* PNAME_LN  */
  YYSYMBOL_LANG_TAG = 8,                   /* LANG_TAG  */
  YYSYMBOL_IRI_REF = 9,                    /* IRI_REF  */
  YYSYMBOL_L_PAREN = 10,                   /* L_PAREN  */
  YYSYMBOL_R_PAREN = 11,                   /* R_PAREN  */
  YYSYMBOL_EQUALS = 12,                    /* EQUALS  */
  YYSYMBOL_DOUBLE_CARET = 13,              /* DOUBLE_CARET  */
  YYSYMBOL_IMPORT = 14,                    /* IMPORT  */
  YYSYMBOL_ONTOLOGY = 15,                  /* ONTOLOGY  */
  YYSYMBOL_PREFIX = 16,                    /* PREFIX  */
  YYSYMBOL_DECLARATION = 17,               /* DECLARATION  */
  YYSYMBOL_ANNOTATION = 18,                /* ANNOTATION  */
  YYSYMBOL_DATATYPE_DEFINITION = 19,       /* DATATYPE_DEFINITION  */
  YYSYMBOL_HAS_KEY = 20,                   /* HAS_KEY  */
  YYSYMBOL_CLASS = 21,                     /* CLASS  */
  YYSYMBOL_DATATYPE = 22,                  /* DATATYPE  */
  YYSYMBOL_OBJECT_PROPERTY = 23,           /* OBJECT_PROPERTY  */
  YYSYMBOL_DATA_PROPERTY = 24,             /* DATA_PROPERTY  */
  YYSYMBOL_ANNOTATION_PROPERTY = 25,       /* ANNOTATION_PROPERTY  */
  YYSYMBOL_NAMED_INDIVIDUAL = 26,          /* NAMED_INDIVIDUAL  */
  YYSYMBOL_DATA_INTERSECTION_OF = 27,      /* DATA_INTERSECTION_OF  */
  YYSYMBOL_DATA_UNION_OF = 28,             /* DATA_UNION_OF  */
  YYSYMBOL_DATA_COMPLEMENT_OF = 29,        /* DATA_COMPLEMENT_OF  */
  YYSYMBOL_DATA_ONE_OF = 30,               /* DATA_ONE_OF  */
  YYSYMBOL_DATATYPE_RESTRICTION = 31,      /* DATATYPE_RESTRICTION  */
  YYSYMBOL_DATA_SOME_VALUES_FROM = 32,     /* DATA_SOME_VALUES_FROM  */
  YYSYMBOL_DATA_ALL_VALUES_FROM = 33,      /* DATA_ALL_VALUES_FROM  */
  YYSYMBOL_DATA_HAS_VALUE = 34,            /* DATA_HAS_VALUE  */
  YYSYMBOL_DATA_MIN_CARDINALITY = 35,      /* DATA_MIN_CARDINALITY  */
  YYSYMBOL_DATA_MAX_CARDINALITY = 36,      /* DATA_MAX_CARDINALITY  */
  YYSYMBOL_DATA_EXACT_CARDINALITY = 37,    /* DATA_EXACT_CARDINALITY  */
  YYSYMBOL_OBJECT_INVERSE_OF = 38,         /* OBJECT_INVERSE_OF  */
  YYSYMBOL_OBJECT_INTERSECTION_OF = 39,    /* OBJECT_INTERSECTION_OF  */
  YYSYMBOL_OBJECT_UNION_OF = 40,           /* OBJECT_UNION_OF  */
  YYSYMBOL_OBJECT_COMPLEMENT_OF = 41,      /* OBJECT_COMPLEMENT_OF  */
  YYSYMBOL_OBJECT_ONE_OF = 42,             /* OBJECT_ONE_OF  */
  YYSYMBOL_OBJECT_SOME_VALUES_FROM = 43,   /* OBJECT_SOME_VALUES_FROM  */
  YYSYMBOL_OBJECT_ALL_VALUES_FROM = 44,    /* OBJECT_ALL_VALUES_FROM  */
  YYSYMBOL_OBJECT_HAS_VALUE = 45,          /* OBJECT_HAS_VALUE  */
  YYSYMBOL_OBJECT_HAS_SELF = 46,           /* OBJECT_HAS_SELF  */
  YYSYMBOL_OBJECT_MIN_CARDINALITY = 47,    /* OBJECT_MIN_CARDINALITY  */
  YYSYMBOL_OBJECT_MAX_CARDINALITY = 48,    /* OBJECT_MAX_CARDINALITY  */
  YYSYMBOL_OBJECT_EXACT_CARDINALITY = 49,  /* OBJECT_EXACT_CARDINALITY  */
  YYSYMBOL_SUB_CLASS_OF = 50,              /* SUB_CLASS_OF  */
  YYSYMBOL_EQUIVALENT_CLASSES = 51,        /* EQUIVALENT_CLASSES  */
  YYSYMBOL_DISJOINT_CLASSES = 52,          /* DISJOINT_CLASSES  */
  YYSYMBOL_DISJOINT_UNION = 53,            /* DISJOINT_UNION  */
  YYSYMBOL_SUB_OBJECT_PROPERTY_OF = 54,    /* SUB_OBJECT_PROPERTY_OF  */
  YYSYMBOL_EQUIVALENT_OBJECT_PROPERTIES = 55, /* EQUIVALENT_OBJECT_PROPERTIES  */
  YYSYMBOL_DISJOINT_OBJECT_PROPERTIES = 56, /* DISJOINT_OBJECT_PROPERTIES  */
  YYSYMBOL_OBJECT_PROPERTY_CHAIN = 57,     /* OBJECT_PROPERTY_CHAIN  */
  YYSYMBOL_INVERSE_OBJECT_PROPERTIES = 58, /* INVERSE_OBJECT_PROPERTIES  */
  YYSYMBOL_OBJECT_PROPERTY_DOMAIN = 59,    /* OBJECT_PROPERTY_DOMAIN  */
  YYSYMBOL_OBJECT_PROPERTY_RANGE = 60,     /* OBJECT_PROPERTY_RANGE  */
  YYSYMBOL_FUNCTIONAL_OBJECT_PROPERTY = 61, /* FUNCTIONAL_OBJECT_PROPERTY  */
  YYSYMBOL_INVERSE_FUNCTIONAL_OBJECT_PROPERTY = 62, /* INVERSE_FUNCTIONAL_OBJECT_PROPERTY  */
  YYSYMBOL_REFLEXIVE_OBJECT_PROPERTY = 63, /* REFLEXIVE_OBJECT_PROPERTY  */
  YYSYMBOL_IRREFLEXIVE_OBJECT_PROPERTY = 64, /* IRREFLEXIVE_OBJECT_PROPERTY  */
  YYSYMBOL_SYMMETRIC_OBJECT_PROPERTY = 65, /* SYMMETRIC_OBJECT_PROPERTY  */
  YYSYMBOL_ASYMMETRIC_OBJECT_PROPERTY = 66, /* ASYMMETRIC_OBJECT_PROPERTY  */
  YYSYMBOL_TRANSITIVE_OBJECT_PROPERTY = 67, /* TRANSITIVE_OBJECT_PROPERTY  */
  YYSYMBOL_SUB_DATA_PROPERTY_OF = 68,      /* SUB_DATA_PROPERTY_OF  */
  YYSYMBOL_EQUIVALENT_DATA_PROPERTIES = 69, /* EQUIVALENT_DATA_PROPERTIES  */
  YYSYMBOL_DISJOINT_DATA_PROPERTIES = 70,  /* DISJOINT_DATA_PROPERTIES  */
  YYSYMBOL_DATA_PROPERTY_DOMAIN = 71,      /* DATA_PROPERTY_DOMAIN  */
  YYSYMBOL_DATA_PROPERTY_RANGE = 72,       /* DATA_PROPERTY_RANGE  */
  YYSYMBOL_FUNCTIONAL_DATA_PROPERTY = 73,  /* FUNCTIONAL_DATA_PROPERTY  */
  YYSYMBOL_SAME_INDIVIDUAL = 74,           /* SAME_INDIVIDUAL  */
  YYSYMBOL_DIFFERENT_INDIVIDUALS = 75,     /* DIFFERENT_INDIVIDUALS  */
  YYSYMBOL_CLASS_ASSERTION = 76,           /* CLASS_ASSERTION  */
  YYSYMBOL_OBJECT_PROPERTY_ASSERTION = 77, /* OBJECT_PROPERTY_ASSERTION  */
  YYSYMBOL_NEGATIVE_OBJECT_PROPERTY_ASSERTION = 78, /* NEGATIVE_OBJECT_PROPERTY_ASSERTION  */
  YYSYMBOL_DATA_PROPERTY_ASSERTION = 79,   /* DATA_PROPERTY_ASSERTION  */
  YYSYMBOL_NEGATIVE_DATA_PROPERTY_ASSERTION = 80, /* NEGATIVE_DATA_PROPERTY_ASSERTION  */
  YYSYMBOL_ANNOTATION_ASSERTION = 81,      /* ANNOTATION_ASSERTION  */
  YYSYMBOL_SUB_ANNOTATION_PROPERTY_OF = 82, /* SUB_ANNOTATION_PROPERTY_OF  */
  YYSYMBOL_ANNOTATION_PROPERTY_DOMAIN = 83, /* ANNOTATION_PROPERTY_DOMAIN  */
  YYSYMBOL_ANNOTATION_PROPERTY_RANGE = 84, /* ANNOTATION_PROPERTY_RANGE  */
  YYSYMBOL_YYACCEPT = 85,                  /* $accept  */
  YYSYMBOL_full_iri = 86,                  /* full_iri  */
  YYSYMBOL_abbreviated_iri = 87,           /* abbreviated_iri  */
  YYSYMBOL_iri = 88,                       /* iri  */
  YYSYMBOL_ontology_document = 89,         /* ontology_document  */
  YYSYMBOL_prefix_declarations = 90,       /* prefix_declarations  */
  YYSYMBOL_prefix = 91,                    /* prefix  */
  YYSYMBOL_namespace = 92,                 /* namespace  */
  YYSYMBOL_prefix_declaration = 93,        /* prefix_declaration  */
  YYSYMBOL_ontology = 94,                  /* ontology  */
  YYSYMBOL_ontology_id = 95,               /* ontology_id  */
  YYSYMBOL_ontology_imports = 96,          /* ontology_imports  */
  YYSYMBOL_import = 97,                    /* import  */
  YYSYMBOL_ontology_annotations = 98,      /* ontology_annotations  */
  YYSYMBOL_axioms = 99,                    /* axioms  */
  YYSYMBOL_class = 100,                    /* class  */
  YYSYMBOL_datatype = 101,                 /* datatype  */
  YYSYMBOL_object_property = 102,          /* object_property  */
  YYSYMBOL_data_property = 103,            /* data_property  */
  YYSYMBOL_annotation_property = 104,      /* annotation_property  */
  YYSYMBOL_individual = 105,               /* individual  */
  YYSYMBOL_named_individual = 106,         /* named_individual  */
  YYSYMBOL_anonymous_individual = 107,     /* anonymous_individual  */
  YYSYMBOL_quoted_string = 108,            /* quoted_string  */
  YYSYMBOL_lang_tag = 109,                 /* lang_tag  */
  YYSYMBOL_literal = 110,                  /* literal  */
  YYSYMBOL_declaration = 111,              /* declaration  */
  YYSYMBOL_entity = 112,                   /* entity  */
  YYSYMBOL_object_property_expression = 113, /* object_property_expression  */
  YYSYMBOL_inverse_object_property = 114,  /* inverse_object_property  */
  YYSYMBOL_data_property_expression = 115, /* data_property_expression  */
  YYSYMBOL_data_range = 116,               /* data_range  */
  YYSYMBOL_data_intersection_of = 117,     /* data_intersection_of  */
  YYSYMBOL_data_union_of = 118,            /* data_union_of  */
  YYSYMBOL_data_complement_of = 119,       /* data_complement_of  */
  YYSYMBOL_data_one_of = 120,              /* data_one_of  */
  YYSYMBOL_datatype_restriction = 121,     /* datatype_restriction  */
  YYSYMBOL_facet_restriction = 122,        /* facet_restriction  */
  YYSYMBOL_class_expression = 123,         /* class_expression  */
  YYSYMBOL_object_intersection_of = 124,   /* object_intersection_of  */
  YYSYMBOL_object_union_of = 125,          /* object_union_of  */
  YYSYMBOL_object_complement_of = 126,     /* object_complement_of  */
  YYSYMBOL_object_one_of = 127,            /* object_one_of  */
  YYSYMBOL_object_some_values_from = 128,  /* object_some_values_from  */
  YYSYMBOL_object_all_values_from = 129,   /* object_all_values_from  */
  YYSYMBOL_object_has_value = 130,         /* object_has_value  */
  YYSYMBOL_object_has_self = 131,          /* object_has_self  */
  YYSYMBOL_object_min_cardinality = 132,   /* object_min_cardinality  */
  YYSYMBOL_object_max_cardinality = 133,   /* object_max_cardinality  */
  YYSYMBOL_object_exact_cardinality = 134, /* object_exact_cardinality  */
  YYSYMBOL_cardinality = 135,              /* cardinality  */
  YYSYMBOL_data_some_values_from = 136,    /* data_some_values_from  */
  YYSYMBOL_data_all_values_from = 137,     /* data_all_values_from  */
  YYSYMBOL_data_has_value = 138,           /* data_has_value  */
  YYSYMBOL_data_min_cardinality = 139,     /* data_min_cardinality  */
  YYSYMBOL_data_max_cardinality = 140,     /* data_max_cardinality  */
  YYSYMBOL_data_exact_cardinality = 141,   /* data_exact_cardinality  */
  YYSYMBOL_axiom = 142,                    /* axiom  */
  YYSYMBOL_class_axiom = 143,              /* class_axiom  */
  YYSYMBOL_sub_class_of = 144,             /* sub_class_of  */
  YYSYMBOL_equivalent_classes = 145,       /* equivalent_classes  */
  YYSYMBOL_disjoint_classes = 146,         /* disjoint_classes  */
  YYSYMBOL_disjoint_union = 147,           /* disjoint_union  */
  YYSYMBOL_object_property_axiom = 148,    /* object_property_axiom  */
  YYSYMBOL_sub_object_property_of = 149,   /* sub_object_property_of  */
  YYSYMBOL_property_expression_chain = 150, /* property_expression_chain  */
  YYSYMBOL_equivalent_object_properties = 151, /* equivalent_object_properties  */
  YYSYMBOL_disjoint_object_properties = 152, /* disjoint_object_properties  */
  YYSYMBOL_inverse_object_properties = 153, /* inverse_object_properties  */
  YYSYMBOL_object_property_domain = 154,   /* object_property_domain  */
  YYSYMBOL_object_property_range = 155,    /* object_property_range  */
  YYSYMBOL_functional_object_property = 156, /* functional_object_property  */
  YYSYMBOL_inverse_functional_object_property = 157, /* inverse_functional_object_property  */
  YYSYMBOL_reflexive_object_property = 158, /* reflexive_object_property  */
  YYSYMBOL_irreflexive_object_property = 159, /* irreflexive_object_property  */
  YYSYMBOL_symmetric_object_property = 160, /* symmetric_object_property  */
  YYSYMBOL_asymmetric_object_property = 161, /* asymmetric_object_property  */
  YYSYMBOL_transitive_object_property = 162, /* transitive_object_property  */
  YYSYMBOL_data_property_axiom = 163,      /* data_property_axiom  */
  YYSYMBOL_sub_data_property_of = 164,     /* sub_data_property_of  */
  YYSYMBOL_equivalent_data_properties = 165, /* equivalent_data_properties  */
  YYSYMBOL_disjoint_data_properties = 166, /* disjoint_data_properties  */
  YYSYMBOL_data_property_domain = 167,     /* data_property_domain  */
  YYSYMBOL_data_property_range = 168,      /* data_property_range  */
  YYSYMBOL_functional_data_property = 169, /* functional_data_property  */
  YYSYMBOL_datatype_definition = 170,      /* datatype_definition  */
  YYSYMBOL_has_key = 171,                  /* has_key  */
  YYSYMBOL_assertion = 172,                /* assertion  */
  YYSYMBOL_same_individual = 173,          /* same_individual  */
  YYSYMBOL_different_individuals = 174,    /* different_individuals  */
  YYSYMBOL_class_assertion = 175,          /* class_assertion  */
  YYSYMBOL_object_property_assertion = 176, /* object_property_assertion  */
  YYSYMBOL_negative_object_property_assertion = 177, /* negative_object_property_assertion  */
  YYSYMBOL_data_property_assertion = 178,  /* data_property_assertion  */
  YYSYMBOL_negative_data_property_assertion = 179, /* negative_data_property_assertion  */
  YYSYMBOL_annotation = 180,               /* annotation  */
  YYSYMBOL_annotation_value = 181,         /* annotation_value  */
  YYSYMBOL_annotation_axiom = 182,         /* annotation_axiom  */
  YYSYMBOL_annotation_assertion = 183,     /* annotation_assertion  */
  YYSYMBOL_annotation_subject = 184,       /* annotation_subject  */
  YYSYMBOL_sub_annotation_property_of = 185, /* sub_annotation_property_of  */
  YYSYMBOL_annotation_property_domain = 186, /* annotation_property_domain  */
  YYSYMBOL_annotation_property_range = 187, /* annotation_property_range  */
  YYSYMBOL_annotation_star = 188,          /* annotation_star  */
  YYSYMBOL_class_expression_list = 189,    /* class_expression_list  */
  YYSYMBOL_class_expression_2_list = 190,  /* class_expression_2_list  */
  YYSYMBOL_data_property_expression_list = 191, /* data_property_expression_list  */
  YYSYMBOL_data_property_expression_2_list = 192, /* data_property_expression_2_list  */
  YYSYMBOL_data_property_expression_star = 193, /* data_property_expression_star  */
  YYSYMBOL_data_range_list = 194,          /* data_range_list  */
  YYSYMBOL_data_range_2_list = 195,        /* data_range_2_list  */
  YYSYMBOL_facet_restriction_list = 196,   /* facet_restriction_list  */
  YYSYMBOL_individual_list = 197,          /* individual_list  */
  YYSYMBOL_individual_2_list = 198,        /* individual_2_list  */
  YYSYMBOL_literal_list = 199,             /* literal_list  */
  YYSYMBOL_object_property_expression_list = 200, /* object_property_expression_list  */
  YYSYMBOL_object_property_expression_2_list = 201, /* object_property_expression_2_list  */
  YYSYMBOL_object_property_expression_star = 202 /* object_property_expression_star  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined COWL_FUNC_YYLTYPE_IS_TRIVIAL && COWL_FUNC_YYLTYPE_IS_TRIVIAL \
             && defined COWL_FUNC_YYSTYPE_IS_TRIVIAL && COWL_FUNC_YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   663

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  85
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  118
/* YYNRULES -- Number of rules.  */
#define YYNRULES  212
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  518

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   339


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84
};

#if COWL_FUNC_YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   238,   238,   245,   258,   259,   265,   272,   273,   277,
     284,   291,   301,   305,   306,   310,   319,   320,   324,   332,
     333,   340,   341,   351,   361,   371,   381,   391,   401,   402,
     406,   414,   423,   430,   437,   443,   449,   459,   468,   471,
     474,   477,   480,   483,   491,   492,   496,   506,   512,   513,
     514,   515,   516,   517,   521,   529,   537,   545,   553,   562,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,   585,   586,   587,   588,   589,   590,   594,   602,
     610,   618,   626,   635,   644,   653,   661,   666,   675,   680,
     689,   694,   703,   707,   716,   725,   734,   739,   748,   753,
     762,   767,   778,   779,   780,   781,   782,   783,   784,   785,
     791,   792,   793,   794,   798,   808,   817,   826,   838,   839,
     840,   841,   842,   843,   844,   845,   846,   847,   848,   849,
     850,   854,   861,   871,   877,   886,   895,   905,   915,   925,
     934,   943,   952,   961,   970,   979,   990,   991,   992,   993,
     994,   995,   999,  1009,  1018,  1027,  1037,  1047,  1058,  1070,
    1086,  1087,  1088,  1089,  1090,  1091,  1092,  1096,  1105,  1114,
    1124,  1135,  1146,  1157,  1170,  1180,  1183,  1186,  1194,  1195,
    1196,  1197,  1201,  1212,  1215,  1221,  1231,  1241,  1253,  1256,
    1268,  1273,  1280,  1287,  1292,  1299,  1306,  1309,  1321,  1326,
    1333,  1340,  1345,  1352,  1357,  1364,  1371,  1376,  1383,  1388,
    1395,  1402,  1405
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if COWL_FUNC_YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "NON_NEGATIVE_INTEGER",
  "QUOTED_STRING", "BLANK_NODE_LABEL", "PNAME_NS", "PNAME_LN", "LANG_TAG",
  "IRI_REF", "L_PAREN", "R_PAREN", "EQUALS", "DOUBLE_CARET", "IMPORT",
  "ONTOLOGY", "PREFIX", "DECLARATION", "ANNOTATION", "DATATYPE_DEFINITION",
  "HAS_KEY", "CLASS", "DATATYPE", "OBJECT_PROPERTY", "DATA_PROPERTY",
  "ANNOTATION_PROPERTY", "NAMED_INDIVIDUAL", "DATA_INTERSECTION_OF",
  "DATA_UNION_OF", "DATA_COMPLEMENT_OF", "DATA_ONE_OF",
  "DATATYPE_RESTRICTION", "DATA_SOME_VALUES_FROM", "DATA_ALL_VALUES_FROM",
  "DATA_HAS_VALUE", "DATA_MIN_CARDINALITY", "DATA_MAX_CARDINALITY",
  "DATA_EXACT_CARDINALITY", "OBJECT_INVERSE_OF", "OBJECT_INTERSECTION_OF",
  "OBJECT_UNION_OF", "OBJECT_COMPLEMENT_OF", "OBJECT_ONE_OF",
  "OBJECT_SOME_VALUES_FROM", "OBJECT_ALL_VALUES_FROM", "OBJECT_HAS_VALUE",
  "OBJECT_HAS_SELF", "OBJECT_MIN_CARDINALITY", "OBJECT_MAX_CARDINALITY",
  "OBJECT_EXACT_CARDINALITY", "SUB_CLASS_OF", "EQUIVALENT_CLASSES",
  "DISJOINT_CLASSES", "DISJOINT_UNION", "SUB_OBJECT_PROPERTY_OF",
  "EQUIVALENT_OBJECT_PROPERTIES", "DISJOINT_OBJECT_PROPERTIES",
  "OBJECT_PROPERTY_CHAIN", "INVERSE_OBJECT_PROPERTIES",
  "OBJECT_PROPERTY_DOMAIN", "OBJECT_PROPERTY_RANGE",
  "FUNCTIONAL_OBJECT_PROPERTY", "INVERSE_FUNCTIONAL_OBJECT_PROPERTY",
  "REFLEXIVE_OBJECT_PROPERTY", "IRREFLEXIVE_OBJECT_PROPERTY",
  "SYMMETRIC_OBJECT_PROPERTY", "ASYMMETRIC_OBJECT_PROPERTY",
  "TRANSITIVE_OBJECT_PROPERTY", "SUB_DATA_PROPERTY_OF",
  "EQUIVALENT_DATA_PROPERTIES", "DISJOINT_DATA_PROPERTIES",
  "DATA_PROPERTY_DOMAIN", "DATA_PROPERTY_RANGE",
  "FUNCTIONAL_DATA_PROPERTY", "SAME_INDIVIDUAL", "DIFFERENT_INDIVIDUALS",
  "CLASS_ASSERTION", "OBJECT_PROPERTY_ASSERTION",
  "NEGATIVE_OBJECT_PROPERTY_ASSERTION", "DATA_PROPERTY_ASSERTION",
  "NEGATIVE_DATA_PROPERTY_ASSERTION", "ANNOTATION_ASSERTION",
  "SUB_ANNOTATION_PROPERTY_OF", "ANNOTATION_PROPERTY_DOMAIN",
  "ANNOTATION_PROPERTY_RANGE", "$accept", "full_iri", "abbreviated_iri",
  "iri", "ontology_document", "prefix_declarations", "prefix", "namespace",
  "prefix_declaration", "ontology", "ontology_id", "ontology_imports",
  "import", "ontology_annotations", "axioms", "class", "datatype",
  "object_property", "data_property", "annotation_property", "individual",
  "named_individual", "anonymous_individual", "quoted_string", "lang_tag",
  "literal", "declaration", "entity", "object_property_expression",
  "inverse_object_property", "data_property_expression", "data_range",
  "data_intersection_of", "data_union_of", "data_complement_of",
  "data_one_of", "datatype_restriction", "facet_restriction",
  "class_expression", "object_intersection_of", "object_union_of",
  "object_complement_of", "object_one_of", "object_some_values_from",
  "object_all_values_from", "object_has_value", "object_has_self",
  "object_min_cardinality", "object_max_cardinality",
  "object_exact_cardinality", "cardinality", "data_some_values_from",
  "data_all_values_from", "data_has_value", "data_min_cardinality",
  "data_max_cardinality", "data_exact_cardinality", "axiom", "class_axiom",
  "sub_class_of", "equivalent_classes", "disjoint_classes",
  "disjoint_union", "object_property_axiom", "sub_object_property_of",
  "property_expression_chain", "equivalent_object_properties",
  "disjoint_object_properties", "inverse_object_properties",
  "object_property_domain", "object_property_range",
  "functional_object_property", "inverse_functional_object_property",
  "reflexive_object_property", "irreflexive_object_property",
  "symmetric_object_property", "asymmetric_object_property",
  "transitive_object_property", "data_property_axiom",
  "sub_data_property_of", "equivalent_data_properties",
  "disjoint_data_properties", "data_property_domain",
  "data_property_range", "functional_data_property", "datatype_definition",
  "has_key", "assertion", "same_individual", "different_individuals",
  "class_assertion", "object_property_assertion",
  "negative_object_property_assertion", "data_property_assertion",
  "negative_data_property_assertion", "annotation", "annotation_value",
  "annotation_axiom", "annotation_assertion", "annotation_subject",
  "sub_annotation_property_of", "annotation_property_domain",
  "annotation_property_range", "annotation_star", "class_expression_list",
  "class_expression_2_list", "data_property_expression_list",
  "data_property_expression_2_list", "data_property_expression_star",
  "data_range_list", "data_range_2_list", "facet_restriction_list",
  "individual_list", "individual_2_list", "literal_list",
  "object_property_expression_list", "object_property_expression_2_list",
  "object_property_expression_star", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-360)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-211)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -360,     7,    75,  -360,    13,    22,  -360,  -360,    73,     5,
    -360,  -360,  -360,  -360,    73,  -360,  -360,    49,  -360,    65,
      55,    82,  -360,    77,  -360,    85,    73,    99,   420,  -360,
    -360,   100,  -360,  -360,   102,   104,   109,   113,   119,   120,
     123,   128,   130,   138,   149,   151,   154,   155,   156,   157,
     167,   168,   175,   180,   185,   186,   196,   198,   202,   209,
     210,   222,   226,   227,   231,   232,   234,   235,   236,   237,
     238,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,
    -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,
    -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,
    -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,
    -360,  -360,  -360,  -360,  -360,     1,  -360,  -360,  -360,  -360,
    -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,
    -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,
    -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,
    -360,  -360,  -360,  -360,    66,  -360,   192,     1,   372,   372,
     372,   372,     1,    15,    31,    31,    31,    31,    31,    31,
      31,    31,    31,    31,    31,    31,     1,     1,     1,     1,
       1,     1,    50,    50,   372,    31,    31,     1,     1,     1,
       1,     1,     1,  -360,  -360,  -360,  -360,    80,  -360,   191,
     243,   244,   245,   248,   249,   250,   193,  -360,   297,   251,
     252,   258,   260,   261,   266,   267,   268,   270,   271,   281,
     283,   284,   287,   291,   292,   293,  -360,  -360,   295,  -360,
    -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,
    -360,  -360,  -360,  -360,  -360,  -360,   577,  -360,   577,   296,
     298,   577,   300,   301,  -360,  -360,    28,  -360,    28,  -360,
      28,   302,   306,    28,   577,   577,   307,   308,   318,   319,
     320,   324,   325,  -360,  -360,    73,  -360,    73,   326,   327,
     577,   297,   328,  -360,  -360,  -360,  -360,    69,   329,   330,
      69,    69,    69,    69,    69,    69,    73,    73,    73,  -360,
      73,  -360,  -360,    73,    73,    73,    73,    73,    73,  -360,
     336,   338,   339,   340,   341,  -360,   342,  -360,  -360,  -360,
    -360,  -360,    73,    73,    73,   305,   305,   305,   577,   577,
     577,    69,    28,    28,    28,    28,   305,   305,   305,  -360,
     343,   344,  -360,  -360,   345,    73,    28,   346,   347,   348,
    -360,  -360,   349,   350,   351,  -360,  -360,  -360,  -360,  -360,
    -360,  -360,   352,   353,  -360,  -360,   356,   357,  -360,   358,
    -360,  -360,   359,    69,    69,   368,   368,  -360,  -360,    66,
     362,   363,   364,  -360,   365,   366,   367,   369,   374,   376,
     297,   297,   297,   368,    73,  -360,   297,   297,   368,  -360,
      73,    73,    73,   380,   384,   385,    51,   577,   577,    69,
     386,    28,    28,    28,    43,  -360,  -360,   391,   392,  -360,
    -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,   399,   411,
     412,   413,   414,  -360,  -360,  -360,  -360,  -360,  -360,  -360,
    -360,  -360,  -360,   297,   415,   416,   417,  -360,    32,    73,
     418,   419,   421,    56,   194,   200,  -360,  -360,  -360,  -360,
    -360,   422,   423,   425,  -360,   498,   516,   559,   428,  -360,
    -360,  -360,  -360,  -360,  -360,  -360,  -360,   431,  -360,  -360,
    -360,  -360,  -360,   368,  -360,   111,  -360,  -360,  -360,  -360,
     432,  -360,   433,  -360,   437,  -360,  -360,  -360,  -360,   438,
    -360,   439,  -360,   440,  -360,  -360,  -360,  -360,  -360,  -360,
    -360,  -360,  -360,  -360,   132,   441,  -360,  -360
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       7,     0,     0,     1,     0,     0,     8,     6,    13,     0,
       3,     2,     4,     5,    14,    16,     9,     0,    15,    19,
       0,     0,    17,    21,    10,     0,     0,     0,     0,    20,
      11,     0,   188,    12,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   102,    22,   103,   110,   111,   112,   113,   104,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   105,   146,   147,   148,   149,   150,   151,   106,
     107,   108,   160,   161,   162,   163,   164,   165,   166,   109,
     178,   179,   180,   181,    18,     0,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,    27,     0,   189,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    32,    31,   176,   175,    36,   177,     0,
       0,     0,     0,     0,     0,     0,     0,    24,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    23,    60,     0,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,     0,   190,     0,     0,
       0,     0,     0,     0,    25,    44,     0,    45,     0,   208,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,    47,     0,   193,     0,     0,     0,
       0,     0,     0,    30,   203,    28,    29,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    33,
       0,    35,   174,     0,     0,     0,     0,     0,     0,    37,
       0,     0,     0,     0,     0,    48,     0,    49,    50,    51,
      52,    53,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   211,
       0,   191,   115,   116,     0,     0,     0,     0,     0,   209,
     134,   135,     0,     0,     0,   139,   140,   141,   142,   143,
     144,   145,     0,   194,   153,   154,     0,     0,   157,   204,
     167,   168,     0,     0,     0,     0,     0,   183,   184,     0,
       0,     0,     0,    34,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   158,     0,     0,     0,    92,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   114,   117,     0,     0,   131,
     132,   136,   137,   138,   152,   155,   156,   169,     0,     0,
       0,     0,     0,   185,   186,   187,    38,    39,    40,    41,
      42,    43,   198,     0,     0,     0,     0,   206,     0,     0,
       0,     0,     0,     0,     0,     0,    78,    79,    80,    81,
     204,     0,     0,     0,    85,     0,     0,     0,     0,   212,
      46,   133,   170,   171,   172,   173,   182,   199,    54,    55,
      56,    57,   207,     0,   201,     0,    93,    94,    95,    96,
       0,    98,     0,   100,     0,    82,    83,    84,    86,     0,
      88,     0,    90,     0,   196,    59,    58,   202,    97,    99,
     101,    87,    89,    91,     0,     0,   197,   159
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -360,  -360,  -360,    -8,  -360,  -360,  -360,  -360,  -360,  -360,
    -360,  -360,  -360,  -360,  -360,  -159,  -142,  -303,     6,  -162,
    -246,    44,  -153,  -360,  -360,  -359,  -360,  -360,   -69,  -360,
    -167,  -204,  -360,  -360,  -360,  -360,  -360,   -32,  -133,  -360,
    -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,
    -201,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,
    -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,
    -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,
    -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,
    -360,  -360,  -360,  -360,  -360,   442,    76,  -360,  -360,  -360,
    -360,  -360,  -360,   511,  -360,  -130,  -360,   276,  -360,  -360,
      70,  -360,   125,   277,  -360,  -360,  -160,  -360
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    12,    13,   254,     1,     2,    17,    25,     6,     7,
      15,    19,    22,    23,    28,   227,   315,   255,   274,   154,
     284,   285,   286,   197,   301,   198,    71,   206,   259,   257,
     276,   442,   317,   318,   319,   320,   321,   484,   247,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     400,   240,   241,   242,   243,   244,   245,    72,    73,    74,
      75,    76,    77,    78,    79,   258,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   155,   199,   109,   110,   379,
     111,   112,   113,   115,   248,   249,   277,   278,   514,   443,
     444,   485,   287,   288,   448,   260,   261,   414
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      14,   196,   386,   251,   316,   262,    18,     3,    10,   275,
      11,    16,   280,   281,   282,   208,   430,   431,    31,    27,
     293,   294,    10,     8,    11,   228,   246,   295,   296,   297,
     298,   250,     9,    27,   447,    10,   193,    11,    10,   452,
      11,   369,   417,   481,   372,   373,   374,   375,   376,    27,
      10,   290,    11,   252,   468,   194,   194,    10,    10,    11,
      11,    20,   459,    10,    24,    11,   252,   489,    27,   252,
     193,   194,   253,    10,   194,    11,    10,   367,    11,    21,
      10,   252,    11,   310,   311,   312,   313,   314,   299,   482,
       4,     5,    26,   300,   256,    27,    30,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   153,   362,    32,
     363,   114,   116,   340,   117,   341,   291,   292,    10,   118,
      11,   344,   506,   119,   505,   401,   402,   428,   429,   120,
     121,   353,   354,   122,   380,   411,   412,   413,   123,    10,
     124,    11,   378,   515,   384,   388,   195,   366,   125,   207,
     226,   226,   226,   226,   226,   396,   397,   398,   383,   126,
     460,   127,   385,   463,   128,   129,   130,   131,   273,   273,
     273,   273,   273,   273,   283,   283,   226,   132,   133,   273,
     273,   153,   153,   153,   153,   134,   418,   347,   446,   348,
     135,   349,   450,   451,   352,   136,   137,   405,   403,   404,
     207,    10,   302,    11,   309,   491,   138,    10,   139,    11,
      27,   493,   140,   200,   201,   202,   203,   204,   205,   141,
     142,   310,   311,   312,   313,   314,   196,   310,   311,   312,
     313,   314,   143,   453,   454,   455,   144,   145,   226,   477,
     226,   146,   147,   226,   148,   149,   150,   151,   152,   490,
     492,   494,   449,   303,   304,   305,   226,   226,   306,   307,
     308,   322,   323,   407,   408,   409,   410,   273,   324,   273,
     325,   326,   226,   207,   461,   462,   327,   328,   329,   283,
     330,   331,   283,   283,   283,   283,   283,   377,   153,   381,
     382,   332,   207,   333,   334,   226,   207,   335,   273,   153,
     283,   336,   337,   338,    10,   339,    11,   342,   399,   343,
     345,   346,   387,   350,   273,   273,   273,   351,   355,   356,
     226,   226,   226,   283,   310,   311,   312,   313,   314,   357,
     358,   359,   499,   501,   503,   360,   361,   364,   365,   368,
     370,   371,   465,   466,   467,   469,   390,   516,   391,   392,
     393,   394,   389,   395,   415,  -192,   416,   419,   420,  -210,
     421,   422,   423,   424,  -195,   283,   283,   425,   426,  -205,
     427,   195,   193,   433,   434,   435,   436,   437,   438,    10,
     439,    11,   207,   207,   207,   440,   207,   441,   207,   207,
      27,   456,   273,   273,   273,   457,   458,   464,   283,   226,
     226,   283,   470,   471,   209,   210,   211,   212,   213,   214,
     472,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   473,   474,   475,   476,   478,   479,   480,   486,
     487,    33,   488,   495,   496,   207,   497,    34,   504,    35,
      36,   483,  -200,   508,   509,   207,   207,   207,   510,   511,
     512,   513,   517,   507,   279,   432,   406,   226,   226,   226,
     289,   445,     0,     0,     0,    29,     0,     0,     0,     0,
      37,    38,    39,    40,    41,    42,    43,   483,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    10,   273,    11,     0,   498,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,     0,    11,     0,   500,     0,     0,
     209,   210,   211,   212,   213,   214,     0,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   209,   210,
     211,   212,   213,   214,     0,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,    10,     0,    11,     0,
     502,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,     0,    11,     0,     0,     0,
       0,   209,   210,   211,   212,   213,   214,     0,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   209,
     210,   211,   212,   213,   214,     0,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192
};

static const yytype_int16 yycheck[] =
{
       8,   154,   305,   162,   208,   165,    14,     0,     7,   176,
       9,     6,   179,   180,   181,   157,   375,   376,    26,    18,
     187,   188,     7,    10,     9,   158,   159,   189,   190,   191,
     192,   161,    10,    18,   393,     7,     4,     9,     7,   398,
       9,   287,   345,    11,   290,   291,   292,   293,   294,    18,
       7,   184,     9,    38,    11,     5,     5,     7,     7,     9,
       9,    12,    11,     7,     9,     9,    38,    11,    18,    38,
       4,     5,    57,     7,     5,     9,     7,   281,     9,    14,
       7,    38,     9,    27,    28,    29,    30,    31,     8,   448,
      15,    16,    10,    13,   163,    18,    11,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   115,   275,    10,
     277,    11,    10,   246,    10,   248,   185,   186,     7,    10,
       9,   251,    11,    10,   483,   326,   327,   373,   374,    10,
      10,   264,   265,    10,   296,   336,   337,   338,    10,     7,
      10,     9,   295,    11,   303,   307,   154,   280,    10,   157,
     158,   159,   160,   161,   162,   322,   323,   324,   300,    10,
     406,    10,   304,   409,    10,    10,    10,    10,   176,   177,
     178,   179,   180,   181,   182,   183,   184,    10,    10,   187,
     188,   189,   190,   191,   192,    10,   346,   256,   392,   258,
      10,   260,   396,   397,   263,    10,    10,   330,   328,   329,
     208,     7,    11,     9,    11,    11,    10,     7,    10,     9,
      18,    11,    10,    21,    22,    23,    24,    25,    26,    10,
      10,    27,    28,    29,    30,    31,   379,    27,    28,    29,
      30,    31,    10,   400,   401,   402,    10,    10,   246,   443,
     248,    10,    10,   251,    10,    10,    10,    10,    10,   453,
     454,   455,   394,    10,    10,    10,   264,   265,    10,    10,
      10,    10,    10,   332,   333,   334,   335,   275,    10,   277,
      10,    10,   280,   281,   407,   408,    10,    10,    10,   287,
      10,    10,   290,   291,   292,   293,   294,   295,   296,   297,
     298,    10,   300,    10,    10,   303,   304,    10,   306,   307,
     308,    10,    10,    10,     7,    10,     9,    11,     3,    11,
      10,    10,   306,    11,   322,   323,   324,    11,    11,    11,
     328,   329,   330,   331,    27,    28,    29,    30,    31,    11,
      11,    11,   465,   466,   467,    11,    11,    11,    11,    11,
      11,    11,   411,   412,   413,   414,    10,   514,    10,    10,
      10,    10,   308,    11,    11,    11,    11,    11,    11,    11,
      11,    11,    11,    11,    11,   373,   374,    11,    11,    11,
      11,   379,     4,    11,    11,    11,    11,    11,    11,     7,
      11,     9,   390,   391,   392,    11,   394,    11,   396,   397,
      18,    11,   400,   401,   402,    11,    11,    11,   406,   407,
     408,   409,    11,    11,    32,    33,    34,    35,    36,    37,
      11,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    11,    11,    11,    11,    11,    11,    11,    11,
      11,    11,    11,    11,    11,   443,    11,    17,    10,    19,
      20,   449,    11,    11,    11,   453,   454,   455,    11,    11,
      11,    11,    11,   485,   178,   379,   331,   465,   466,   467,
     183,   391,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      50,    51,    52,    53,    54,    55,    56,   485,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,     7,   514,     9,    -1,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     7,    -1,     9,    -1,    11,    -1,    -1,
      32,    33,    34,    35,    36,    37,    -1,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    32,    33,
      34,    35,    36,    37,    -1,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,     7,    -1,     9,    -1,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     7,    -1,     9,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    -1,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    32,
      33,    34,    35,    36,    37,    -1,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    89,    90,     0,    15,    16,    93,    94,    10,    10,
       7,     9,    86,    87,    88,    95,     6,    91,    88,    96,
      12,    14,    97,    98,     9,    92,    10,    18,    99,   180,
      11,    88,    10,    11,    17,    19,    20,    50,    51,    52,
      53,    54,    55,    56,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,   111,   142,   143,   144,   145,   146,   147,   148,   149,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   182,
     183,   185,   186,   187,    11,   188,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    88,   104,   180,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,     4,     5,    88,   107,   108,   110,   181,
      21,    22,    23,    24,    25,    26,   112,    88,   101,    32,
      33,    34,    35,    36,    37,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    88,   100,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     136,   137,   138,   139,   140,   141,   123,   123,   189,   190,
     190,   100,    38,    57,    88,   102,   113,   114,   150,   113,
     200,   201,   201,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,    88,   103,   115,   115,   191,   192,   192,
     115,   115,   115,    88,   105,   106,   107,   197,   198,   198,
     123,   113,   113,   115,   115,   104,   104,   104,   104,     8,
      13,   109,    11,    10,    10,    10,    10,    10,    10,    11,
      27,    28,    29,    30,    31,   101,   116,   117,   118,   119,
     120,   121,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
     123,   123,    11,    11,   190,    10,    10,   113,   113,   113,
      11,    11,   113,   123,   123,    11,    11,    11,    11,    11,
      11,    11,   115,   115,    11,    11,   123,   116,    11,   105,
      11,    11,   105,   105,   105,   105,   105,    88,   107,   184,
     104,    88,    88,   101,   100,   101,   102,   103,   104,   106,
      10,    10,    10,    10,    10,    11,   115,   115,   115,     3,
     135,   135,   135,   190,   190,   123,   197,   113,   113,   113,
     113,   135,   135,   135,   202,    11,    11,   102,   201,    11,
      11,    11,    11,    11,    11,    11,    11,    11,   105,   105,
     110,   110,   181,    11,    11,    11,    11,    11,    11,    11,
      11,    11,   116,   194,   195,   195,   116,   110,   199,   101,
     116,   116,   110,   115,   115,   115,    11,    11,    11,    11,
     105,   123,   123,   105,    11,   113,   113,   113,    11,   113,
      11,    11,    11,    11,    11,    11,    11,   116,    11,    11,
      11,    11,   110,    88,   122,   196,    11,    11,    11,    11,
     116,    11,   116,    11,   116,    11,    11,    11,    11,   123,
      11,   123,    11,   123,    10,   110,    11,   122,    11,    11,
      11,    11,    11,    11,   193,    11,   115,    11
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    85,    86,    87,    88,    88,    89,    90,    90,    91,
      92,    93,    94,    95,    95,    95,    96,    96,    97,    98,
      98,    99,    99,   100,   101,   102,   103,   104,   105,   105,
     106,   107,   108,   109,   110,   110,   110,   111,   112,   112,
     112,   112,   112,   112,   113,   113,   114,   115,   116,   116,
     116,   116,   116,   116,   117,   118,   119,   120,   121,   122,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   132,   133,   133,
     134,   134,   135,   136,   137,   138,   139,   139,   140,   140,
     141,   141,   142,   142,   142,   142,   142,   142,   142,   142,
     143,   143,   143,   143,   144,   145,   146,   147,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   149,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   163,   163,   163,
     163,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   172,   172,   172,   172,   172,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   181,   181,   182,   182,
     182,   182,   183,   184,   184,   185,   186,   187,   188,   188,
     189,   189,   190,   191,   191,   192,   193,   193,   194,   194,
     195,   196,   196,   197,   197,   198,   199,   199,   200,   200,
     201,   202,   202
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     2,     0,     2,     1,
       1,     6,     7,     0,     1,     2,     0,     2,     4,     0,
       2,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     2,     1,     5,     4,     4,
       4,     4,     4,     4,     1,     1,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     4,     4,     4,     5,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     4,
       4,     4,     5,     5,     5,     4,     5,     6,     5,     6,
       5,     6,     1,     5,     5,     5,     5,     6,     5,     6,
       5,     6,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     6,     5,     5,     6,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     6,     6,     4,     5,     5,     6,     6,     6,     5,
       5,     5,     5,     5,     5,     5,     1,     1,     1,     1,
       1,     1,     6,     5,     5,     6,     6,     5,     6,    11,
       1,     1,     1,     1,     1,     1,     1,     5,     5,     6,
       7,     7,     7,     7,     6,     1,     1,     1,     1,     1,
       1,     1,     7,     1,     1,     6,     6,     6,     0,     2,
       1,     2,     2,     1,     2,     2,     0,     2,     1,     2,
       2,     1,     2,     1,     2,     2,     1,     2,     1,     2,
       2,     0,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = COWL_FUNC_YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == COWL_FUNC_YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (&yylloc, scanner, stream, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use COWL_FUNC_YYerror or COWL_FUNC_YYUNDEF. */
#define YYERRCODE COWL_FUNC_YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if COWL_FUNC_YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined COWL_FUNC_YYLTYPE_IS_TRIVIAL && COWL_FUNC_YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, scanner, stream); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner, CowlIStream *stream)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  YY_USE (scanner);
  YY_USE (stream);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner, CowlIStream *stream)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, scanner, stream);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, yyscan_t scanner, CowlIStream *stream)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), scanner, stream);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, scanner, stream); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !COWL_FUNC_YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !COWL_FUNC_YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, yyscan_t scanner, CowlIStream *stream)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  YY_USE (scanner);
  YY_USE (stream);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yykind)
    {
    case YYSYMBOL_full_iri: /* full_iri  */
#line 223 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).full_iri)); }
#line 1592 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_abbreviated_iri: /* abbreviated_iri  */
#line 223 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).abbreviated_iri)); }
#line 1598 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_iri: /* iri  */
#line 223 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).iri)); }
#line 1604 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_prefix: /* prefix  */
#line 228 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).prefix)); }
#line 1610 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_namespace: /* namespace  */
#line 228 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).namespace)); }
#line 1616 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_class: /* class  */
#line 214 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).class)); }
#line 1622 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_datatype: /* datatype  */
#line 219 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).datatype)); }
#line 1628 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_object_property: /* object_property  */
#line 226 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).object_property)); }
#line 1634 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_data_property: /* data_property  */
#line 216 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).data_property)); }
#line 1640 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_annotation_property: /* annotation_property  */
#line 211 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).annotation_property)); }
#line 1646 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_individual: /* individual  */
#line 222 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).individual)); }
#line 1652 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_named_individual: /* named_individual  */
#line 225 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).named_individual)); }
#line 1658 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_anonymous_individual: /* anonymous_individual  */
#line 222 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).anonymous_individual)); }
#line 1664 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_quoted_string: /* quoted_string  */
#line 228 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).quoted_string)); }
#line 1670 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_lang_tag: /* lang_tag  */
#line 228 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).lang_tag)); }
#line 1676 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_literal: /* literal  */
#line 224 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).literal)); }
#line 1682 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_declaration: /* declaration  */
#line 213 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).declaration)); }
#line 1688 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_entity: /* entity  */
#line 220 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).entity)); }
#line 1694 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_object_property_expression: /* object_property_expression  */
#line 227 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).object_property_expression)); }
#line 1700 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_inverse_object_property: /* inverse_object_property  */
#line 227 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).inverse_object_property)); }
#line 1706 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_data_property_expression: /* data_property_expression  */
#line 217 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).data_property_expression)); }
#line 1712 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_data_range: /* data_range  */
#line 218 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).data_range)); }
#line 1718 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_data_intersection_of: /* data_intersection_of  */
#line 218 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).data_intersection_of)); }
#line 1724 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_data_union_of: /* data_union_of  */
#line 218 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).data_union_of)); }
#line 1730 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_data_complement_of: /* data_complement_of  */
#line 218 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).data_complement_of)); }
#line 1736 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_data_one_of: /* data_one_of  */
#line 218 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).data_one_of)); }
#line 1742 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_datatype_restriction: /* datatype_restriction  */
#line 218 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).datatype_restriction)); }
#line 1748 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_facet_restriction: /* facet_restriction  */
#line 221 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).facet_restriction)); }
#line 1754 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_class_expression: /* class_expression  */
#line 215 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).class_expression)); }
#line 1760 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_object_intersection_of: /* object_intersection_of  */
#line 215 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).object_intersection_of)); }
#line 1766 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_object_union_of: /* object_union_of  */
#line 215 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).object_union_of)); }
#line 1772 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_object_complement_of: /* object_complement_of  */
#line 215 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).object_complement_of)); }
#line 1778 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_object_one_of: /* object_one_of  */
#line 215 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).object_one_of)); }
#line 1784 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_object_some_values_from: /* object_some_values_from  */
#line 215 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).object_some_values_from)); }
#line 1790 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_object_all_values_from: /* object_all_values_from  */
#line 215 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).object_all_values_from)); }
#line 1796 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_object_has_value: /* object_has_value  */
#line 215 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).object_has_value)); }
#line 1802 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_object_has_self: /* object_has_self  */
#line 215 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).object_has_self)); }
#line 1808 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_object_min_cardinality: /* object_min_cardinality  */
#line 215 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).object_min_cardinality)); }
#line 1814 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_object_max_cardinality: /* object_max_cardinality  */
#line 215 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).object_max_cardinality)); }
#line 1820 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_object_exact_cardinality: /* object_exact_cardinality  */
#line 215 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).object_exact_cardinality)); }
#line 1826 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_data_some_values_from: /* data_some_values_from  */
#line 215 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).data_some_values_from)); }
#line 1832 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_data_all_values_from: /* data_all_values_from  */
#line 215 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).data_all_values_from)); }
#line 1838 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_data_has_value: /* data_has_value  */
#line 215 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).data_has_value)); }
#line 1844 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_data_min_cardinality: /* data_min_cardinality  */
#line 215 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).data_min_cardinality)); }
#line 1850 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_data_max_cardinality: /* data_max_cardinality  */
#line 215 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).data_max_cardinality)); }
#line 1856 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_data_exact_cardinality: /* data_exact_cardinality  */
#line 215 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).data_exact_cardinality)); }
#line 1862 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_axiom: /* axiom  */
#line 213 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).axiom)); }
#line 1868 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_class_axiom: /* class_axiom  */
#line 213 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).class_axiom)); }
#line 1874 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_sub_class_of: /* sub_class_of  */
#line 213 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).sub_class_of)); }
#line 1880 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_equivalent_classes: /* equivalent_classes  */
#line 213 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).equivalent_classes)); }
#line 1886 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_disjoint_classes: /* disjoint_classes  */
#line 213 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).disjoint_classes)); }
#line 1892 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_disjoint_union: /* disjoint_union  */
#line 213 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).disjoint_union)); }
#line 1898 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_object_property_axiom: /* object_property_axiom  */
#line 213 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).object_property_axiom)); }
#line 1904 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_sub_object_property_of: /* sub_object_property_of  */
#line 213 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).sub_object_property_of)); }
#line 1910 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_property_expression_chain: /* property_expression_chain  */
#line 229 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).property_expression_chain)); }
#line 1916 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_equivalent_object_properties: /* equivalent_object_properties  */
#line 213 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).equivalent_object_properties)); }
#line 1922 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_disjoint_object_properties: /* disjoint_object_properties  */
#line 213 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).disjoint_object_properties)); }
#line 1928 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_inverse_object_properties: /* inverse_object_properties  */
#line 213 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).inverse_object_properties)); }
#line 1934 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_object_property_domain: /* object_property_domain  */
#line 213 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).object_property_domain)); }
#line 1940 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_object_property_range: /* object_property_range  */
#line 213 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).object_property_range)); }
#line 1946 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_functional_object_property: /* functional_object_property  */
#line 213 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).functional_object_property)); }
#line 1952 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_inverse_functional_object_property: /* inverse_functional_object_property  */
#line 213 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).inverse_functional_object_property)); }
#line 1958 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_reflexive_object_property: /* reflexive_object_property  */
#line 213 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).reflexive_object_property)); }
#line 1964 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_irreflexive_object_property: /* irreflexive_object_property  */
#line 213 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).irreflexive_object_property)); }
#line 1970 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_symmetric_object_property: /* symmetric_object_property  */
#line 213 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).symmetric_object_property)); }
#line 1976 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_asymmetric_object_property: /* asymmetric_object_property  */
#line 213 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).asymmetric_object_property)); }
#line 1982 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_transitive_object_property: /* transitive_object_property  */
#line 213 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).transitive_object_property)); }
#line 1988 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_data_property_axiom: /* data_property_axiom  */
#line 213 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).data_property_axiom)); }
#line 1994 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_sub_data_property_of: /* sub_data_property_of  */
#line 213 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).sub_data_property_of)); }
#line 2000 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_equivalent_data_properties: /* equivalent_data_properties  */
#line 213 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).equivalent_data_properties)); }
#line 2006 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_disjoint_data_properties: /* disjoint_data_properties  */
#line 213 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).disjoint_data_properties)); }
#line 2012 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_data_property_domain: /* data_property_domain  */
#line 213 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).data_property_domain)); }
#line 2018 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_data_property_range: /* data_property_range  */
#line 213 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).data_property_range)); }
#line 2024 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_functional_data_property: /* functional_data_property  */
#line 213 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).functional_data_property)); }
#line 2030 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_datatype_definition: /* datatype_definition  */
#line 213 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).datatype_definition)); }
#line 2036 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_has_key: /* has_key  */
#line 213 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).has_key)); }
#line 2042 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_assertion: /* assertion  */
#line 213 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).assertion)); }
#line 2048 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_same_individual: /* same_individual  */
#line 213 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).same_individual)); }
#line 2054 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_different_individuals: /* different_individuals  */
#line 213 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).different_individuals)); }
#line 2060 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_class_assertion: /* class_assertion  */
#line 213 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).class_assertion)); }
#line 2066 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_object_property_assertion: /* object_property_assertion  */
#line 213 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).object_property_assertion)); }
#line 2072 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_negative_object_property_assertion: /* negative_object_property_assertion  */
#line 213 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).negative_object_property_assertion)); }
#line 2078 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_data_property_assertion: /* data_property_assertion  */
#line 213 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).data_property_assertion)); }
#line 2084 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_negative_data_property_assertion: /* negative_data_property_assertion  */
#line 213 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).negative_data_property_assertion)); }
#line 2090 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_annotation: /* annotation  */
#line 210 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).annotation)); }
#line 2096 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_annotation_value: /* annotation_value  */
#line 212 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).annotation_value)); }
#line 2102 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_annotation_axiom: /* annotation_axiom  */
#line 213 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).annotation_axiom)); }
#line 2108 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_annotation_assertion: /* annotation_assertion  */
#line 213 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).annotation_assertion)); }
#line 2114 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_annotation_subject: /* annotation_subject  */
#line 212 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).annotation_subject)); }
#line 2120 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_sub_annotation_property_of: /* sub_annotation_property_of  */
#line 213 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).sub_annotation_property_of)); }
#line 2126 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_annotation_property_domain: /* annotation_property_domain  */
#line 213 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).annotation_property_domain)); }
#line 2132 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_annotation_property_range: /* annotation_property_range  */
#line 213 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).annotation_property_range)); }
#line 2138 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_annotation_star: /* annotation_star  */
#line 229 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).annotation_star)); }
#line 2144 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_class_expression_list: /* class_expression_list  */
#line 229 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).class_expression_list)); }
#line 2150 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_class_expression_2_list: /* class_expression_2_list  */
#line 229 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).class_expression_2_list)); }
#line 2156 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_data_property_expression_list: /* data_property_expression_list  */
#line 229 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).data_property_expression_list)); }
#line 2162 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_data_property_expression_2_list: /* data_property_expression_2_list  */
#line 229 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).data_property_expression_2_list)); }
#line 2168 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_data_property_expression_star: /* data_property_expression_star  */
#line 229 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).data_property_expression_star)); }
#line 2174 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_data_range_list: /* data_range_list  */
#line 229 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).data_range_list)); }
#line 2180 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_data_range_2_list: /* data_range_2_list  */
#line 229 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).data_range_2_list)); }
#line 2186 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_facet_restriction_list: /* facet_restriction_list  */
#line 229 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).facet_restriction_list)); }
#line 2192 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_individual_list: /* individual_list  */
#line 229 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).individual_list)); }
#line 2198 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_individual_2_list: /* individual_2_list  */
#line 229 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).individual_2_list)); }
#line 2204 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_literal_list: /* literal_list  */
#line 229 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).literal_list)); }
#line 2210 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_object_property_expression_list: /* object_property_expression_list  */
#line 229 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).object_property_expression_list)); }
#line 2216 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_object_property_expression_2_list: /* object_property_expression_2_list  */
#line 229 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).object_property_expression_2_list)); }
#line 2222 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

    case YYSYMBOL_object_property_expression_star: /* object_property_expression_star  */
#line 229 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { cowl_release(((*yyvaluep).object_property_expression_star)); }
#line 2228 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (yyscan_t scanner, CowlIStream *stream)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined COWL_FUNC_YYLTYPE_IS_TRIVIAL && COWL_FUNC_YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = COWL_FUNC_YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == COWL_FUNC_YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, &yylloc, scanner);
    }

  if (yychar <= COWL_FUNC_YYEOF)
    {
      yychar = COWL_FUNC_YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == COWL_FUNC_YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = COWL_FUNC_YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = COWL_FUNC_YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* full_iri: IRI_REF  */
#line 238 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
              {
        (yyval.full_iri) = cowl_iri_from_string((yyvsp[0].IRI_REF));
        if (!(yyval.full_iri)) COWL_ERROR_MEM;
    }
#line 2534 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 3: /* abbreviated_iri: PNAME_LN  */
#line 245 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
               {
        (yyval.abbreviated_iri) = cowl_sym_table_parse_short_iri(cowl_istream_get_sym_table(stream), (yyvsp[0].PNAME_LN));
        if (!(yyval.abbreviated_iri)) {
            UString comp[] = { ustring_literal("failed to resolve "), (yyvsp[0].PNAME_LN) };
            UString err_str = ustring_concat(comp, ulib_array_count(comp));
            COWL_HANDLE_SYNTAX_ERROR(err_str);
            ustring_deinit(&err_str);
            YYERROR;
        }
    }
#line 2549 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 6: /* ontology_document: prefix_declarations ontology  */
#line 265 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                   {
        // Suppress warning about unused yynerrs (Bison <= 3.8.2)
        (void)yynerrs;
    }
#line 2558 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 9: /* prefix: PNAME_NS  */
#line 277 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
               {
        (yyval.prefix) = cowl_string_opt((yyvsp[0].PNAME_NS), COWL_SO_COPY);
        if (!(yyval.prefix)) COWL_ERROR_MEM;
    }
#line 2567 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 10: /* namespace: IRI_REF  */
#line 284 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
              {
        (yyval.namespace) = cowl_string_opt((yyvsp[0].IRI_REF), COWL_SO_COPY | COWL_SO_INTERN);
        if (!(yyval.namespace)) COWL_ERROR_MEM;
    }
#line 2576 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 11: /* prefix_declaration: PREFIX L_PAREN prefix EQUALS namespace R_PAREN  */
#line 291 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                     {
        CowlSymTable *st = cowl_istream_get_sym_table(stream);
        cowl_ret ret = cowl_sym_table_register_prefix(st, (yyvsp[-3].prefix), (yyvsp[-1].namespace), false);
        cowl_release((yyvsp[-3].prefix));
        cowl_release((yyvsp[-1].namespace));
        if (ret) COWL_ERROR(ret);
    }
#line 2588 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 14: /* ontology_id: iri  */
#line 306 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
          {
        cowl_istream_handle_iri(stream, (yyvsp[0].iri));
        cowl_release((yyvsp[0].iri));
    }
#line 2597 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 15: /* ontology_id: iri iri  */
#line 310 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
              {
        cowl_istream_handle_iri(stream, (yyvsp[-1].iri));
        cowl_istream_handle_version(stream, (yyvsp[0].iri));
        cowl_release((yyvsp[-1].iri));
        cowl_release((yyvsp[0].iri));
    }
#line 2608 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 18: /* import: IMPORT L_PAREN iri R_PAREN  */
#line 324 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                 {
        cowl_ret ret = cowl_istream_handle_import(stream, (yyvsp[-1].iri));
        cowl_release((yyvsp[-1].iri));
        if (ret) YYERROR;
    }
#line 2618 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 20: /* ontology_annotations: ontology_annotations annotation  */
#line 333 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                      {
        cowl_ret ret = cowl_istream_handle_annot(stream, (yyvsp[0].annotation));
        cowl_release((yyvsp[0].annotation));
        if (ret) YYERROR;
    }
#line 2628 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 22: /* axioms: axioms axiom  */
#line 341 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                   {
        cowl_ret ret = cowl_istream_handle_axiom(stream, (yyvsp[0].axiom));
        cowl_release((yyvsp[0].axiom));
        if (ret) YYERROR;
    }
#line 2638 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 23: /* class: iri  */
#line 351 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
          {
        (yyval.class) = cowl_class((yyvsp[0].iri));
        cowl_release((yyvsp[0].iri));
        if (!(yyval.class)) COWL_ERROR_MEM;
    }
#line 2648 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 24: /* datatype: iri  */
#line 361 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
          {
        (yyval.datatype) = cowl_datatype((yyvsp[0].iri));
        cowl_release((yyvsp[0].iri));
        if (!(yyval.datatype)) COWL_ERROR_MEM;
    }
#line 2658 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 25: /* object_property: iri  */
#line 371 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
          {
        (yyval.object_property) = cowl_obj_prop((yyvsp[0].iri));
        cowl_release((yyvsp[0].iri));
        if (!(yyval.object_property)) COWL_ERROR_MEM;
    }
#line 2668 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 26: /* data_property: iri  */
#line 381 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
          {
        (yyval.data_property) = cowl_data_prop((yyvsp[0].iri));
        cowl_release((yyvsp[0].iri));
        if (!(yyval.data_property)) COWL_ERROR_MEM;
    }
#line 2678 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 27: /* annotation_property: iri  */
#line 391 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
          {
        (yyval.annotation_property) = cowl_annot_prop((yyvsp[0].iri));
        cowl_release((yyvsp[0].iri));
        if (!(yyval.annotation_property)) COWL_ERROR_MEM;
    }
#line 2688 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 28: /* individual: named_individual  */
#line 401 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                       { (yyval.individual) = (CowlIndividual *)(yyvsp[0].named_individual); }
#line 2694 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 30: /* named_individual: iri  */
#line 406 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
          {
        (yyval.named_individual) = cowl_named_ind((yyvsp[0].iri));
        cowl_release((yyvsp[0].iri));
        if (!(yyval.named_individual)) COWL_ERROR_MEM;
    }
#line 2704 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 31: /* anonymous_individual: BLANK_NODE_LABEL  */
#line 414 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                       {
        (yyval.anonymous_individual) = (CowlIndividual *)cowl_anon_ind_from_string((yyvsp[0].BLANK_NODE_LABEL));
        if (!(yyval.anonymous_individual)) COWL_ERROR_MEM;
    }
#line 2713 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 32: /* quoted_string: QUOTED_STRING  */
#line 423 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                    {
        (yyval.quoted_string) = cowl_string_opt((yyvsp[0].QUOTED_STRING), COWL_SO_COPY);
        if (!(yyval.quoted_string)) COWL_ERROR_MEM;
    }
#line 2722 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 33: /* lang_tag: LANG_TAG  */
#line 430 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
               {
        (yyval.lang_tag) = cowl_string_opt((yyvsp[0].LANG_TAG), COWL_SO_COPY | COWL_SO_INTERN);
        if (!(yyval.lang_tag)) COWL_ERROR_MEM;
    }
#line 2731 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 34: /* literal: quoted_string DOUBLE_CARET datatype  */
#line 437 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                          {
        (yyval.literal) = cowl_literal((yyvsp[0].datatype), (yyvsp[-2].quoted_string), NULL);
        cowl_release((yyvsp[-2].quoted_string));
        cowl_release((yyvsp[0].datatype));
        if (!(yyval.literal)) COWL_ERROR_MEM;
    }
#line 2742 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 35: /* literal: quoted_string lang_tag  */
#line 443 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                             {
        (yyval.literal) = cowl_literal(NULL, (yyvsp[-1].quoted_string), (yyvsp[0].lang_tag));
        cowl_release((yyvsp[-1].quoted_string));
        cowl_release((yyvsp[0].lang_tag));
        if (!(yyval.literal)) COWL_ERROR_MEM;
    }
#line 2753 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 36: /* literal: quoted_string  */
#line 449 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                    {
        (yyval.literal) = cowl_literal(NULL, (yyvsp[0].quoted_string), NULL);
        cowl_release((yyvsp[0].quoted_string));
        if (!(yyval.literal)) COWL_ERROR_MEM;
    }
#line 2763 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 37: /* declaration: DECLARATION L_PAREN annotation_star entity R_PAREN  */
#line 459 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                         {
        (yyval.declaration) = (CowlAxiom *)cowl_decl_axiom((yyvsp[-1].entity), (yyvsp[-2].annotation_star));
        COWL_VEC_FINALIZE((yyvsp[-2].annotation_star));
        cowl_release((yyvsp[-1].entity));
        if (!(yyval.declaration)) COWL_ERROR_MEM;
    }
#line 2774 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 38: /* entity: CLASS L_PAREN class R_PAREN  */
#line 468 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                  {
        (yyval.entity) = (CowlEntity *)((yyvsp[-1].class));
    }
#line 2782 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 39: /* entity: DATATYPE L_PAREN datatype R_PAREN  */
#line 471 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                        {
        (yyval.entity) = (CowlEntity *)((yyvsp[-1].datatype));
    }
#line 2790 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 40: /* entity: OBJECT_PROPERTY L_PAREN object_property R_PAREN  */
#line 474 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                      {
        (yyval.entity) = (CowlEntity *)((yyvsp[-1].object_property));
    }
#line 2798 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 41: /* entity: DATA_PROPERTY L_PAREN data_property R_PAREN  */
#line 477 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                  {
        (yyval.entity) = (CowlEntity *)((yyvsp[-1].data_property));
    }
#line 2806 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 42: /* entity: ANNOTATION_PROPERTY L_PAREN annotation_property R_PAREN  */
#line 480 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                              {
        (yyval.entity) = (CowlEntity *)((yyvsp[-1].annotation_property));
    }
#line 2814 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 43: /* entity: NAMED_INDIVIDUAL L_PAREN named_individual R_PAREN  */
#line 483 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                        {
        (yyval.entity) = (CowlEntity *)((yyvsp[-1].named_individual));
    }
#line 2822 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 44: /* object_property_expression: object_property  */
#line 491 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                      { (yyval.object_property_expression) = (CowlObjPropExp *)(yyvsp[0].object_property); }
#line 2828 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 46: /* inverse_object_property: OBJECT_INVERSE_OF L_PAREN object_property R_PAREN  */
#line 496 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                        {
        (yyval.inverse_object_property) = (CowlObjPropExp *)cowl_inv_obj_prop((yyvsp[-1].object_property));
        cowl_release((yyvsp[-1].object_property));
        if (!(yyval.inverse_object_property)) COWL_ERROR_MEM;
    }
#line 2838 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 47: /* data_property_expression: data_property  */
#line 506 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                    { (yyval.data_property_expression) = (CowlDataPropExp *)(yyvsp[0].data_property); }
#line 2844 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 48: /* data_range: datatype  */
#line 512 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
               { (yyval.data_range) = (CowlDataRange *)(yyvsp[0].datatype); }
#line 2850 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 54: /* data_intersection_of: DATA_INTERSECTION_OF L_PAREN data_range_2_list R_PAREN  */
#line 521 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                             {
        (yyval.data_intersection_of) = (CowlDataRange *)cowl_nary_data(COWL_NT_INTERSECT, (yyvsp[-1].data_range_2_list));
        COWL_VEC_FINALIZE((yyvsp[-1].data_range_2_list));
        if (!(yyval.data_intersection_of)) COWL_ERROR_MEM;
    }
#line 2860 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 55: /* data_union_of: DATA_UNION_OF L_PAREN data_range_2_list R_PAREN  */
#line 529 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                      {
        (yyval.data_union_of) = (CowlDataRange *)cowl_nary_data(COWL_NT_UNION, (yyvsp[-1].data_range_2_list));
        COWL_VEC_FINALIZE((yyvsp[-1].data_range_2_list));
        if (!(yyval.data_union_of)) COWL_ERROR_MEM;
    }
#line 2870 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 56: /* data_complement_of: DATA_COMPLEMENT_OF L_PAREN data_range R_PAREN  */
#line 537 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                    {
        (yyval.data_complement_of) = (CowlDataRange *)cowl_data_compl((yyvsp[-1].data_range));
        cowl_release((yyvsp[-1].data_range));
        if (!(yyval.data_complement_of)) COWL_ERROR_MEM;
    }
#line 2880 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 57: /* data_one_of: DATA_ONE_OF L_PAREN literal_list R_PAREN  */
#line 545 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                               {
        (yyval.data_one_of) = (CowlDataRange *)cowl_data_one_of((yyvsp[-1].literal_list));
        COWL_VEC_FINALIZE((yyvsp[-1].literal_list));
        if (!(yyval.data_one_of)) COWL_ERROR_MEM;
    }
#line 2890 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 58: /* datatype_restriction: DATATYPE_RESTRICTION L_PAREN datatype facet_restriction_list R_PAREN  */
#line 553 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                           {
        (yyval.datatype_restriction) = (CowlDataRange *)cowl_datatype_restr((yyvsp[-2].datatype), (yyvsp[-1].facet_restriction_list));
        cowl_release((yyvsp[-2].datatype));
        COWL_VEC_FINALIZE((yyvsp[-1].facet_restriction_list));
        if (!(yyval.datatype_restriction)) COWL_ERROR_MEM;
    }
#line 2901 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 59: /* facet_restriction: iri literal  */
#line 562 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                  {
        (yyval.facet_restriction) = cowl_facet_restr((yyvsp[-1].iri), (yyvsp[0].literal));
        cowl_release((yyvsp[-1].iri));
        cowl_release((yyvsp[0].literal));
        if (!(yyval.facet_restriction)) COWL_ERROR_MEM;
    }
#line 2912 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 60: /* class_expression: class  */
#line 573 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
            { (yyval.class_expression) = (CowlClsExp *)(yyvsp[0].class); }
#line 2918 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 78: /* object_intersection_of: OBJECT_INTERSECTION_OF L_PAREN class_expression_2_list R_PAREN  */
#line 594 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                     {
        (yyval.object_intersection_of) = (CowlClsExp *)cowl_nary_bool(COWL_NT_INTERSECT, (yyvsp[-1].class_expression_2_list));
        COWL_VEC_FINALIZE((yyvsp[-1].class_expression_2_list));
        if (!(yyval.object_intersection_of)) COWL_ERROR_MEM;
    }
#line 2928 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 79: /* object_union_of: OBJECT_UNION_OF L_PAREN class_expression_2_list R_PAREN  */
#line 602 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                              {
        (yyval.object_union_of) = (CowlClsExp *)cowl_nary_bool(COWL_NT_UNION, (yyvsp[-1].class_expression_2_list));
        COWL_VEC_FINALIZE((yyvsp[-1].class_expression_2_list));
        if (!(yyval.object_union_of)) COWL_ERROR_MEM;
    }
#line 2938 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 80: /* object_complement_of: OBJECT_COMPLEMENT_OF L_PAREN class_expression R_PAREN  */
#line 610 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                            {
        (yyval.object_complement_of) = (CowlClsExp *)cowl_obj_compl((yyvsp[-1].class_expression));
        cowl_release((yyvsp[-1].class_expression));
        if (!(yyval.object_complement_of)) COWL_ERROR_MEM;
    }
#line 2948 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 81: /* object_one_of: OBJECT_ONE_OF L_PAREN individual_list R_PAREN  */
#line 618 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                    {
        (yyval.object_one_of) = (CowlClsExp *)cowl_obj_one_of((yyvsp[-1].individual_list));
        COWL_VEC_FINALIZE((yyvsp[-1].individual_list));
        if (!(yyval.object_one_of)) COWL_ERROR_MEM;
    }
#line 2958 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 82: /* object_some_values_from: OBJECT_SOME_VALUES_FROM L_PAREN object_property_expression class_expression R_PAREN  */
#line 626 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                                          {
        (yyval.object_some_values_from) = (CowlClsExp *)cowl_obj_quant(COWL_QT_SOME, (yyvsp[-2].object_property_expression), (yyvsp[-1].class_expression));
        cowl_release((yyvsp[-2].object_property_expression));
        cowl_release((yyvsp[-1].class_expression));
        if (!(yyval.object_some_values_from)) COWL_ERROR_MEM;
    }
#line 2969 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 83: /* object_all_values_from: OBJECT_ALL_VALUES_FROM L_PAREN object_property_expression class_expression R_PAREN  */
#line 635 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                                         {
        (yyval.object_all_values_from) = (CowlClsExp *)cowl_obj_quant(COWL_QT_ALL, (yyvsp[-2].object_property_expression), (yyvsp[-1].class_expression));
        cowl_release((yyvsp[-2].object_property_expression));
        cowl_release((yyvsp[-1].class_expression));
        if (!(yyval.object_all_values_from)) COWL_ERROR_MEM;
    }
#line 2980 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 84: /* object_has_value: OBJECT_HAS_VALUE L_PAREN object_property_expression individual R_PAREN  */
#line 644 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                             {
        (yyval.object_has_value) = (CowlClsExp *)cowl_obj_has_value((yyvsp[-2].object_property_expression), (yyvsp[-1].individual));
        cowl_release((yyvsp[-2].object_property_expression));
        cowl_release((yyvsp[-1].individual));
        if (!(yyval.object_has_value)) COWL_ERROR_MEM;
    }
#line 2991 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 85: /* object_has_self: OBJECT_HAS_SELF L_PAREN object_property_expression R_PAREN  */
#line 653 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                 {
        (yyval.object_has_self) = (CowlClsExp *)cowl_obj_has_self((yyvsp[-1].object_property_expression));
        cowl_release((yyvsp[-1].object_property_expression));
        if (!(yyval.object_has_self)) COWL_ERROR_MEM;
    }
#line 3001 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 86: /* object_min_cardinality: OBJECT_MIN_CARDINALITY L_PAREN cardinality object_property_expression R_PAREN  */
#line 661 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                                    {
        (yyval.object_min_cardinality) = (CowlClsExp *)cowl_obj_card(COWL_CT_MIN, (yyvsp[-1].object_property_expression), NULL, (yyvsp[-2].cardinality));
        cowl_release((yyvsp[-1].object_property_expression));
        if (!(yyval.object_min_cardinality)) COWL_ERROR_MEM;
    }
#line 3011 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 87: /* object_min_cardinality: OBJECT_MIN_CARDINALITY L_PAREN cardinality object_property_expression class_expression R_PAREN  */
#line 666 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                                                     {
        (yyval.object_min_cardinality) = (CowlClsExp *)cowl_obj_card(COWL_CT_MIN, (yyvsp[-2].object_property_expression), (yyvsp[-1].class_expression), (yyvsp[-3].cardinality));
        cowl_release((yyvsp[-2].object_property_expression));
        cowl_release((yyvsp[-1].class_expression));
        if (!(yyval.object_min_cardinality)) COWL_ERROR_MEM;
    }
#line 3022 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 88: /* object_max_cardinality: OBJECT_MAX_CARDINALITY L_PAREN cardinality object_property_expression R_PAREN  */
#line 675 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                                    {
        (yyval.object_max_cardinality) = (CowlClsExp *)cowl_obj_card(COWL_CT_MAX, (yyvsp[-1].object_property_expression), NULL, (yyvsp[-2].cardinality));
        cowl_release((yyvsp[-1].object_property_expression));
        if (!(yyval.object_max_cardinality)) COWL_ERROR_MEM;
    }
#line 3032 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 89: /* object_max_cardinality: OBJECT_MAX_CARDINALITY L_PAREN cardinality object_property_expression class_expression R_PAREN  */
#line 680 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                                                     {
        (yyval.object_max_cardinality) = (CowlClsExp *)cowl_obj_card(COWL_CT_MAX, (yyvsp[-2].object_property_expression), (yyvsp[-1].class_expression), (yyvsp[-3].cardinality));
        cowl_release((yyvsp[-2].object_property_expression));
        cowl_release((yyvsp[-1].class_expression));
        if (!(yyval.object_max_cardinality)) COWL_ERROR_MEM;
    }
#line 3043 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 90: /* object_exact_cardinality: OBJECT_EXACT_CARDINALITY L_PAREN cardinality object_property_expression R_PAREN  */
#line 689 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                                      {
        (yyval.object_exact_cardinality) = (CowlClsExp *)cowl_obj_card(COWL_CT_EXACT, (yyvsp[-1].object_property_expression), NULL, (yyvsp[-2].cardinality));
        cowl_release((yyvsp[-1].object_property_expression));
        if (!(yyval.object_exact_cardinality)) COWL_ERROR_MEM;
    }
#line 3053 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 91: /* object_exact_cardinality: OBJECT_EXACT_CARDINALITY L_PAREN cardinality object_property_expression class_expression R_PAREN  */
#line 694 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                                                       {
        (yyval.object_exact_cardinality) = (CowlClsExp *)cowl_obj_card(COWL_CT_EXACT, (yyvsp[-2].object_property_expression), (yyvsp[-1].class_expression), (yyvsp[-3].cardinality));
        cowl_release((yyvsp[-2].object_property_expression));
        cowl_release((yyvsp[-1].class_expression));
        if (!(yyval.object_exact_cardinality)) COWL_ERROR_MEM;
    }
#line 3064 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 93: /* data_some_values_from: DATA_SOME_VALUES_FROM L_PAREN data_property_expression data_range R_PAREN  */
#line 707 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                                {
        (yyval.data_some_values_from) = (CowlClsExp *)cowl_data_quant(COWL_QT_SOME, (yyvsp[-2].data_property_expression), (yyvsp[-1].data_range));
        cowl_release((yyvsp[-2].data_property_expression));
        cowl_release((yyvsp[-1].data_range));
        if (!(yyval.data_some_values_from)) COWL_ERROR_MEM;
    }
#line 3075 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 94: /* data_all_values_from: DATA_ALL_VALUES_FROM L_PAREN data_property_expression data_range R_PAREN  */
#line 716 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                               {
        (yyval.data_all_values_from) = (CowlClsExp *)cowl_data_quant(COWL_QT_ALL, (yyvsp[-2].data_property_expression), (yyvsp[-1].data_range));
        cowl_release((yyvsp[-2].data_property_expression));
        cowl_release((yyvsp[-1].data_range));
        if (!(yyval.data_all_values_from)) COWL_ERROR_MEM;
    }
#line 3086 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 95: /* data_has_value: DATA_HAS_VALUE L_PAREN data_property_expression literal R_PAREN  */
#line 725 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                      {
        (yyval.data_has_value) = (CowlClsExp *)cowl_data_has_value((yyvsp[-2].data_property_expression), (yyvsp[-1].literal));
        cowl_release((yyvsp[-2].data_property_expression));
        cowl_release((yyvsp[-1].literal));
        if (!(yyval.data_has_value)) COWL_ERROR_MEM;
    }
#line 3097 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 96: /* data_min_cardinality: DATA_MIN_CARDINALITY L_PAREN cardinality data_property_expression R_PAREN  */
#line 734 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                                {
        (yyval.data_min_cardinality) = (CowlClsExp *)cowl_data_card(COWL_CT_MIN, (yyvsp[-1].data_property_expression), NULL, (yyvsp[-2].cardinality));
        cowl_release((yyvsp[-1].data_property_expression));
        if (!(yyval.data_min_cardinality)) COWL_ERROR_MEM;
    }
#line 3107 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 97: /* data_min_cardinality: DATA_MIN_CARDINALITY L_PAREN cardinality data_property_expression data_range R_PAREN  */
#line 739 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                                           {
        (yyval.data_min_cardinality) = (CowlClsExp *)cowl_data_card(COWL_CT_MIN, (yyvsp[-2].data_property_expression), (yyvsp[-1].data_range), (yyvsp[-3].cardinality));
        cowl_release((yyvsp[-2].data_property_expression));
        cowl_release((yyvsp[-1].data_range));
        if (!(yyval.data_min_cardinality)) COWL_ERROR_MEM;
    }
#line 3118 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 98: /* data_max_cardinality: DATA_MAX_CARDINALITY L_PAREN cardinality data_property_expression R_PAREN  */
#line 748 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                                {
        (yyval.data_max_cardinality) = (CowlClsExp *)cowl_data_card(COWL_CT_MAX, (yyvsp[-1].data_property_expression), NULL, (yyvsp[-2].cardinality));
        cowl_release((yyvsp[-1].data_property_expression));
        if (!(yyval.data_max_cardinality)) COWL_ERROR_MEM;
    }
#line 3128 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 99: /* data_max_cardinality: DATA_MAX_CARDINALITY L_PAREN cardinality data_property_expression data_range R_PAREN  */
#line 753 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                                           {
        (yyval.data_max_cardinality) = (CowlClsExp *)cowl_data_card(COWL_CT_MAX, (yyvsp[-2].data_property_expression), (yyvsp[-1].data_range), (yyvsp[-3].cardinality));
        cowl_release((yyvsp[-2].data_property_expression));
        cowl_release((yyvsp[-1].data_range));
        if (!(yyval.data_max_cardinality)) COWL_ERROR_MEM;
    }
#line 3139 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 100: /* data_exact_cardinality: DATA_EXACT_CARDINALITY L_PAREN cardinality data_property_expression R_PAREN  */
#line 762 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                                  {
        (yyval.data_exact_cardinality) = (CowlClsExp *)cowl_data_card(COWL_CT_EXACT, (yyvsp[-1].data_property_expression), NULL, (yyvsp[-2].cardinality));
        cowl_release((yyvsp[-1].data_property_expression));
        if (!(yyval.data_exact_cardinality)) COWL_ERROR_MEM;
    }
#line 3149 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 101: /* data_exact_cardinality: DATA_EXACT_CARDINALITY L_PAREN cardinality data_property_expression data_range R_PAREN  */
#line 767 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                                             {
        (yyval.data_exact_cardinality) = (CowlClsExp *)cowl_data_card(COWL_CT_EXACT, (yyvsp[-2].data_property_expression), (yyvsp[-1].data_range), (yyvsp[-3].cardinality));
        cowl_release((yyvsp[-2].data_property_expression));
        cowl_release((yyvsp[-1].data_range));
        if (!(yyval.data_exact_cardinality)) COWL_ERROR_MEM;
    }
#line 3160 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 114: /* sub_class_of: SUB_CLASS_OF L_PAREN annotation_star class_expression class_expression R_PAREN  */
#line 798 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                                     {
        (yyval.sub_class_of) = (CowlAxiom *)cowl_sub_cls_axiom((yyvsp[-2].class_expression), (yyvsp[-1].class_expression), (yyvsp[-3].annotation_star));
        COWL_VEC_FINALIZE((yyvsp[-3].annotation_star));
        cowl_release((yyvsp[-2].class_expression));
        cowl_release((yyvsp[-1].class_expression));
        if (!(yyval.sub_class_of)) COWL_ERROR_MEM;
    }
#line 3172 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 115: /* equivalent_classes: EQUIVALENT_CLASSES L_PAREN annotation_star class_expression_2_list R_PAREN  */
#line 808 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                                 {
        (yyval.equivalent_classes) = (CowlAxiom *)cowl_nary_cls_axiom(COWL_NAT_EQUIV, (yyvsp[-1].class_expression_2_list), (yyvsp[-2].annotation_star));
        COWL_VEC_FINALIZE((yyvsp[-2].annotation_star));
        COWL_VEC_FINALIZE((yyvsp[-1].class_expression_2_list));
        if (!(yyval.equivalent_classes)) COWL_ERROR_MEM;
    }
#line 3183 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 116: /* disjoint_classes: DISJOINT_CLASSES L_PAREN annotation_star class_expression_2_list R_PAREN  */
#line 817 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                               {
        (yyval.disjoint_classes) = (CowlAxiom *)cowl_nary_cls_axiom(COWL_NAT_DISJ, (yyvsp[-1].class_expression_2_list), (yyvsp[-2].annotation_star));
        COWL_VEC_FINALIZE((yyvsp[-2].annotation_star));
        COWL_VEC_FINALIZE((yyvsp[-1].class_expression_2_list));
        if (!(yyval.disjoint_classes)) COWL_ERROR_MEM;
    }
#line 3194 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 117: /* disjoint_union: DISJOINT_UNION L_PAREN annotation_star class class_expression_2_list R_PAREN  */
#line 826 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                                   {
        (yyval.disjoint_union) = (CowlAxiom *)cowl_disj_union_axiom((yyvsp[-2].class), (yyvsp[-1].class_expression_2_list), (yyvsp[-3].annotation_star));
        COWL_VEC_FINALIZE((yyvsp[-3].annotation_star));
        cowl_release((yyvsp[-2].class));
        COWL_VEC_FINALIZE((yyvsp[-1].class_expression_2_list));
        if (!(yyval.disjoint_union)) COWL_ERROR_MEM;
    }
#line 3206 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 131: /* sub_object_property_of: SUB_OBJECT_PROPERTY_OF L_PAREN annotation_star object_property_expression object_property_expression R_PAREN  */
#line 854 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                                                                   {
        (yyval.sub_object_property_of) = (CowlAxiom *)cowl_sub_obj_prop_axiom((yyvsp[-2].object_property_expression), (yyvsp[-1].object_property_expression), (yyvsp[-3].annotation_star));
        COWL_VEC_FINALIZE((yyvsp[-3].annotation_star));
        cowl_release((yyvsp[-2].object_property_expression));
        cowl_release((yyvsp[-1].object_property_expression));
        if (!(yyval.sub_object_property_of)) COWL_ERROR_MEM;
    }
#line 3218 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 132: /* sub_object_property_of: SUB_OBJECT_PROPERTY_OF L_PAREN annotation_star property_expression_chain object_property_expression R_PAREN  */
#line 861 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                                                                  {
        (yyval.sub_object_property_of) = (CowlAxiom *)cowl_sub_obj_prop_chain_axiom((yyvsp[-2].property_expression_chain), (yyvsp[-1].object_property_expression), (yyvsp[-3].annotation_star));
        COWL_VEC_FINALIZE((yyvsp[-3].annotation_star));
        COWL_VEC_FINALIZE((yyvsp[-2].property_expression_chain));
        cowl_release((yyvsp[-1].object_property_expression));
        if (!(yyval.sub_object_property_of)) COWL_ERROR_MEM;
    }
#line 3230 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 133: /* property_expression_chain: OBJECT_PROPERTY_CHAIN L_PAREN object_property_expression_2_list R_PAREN  */
#line 871 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                              {
        (yyval.property_expression_chain) = (yyvsp[-1].object_property_expression_2_list);
    }
#line 3238 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 134: /* equivalent_object_properties: EQUIVALENT_OBJECT_PROPERTIES L_PAREN annotation_star object_property_expression_2_list R_PAREN  */
#line 877 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                                                     {
        (yyval.equivalent_object_properties) = (CowlAxiom *)cowl_nary_obj_prop_axiom(COWL_NAT_EQUIV, (yyvsp[-1].object_property_expression_2_list), (yyvsp[-2].annotation_star));
        COWL_VEC_FINALIZE((yyvsp[-2].annotation_star));
        COWL_VEC_FINALIZE((yyvsp[-1].object_property_expression_2_list));
        if (!(yyval.equivalent_object_properties)) COWL_ERROR_MEM;
    }
#line 3249 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 135: /* disjoint_object_properties: DISJOINT_OBJECT_PROPERTIES L_PAREN annotation_star object_property_expression_2_list R_PAREN  */
#line 886 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                                                   {
        (yyval.disjoint_object_properties) = (CowlAxiom *)cowl_nary_obj_prop_axiom(COWL_NAT_DISJ, (yyvsp[-1].object_property_expression_2_list), (yyvsp[-2].annotation_star));
        COWL_VEC_FINALIZE((yyvsp[-2].annotation_star));
        COWL_VEC_FINALIZE((yyvsp[-1].object_property_expression_2_list));
        if (!(yyval.disjoint_object_properties)) COWL_ERROR_MEM;
    }
#line 3260 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 136: /* inverse_object_properties: INVERSE_OBJECT_PROPERTIES L_PAREN annotation_star object_property_expression object_property_expression R_PAREN  */
#line 895 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                                                                      {
        (yyval.inverse_object_properties) = (CowlAxiom *)cowl_inv_obj_prop_axiom((yyvsp[-2].object_property_expression), (yyvsp[-1].object_property_expression), (yyvsp[-3].annotation_star));
        COWL_VEC_FINALIZE((yyvsp[-3].annotation_star));
        cowl_release((yyvsp[-2].object_property_expression));
        cowl_release((yyvsp[-1].object_property_expression));
        if (!(yyval.inverse_object_properties)) COWL_ERROR_MEM;
    }
#line 3272 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 137: /* object_property_domain: OBJECT_PROPERTY_DOMAIN L_PAREN annotation_star object_property_expression class_expression R_PAREN  */
#line 905 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                                                         {
        (yyval.object_property_domain) = (CowlAxiom *)cowl_obj_prop_domain_axiom((yyvsp[-2].object_property_expression), (yyvsp[-1].class_expression), (yyvsp[-3].annotation_star));
        COWL_VEC_FINALIZE((yyvsp[-3].annotation_star));
        cowl_release((yyvsp[-2].object_property_expression));
        cowl_release((yyvsp[-1].class_expression));
        if (!(yyval.object_property_domain)) COWL_ERROR_MEM;
    }
#line 3284 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 138: /* object_property_range: OBJECT_PROPERTY_RANGE L_PAREN annotation_star object_property_expression class_expression R_PAREN  */
#line 915 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                                                        {
        (yyval.object_property_range) = (CowlAxiom *)cowl_obj_prop_range_axiom((yyvsp[-2].object_property_expression), (yyvsp[-1].class_expression), (yyvsp[-3].annotation_star));
        COWL_VEC_FINALIZE((yyvsp[-3].annotation_star));
        cowl_release((yyvsp[-2].object_property_expression));
        cowl_release((yyvsp[-1].class_expression));
        if (!(yyval.object_property_range)) COWL_ERROR_MEM;
    }
#line 3296 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 139: /* functional_object_property: FUNCTIONAL_OBJECT_PROPERTY L_PAREN annotation_star object_property_expression R_PAREN  */
#line 925 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                                            {
        (yyval.functional_object_property) = (CowlAxiom *)cowl_obj_prop_char_axiom(COWL_CAT_FUNC, (yyvsp[-1].object_property_expression), (yyvsp[-2].annotation_star));
        COWL_VEC_FINALIZE((yyvsp[-2].annotation_star));
        cowl_release((yyvsp[-1].object_property_expression));
        if (!(yyval.functional_object_property)) COWL_ERROR_MEM;
    }
#line 3307 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 140: /* inverse_functional_object_property: INVERSE_FUNCTIONAL_OBJECT_PROPERTY L_PAREN annotation_star object_property_expression R_PAREN  */
#line 934 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                                                    {
        (yyval.inverse_functional_object_property) = (CowlAxiom *)cowl_obj_prop_char_axiom(COWL_CAT_INV_FUNC, (yyvsp[-1].object_property_expression), (yyvsp[-2].annotation_star));
        COWL_VEC_FINALIZE((yyvsp[-2].annotation_star));
        cowl_release((yyvsp[-1].object_property_expression));
        if (!(yyval.inverse_functional_object_property)) COWL_ERROR_MEM;
    }
#line 3318 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 141: /* reflexive_object_property: REFLEXIVE_OBJECT_PROPERTY L_PAREN annotation_star object_property_expression R_PAREN  */
#line 943 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                                           {
        (yyval.reflexive_object_property) = (CowlAxiom *)cowl_obj_prop_char_axiom(COWL_CAT_REFL, (yyvsp[-1].object_property_expression), (yyvsp[-2].annotation_star));
        COWL_VEC_FINALIZE((yyvsp[-2].annotation_star));
        cowl_release((yyvsp[-1].object_property_expression));
        if (!(yyval.reflexive_object_property)) COWL_ERROR_MEM;
    }
#line 3329 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 142: /* irreflexive_object_property: IRREFLEXIVE_OBJECT_PROPERTY L_PAREN annotation_star object_property_expression R_PAREN  */
#line 952 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                                             {
        (yyval.irreflexive_object_property) = (CowlAxiom *)cowl_obj_prop_char_axiom(COWL_CAT_IRREFL, (yyvsp[-1].object_property_expression), (yyvsp[-2].annotation_star));
        COWL_VEC_FINALIZE((yyvsp[-2].annotation_star));
        cowl_release((yyvsp[-1].object_property_expression));
        if (!(yyval.irreflexive_object_property)) COWL_ERROR_MEM;
    }
#line 3340 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 143: /* symmetric_object_property: SYMMETRIC_OBJECT_PROPERTY L_PAREN annotation_star object_property_expression R_PAREN  */
#line 961 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                                           {
        (yyval.symmetric_object_property) = (CowlAxiom *)cowl_obj_prop_char_axiom(COWL_CAT_SYMM, (yyvsp[-1].object_property_expression), (yyvsp[-2].annotation_star));
        COWL_VEC_FINALIZE((yyvsp[-2].annotation_star));
        cowl_release((yyvsp[-1].object_property_expression));
        if (!(yyval.symmetric_object_property)) COWL_ERROR_MEM;
    }
#line 3351 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 144: /* asymmetric_object_property: ASYMMETRIC_OBJECT_PROPERTY L_PAREN annotation_star object_property_expression R_PAREN  */
#line 970 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                                            {
        (yyval.asymmetric_object_property) = (CowlAxiom *)cowl_obj_prop_char_axiom(COWL_CAT_ASYMM, (yyvsp[-1].object_property_expression), (yyvsp[-2].annotation_star));
        COWL_VEC_FINALIZE((yyvsp[-2].annotation_star));
        cowl_release((yyvsp[-1].object_property_expression));
        if (!(yyval.asymmetric_object_property)) COWL_ERROR_MEM;
    }
#line 3362 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 145: /* transitive_object_property: TRANSITIVE_OBJECT_PROPERTY L_PAREN annotation_star object_property_expression R_PAREN  */
#line 979 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                                            {
        (yyval.transitive_object_property) = (CowlAxiom *)cowl_obj_prop_char_axiom(COWL_CAT_TRANS, (yyvsp[-1].object_property_expression), (yyvsp[-2].annotation_star));
        COWL_VEC_FINALIZE((yyvsp[-2].annotation_star));
        cowl_release((yyvsp[-1].object_property_expression));
        if (!(yyval.transitive_object_property)) COWL_ERROR_MEM;
    }
#line 3373 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 152: /* sub_data_property_of: SUB_DATA_PROPERTY_OF L_PAREN annotation_star data_property_expression data_property_expression R_PAREN  */
#line 999 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                                                             {
        (yyval.sub_data_property_of) = (CowlAxiom *)cowl_sub_data_prop_axiom((yyvsp[-2].data_property_expression), (yyvsp[-1].data_property_expression), (yyvsp[-3].annotation_star));
        COWL_VEC_FINALIZE((yyvsp[-3].annotation_star));
        cowl_release((yyvsp[-2].data_property_expression));
        cowl_release((yyvsp[-1].data_property_expression));
        if (!(yyval.sub_data_property_of)) COWL_ERROR_MEM;
    }
#line 3385 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 153: /* equivalent_data_properties: EQUIVALENT_DATA_PROPERTIES L_PAREN annotation_star data_property_expression_2_list R_PAREN  */
#line 1009 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                                                 {
        (yyval.equivalent_data_properties) = (CowlAxiom *)cowl_nary_data_prop_axiom(COWL_NAT_EQUIV, (yyvsp[-1].data_property_expression_2_list), (yyvsp[-2].annotation_star));
        COWL_VEC_FINALIZE((yyvsp[-2].annotation_star));
        COWL_VEC_FINALIZE((yyvsp[-1].data_property_expression_2_list));
        if (!(yyval.equivalent_data_properties)) COWL_ERROR_MEM;
    }
#line 3396 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 154: /* disjoint_data_properties: DISJOINT_DATA_PROPERTIES L_PAREN annotation_star data_property_expression_2_list R_PAREN  */
#line 1018 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                                               {
        (yyval.disjoint_data_properties) = (CowlAxiom *)cowl_nary_data_prop_axiom(COWL_NAT_DISJ, (yyvsp[-1].data_property_expression_2_list), (yyvsp[-2].annotation_star));
        COWL_VEC_FINALIZE((yyvsp[-2].annotation_star));
        COWL_VEC_FINALIZE((yyvsp[-1].data_property_expression_2_list));
        if (!(yyval.disjoint_data_properties)) COWL_ERROR_MEM;
    }
#line 3407 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 155: /* data_property_domain: DATA_PROPERTY_DOMAIN L_PAREN annotation_star data_property_expression class_expression R_PAREN  */
#line 1027 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                                                     {
        (yyval.data_property_domain) = (CowlAxiom *)cowl_data_prop_domain_axiom((yyvsp[-2].data_property_expression), (yyvsp[-1].class_expression), (yyvsp[-3].annotation_star));
        COWL_VEC_FINALIZE((yyvsp[-3].annotation_star));
        cowl_release((yyvsp[-2].data_property_expression));
        cowl_release((yyvsp[-1].class_expression));
        if (!(yyval.data_property_domain)) COWL_ERROR_MEM;
    }
#line 3419 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 156: /* data_property_range: DATA_PROPERTY_RANGE L_PAREN annotation_star data_property_expression data_range R_PAREN  */
#line 1037 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                                              {
        (yyval.data_property_range) = (CowlAxiom *)cowl_data_prop_range_axiom((yyvsp[-2].data_property_expression), (yyvsp[-1].data_range), (yyvsp[-3].annotation_star));
        COWL_VEC_FINALIZE((yyvsp[-3].annotation_star));
        cowl_release((yyvsp[-2].data_property_expression));
        cowl_release((yyvsp[-1].data_range));
        if (!(yyval.data_property_range)) COWL_ERROR_MEM;
    }
#line 3431 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 157: /* functional_data_property: FUNCTIONAL_DATA_PROPERTY L_PAREN annotation_star data_property_expression R_PAREN  */
#line 1047 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                                        {
        (yyval.functional_data_property) = (CowlAxiom *)cowl_func_data_prop_axiom((yyvsp[-1].data_property_expression), (yyvsp[-2].annotation_star));
        COWL_VEC_FINALIZE((yyvsp[-2].annotation_star));
        cowl_release((yyvsp[-1].data_property_expression));
        if (!(yyval.functional_data_property)) COWL_ERROR_MEM;
    }
#line 3442 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 158: /* datatype_definition: DATATYPE_DEFINITION L_PAREN annotation_star datatype data_range R_PAREN  */
#line 1058 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                              {
        (yyval.datatype_definition) = (CowlAxiom *)cowl_datatype_def_axiom((yyvsp[-2].datatype), (yyvsp[-1].data_range), (yyvsp[-3].annotation_star));
        COWL_VEC_FINALIZE((yyvsp[-3].annotation_star));
        cowl_release((yyvsp[-2].datatype));
        cowl_release((yyvsp[-1].data_range));
        if (!(yyval.datatype_definition)) COWL_ERROR_MEM;
    }
#line 3454 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 159: /* has_key: HAS_KEY L_PAREN annotation_star class_expression L_PAREN object_property_expression_star R_PAREN L_PAREN data_property_expression_star R_PAREN R_PAREN  */
#line 1073 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                {
        (yyval.has_key) = (CowlAxiom *)cowl_has_key_axiom((yyvsp[-7].class_expression), (yyvsp[-5].object_property_expression_star), (yyvsp[-2].data_property_expression_star), (yyvsp[-8].annotation_star));
        COWL_VEC_FINALIZE((yyvsp[-8].annotation_star));
        cowl_release((yyvsp[-7].class_expression));
        COWL_VEC_FINALIZE((yyvsp[-5].object_property_expression_star));
        COWL_VEC_FINALIZE((yyvsp[-2].data_property_expression_star));
        if (!(yyval.has_key)) COWL_ERROR_MEM;
    }
#line 3467 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 167: /* same_individual: SAME_INDIVIDUAL L_PAREN annotation_star individual_2_list R_PAREN  */
#line 1096 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                        {
        (yyval.same_individual) = (CowlAxiom *)cowl_nary_ind_axiom(COWL_NAT_SAME, (yyvsp[-1].individual_2_list), (yyvsp[-2].annotation_star));
        COWL_VEC_FINALIZE((yyvsp[-2].annotation_star));
        COWL_VEC_FINALIZE((yyvsp[-1].individual_2_list));
        if (!(yyval.same_individual)) COWL_ERROR_MEM;
    }
#line 3478 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 168: /* different_individuals: DIFFERENT_INDIVIDUALS L_PAREN annotation_star individual_2_list R_PAREN  */
#line 1105 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                              {
        (yyval.different_individuals) = (CowlAxiom *)cowl_nary_ind_axiom(COWL_NAT_DIFF, (yyvsp[-1].individual_2_list), (yyvsp[-2].annotation_star));
        COWL_VEC_FINALIZE((yyvsp[-2].annotation_star));
        COWL_VEC_FINALIZE((yyvsp[-1].individual_2_list));
        if (!(yyval.different_individuals)) COWL_ERROR_MEM;
    }
#line 3489 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 169: /* class_assertion: CLASS_ASSERTION L_PAREN annotation_star class_expression individual R_PAREN  */
#line 1114 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                                  {
        (yyval.class_assertion) = (CowlAxiom *)cowl_cls_assert_axiom((yyvsp[-2].class_expression), (yyvsp[-1].individual), (yyvsp[-3].annotation_star));
        COWL_VEC_FINALIZE((yyvsp[-3].annotation_star));
        cowl_release((yyvsp[-2].class_expression));
        cowl_release((yyvsp[-1].individual));
        if (!(yyval.class_assertion)) COWL_ERROR_MEM;
    }
#line 3501 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 170: /* object_property_assertion: OBJECT_PROPERTY_ASSERTION L_PAREN annotation_star object_property_expression individual individual R_PAREN  */
#line 1124 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                                                                 {
        (yyval.object_property_assertion) = (CowlAxiom *)cowl_obj_prop_assert_axiom((yyvsp[-3].object_property_expression), (yyvsp[-2].individual), (yyvsp[-1].individual), (yyvsp[-4].annotation_star));
        COWL_VEC_FINALIZE((yyvsp[-4].annotation_star));
        cowl_release((yyvsp[-3].object_property_expression));
        cowl_release((yyvsp[-2].individual));
        cowl_release((yyvsp[-1].individual));
        if (!(yyval.object_property_assertion)) COWL_ERROR_MEM;
    }
#line 3514 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 171: /* negative_object_property_assertion: NEGATIVE_OBJECT_PROPERTY_ASSERTION L_PAREN annotation_star object_property_expression individual individual R_PAREN  */
#line 1135 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                                                                          {
        (yyval.negative_object_property_assertion) = (CowlAxiom *)cowl_neg_obj_prop_assert_axiom((yyvsp[-3].object_property_expression), (yyvsp[-2].individual), (yyvsp[-1].individual), (yyvsp[-4].annotation_star));
        COWL_VEC_FINALIZE((yyvsp[-4].annotation_star));
        cowl_release((yyvsp[-3].object_property_expression));
        cowl_release((yyvsp[-2].individual));
        cowl_release((yyvsp[-1].individual));
        if (!(yyval.negative_object_property_assertion)) COWL_ERROR_MEM;
    }
#line 3527 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 172: /* data_property_assertion: DATA_PROPERTY_ASSERTION L_PAREN annotation_star data_property_expression individual literal R_PAREN  */
#line 1146 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                                                          {
        (yyval.data_property_assertion) = (CowlAxiom *)cowl_data_prop_assert_axiom((yyvsp[-3].data_property_expression), (yyvsp[-2].individual), (yyvsp[-1].literal), (yyvsp[-4].annotation_star));
        COWL_VEC_FINALIZE((yyvsp[-4].annotation_star));
        cowl_release((yyvsp[-3].data_property_expression));
        cowl_release((yyvsp[-2].individual));
        cowl_release((yyvsp[-1].literal));
        if (!(yyval.data_property_assertion)) COWL_ERROR_MEM;
    }
#line 3540 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 173: /* negative_data_property_assertion: NEGATIVE_DATA_PROPERTY_ASSERTION L_PAREN annotation_star data_property_expression individual literal R_PAREN  */
#line 1157 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                                                                   {
        (yyval.negative_data_property_assertion) = (CowlAxiom *)cowl_neg_data_prop_assert_axiom((yyvsp[-3].data_property_expression), (yyvsp[-2].individual), (yyvsp[-1].literal), (yyvsp[-4].annotation_star));
        COWL_VEC_FINALIZE((yyvsp[-4].annotation_star));
        cowl_release((yyvsp[-3].data_property_expression));
        cowl_release((yyvsp[-2].individual));
        cowl_release((yyvsp[-1].literal));
        if (!(yyval.negative_data_property_assertion)) COWL_ERROR_MEM;
    }
#line 3553 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 174: /* annotation: ANNOTATION L_PAREN annotation_star annotation_property annotation_value R_PAREN  */
#line 1170 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                                      {
        (yyval.annotation) = cowl_annotation((yyvsp[-2].annotation_property), (yyvsp[-1].annotation_value), (yyvsp[-3].annotation_star));
        COWL_VEC_FINALIZE((yyvsp[-3].annotation_star));
        cowl_release((yyvsp[-2].annotation_property));
        cowl_release((yyvsp[-1].annotation_value));
        if (!(yyval.annotation)) COWL_ERROR_MEM;
    }
#line 3565 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 175: /* annotation_value: anonymous_individual  */
#line 1180 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                           {
        (yyval.annotation_value) = (CowlAnnotValue *)((yyvsp[0].anonymous_individual));
    }
#line 3573 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 176: /* annotation_value: iri  */
#line 1183 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
          {
        (yyval.annotation_value) = (CowlAnnotValue *)((yyvsp[0].iri));
    }
#line 3581 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 177: /* annotation_value: literal  */
#line 1186 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
              {
        (yyval.annotation_value) = (CowlAnnotValue *)((yyvsp[0].literal));
    }
#line 3589 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 182: /* annotation_assertion: ANNOTATION_ASSERTION L_PAREN annotation_star annotation_property annotation_subject annotation_value R_PAREN  */
#line 1201 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                                                                   {
        (yyval.annotation_assertion) = (CowlAxiom *)cowl_annot_assert_axiom((yyvsp[-3].annotation_property), (yyvsp[-2].annotation_subject), (yyvsp[-1].annotation_value), (yyvsp[-4].annotation_star));
        COWL_VEC_FINALIZE((yyvsp[-4].annotation_star));
        cowl_release((yyvsp[-3].annotation_property));
        cowl_release((yyvsp[-2].annotation_subject));
        cowl_release((yyvsp[-1].annotation_value));
        if (!(yyval.annotation_assertion)) COWL_ERROR_MEM;
    }
#line 3602 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 183: /* annotation_subject: iri  */
#line 1212 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
          {
        (yyval.annotation_subject) = (CowlAnnotValue *)((yyvsp[0].iri));
    }
#line 3610 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 184: /* annotation_subject: anonymous_individual  */
#line 1215 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                           {
        (yyval.annotation_subject) = (CowlAnnotValue *)((yyvsp[0].anonymous_individual));
    }
#line 3618 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 185: /* sub_annotation_property_of: SUB_ANNOTATION_PROPERTY_OF L_PAREN annotation_star annotation_property annotation_property R_PAREN  */
#line 1221 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                                                         {
        (yyval.sub_annotation_property_of) = (CowlAxiom *)cowl_sub_annot_prop_axiom((yyvsp[-2].annotation_property), (yyvsp[-1].annotation_property), (yyvsp[-3].annotation_star));
        COWL_VEC_FINALIZE((yyvsp[-3].annotation_star));
        cowl_release((yyvsp[-2].annotation_property));
        cowl_release((yyvsp[-1].annotation_property));
        if (!(yyval.sub_annotation_property_of)) COWL_ERROR_MEM;
    }
#line 3630 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 186: /* annotation_property_domain: ANNOTATION_PROPERTY_DOMAIN L_PAREN annotation_star annotation_property iri R_PAREN  */
#line 1231 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                                         {
        (yyval.annotation_property_domain) = (CowlAxiom *)cowl_annot_prop_domain_axiom((yyvsp[-2].annotation_property), (yyvsp[-1].iri), (yyvsp[-3].annotation_star));
        COWL_VEC_FINALIZE((yyvsp[-3].annotation_star));
        cowl_release((yyvsp[-2].annotation_property));
        cowl_release((yyvsp[-1].iri));
        if (!(yyval.annotation_property_domain)) COWL_ERROR_MEM;
    }
#line 3642 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 187: /* annotation_property_range: ANNOTATION_PROPERTY_RANGE L_PAREN annotation_star annotation_property iri R_PAREN  */
#line 1241 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                                        {
        (yyval.annotation_property_range) = (CowlAxiom *)cowl_annot_prop_range_axiom((yyvsp[-2].annotation_property), (yyvsp[-1].iri), (yyvsp[-3].annotation_star));
        COWL_VEC_FINALIZE((yyvsp[-3].annotation_star));
        cowl_release((yyvsp[-2].annotation_property));
        cowl_release((yyvsp[-1].iri));
        if (!(yyval.annotation_property_range)) COWL_ERROR_MEM;
    }
#line 3654 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 188: /* annotation_star: %empty  */
#line 1253 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
             {
        (yyval.annotation_star) = NULL;
    }
#line 3662 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 189: /* annotation_star: annotation_star annotation  */
#line 1256 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                 {
        if ((yyvsp[-1].annotation_star)) {
            (yyval.annotation_star) = (yyvsp[-1].annotation_star);
        } else {
            (yyval.annotation_star) = cowl_vector_empty();
            if (!(yyval.annotation_star)) COWL_ERROR_MEM;
        }
        COWL_VEC_PUSH(annotation, (yyval.annotation_star), (yyvsp[0].annotation));
    }
#line 3676 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 190: /* class_expression_list: class_expression  */
#line 1268 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                       {
        (yyval.class_expression_list) = cowl_vector_empty();
        if (!(yyval.class_expression_list)) COWL_ERROR_MEM;
        COWL_VEC_PUSH(cls_exp, (yyval.class_expression_list), (yyvsp[0].class_expression));
    }
#line 3686 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 191: /* class_expression_list: class_expression_list class_expression  */
#line 1273 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                             {
        (yyval.class_expression_list) = (yyvsp[-1].class_expression_list);
        COWL_VEC_PUSH(cls_exp, (yyval.class_expression_list), (yyvsp[0].class_expression));
    }
#line 3695 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 192: /* class_expression_2_list: class_expression_list class_expression  */
#line 1280 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                             {
        (yyval.class_expression_2_list) = (yyvsp[-1].class_expression_list);
        COWL_VEC_PUSH(cls_exp, (yyval.class_expression_2_list), (yyvsp[0].class_expression));
    }
#line 3704 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 193: /* data_property_expression_list: data_property_expression  */
#line 1287 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                               {
        (yyval.data_property_expression_list) = cowl_vector_empty();
        if (!(yyval.data_property_expression_list)) COWL_ERROR_MEM;
        COWL_VEC_PUSH(data_prop_exp, (yyval.data_property_expression_list), (yyvsp[0].data_property_expression));
    }
#line 3714 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 194: /* data_property_expression_list: data_property_expression_list data_property_expression  */
#line 1292 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                             {
        (yyval.data_property_expression_list) = (yyvsp[-1].data_property_expression_list);
        COWL_VEC_PUSH(data_prop_exp, (yyval.data_property_expression_list), (yyvsp[0].data_property_expression));
    }
#line 3723 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 195: /* data_property_expression_2_list: data_property_expression_list data_property_expression  */
#line 1299 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                             {
        (yyval.data_property_expression_2_list) = (yyvsp[-1].data_property_expression_list);
        COWL_VEC_PUSH(data_prop_exp, (yyval.data_property_expression_2_list), (yyvsp[0].data_property_expression));
    }
#line 3732 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 196: /* data_property_expression_star: %empty  */
#line 1306 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
             {
        (yyval.data_property_expression_star) = NULL;
    }
#line 3740 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 197: /* data_property_expression_star: data_property_expression_star data_property_expression  */
#line 1309 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                             {
        if ((yyvsp[-1].data_property_expression_star)) {
            (yyval.data_property_expression_star) = (yyvsp[-1].data_property_expression_star);
        } else {
            (yyval.data_property_expression_star) = cowl_vector_empty();
            if (!(yyval.data_property_expression_star)) COWL_ERROR_MEM;
        }
        COWL_VEC_PUSH(data_prop_exp, (yyval.data_property_expression_star), (yyvsp[0].data_property_expression));
    }
#line 3754 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 198: /* data_range_list: data_range  */
#line 1321 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                 {
        (yyval.data_range_list) = cowl_vector_empty();
        if (!(yyval.data_range_list)) COWL_ERROR_MEM;
        COWL_VEC_PUSH(data_range, (yyval.data_range_list), (yyvsp[0].data_range));
    }
#line 3764 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 199: /* data_range_list: data_range_list data_range  */
#line 1326 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                 {
        (yyval.data_range_list) = (yyvsp[-1].data_range_list);
        COWL_VEC_PUSH(data_range, (yyval.data_range_list), (yyvsp[0].data_range));
    }
#line 3773 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 200: /* data_range_2_list: data_range_list data_range  */
#line 1333 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                 {
        (yyval.data_range_2_list) = (yyvsp[-1].data_range_list);
        COWL_VEC_PUSH(data_range, (yyval.data_range_2_list), (yyvsp[0].data_range));
    }
#line 3782 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 201: /* facet_restriction_list: facet_restriction  */
#line 1340 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                        {
        (yyval.facet_restriction_list) = cowl_vector_empty();
        if (!(yyval.facet_restriction_list)) COWL_ERROR_MEM;
        COWL_VEC_PUSH(facet_restr, (yyval.facet_restriction_list), (yyvsp[0].facet_restriction));
    }
#line 3792 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 202: /* facet_restriction_list: facet_restriction_list facet_restriction  */
#line 1345 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                               {
        (yyval.facet_restriction_list) = (yyvsp[-1].facet_restriction_list);
        COWL_VEC_PUSH(facet_restr, (yyval.facet_restriction_list), (yyvsp[0].facet_restriction));
    }
#line 3801 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 203: /* individual_list: individual  */
#line 1352 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                 {
        (yyval.individual_list) = cowl_vector_empty();
        if (!(yyval.individual_list)) COWL_ERROR_MEM;
        COWL_VEC_PUSH(individual, (yyval.individual_list), (yyvsp[0].individual));
    }
#line 3811 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 204: /* individual_list: individual_list individual  */
#line 1357 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                 {
        (yyval.individual_list) = (yyvsp[-1].individual_list);
        COWL_VEC_PUSH(individual, (yyval.individual_list), (yyvsp[0].individual));
    }
#line 3820 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 205: /* individual_2_list: individual_list individual  */
#line 1364 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                 {
        (yyval.individual_2_list) = (yyvsp[-1].individual_list);
        COWL_VEC_PUSH(individual, (yyval.individual_2_list), (yyvsp[0].individual));
    }
#line 3829 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 206: /* literal_list: literal  */
#line 1371 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
              {
        (yyval.literal_list) = cowl_vector_empty();
        if (!(yyval.literal_list)) COWL_ERROR_MEM;
        COWL_VEC_PUSH(literal, (yyval.literal_list), (yyvsp[0].literal));
    }
#line 3839 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 207: /* literal_list: literal_list literal  */
#line 1376 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                           {
        (yyval.literal_list) = (yyvsp[-1].literal_list);
        COWL_VEC_PUSH(literal, (yyval.literal_list), (yyvsp[0].literal));
    }
#line 3848 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 208: /* object_property_expression_list: object_property_expression  */
#line 1383 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                 {
        (yyval.object_property_expression_list) = cowl_vector_empty();
        if (!(yyval.object_property_expression_list)) COWL_ERROR_MEM;
        COWL_VEC_PUSH(obj_prop_exp, (yyval.object_property_expression_list), (yyvsp[0].object_property_expression));
    }
#line 3858 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 209: /* object_property_expression_list: object_property_expression_list object_property_expression  */
#line 1388 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                 {
        (yyval.object_property_expression_list) = (yyvsp[-1].object_property_expression_list);
        COWL_VEC_PUSH(obj_prop_exp, (yyval.object_property_expression_list), (yyvsp[0].object_property_expression));
    }
#line 3867 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 210: /* object_property_expression_2_list: object_property_expression_list object_property_expression  */
#line 1395 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                 {
        (yyval.object_property_expression_2_list) = (yyvsp[-1].object_property_expression_list);
        COWL_VEC_PUSH(obj_prop_exp, (yyval.object_property_expression_2_list), (yyvsp[0].object_property_expression));
    }
#line 3876 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 211: /* object_property_expression_star: %empty  */
#line 1402 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
             {
        (yyval.object_property_expression_star) = NULL;
    }
#line 3884 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;

  case 212: /* object_property_expression_star: object_property_expression_star object_property_expression  */
#line 1405 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"
                                                                 {
        if ((yyvsp[-1].object_property_expression_star)) {
            (yyval.object_property_expression_star) = (yyvsp[-1].object_property_expression_star);
        } else {
            (yyval.object_property_expression_star) = cowl_vector_empty();
            if (!(yyval.object_property_expression_star)) COWL_ERROR_MEM;
        }
        COWL_VEC_PUSH(obj_prop_exp, (yyval.object_property_expression_star), (yyvsp[0].object_property_expression));
    }
#line 3898 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"
    break;


#line 3902 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == COWL_FUNC_YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (&yylloc, scanner, stream, YY_("syntax error"));
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= COWL_FUNC_YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == COWL_FUNC_YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, scanner, stream);
          yychar = COWL_FUNC_YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, scanner, stream);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, scanner, stream, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != COWL_FUNC_YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, scanner, stream);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, scanner, stream);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 1416 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"

