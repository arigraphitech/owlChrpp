#pragma once
#include "Parser.h"
#include <fstream>
#include <string>
using namespace std::string_literals;


extern "C" {
#include "cowl.h"
#include "ulib.h"
#include <stdio.h>
#include <stdlib.h>
}

template <typename T>

class ParserCowl : public Parser<T>
{
public:
    ParserCowl(std::string const & onto,T & space);
    static void convertToFunctional(std::string const & originPath,std::string const & destPath);
    static void iterateDecl(void *stream,CowlAny *axiom);
    static void iterateSubclass (void *stream,CowlAny *axiom);
    static void iterateEquivClass (void *stream,CowlAny *axiom);
    static void  iterateDisjClass(void *stream,CowlAny *axiom);
    static void  iterateClassAssert(void *stream,CowlAny *axiom);
    static void  iterateObjPropAssert(void *stream,CowlAny *axiom);
    static void  iterateNegObjPropAssert(void *stream,CowlAny *axiom);
    static void  iterateSubObjProp(void *stream,CowlAny *axiom);
    static void  iterateObjPropDomain(void *stream,CowlAny *axiom);
    static void  iterateObjPropRange(void *stream,CowlAny *axiom);
    static void  iterateDiffInd(void *stream,CowlAny *axiom);
    static void  iterateSameInd(void *stream,CowlAny *axiom);
    static void  iterateDataPropAssert(void *stream,CowlAny *axiom);
    static void iterateNegDataPropAssert (void *stream,CowlAny *axiom);
    static void  iterateDataPropDomain(void *stream,CowlAny *axiom);
    static void  iterateDataPropRange(void *stream,CowlAny *axiom);
    static void  iterateInvObjProp(void *stream,CowlAny *axiom);
    static void  iterateSymObjProp(void *stream,CowlAny *axiom);
    static void  iterateFuncObjProp(void *stream,CowlAny *axiom);
    static void  iterateInvFuncObjProp(void *stream,CowlAny *axiom);
    static void  iterateAsymmObjProp(void *stream,CowlAny *axiom);
    static void  iterateTransObjProp(void *stream,CowlAny *axiom);
    static void  iterateReflObjProp(void *stream,CowlAny *axiom);
    static void  iterateIrrefObjProp(void *stream,CowlAny *axiom);
    static void  iterateDisjObjProp(void *stream,CowlAny *axiom);
    static bool for_each(void *stream, CowlAny *axiom) ;
    bool load() override;
    void print() override;
};

template <typename T>
ParserCowl<T>::ParserCowl(std::string const &  onto,T & space)
    :Parser<T>(onto,space){}

template <typename T>
void ParserCowl<T>::convertToFunctional(const std::string &originPath, const std::string &destPath)
{ std::string command = "robot convert --input "+originPath+" --format ofn --output "+destPath;
            int result = std::system(command.c_str());
            if (result != 0) {
                std::cerr << "Échec de la conversion de l'ontologie avec ROBOT.\n";
                return ;
            }
}

template <typename T>
void ParserCowl<T>::iterateDecl(void *stream,CowlAny *axiom){
   CowlEntity *entity = cowl_decl_axiom_get_entity((CowlDeclAxiom*) axiom);
    CowlEntityType type = cowl_entity_get_type(entity);
    CowlIRI *iri = cowl_entity_get_iri(entity);
    CowlString *short_iri = cowl_iri_get_rem((CowlIRI *)iri);
        switch (type) {
            case COWL_ET_CLASS:
                cowl_write_static((UOStream *)stream, "Classe ");
             //   space.owlClass(short_iri);
                break;
            case COWL_ET_OBJ_PROP:
                cowl_write_static((UOStream *)stream, "Propriété d'objet ");
              //  space.owlObjectProperty(short_iri);
                break;
            case COWL_ET_DATA_PROP:
                cowl_write_static((UOStream *)stream, "Propriété de données  ");
                //  space.owlDataProperty(short_iri);
                break;
            case COWL_ET_ANNOT_PROP:
                cowl_write_static((UOStream *)stream, "annotation pas prise en charge");
                break;
            case COWL_ET_NAMED_IND:
                cowl_write_static((UOStream *)stream, "Individu ");
                //  space.owlNamedIndividual(short_iri);
                break;
            case COWL_ET_DATATYPE:
                cowl_write_static((UOStream *)stream, "declaration de datatype pas prise en charge");
                break;
            default:
                cowl_write_static((UOStream *)stream, "Inconnu ");
        }

        cowl_write_string((UOStream *)stream, short_iri);
}

