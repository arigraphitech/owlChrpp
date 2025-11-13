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

#ifndef YY_COWL_FUNC_YY_HOME_ETUD_T_L_CHARGEMENTS_STAGE_STAGE_LABO_PARSERPROJECT_BUILD_TEST_LIB_COWL_SRC_READER_FUNCTIONAL_COWL_FUNC_YYPARSER_H_INCLUDED
# define YY_COWL_FUNC_YY_HOME_ETUD_T_L_CHARGEMENTS_STAGE_STAGE_LABO_PARSERPROJECT_BUILD_TEST_LIB_COWL_SRC_READER_FUNCTIONAL_COWL_FUNC_YYPARSER_H_INCLUDED
/* Debug traces.  */
#ifndef COWL_FUNC_YYDEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define COWL_FUNC_YYDEBUG 1
#  else
#   define COWL_FUNC_YYDEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define COWL_FUNC_YYDEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined COWL_FUNC_YYDEBUG */
#if COWL_FUNC_YYDEBUG
extern int cowl_func_yydebug;
#endif
/* "%code requires" blocks.  */
#line 33 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"

    #include "cowl_types.h"

    #ifndef YY_TYPEDEF_YY_SCANNER_T
    #define YY_TYPEDEF_YY_SCANNER_T
    typedef void* yyscan_t;
    #endif

#line 66 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.h"