template <typename T>
void ParserCowl<T>:: iterateSubclass(void *stream, CowlAny *axiom){
    // Obtenir les expressions de classes
    CowlAnyClsExp  *sub = cowl_sub_cls_axiom_get_sub((CowlSubClsAxiom *) axiom);
    CowlAnyClsExp *sup = cowl_sub_cls_axiom_get_super((CowlSubClsAxiom *)axiom);


    // Obtenir leurs IRI s’ils sont nommés (pas anonymes)
    if (cowl_cls_exp_get_type(sup) == COWL_CET_CLASS) { //si atomique
    CowlIRI *iri_sub = cowl_class_get_iri((CowlClass*)sub);
    CowlIRI *iri_sup = cowl_class_get_iri((CowlClass*)sup);

    // Afficher
    cowl_write_static((UOStream *)stream, "SubClassOf: ");
    cowl_write_string((UOStream *)stream, cowl_iri_get_rem((CowlIRI *)iri_sub));
    cowl_write_static((UOStream *)stream, " ⊑ ");
    cowl_write_string((UOStream *)stream, cowl_iri_get_rem((CowlIRI *)iri_sup));
    //this.space->owlSubclassOf(chr::Logical_var_ground<std::string>(cowl_iri_get_rem((CowlIRI *)iri_sub),cowl_iri_get_rem((CowlIRI *)iri_sup)));  // avec using namespace std::string_literals

    }else{ //exception car pas encore gere
            cowl_write_static((UOStream *)stream, "subclass de classes complexes pas prise en charge ");
    }
}
template <typename T>
void ParserCowl<T>:: iterateEquivClass(void *stream, CowlAny *axiom){
    cowl_write_static((UOStream *)stream, "equivalence entre : ");

    //CowlClsExpType type = cowl_cls_exp_get_type(exp);
    CowlNAryClsAxiom *eq_axiom = (CowlNAryClsAxiom *) axiom;
    CowlVector *class_list = cowl_nary_cls_axiom_get_classes(eq_axiom);
    ulib_uint count = cowl_vector_count(class_list);

    for (ulib_uint  i = 0; i < count; ++i) {
        CowlClass *cls = (CowlClass *) cowl_vector_get_item(class_list, i);
      if (cowl_cls_exp_get_type(cls) == COWL_CET_CLASS) {
        CowlIRI *iri = cowl_class_get_iri(cls);
        CowlString *name = cowl_iri_get_rem(iri);  // ou get_full
        cowl_write_string((UOStream *)stream, name);
        }else {
                    cowl_write_static((UOStream *)stream, ",autre ");

        }
    }
    cowl_write_static((UOStream *)stream, "\n");
}
template <typename T>
void ParserCowl<T>:: iterateDisjClass(void *stream, CowlAny *axiom){
    cowl_write_static((UOStream *)stream, "disjoin entre : ");

    //CowlClsExpType type = cowl_cls_exp_get_type(exp);
    CowlNAryClsAxiom *eq_axiom = (CowlNAryClsAxiom *) axiom;
    CowlVector *class_list = cowl_nary_cls_axiom_get_classes(eq_axiom);
    ulib_uint count = cowl_vector_count(class_list);

    for (ulib_uint  i = 0; i < count; ++i) {
        CowlClass *cls = (CowlClass *) cowl_vector_get_item(class_list, i);
        CowlIRI *iri = cowl_class_get_iri(cls);
        CowlString *name = cowl_iri_get_rem(iri);  // ou get_full
        cowl_write_string((UOStream *)stream, name);
        cowl_write_static((UOStream *)stream, " , ");

    }
    cowl_write_static((UOStream *)stream, "\n");
}
template <typename T>
void ParserCowl<T>:: iterateClassAssert(void *stream, CowlAny *axiom){
    CowlClass *classe =(CowlClass* )cowl_cls_assert_axiom_get_cls_exp((CowlClsAssertAxiom*)axiom);
    CowlNamedInd *indiv= (CowlNamedInd*)cowl_cls_assert_axiom_get_ind((CowlClsAssertAxiom*)axiom);
    CowlIRI *iriClasse = cowl_class_get_iri(classe);
    CowlIRI *iriIndiv =cowl_named_ind_get_iri(indiv);
    CowlString *nameClasse = cowl_iri_get_rem(iriClasse);
    CowlString *nameIndiv = cowl_iri_get_rem(iriIndiv);

    cowl_write_string((UOStream *)stream, nameIndiv);
    cowl_write_static((UOStream *)stream, " est instance de ");
    cowl_write_string((UOStream *)stream, nameClasse);


    cowl_write_static((UOStream *)stream, "\n");
}
template <typename T>
void ParserCowl<T>:: iterateObjPropAssert(void *stream, CowlAny *axiom){
     CowlNamedInd *sujet=(CowlNamedInd*) cowl_obj_prop_assert_axiom_get_subject((CowlObjPropAssertAxiom*)axiom);
    CowlNamedInd *objet=(CowlNamedInd*) cowl_obj_prop_assert_axiom_get_object((CowlObjPropAssertAxiom*)axiom);
    CowlObjProp * prop=(CowlObjProp*)cowl_obj_prop_assert_axiom_get_prop((CowlObjPropAssertAxiom*)axiom);

    CowlIRI *iriSujet =cowl_named_ind_get_iri(sujet);
    CowlIRI *iriObjet =cowl_named_ind_get_iri(objet);
    CowlString *nameSujet= cowl_iri_get_rem(iriSujet);
    CowlString *nameObjet = cowl_iri_get_rem(iriObjet);


    CowlIRI *iriProp = cowl_obj_prop_get_iri(prop);
    CowlString *nameProp = cowl_iri_get_rem(iriProp);

    cowl_write_string((UOStream *)stream, nameSujet);
        cowl_write_static((UOStream *)stream, " ");
    cowl_write_string((UOStream *)stream, nameProp);
        cowl_write_static((UOStream *)stream, " ");

    cowl_write_string((UOStream *)stream, nameObjet);

    cowl_write_static((UOStream *)stream, "\n");
}
template <typename T>
void ParserCowl<T>:: iterateNegObjPropAssert(void *stream, CowlAny *axiom){
        CowlNamedInd *sujet=(CowlNamedInd*) cowl_obj_prop_assert_axiom_get_subject((CowlObjPropAssertAxiom*)axiom);
    CowlNamedInd *objet=(CowlNamedInd*) cowl_obj_prop_assert_axiom_get_object((CowlObjPropAssertAxiom*)axiom);
    CowlObjProp * prop=(CowlObjProp*)cowl_obj_prop_assert_axiom_get_prop((CowlObjPropAssertAxiom*)axiom);

    CowlIRI *iriSujet =cowl_named_ind_get_iri(sujet);
    CowlIRI *iriObjet =cowl_named_ind_get_iri(objet);
    CowlString *nameSujet= cowl_iri_get_rem(iriSujet);
    CowlString *nameObjet = cowl_iri_get_rem(iriObjet);


    CowlIRI *iriProp = cowl_obj_prop_get_iri(prop);
    CowlString *nameProp = cowl_iri_get_rem(iriProp);

    cowl_write_string((UOStream *)stream, nameSujet);
        cowl_write_static((UOStream *)stream, " not ");
    cowl_write_string((UOStream *)stream, nameProp);
        cowl_write_static((UOStream *)stream, " ");

    cowl_write_string((UOStream *)stream, nameObjet);

    cowl_write_static((UOStream *)stream, "\n");
}
template <typename T>
void ParserCowl<T>:: iterateSubObjProp(void *stream, CowlAny *axiom){
    CowlObjProp * sub=(CowlObjProp*)cowl_sub_obj_prop_axiom_get_sub((CowlSubObjPropAxiom *)axiom)  ;
    CowlObjProp * sup=(CowlObjProp*)cowl_sub_obj_prop_axiom_get_super((CowlSubObjPropAxiom *)axiom);

    cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_obj_prop_get_iri(sub)));
    cowl_write_static((UOStream *)stream, " subproperty de  ");
    cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_obj_prop_get_iri(sup)));

    cowl_write_static((UOStream *)stream, "\n");
}
template <typename T>
void ParserCowl<T>:: iterateObjPropDomain(void *stream, CowlAny *axiom){
     CowlObjProp* prop= (CowlObjProp*)cowl_obj_prop_domain_axiom_get_prop((CowlObjPropDomainAxiom *)axiom);
    CowlClsExp * dom=cowl_obj_prop_domain_axiom_get_domain((CowlObjPropDomainAxiom *)axiom);

    cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_obj_prop_get_iri(prop)));
    cowl_write_static((UOStream *)stream, " a pour domaine  ");
    cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_class_get_iri((CowlClass *)dom)));

    cowl_write_static((UOStream *)stream, "\n");
}
template <typename T>
void ParserCowl<T>:: iterateObjPropRange(void *stream, CowlAny *axiom){
    CowlObjProp* prop= (CowlObjProp*)cowl_obj_prop_range_axiom_get_prop((CowlObjPropRangeAxiom *)axiom);
    CowlClsExp * dom=cowl_obj_prop_range_axiom_get_range((CowlObjPropRangeAxiom *)axiom);

    cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_obj_prop_get_iri(prop)));
    cowl_write_static((UOStream *)stream, " a pour range  ");
    cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_class_get_iri((CowlClass *)dom)));

    cowl_write_static((UOStream *)stream, "\n");
}
template <typename T>
void ParserCowl<T>:: iterateDiffInd(void *stream, CowlAny *axiom){
        cowl_write_static((UOStream *)stream, "different individuals : ");
     CowlVector *indiv_list=cowl_nary_ind_axiom_get_individuals((CowlNAryIndAxiom *)axiom);
     ulib_uint count = cowl_vector_count(indiv_list);
    for (ulib_uint  i = 0; i < count; ++i) {
        CowlNamedInd *indiv = (CowlNamedInd *) cowl_vector_get_item(indiv_list, i);
        cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_named_ind_get_iri(indiv)));
            cowl_write_static((UOStream *)stream, " , ");
    }
    cowl_write_static((UOStream *)stream, "\n");
}
template <typename T>
void ParserCowl<T>:: iterateSameInd(void *stream, CowlAny *axiom){
        cowl_write_static((UOStream *)stream, "same individuals : ");
     CowlVector *indiv_list=cowl_nary_ind_axiom_get_individuals((CowlNAryIndAxiom *)axiom);
     ulib_uint count = cowl_vector_count(indiv_list);
    for (ulib_uint  i = 0; i < count; ++i) {
        CowlNamedInd *indiv = (CowlNamedInd *) cowl_vector_get_item(indiv_list, i);
        cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_named_ind_get_iri(indiv)));
            cowl_write_static((UOStream *)stream, " , ");
    }
    cowl_write_static((UOStream *)stream, "\n");
}
template <typename T>
void ParserCowl<T>:: iterateDataPropAssert(void *stream, CowlAny *axiom){
    CowlIndividual * sujet=cowl_data_prop_assert_axiom_get_subject((CowlDataPropAssertAxiom *)axiom);
    CowlLiteral *objet=cowl_data_prop_assert_axiom_get_object((CowlDataPropAssertAxiom *)axiom);
    CowlDataPropExp *prop=cowl_data_prop_assert_axiom_get_prop((CowlDataPropAssertAxiom *)axiom);
    CowlDatatype * dataType=cowl_literal_get_datatype(objet);


    cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_named_ind_get_iri((CowlNamedInd*)sujet)));
    cowl_write_static((UOStream *)stream, " ");
    cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_data_prop_get_iri((CowlDataProp*)prop)));
    cowl_write_static((UOStream *)stream, " ");
    cowl_write_string((UOStream *)stream, cowl_literal_get_value(objet));
    cowl_write_static((UOStream *)stream, " ^^ ");
    cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_datatype_get_iri(dataType)));

    cowl_write_static((UOStream *)stream, "\n");
}
template <typename T>
void ParserCowl<T>:: iterateNegDataPropAssert(void *stream, CowlAny *axiom){
    CowlIndividual * sujet=cowl_data_prop_assert_axiom_get_subject((CowlDataPropAssertAxiom *)axiom);
    CowlLiteral *objet=cowl_data_prop_assert_axiom_get_object((CowlDataPropAssertAxiom *)axiom);
    CowlDataPropExp *prop=cowl_data_prop_assert_axiom_get_prop((CowlDataPropAssertAxiom *)axiom);
    CowlDatatype * dataType=cowl_literal_get_datatype(objet);


    cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_named_ind_get_iri((CowlNamedInd*)sujet)));
    cowl_write_static((UOStream *)stream, " not ");
    cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_data_prop_get_iri((CowlDataProp*)prop)));
    cowl_write_static((UOStream *)stream, " ");
    cowl_write_string((UOStream *)stream, cowl_literal_get_value(objet));
    cowl_write_static((UOStream *)stream, " ^^ ");
    cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_datatype_get_iri(dataType)));

    cowl_write_static((UOStream *)stream, "\n");
}
template <typename T>
void ParserCowl<T>:: iterateDataPropDomain(void *stream, CowlAny *axiom){
    CowlDataPropExp* prop= cowl_data_prop_domain_axiom_get_prop((CowlDataPropDomainAxiom *)axiom);
    CowlClsExp * dom=cowl_data_prop_domain_axiom_get_domain((CowlDataPropDomainAxiom *)axiom);
    cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_data_prop_get_iri((CowlDataProp *)prop)));
    cowl_write_static((UOStream *)stream, " a pour domaine  ");
    cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_class_get_iri((CowlClass *)dom)));

    cowl_write_static((UOStream *)stream, "\n");
}
template <typename T>
void ParserCowl<T>:: iterateDataPropRange(void *stream, CowlAny *axiom){
     CowlDataProp* prop= (CowlDataProp*)cowl_data_prop_range_axiom_get_prop((CowlDataPropRangeAxiom *)axiom);
    CowlDataRange * range=cowl_data_prop_range_axiom_get_range((CowlDataPropRangeAxiom *)axiom);
    //retourne si c'est  un Datatype ou  Datatype restriction.ou Intersection of data ranges ...
    if(cowl_data_range_get_type(range)==COWL_DRT_DATATYPE) //type simple
    {   cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_data_prop_get_iri(prop)));
        cowl_write_static((UOStream *)stream, " a pour range  ");
        cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_get_iri(range)));
    }else{
                cowl_write_static((UOStream *)stream, "pas encore geree");
    }
    cowl_write_static((UOStream *)stream, "\n");
}
template <typename T>
void ParserCowl<T>:: iterateInvObjProp(void *stream, CowlAny *axiom){
    CowlObjProp *first_prop=(CowlObjProp*)cowl_inv_obj_prop_axiom_get_first_prop((CowlInvObjPropAxiom *)axiom);
    CowlObjProp *second_prop=(CowlObjProp*)cowl_inv_obj_prop_axiom_get_second_prop((CowlInvObjPropAxiom *)axiom);

    cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_obj_prop_get_iri(first_prop)));
    cowl_write_static((UOStream *)stream, " est inverse de  ");
    cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_obj_prop_get_iri(second_prop)));

    cowl_write_static((UOStream *)stream, "\n");
}
template <typename T>
void ParserCowl<T>:: iterateSymObjProp(void *stream, CowlAny *axiom){
    CowlObjProp *prop=(CowlObjProp*)cowl_obj_prop_char_axiom_get_prop((CowlObjPropCharAxiom *) axiom);
    cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_obj_prop_get_iri(prop)));
    cowl_write_static((UOStream *)stream, "\n");
}
template <typename T>
void ParserCowl<T>:: iterateFuncObjProp(void *stream, CowlAny *axiom){
    CowlObjProp *prop=(CowlObjProp*)cowl_obj_prop_char_axiom_get_prop((CowlObjPropCharAxiom *) axiom);
    cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_obj_prop_get_iri(prop)));
    cowl_write_static((UOStream *)stream, "\n");
}
template <typename T>
void ParserCowl<T>:: iterateInvFuncObjProp(void *stream, CowlAny *axiom){
    CowlObjProp *prop=(CowlObjProp*)cowl_obj_prop_char_axiom_get_prop((CowlObjPropCharAxiom *) axiom);
    cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_obj_prop_get_iri(prop)));
    cowl_write_static((UOStream *)stream, "\n");
}
template <typename T>
void ParserCowl<T>:: iterateAsymmObjProp(void *stream, CowlAny *axiom){
    CowlObjProp *prop=(CowlObjProp*)cowl_obj_prop_char_axiom_get_prop( (CowlObjPropCharAxiom *)axiom);
    cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_obj_prop_get_iri(prop)));
    cowl_write_static((UOStream *)stream, "\n");
}
template <typename T>
void ParserCowl<T>:: iterateTransObjProp(void *stream, CowlAny *axiom){
    CowlObjProp *prop=(CowlObjProp*)cowl_obj_prop_char_axiom_get_prop((CowlObjPropCharAxiom *) axiom);
    cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_obj_prop_get_iri(prop)));
    cowl_write_static((UOStream *)stream, "\n");
}
template <typename T>
void ParserCowl<T>:: iterateReflObjProp(void *stream, CowlAny *axiom){
    CowlObjProp *prop=(CowlObjProp*)cowl_obj_prop_char_axiom_get_prop( (CowlObjPropCharAxiom *)axiom);
    cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_obj_prop_get_iri(prop)));
    cowl_write_static((UOStream *)stream, "\n");
}
template <typename T>
void ParserCowl<T>:: iterateIrrefObjProp(void *stream, CowlAny *axiom){
    CowlObjProp *prop=(CowlObjProp*)cowl_obj_prop_char_axiom_get_prop((CowlObjPropCharAxiom *) axiom);
    cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_obj_prop_get_iri(prop)));
    cowl_write_static((UOStream *)stream, "\n");
}
template <typename T>
void ParserCowl<T>:: iterateDisjObjProp(void *stream, CowlAny *axiom){
    CowlVector * properties_list=cowl_nary_obj_prop_axiom_get_props((CowlNAryObjPropAxiom*)axiom);
    ulib_uint count = cowl_vector_count(properties_list);
    for (ulib_uint  i = 0; i < count; ++i) {
        CowlObjProp *prop = (CowlObjProp *) cowl_vector_get_item(properties_list, i);
        cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_obj_prop_get_iri(prop)));
        cowl_write_static((UOStream *)stream, " , ");
    }

    cowl_write_static((UOStream *)stream, "\n");
}

template <typename T>
bool ParserCowl<T>::for_each(void *stream, CowlAny *axiom) {
    CowlAxiomType axiomType = cowl_axiom_get_type(axiom);
    switch (axiomType)
    {
    case COWL_AT_DECL:
        iterateDecl(stream,axiom);
        break;
    case COWL_AT_SUB_CLASS:
        iterateSubclass(stream,axiom);
        break;
    case COWL_AT_EQUIV_CLASSES:
        iterateEquivClass(stream,axiom);
        break;
    case COWL_AT_DISJ_CLASSES:
        iterateDisjClass(stream,axiom);
        break;
    case COWL_AT_CLASS_ASSERT:
        iterateClassAssert(stream,axiom);
        break;
    case COWL_AT_OBJ_PROP_ASSERT:
        iterateObjPropAssert(stream,axiom);
        break;
    case COWL_AT_NEG_OBJ_PROP_ASSERT:
        iterateNegObjPropAssert(stream,axiom);
        break;
    case COWL_AT_SUB_OBJ_PROP:
        iterateSubObjProp(stream,axiom);
        break;
    case COWL_AT_OBJ_PROP_DOMAIN:
        iterateObjPropDomain(stream,axiom);
        break;
    case COWL_AT_OBJ_PROP_RANGE:
        iterateObjPropRange(stream,axiom);
        break;
    case COWL_AT_DIFF_IND:
        iterateDiffInd(stream,axiom);
        break;
    case COWL_AT_SAME_IND:
        iterateSameInd(stream,axiom);
        break;
    case COWL_AT_DATA_PROP_ASSERT:
        iterateDataPropAssert(stream,axiom);
        break;
    case COWL_AT_NEG_DATA_PROP_ASSERT:
        iterateNegDataPropAssert(stream,axiom);
        break;
    case COWL_AT_DATA_PROP_DOMAIN:
        iterateDataPropDomain(stream,axiom);
        break;
    case COWL_AT_DATA_PROP_RANGE:
        iterateDataPropRange(stream,axiom);
        break;
    case COWL_AT_INV_OBJ_PROP:
        iterateInvObjProp(stream,axiom);
        break;
    case COWL_AT_SYMM_OBJ_PROP:
        iterateSymObjProp(stream,axiom);
        break;
    case COWL_AT_FUNC_OBJ_PROP:
        iterateFuncObjProp(stream,axiom);
        break;
    case COWL_AT_INV_FUNC_OBJ_PROP:
        iterateInvFuncObjProp(stream,axiom);
        break;
    case COWL_AT_ASYMM_OBJ_PROP:
        iterateAsymmObjProp(stream,axiom);
        break;
    case COWL_AT_TRANS_OBJ_PROP:
        iterateTransObjProp(stream,axiom);
        break;
    case COWL_AT_REFL_OBJ_PROP:
        iterateReflObjProp(stream,axiom);
        break;
    case COWL_AT_IRREFL_OBJ_PROP:
        iterateIrrefObjProp(stream,axiom);
        break;
    case COWL_AT_DISJ_OBJ_PROP:
        iterateDisjObjProp(stream,axiom);
        break;
    default:
        cowl_write_static((UOStream *)stream, "axiome pas prise en charge \n");
        break;
    }
    //cowl_write_static((UOStream *)stream, "\n");
    return true;
}
template <typename T>
bool ParserCowl<T>::load()
{
    //test
    this->space->owlClass(chr::Logical_var_ground<std::string>("Ari"));

    std::ifstream f("example2.ofn");
            if (!f) {
                std::cerr << " Fichier example2.ofn introuvable au moment de l'exécution." << std::endl;
            }
    cowl_init();
        //Lecture de l'ontologie
        CowlManager *manager = cowl_manager();
        if (!manager) {
                std::cerr << " Échec de création du CowlManager." << std::endl;
                return false;
            }
        std::string path =this->getOnto();
        char buffer[path.size()+1];
        strcpy(buffer, path.c_str());
        CowlOntology* onto = cowl_manager_read_path(manager, ustring_literal(buffer));

        cowl_release(manager);

        if (!onto) {
            std::cerr << "Échec du chargement de l'ontologie " << this->getOnto().c_str() << std::endl;
            cowl_release(manager);
            return EXIT_FAILURE;
        }
        UOStream *out = uostream_std();
        cowl_write_static(out, "Tout les axiomes :\n");
        CowlIterator iter = { out, for_each };
        cowl_ontology_iterate_axioms_of_types(onto,COWL_AF_ALL, &iter, true);
        cowl_release(onto);
        return EXIT_SUCCESS;

}

template<typename T>
void ParserCowl<T>::print() {
    std::cout << "ParserCowl::print() pour " << this->getOnto() << std::endl;
}