/* Token kinds.  */
#ifndef COWL_FUNC_YYTOKENTYPE
# define COWL_FUNC_YYTOKENTYPE
  enum cowl_func_yytokentype
  {
    COWL_FUNC_YYEMPTY = -2,
    COWL_FUNC_YYEOF = 0,           /* "end of file"  */
    COWL_FUNC_YYerror = 256,       /* error  */
    COWL_FUNC_YYUNDEF = 257,       /* "invalid token"  */
    NON_NEGATIVE_INTEGER = 258,    /* NON_NEGATIVE_INTEGER  */
    QUOTED_STRING = 259,           /* QUOTED_STRING  */
    BLANK_NODE_LABEL = 260,        /* BLANK_NODE_LABEL  */
    PNAME_NS = 261,                /* PNAME_NS  */
    PNAME_LN = 262,                /* PNAME_LN  */
    LANG_TAG = 263,                /* LANG_TAG  */
    IRI_REF = 264,                 /* IRI_REF  */
    L_PAREN = 265,                 /* L_PAREN  */
    R_PAREN = 266,                 /* R_PAREN  */
    EQUALS = 267,                  /* EQUALS  */
    DOUBLE_CARET = 268,            /* DOUBLE_CARET  */
    IMPORT = 269,                  /* IMPORT  */
    ONTOLOGY = 270,                /* ONTOLOGY  */
    PREFIX = 271,                  /* PREFIX  */
    DECLARATION = 272,             /* DECLARATION  */
    ANNOTATION = 273,              /* ANNOTATION  */
    DATATYPE_DEFINITION = 274,     /* DATATYPE_DEFINITION  */
    HAS_KEY = 275,                 /* HAS_KEY  */
    CLASS = 276,                   /* CLASS  */
    DATATYPE = 277,                /* DATATYPE  */
    OBJECT_PROPERTY = 278,         /* OBJECT_PROPERTY  */
    DATA_PROPERTY = 279,           /* DATA_PROPERTY  */
    ANNOTATION_PROPERTY = 280,     /* ANNOTATION_PROPERTY  */
    NAMED_INDIVIDUAL = 281,        /* NAMED_INDIVIDUAL  */
    DATA_INTERSECTION_OF = 282,    /* DATA_INTERSECTION_OF  */
    DATA_UNION_OF = 283,           /* DATA_UNION_OF  */
    DATA_COMPLEMENT_OF = 284,      /* DATA_COMPLEMENT_OF  */
    DATA_ONE_OF = 285,             /* DATA_ONE_OF  */
    DATATYPE_RESTRICTION = 286,    /* DATATYPE_RESTRICTION  */
    DATA_SOME_VALUES_FROM = 287,   /* DATA_SOME_VALUES_FROM  */
    DATA_ALL_VALUES_FROM = 288,    /* DATA_ALL_VALUES_FROM  */
    DATA_HAS_VALUE = 289,          /* DATA_HAS_VALUE  */
    DATA_MIN_CARDINALITY = 290,    /* DATA_MIN_CARDINALITY  */
    DATA_MAX_CARDINALITY = 291,    /* DATA_MAX_CARDINALITY  */
    DATA_EXACT_CARDINALITY = 292,  /* DATA_EXACT_CARDINALITY  */
    OBJECT_INVERSE_OF = 293,       /* OBJECT_INVERSE_OF  */
    OBJECT_INTERSECTION_OF = 294,  /* OBJECT_INTERSECTION_OF  */
    OBJECT_UNION_OF = 295,         /* OBJECT_UNION_OF  */
    OBJECT_COMPLEMENT_OF = 296,    /* OBJECT_COMPLEMENT_OF  */
    OBJECT_ONE_OF = 297,           /* OBJECT_ONE_OF  */
    OBJECT_SOME_VALUES_FROM = 298, /* OBJECT_SOME_VALUES_FROM  */
    OBJECT_ALL_VALUES_FROM = 299,  /* OBJECT_ALL_VALUES_FROM  */
    OBJECT_HAS_VALUE = 300,        /* OBJECT_HAS_VALUE  */
    OBJECT_HAS_SELF = 301,         /* OBJECT_HAS_SELF  */
    OBJECT_MIN_CARDINALITY = 302,  /* OBJECT_MIN_CARDINALITY  */
    OBJECT_MAX_CARDINALITY = 303,  /* OBJECT_MAX_CARDINALITY  */
    OBJECT_EXACT_CARDINALITY = 304, /* OBJECT_EXACT_CARDINALITY  */
    SUB_CLASS_OF = 305,            /* SUB_CLASS_OF  */
    EQUIVALENT_CLASSES = 306,      /* EQUIVALENT_CLASSES  */
    DISJOINT_CLASSES = 307,        /* DISJOINT_CLASSES  */
    DISJOINT_UNION = 308,          /* DISJOINT_UNION  */
    SUB_OBJECT_PROPERTY_OF = 309,  /* SUB_OBJECT_PROPERTY_OF  */
    EQUIVALENT_OBJECT_PROPERTIES = 310, /* EQUIVALENT_OBJECT_PROPERTIES  */
    DISJOINT_OBJECT_PROPERTIES = 311, /* DISJOINT_OBJECT_PROPERTIES  */
    OBJECT_PROPERTY_CHAIN = 312,   /* OBJECT_PROPERTY_CHAIN  */
    INVERSE_OBJECT_PROPERTIES = 313, /* INVERSE_OBJECT_PROPERTIES  */
    OBJECT_PROPERTY_DOMAIN = 314,  /* OBJECT_PROPERTY_DOMAIN  */
    OBJECT_PROPERTY_RANGE = 315,   /* OBJECT_PROPERTY_RANGE  */
    FUNCTIONAL_OBJECT_PROPERTY = 316, /* FUNCTIONAL_OBJECT_PROPERTY  */
    INVERSE_FUNCTIONAL_OBJECT_PROPERTY = 317, /* INVERSE_FUNCTIONAL_OBJECT_PROPERTY  */
    REFLEXIVE_OBJECT_PROPERTY = 318, /* REFLEXIVE_OBJECT_PROPERTY  */
    IRREFLEXIVE_OBJECT_PROPERTY = 319, /* IRREFLEXIVE_OBJECT_PROPERTY  */
    SYMMETRIC_OBJECT_PROPERTY = 320, /* SYMMETRIC_OBJECT_PROPERTY  */
    ASYMMETRIC_OBJECT_PROPERTY = 321, /* ASYMMETRIC_OBJECT_PROPERTY  */
    TRANSITIVE_OBJECT_PROPERTY = 322, /* TRANSITIVE_OBJECT_PROPERTY  */
    SUB_DATA_PROPERTY_OF = 323,    /* SUB_DATA_PROPERTY_OF  */
    EQUIVALENT_DATA_PROPERTIES = 324, /* EQUIVALENT_DATA_PROPERTIES  */
    DISJOINT_DATA_PROPERTIES = 325, /* DISJOINT_DATA_PROPERTIES  */
    DATA_PROPERTY_DOMAIN = 326,    /* DATA_PROPERTY_DOMAIN  */
    DATA_PROPERTY_RANGE = 327,     /* DATA_PROPERTY_RANGE  */
    FUNCTIONAL_DATA_PROPERTY = 328, /* FUNCTIONAL_DATA_PROPERTY  */
    SAME_INDIVIDUAL = 329,         /* SAME_INDIVIDUAL  */
    DIFFERENT_INDIVIDUALS = 330,   /* DIFFERENT_INDIVIDUALS  */
    CLASS_ASSERTION = 331,         /* CLASS_ASSERTION  */
    OBJECT_PROPERTY_ASSERTION = 332, /* OBJECT_PROPERTY_ASSERTION  */
    NEGATIVE_OBJECT_PROPERTY_ASSERTION = 333, /* NEGATIVE_OBJECT_PROPERTY_ASSERTION  */
    DATA_PROPERTY_ASSERTION = 334, /* DATA_PROPERTY_ASSERTION  */
    NEGATIVE_DATA_PROPERTY_ASSERTION = 335, /* NEGATIVE_DATA_PROPERTY_ASSERTION  */
    ANNOTATION_ASSERTION = 336,    /* ANNOTATION_ASSERTION  */
    SUB_ANNOTATION_PROPERTY_OF = 337, /* SUB_ANNOTATION_PROPERTY_OF  */
    ANNOTATION_PROPERTY_DOMAIN = 338, /* ANNOTATION_PROPERTY_DOMAIN  */
    ANNOTATION_PROPERTY_RANGE = 339 /* ANNOTATION_PROPERTY_RANGE  */
  };
  typedef enum cowl_func_yytokentype cowl_func_yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined COWL_FUNC_YYSTYPE && ! defined COWL_FUNC_YYSTYPE_IS_DECLARED
union COWL_FUNC_YYSTYPE
{
  CowlAnnotProp * annotation_property;     /* annotation_property  */
  CowlAnnotValue * annotation_value;       /* annotation_value  */
  CowlAnnotValue * annotation_subject;     /* annotation_subject  */
  CowlAnnotation * annotation;             /* annotation  */
  CowlAxiom * declaration;                 /* declaration  */
  CowlAxiom * axiom;                       /* axiom  */
  CowlAxiom * class_axiom;                 /* class_axiom  */
  CowlAxiom * sub_class_of;                /* sub_class_of  */
  CowlAxiom * equivalent_classes;          /* equivalent_classes  */
  CowlAxiom * disjoint_classes;            /* disjoint_classes  */
  CowlAxiom * disjoint_union;              /* disjoint_union  */
  CowlAxiom * object_property_axiom;       /* object_property_axiom  */
  CowlAxiom * sub_object_property_of;      /* sub_object_property_of  */
  CowlAxiom * equivalent_object_properties; /* equivalent_object_properties  */
  CowlAxiom * disjoint_object_properties;  /* disjoint_object_properties  */
  CowlAxiom * inverse_object_properties;   /* inverse_object_properties  */
  CowlAxiom * object_property_domain;      /* object_property_domain  */
  CowlAxiom * object_property_range;       /* object_property_range  */
  CowlAxiom * functional_object_property;  /* functional_object_property  */
  CowlAxiom * inverse_functional_object_property; /* inverse_functional_object_property  */
  CowlAxiom * reflexive_object_property;   /* reflexive_object_property  */
  CowlAxiom * irreflexive_object_property; /* irreflexive_object_property  */
  CowlAxiom * symmetric_object_property;   /* symmetric_object_property  */
  CowlAxiom * asymmetric_object_property;  /* asymmetric_object_property  */
  CowlAxiom * transitive_object_property;  /* transitive_object_property  */
  CowlAxiom * data_property_axiom;         /* data_property_axiom  */
  CowlAxiom * sub_data_property_of;        /* sub_data_property_of  */
  CowlAxiom * equivalent_data_properties;  /* equivalent_data_properties  */
  CowlAxiom * disjoint_data_properties;    /* disjoint_data_properties  */
  CowlAxiom * data_property_domain;        /* data_property_domain  */
  CowlAxiom * data_property_range;         /* data_property_range  */
  CowlAxiom * functional_data_property;    /* functional_data_property  */
  CowlAxiom * datatype_definition;         /* datatype_definition  */
  CowlAxiom * has_key;                     /* has_key  */
  CowlAxiom * assertion;                   /* assertion  */
  CowlAxiom * same_individual;             /* same_individual  */
  CowlAxiom * different_individuals;       /* different_individuals  */
  CowlAxiom * class_assertion;             /* class_assertion  */
  CowlAxiom * object_property_assertion;   /* object_property_assertion  */
  CowlAxiom * negative_object_property_assertion; /* negative_object_property_assertion  */
  CowlAxiom * data_property_assertion;     /* data_property_assertion  */
  CowlAxiom * negative_data_property_assertion; /* negative_data_property_assertion  */
  CowlAxiom * annotation_axiom;            /* annotation_axiom  */
  CowlAxiom * annotation_assertion;        /* annotation_assertion  */
  CowlAxiom * sub_annotation_property_of;  /* sub_annotation_property_of  */
  CowlAxiom * annotation_property_domain;  /* annotation_property_domain  */
  CowlAxiom * annotation_property_range;   /* annotation_property_range  */
  CowlClass * class;                       /* class  */
  CowlClsExp * class_expression;           /* class_expression  */
  CowlClsExp * object_intersection_of;     /* object_intersection_of  */
  CowlClsExp * object_union_of;            /* object_union_of  */
  CowlClsExp * object_complement_of;       /* object_complement_of  */
  CowlClsExp * object_one_of;              /* object_one_of  */
  CowlClsExp * object_some_values_from;    /* object_some_values_from  */
  CowlClsExp * object_all_values_from;     /* object_all_values_from  */
  CowlClsExp * object_has_value;           /* object_has_value  */
  CowlClsExp * object_has_self;            /* object_has_self  */
  CowlClsExp * object_min_cardinality;     /* object_min_cardinality  */
  CowlClsExp * object_max_cardinality;     /* object_max_cardinality  */
  CowlClsExp * object_exact_cardinality;   /* object_exact_cardinality  */
  CowlClsExp * data_some_values_from;      /* data_some_values_from  */
  CowlClsExp * data_all_values_from;       /* data_all_values_from  */
  CowlClsExp * data_has_value;             /* data_has_value  */
  CowlClsExp * data_min_cardinality;       /* data_min_cardinality  */
  CowlClsExp * data_max_cardinality;       /* data_max_cardinality  */
  CowlClsExp * data_exact_cardinality;     /* data_exact_cardinality  */
  CowlDataProp * data_property;            /* data_property  */
  CowlDataPropExp * data_property_expression; /* data_property_expression  */
  CowlDataRange * data_range;              /* data_range  */
  CowlDataRange * data_intersection_of;    /* data_intersection_of  */
  CowlDataRange * data_union_of;           /* data_union_of  */
  CowlDataRange * data_complement_of;      /* data_complement_of  */
  CowlDataRange * data_one_of;             /* data_one_of  */
  CowlDataRange * datatype_restriction;    /* datatype_restriction  */
  CowlDatatype * datatype;                 /* datatype  */
  CowlEntity * entity;                     /* entity  */
  CowlFacetRestr * facet_restriction;      /* facet_restriction  */
  CowlIRI * full_iri;                      /* full_iri  */
  CowlIRI * abbreviated_iri;               /* abbreviated_iri  */
  CowlIRI * iri;                           /* iri  */
  CowlIndividual * individual;             /* individual  */
  CowlIndividual * anonymous_individual;   /* anonymous_individual  */
  CowlLiteral * literal;                   /* literal  */
  CowlNamedInd * named_individual;         /* named_individual  */
  CowlObjProp * object_property;           /* object_property  */
  CowlObjPropExp * object_property_expression; /* object_property_expression  */
  CowlObjPropExp * inverse_object_property; /* inverse_object_property  */
  CowlString * prefix;                     /* prefix  */
  CowlString * namespace;                  /* namespace  */
  CowlString * quoted_string;              /* quoted_string  */
  CowlString * lang_tag;                   /* lang_tag  */
  CowlVector * property_expression_chain;  /* property_expression_chain  */
  CowlVector * annotation_star;            /* annotation_star  */
  CowlVector * class_expression_list;      /* class_expression_list  */
  CowlVector * class_expression_2_list;    /* class_expression_2_list  */
  CowlVector * data_property_expression_list; /* data_property_expression_list  */
  CowlVector * data_property_expression_2_list; /* data_property_expression_2_list  */
  CowlVector * data_property_expression_star; /* data_property_expression_star  */
  CowlVector * data_range_list;            /* data_range_list  */
  CowlVector * data_range_2_list;          /* data_range_2_list  */
  CowlVector * facet_restriction_list;     /* facet_restriction_list  */
  CowlVector * individual_list;            /* individual_list  */
  CowlVector * individual_2_list;          /* individual_2_list  */
  CowlVector * literal_list;               /* literal_list  */
  CowlVector * object_property_expression_list; /* object_property_expression_list  */
  CowlVector * object_property_expression_2_list; /* object_property_expression_2_list  */
  CowlVector * object_property_expression_star; /* object_property_expression_star  */
  UString QUOTED_STRING;                   /* QUOTED_STRING  */
  UString BLANK_NODE_LABEL;                /* BLANK_NODE_LABEL  */
  UString PNAME_NS;                        /* PNAME_NS  */
  UString PNAME_LN;                        /* PNAME_LN  */
  UString LANG_TAG;                        /* LANG_TAG  */
  UString IRI_REF;                         /* IRI_REF  */
  ulib_uint NON_NEGATIVE_INTEGER;          /* NON_NEGATIVE_INTEGER  */
  ulib_uint cardinality;                   /* cardinality  */

#line 283 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.h"

};
typedef union COWL_FUNC_YYSTYPE COWL_FUNC_YYSTYPE;
# define COWL_FUNC_YYSTYPE_IS_TRIVIAL 1
# define COWL_FUNC_YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined COWL_FUNC_YYLTYPE && ! defined COWL_FUNC_YYLTYPE_IS_DECLARED
typedef struct COWL_FUNC_YYLTYPE COWL_FUNC_YYLTYPE;
struct COWL_FUNC_YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define COWL_FUNC_YYLTYPE_IS_DECLARED 1
# define COWL_FUNC_YYLTYPE_IS_TRIVIAL 1
#endif




int cowl_func_yyparse (yyscan_t scanner, CowlIStream *stream);

/* "%code provides" blocks.  */
#line 22 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/src/reader/functional/cowl_functional.y"

    #undef YYSTYPE
    #undef YYLTYPE

    #define YYSTYPE COWL_FUNC_YYSTYPE
    #define YYLTYPE COWL_FUNC_YYLTYPE

    #define YYMALLOC ulib_malloc
    #define YYFREE ulib_free

#line 322 "/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/src/reader/functional/cowl_func_yyparser.h"

#endif /* !YY_COWL_FUNC_YY_HOME_ETUD_T_L_CHARGEMENTS_STAGE_STAGE_LABO_PARSERPROJECT_BUILD_TEST_LIB_COWL_SRC_READER_FUNCTIONAL_COWL_FUNC_YYPARSER_H_INCLUDED  */
