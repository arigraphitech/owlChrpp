#pragma once
#include "Parser.h"
#include <fstream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;
using namespace std::string_literals;
using std::string;


extern "C" {
#include "cowl.h"
#include "ulib.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
}

// Fonction utilitaire pour convertir UString* en std::string
inline std::string ustring_to_string(const UString* ustr) {
    if (!ustr) return "";
    const char* data = (const char*)ustring_data(*ustr);
    size_t len = ustring_length(*ustr);
    return std::string(data, len);
}
inline std::string cowlStringToStdString(CowlString* cowlStr) {
    if (!cowlStr) return "";
    
    // Simplification: utilisons cowl_string_get_raw directement
    return ustring_to_string(cowl_string_get_raw(cowlStr));
}

template <typename T>

class ParserCowl : public Parser<T>
{
public:
    ParserCowl(std::string const & onto,T & space);
    static void convertToFunctional(std::string const & originPath,std::string const & destPath);
    static void printPrefixes(ParserCowl<T>* parser, CowlOntology *ontology);
    static void iterateDecl(ParserCowl<T>* parser,CowlAny *axiom);
    static void iterateSubclass (ParserCowl<T>* parser,CowlAny *axiom);
    static void iterateEquivClass (ParserCowl<T>* parser,CowlAny *axiom);
    static void  iterateDisjClass(ParserCowl<T>* parser,CowlAny *axiom);
    static void  iterateClassAssert(ParserCowl<T>* parser,CowlAny *axiom);
    static void  iterateObjPropAssert(ParserCowl<T>* parser,CowlAny *axiom);
    static void  iterateNegObjPropAssert(ParserCowl<T>* parser,CowlAny *axiom);
    static void  iterateSubObjProp(ParserCowl<T>* parser,CowlAny *axiom);
    static void  iterateObjPropDomain(ParserCowl<T>* parser,CowlAny *axiom);
    static void  iterateObjPropRange(ParserCowl<T>* parser,CowlAny *axiom);
    static void  iterateDiffInd(ParserCowl<T>* parser,CowlAny *axiom);
    static void  iterateSameInd(ParserCowl<T>* parser,CowlAny *axiom);
    static void  iterateDataPropAssert(ParserCowl<T>* parser,CowlAny *axiom);
    static void iterateNegDataPropAssert (ParserCowl<T>* parser,CowlAny *axiom);
    static void  iterateDataPropDomain(ParserCowl<T>* parser,CowlAny *axiom);
    static void  iterateDataPropRange(ParserCowl<T>* parser,CowlAny *axiom);
    static void  iterateInvObjProp(ParserCowl<T>* parser,CowlAny *axiom);
    static void  iterateSymObjProp(ParserCowl<T>* parser,CowlAny *axiom);
    static void  iterateFuncObjProp(ParserCowl<T>* parser,CowlAny *axiom);
    static void  iterateInvFuncObjProp(ParserCowl<T>* parser,CowlAny *axiom);
    static void  iterateAsymmObjProp(ParserCowl<T>* parser,CowlAny *axiom);
    static void  iterateTransObjProp(ParserCowl<T>* parser,CowlAny *axiom);
    static void  iterateReflObjProp(ParserCowl<T>* parser,CowlAny *axiom);
    static void  iterateIrrefObjProp(ParserCowl<T>* parser,CowlAny *axiom);
    static void  iterateDisjObjProp(ParserCowl<T>* parser,CowlAny *axiom);
    static void  iterateEquivObjProp(ParserCowl<T>* parser,CowlAny *axiom);
    static void  iterateSubDataProp(ParserCowl<T>* parser,CowlAny *axiom);
    static void  iterateEquivDataProp(ParserCowl<T>* parser,CowlAny *axiom);
    static void  iterateDisjDataProp(ParserCowl<T>* parser,CowlAny *axiom);
    static void  iterateFuncDataProp(ParserCowl<T>* parser,CowlAny *axiom);
    static bool for_each(void *stream, CowlAny *axiom) ;
    bool load() override;
    void print() override;
};

template <typename T>
ParserCowl<T>::ParserCowl(std::string const &  onto,T & space)
    :Parser<T>(onto,&space){}

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
void ParserCowl<T>::printPrefixes(ParserCowl<T>* parser, CowlOntology *ontology) {
    UOStream *stream = uostream_std();

    // Obtenir la table de symboles de l'ontologie
    CowlSymTable *symTable = cowl_ontology_get_sym_table(ontology);
    if (!symTable) {
        cowl_write_static(stream, "Aucune table de symboles trouvée.\n");
        return;
    }

    // Obtenir la table des préfixes (prefix -> namespace)
    CowlTable *prefixTable = cowl_sym_table_get_prefix_ns_map(symTable, false);
    if (!prefixTable) {
        cowl_write_static(stream, "Aucun préfixe déclaré.\n");
        return;
    }

    cowl_write_static(stream, "Préfixes déclarés :\n");
    int prefixCount = 0;

    // Itérer sur la table des préfixes
    uhash_foreach(CowlObjectTable, cowl_table_get_data(prefixTable), entry) {
        CowlString *prefix = (CowlString *)entry.key;
        CowlString *ns = (CowlString *)entry.val;
        
        // Convertir en std::string en utilisant cowl_string_get_cstring pour un affichage correct
        const char* prefixCStr = cowl_string_get_cstring(prefix);
        const char* nsCStr = cowl_string_get_cstring(ns);
        
        std::string prefixStr = (prefixCStr != nullptr) ? std::string(prefixCStr) : "";
        std::string nsStr = (nsCStr != nullptr) ? std::string(nsCStr) : "";
        
        // Toujours instancier dans CHR++, même les préfixes vides
        prefixCount++;
        
        // Afficher le préfixe
        cowl_write_cstring(stream, "  ");
        cowl_write_cstring(stream, prefixStr.c_str());
        cowl_write_cstring(stream, " := <");
        cowl_write_cstring(stream, nsStr.c_str());
        cowl_write_cstring(stream, ">\n");
        
        // Créer des variables logiques et instancier la contrainte owlPrefix
        if (parser != nullptr) {
            chr::Logical_var<std::string> prefixVar, nsVar;
            parser->space->logicalName(prefixStr, prefixVar);
            parser->space->logicalName(nsStr, nsVar);
            parser->space->owlPrefix(prefixVar, nsVar);
        }
    }
    
    // Afficher le nombre de préfixes trouvés
    char countMsg[100];
    snprintf(countMsg, sizeof(countMsg), "Total: %d préfixes déclarés\n\n", prefixCount);
    cowl_write_cstring(stream, countMsg);
}

template <typename T>
void ParserCowl<T>::iterateDecl(ParserCowl<T>* parser,CowlAny *axiom){
   UOStream *stream = uostream_std();
   CowlEntity *entity = cowl_decl_axiom_get_entity((CowlDeclAxiom*) axiom);
    CowlEntityType type = cowl_entity_get_type(entity);
    CowlIRI *iri = cowl_entity_get_iri(entity);
    CowlString *short_iri = cowl_iri_get_rem((CowlIRI *)iri);
    
    std::string uri_str = ustring_to_string(cowl_string_get_raw(short_iri));
    
    // Créer une variable logique pour cette entité
    chr::Logical_var<std::string> entityVar;
    
        switch (type) {
            case COWL_ET_CLASS:
                cowl_write_static((UOStream *)stream, "Classe ");
            // Associer l'URI à la variable logique et déclarer la classe
            parser->space->logicalName(uri_str, entityVar);
            parser->space->owlClass(entityVar);
                break;
            case COWL_ET_OBJ_PROP:
                cowl_write_static((UOStream *)stream, "Propriété d'objet ");
            parser->space->logicalName(uri_str, entityVar);
            parser->space->owlObjectProperty(entityVar);
                break;
            case COWL_ET_DATA_PROP:
                cowl_write_static((UOStream *)stream, "Propriété de données  ");
            parser->space->logicalName(uri_str, entityVar);
            parser->space->owlDataProperty(entityVar);
                break;
            case COWL_ET_ANNOT_PROP:
                cowl_write_static((UOStream *)stream, "annotation pas prise en charge");
                break;
            case COWL_ET_NAMED_IND:
                cowl_write_static((UOStream *)stream, "Individu ");
            parser->space->logicalName(uri_str, entityVar);
            parser->space->owlNamedIndividual(entityVar);
                break;
            case COWL_ET_DATATYPE:
            cowl_write_static((UOStream *)stream, "declaration de datatype pas prise en charge pour l'instant");
                break;
            default:
                cowl_write_static((UOStream *)stream, "Inconnu ");
        }

        cowl_write_string((UOStream *)stream, short_iri);
}

template <typename T>
void ParserCowl<T>:: iterateSubclass(ParserCowl<T>* parser, CowlAny *axiom){
    UOStream *stream = uostream_std();
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
    parser->space->owlSubclassOf(chr::Logical_var_ground<std::string>(cowlStringToStdString(cowl_iri_get_rem((CowlIRI *)iri_sub))), chr::Logical_var_ground<std::string>(cowlStringToStdString(cowl_iri_get_rem((CowlIRI *)iri_sup))));

    }else{ //exception car pas encore gere
            cowl_write_static((UOStream *)stream, "subclass de classes complexes pas prise en charge ");
    }
}
template <typename T>
void ParserCowl<T>::iterateEquivClass(ParserCowl<T>* parser, CowlAny* axiom) {
    UOStream* stream = uostream_std();
    cowl_write_static((UOStream*)stream, "équivalences entre classes : ");

    CowlNAryClsAxiom* eq_axiom = (CowlNAryClsAxiom*) axiom;
    CowlVector* class_list = cowl_nary_cls_axiom_get_classes(eq_axiom);
    ulib_uint count = cowl_vector_count(class_list);

    // Stocker les variables logiques et les URI correspondantes
    std::vector<chr::Logical_var<std::string>> classVars;
    std::vector<std::string> classUris;

    for (ulib_uint i = 0; i < count; ++i) {
        CowlClass* cls = (CowlClass*) cowl_vector_get_item(class_list, i);
        if (cowl_cls_exp_get_type(cls) == COWL_CET_CLASS) {
            CowlIRI* iri = cowl_class_get_iri(cls);
            CowlString* name = cowl_iri_get_rem(iri);

            std::string classUri = ustring_to_string(cowl_string_get_raw(name));
            chr::Logical_var<std::string> classVar;

            // Récupère ou crée la variable logique pour cette classe
            parser->space->logicalName(classUri, classVar);

            classVars.push_back(classVar);
            classUris.push_back(classUri);

            cowl_write_string((UOStream*)stream, name);
            if (i < count - 1) cowl_write_static((UOStream*)stream, " , ");
        }
        else {
            cowl_write_static((UOStream*)stream, " [autre expression non supportée] ");
        }
    }

    cowl_write_static((UOStream*)stream, "\n");

    // Créer les paires d’équivalence : (A,B), (A,C), (B,C), ...
    for (size_t i = 0; i < classVars.size(); ++i) {
        for (size_t j = i + 1; j < classVars.size(); ++j) {
            parser->space->owlEquivalentClass(classVars[i], classVars[j]);
        }
    }
}



template <typename T>
void ParserCowl<T>:: iterateDisjClass(ParserCowl<T>* parser, CowlAny *axiom){
    UOStream *stream = uostream_std();
    std::set<chr::Logical_var<std::string>> classVars; // Pour stocker les variables logiques des classes disjointes
    cowl_write_static((UOStream *)stream, "disjoin entre : ");

    //CowlClsExpType type = cowl_cls_exp_get_type(exp);
    CowlNAryClsAxiom *eq_axiom = (CowlNAryClsAxiom *) axiom;
    CowlVector *class_list = cowl_nary_cls_axiom_get_classes(eq_axiom);
    ulib_uint count = cowl_vector_count(class_list);

    for (ulib_uint  i = 0; i < count; ++i) {
        CowlClass *cls = (CowlClass *) cowl_vector_get_item(class_list, i);
        CowlIRI *iri = cowl_class_get_iri(cls);
        CowlString *name = cowl_iri_get_rem(iri);  // ou get_full
        
        // Créer variable logique et associer l'URI
        chr::Logical_var<std::string> classVar;
        std::string classUri = ustring_to_string(cowl_string_get_raw(name));
        parser->space->logicalName(classUri, classVar);

        classVars.insert(classVar);
        cowl_write_string((UOStream *)stream, name);
        cowl_write_static((UOStream *)stream, " , ");
    }
    
    // Utiliser les variables logiques pour les contraintes de disjonction
    parser->space->owlDisjointClass(classVars); 
    cowl_write_static((UOStream *)stream, "\n");
}
template <typename T>
void ParserCowl<T>:: iterateClassAssert(ParserCowl<T>* parser, CowlAny *axiom){
    UOStream *stream = uostream_std();
    CowlClass *classe =(CowlClass* )cowl_cls_assert_axiom_get_cls_exp((CowlClsAssertAxiom*)axiom);
    CowlNamedInd *indiv= (CowlNamedInd*)cowl_cls_assert_axiom_get_ind((CowlClsAssertAxiom*)axiom);
    CowlIRI *iriClasse = cowl_class_get_iri(classe);
    CowlIRI *iriIndiv =cowl_named_ind_get_iri(indiv);
    CowlString *nameClasse = cowl_iri_get_rem(iriClasse);
    CowlString *nameIndiv = cowl_iri_get_rem(iriIndiv);

    // Créer des variables logiques pour la classe et l'individu
    chr::Logical_var<std::string> classeVar, indivVar;
    std::string classeUri = ustring_to_string(cowl_string_get_raw(nameClasse));
    std::string indivUri = ustring_to_string(cowl_string_get_raw(nameIndiv));

    // Associer les URI aux variables logiques
    parser->space->logicalName(classeUri, classeVar);
    parser->space->logicalName(indivUri, indivVar);

    cowl_write_string((UOStream *)stream, nameIndiv);
    cowl_write_static((UOStream *)stream, " est instance de ");
    cowl_write_string((UOStream *)stream, nameClasse);

    // Utiliser les variables logiques pour la contrainte d'assertion
    parser->space->owlClassAssertion(indivVar, classeVar, true); 
    cowl_write_static((UOStream *)stream, "\n");
}
template <typename T>
void ParserCowl<T>:: iterateObjPropAssert(ParserCowl<T>* parser, CowlAny *axiom){
    UOStream *stream = uostream_std();
     CowlNamedInd *sujet=(CowlNamedInd*) cowl_obj_prop_assert_axiom_get_subject((CowlObjPropAssertAxiom*)axiom);
    CowlNamedInd *objet=(CowlNamedInd*) cowl_obj_prop_assert_axiom_get_object((CowlObjPropAssertAxiom*)axiom);
    CowlObjProp * prop=(CowlObjProp*)cowl_obj_prop_assert_axiom_get_prop((CowlObjPropAssertAxiom*)axiom);

    CowlIRI *iriSujet =cowl_named_ind_get_iri(sujet);
    CowlIRI *iriObjet =cowl_named_ind_get_iri(objet);
    CowlString *nameSujet= cowl_iri_get_rem(iriSujet);
    CowlString *nameObjet = cowl_iri_get_rem(iriObjet);

    CowlIRI *iriProp = cowl_obj_prop_get_iri(prop);
    CowlString *nameProp = cowl_iri_get_rem(iriProp);

    // Créer des variables logiques pour le sujet, la propriété et l'objet
    chr::Logical_var<std::string> sujetVar, propVar, objetVar;
    std::string sujetUri = ustring_to_string(cowl_string_get_raw(nameSujet));
    std::string propUri = ustring_to_string(cowl_string_get_raw(nameProp));
    std::string objetUri = ustring_to_string(cowl_string_get_raw(nameObjet));

    // Associer les URI aux variables logiques
    parser->space->logicalName(sujetUri, sujetVar);
    parser->space->logicalName(propUri, propVar);
    parser->space->logicalName(objetUri, objetVar);

    cowl_write_string((UOStream *)stream, nameSujet);
        cowl_write_static((UOStream *)stream, " ");
    cowl_write_string((UOStream *)stream, nameProp);
        cowl_write_static((UOStream *)stream, " ");

    cowl_write_string((UOStream *)stream, nameObjet);

    // Utiliser les variables logiques pour la contrainte
    parser->space->owlObjectPropertyAssertion(sujetVar, propVar, objetVar);
    cowl_write_static((UOStream *)stream, "\n");
}
template <typename T>
void ParserCowl<T>:: iterateNegObjPropAssert(ParserCowl<T>* parser, CowlAny *axiom){
    UOStream *stream = uostream_std();
        CowlNamedInd *sujet=(CowlNamedInd*) cowl_obj_prop_assert_axiom_get_subject((CowlObjPropAssertAxiom*)axiom);
    CowlNamedInd *objet=(CowlNamedInd*) cowl_obj_prop_assert_axiom_get_object((CowlObjPropAssertAxiom*)axiom);
    CowlObjProp * prop=(CowlObjProp*)cowl_obj_prop_assert_axiom_get_prop((CowlObjPropAssertAxiom*)axiom);

    CowlIRI *iriSujet =cowl_named_ind_get_iri(sujet);
    CowlIRI *iriObjet =cowl_named_ind_get_iri(objet);
    CowlString *nameSujet= cowl_iri_get_rem(iriSujet);
    CowlString *nameObjet = cowl_iri_get_rem(iriObjet);


    CowlIRI *iriProp = cowl_obj_prop_get_iri(prop);
    CowlString *nameProp = cowl_iri_get_rem(iriProp);

    // Créer des variables logiques pour le sujet, la propriété et l'objet
    chr::Logical_var<std::string> sujetVar, propVar, objetVar;
    std::string sujetUri = ustring_to_string(cowl_string_get_raw(nameSujet));
    std::string propUri = ustring_to_string(cowl_string_get_raw(nameProp));
    std::string objetUri = ustring_to_string(cowl_string_get_raw(nameObjet));

    // Associer les URI aux variables logiques
    parser->space->logicalName(sujetUri, sujetVar);
    parser->space->logicalName(propUri, propVar);
    parser->space->logicalName(objetUri, objetVar);

    cowl_write_string((UOStream *)stream, nameSujet);
        cowl_write_static((UOStream *)stream, " not ");
    cowl_write_string((UOStream *)stream, nameProp);
        cowl_write_static((UOStream *)stream, " ");

    cowl_write_string((UOStream *)stream, nameObjet);

    // Utiliser les variables logiques pour la contrainte négative
    parser->space->owlNegativeObjectAssertion(sujetVar, propVar, objetVar);
    cowl_write_static((UOStream *)stream, "\n");
}
template <typename T>
void ParserCowl<T>:: iterateSubObjProp(ParserCowl<T>* parser, CowlAny *axiom){
    UOStream *stream = uostream_std();
    CowlObjProp * sub=(CowlObjProp*)cowl_sub_obj_prop_axiom_get_sub((CowlSubObjPropAxiom *)axiom)  ;
    CowlObjProp * sup=(CowlObjProp*)cowl_sub_obj_prop_axiom_get_super((CowlSubObjPropAxiom *)axiom);

    // Créer des variables logiques pour les propriétés
    chr::Logical_var<std::string> subVar, supVar;
    std::string subUri = ustring_to_string(cowl_string_get_raw(cowl_iri_get_rem(cowl_obj_prop_get_iri(sub))));
    std::string supUri = ustring_to_string(cowl_string_get_raw(cowl_iri_get_rem(cowl_obj_prop_get_iri(sup))));

    // Associer les URI aux variables logiques
    parser->space->logicalName(subUri, subVar);
    parser->space->logicalName(supUri, supVar);

    cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_obj_prop_get_iri(sub)));
    cowl_write_static((UOStream *)stream, " subObjectproperty de  ");
    cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_obj_prop_get_iri(sup)));

    // Utiliser les variables logiques pour la contrainte
    parser->space->owlSubObjectPropertyOf(subVar, supVar);
    cowl_write_static((UOStream *)stream, "\n");
}

template <typename T>
void ParserCowl<T>::iterateEquivObjProp(ParserCowl<T>* parser, CowlAny *axiom){
    UOStream *stream = uostream_std();
    cowl_write_static((UOStream *)stream, "propriétés équivalentes : ");
    
    CowlVector *properties_list = cowl_nary_obj_prop_axiom_get_props((CowlNAryObjPropAxiom *)axiom);
    ulib_uint count = cowl_vector_count(properties_list);
    
    std::vector<chr::Logical_var<std::string>> propVars;
    
    for (ulib_uint i = 0; i < count; ++i) {
        CowlObjProp *prop = (CowlObjProp *) cowl_vector_get_item(properties_list, i);
        CowlString *propName = cowl_iri_get_rem(cowl_obj_prop_get_iri(prop));
        
        // Créer variable logique et associer l'URI
        chr::Logical_var<std::string> propVar;
        std::string propUri = ustring_to_string(cowl_string_get_raw(propName));
        parser->space->logicalName(propUri, propVar);
        
        propVars.push_back(propVar);
        cowl_write_string((UOStream *)stream, propName);
        cowl_write_static((UOStream *)stream, " , ");
    }
    
    // Générer toutes les paires d'équivalence
    for (size_t i = 0; i < propVars.size(); ++i) {
        for (size_t j = i + 1; j < propVars.size(); ++j) {
            parser->space->owlEquivalentObjectProperty(propVars[i], propVars[j]);
        }
    }
    
    cowl_write_static((UOStream *)stream, "\n");
}

template <typename T>
void ParserCowl<T>:: iterateObjPropDomain(ParserCowl<T>* parser, CowlAny *axiom){
    UOStream *stream = uostream_std(); 
    
    chr::Logical_var<std::string> propVar, domVar;

     CowlObjProp* prop= (CowlObjProp*)cowl_obj_prop_domain_axiom_get_prop((CowlObjPropDomainAxiom *)axiom);
     std::string propUri = ustring_to_string(cowl_string_get_raw(cowl_iri_get_rem(cowl_obj_prop_get_iri(prop))));
        parser->space->logicalName(propUri, propVar);
    CowlClsExp * dom=cowl_obj_prop_domain_axiom_get_domain((CowlObjPropDomainAxiom *)axiom);
    std::string domUri = ustring_to_string(cowl_string_get_raw(cowl_iri_get_rem(cowl_class_get_iri((CowlClass *)dom))));
        parser->space->logicalName(domUri, domVar);

    cowl_write_cstring((UOStream *)stream, propUri.c_str());
    cowl_write_static((UOStream *)stream, " a pour domaine  ");
    cowl_write_cstring((UOStream *)stream, domUri.c_str());
    parser->space->owlObjectPropertyDomain(propVar, domVar);
    cowl_write_static((UOStream *)stream, "\n");
}

template <typename T>
void ParserCowl<T>:: iterateObjPropRange(ParserCowl<T>* parser, CowlAny *axiom){
    UOStream *stream = uostream_std();
    chr::Logical_var<std::string> propVar, domVar;
    CowlObjProp* prop= (CowlObjProp*)cowl_obj_prop_range_axiom_get_prop((CowlObjPropRangeAxiom *)axiom);
    std::string propUri = ustring_to_string(cowl_string_get_raw(cowl_iri_get_rem(cowl_obj_prop_get_iri(prop))));
        parser->space->logicalName(propUri, propVar);
    CowlClsExp * dom=cowl_obj_prop_range_axiom_get_range((CowlObjPropRangeAxiom *)axiom);
    std::string domUri = ustring_to_string(cowl_string_get_raw(cowl_iri_get_rem(cowl_class_get_iri((CowlClass *)dom))));
        parser->space->logicalName(domUri, domVar);
    cowl_write_cstring((UOStream *)stream, propUri.c_str());
    cowl_write_static((UOStream *)stream, " a pour range  ");
    cowl_write_cstring((UOStream *)stream, domUri.c_str());

    parser->space->owlObjectPropertyRange(propVar, domVar);
    cowl_write_static((UOStream *)stream, "\n");
}


template <typename T>
void ParserCowl<T>:: iterateDiffInd(ParserCowl<T>* parser, CowlAny *axiom){
    std::set<std::string> indivNames; // Pour stocker les noms des individus distincts
    UOStream *stream = uostream_std();
    cowl_write_static((UOStream *)stream, "different individuals : ");
     CowlVector *indiv_list=cowl_nary_ind_axiom_get_individuals((CowlNAryIndAxiom *)axiom);
     ulib_uint count = cowl_vector_count(indiv_list);

     for (ulib_uint  i = 0; i < count; ++i) {
         CowlNamedInd *indiv = (CowlNamedInd *) cowl_vector_get_item(indiv_list, i);
         std::string indivUri = cowlStringToStdString(cowl_iri_get_rem(cowl_named_ind_get_iri(indiv)));
        cowl_write_cstring((UOStream *)stream, indivUri.c_str());
            cowl_write_static((UOStream *)stream, " , ");
            indivNames.insert(indivUri);
    }
   //créer une map pour stocker chaque variable logique
    // TEMPORAIREMENT DESACTIVE: Variables locales causent crashs
    cowl_write_static((UOStream *)stream, "\n");
    cowl_write_static((UOStream *)stream, "\n");
}



template <typename T>
void ParserCowl<T>:: iterateSameInd(ParserCowl<T>* parser, CowlAny *axiom){
    std::set<std::string> indivNames; // Pour stocker les noms des individus same
    UOStream *stream = uostream_std();
    cowl_write_static((UOStream *)stream, "same individuals : ");
     CowlVector *indiv_list=cowl_nary_ind_axiom_get_individuals((CowlNAryIndAxiom *)axiom);
     ulib_uint count = cowl_vector_count(indiv_list);
    for (ulib_uint  i = 0; i < count; ++i) {
        CowlNamedInd *indiv = (CowlNamedInd *) cowl_vector_get_item(indiv_list, i);
        std::string indivUri = cowlStringToStdString(cowl_iri_get_rem(cowl_named_ind_get_iri(indiv)));
        cowl_write_cstring((UOStream *)stream, indivUri.c_str());
        cowl_write_static((UOStream *)stream, " , ");
        indivNames.insert(indivUri);
    }
   //creer une map pour stocker chaque variable logique
    //std::unordered_map<std::string, chr::Logical_var<std::string>> logicalVars;

    // TEMPORAIREMENT DESACTIVE: Les variables locales causent des crashs
    // Il faudrait stocker les variables comme membres de classe
    cowl_write_static((UOStream *)stream, "\n");
}

template <typename T>
void ParserCowl<T>:: iterateDataPropAssert(ParserCowl<T>* parser, CowlAny *axiom){
    //to do
    UOStream *stream = uostream_std();
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
void ParserCowl<T>:: iterateNegDataPropAssert(ParserCowl<T>* parser, CowlAny *axiom){
    //to do
    UOStream *stream = uostream_std();
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
void ParserCowl<T>:: iterateDataPropDomain(ParserCowl<T>* parser, CowlAny *axiom){
    UOStream *stream = uostream_std();
    chr::Logical_var<std::string> propVar, domVar;
    CowlDataPropExp* prop= cowl_data_prop_domain_axiom_get_prop((CowlDataPropDomainAxiom *)axiom);
    std::string propUri = ustring_to_string(cowl_string_get_raw(cowl_iri_get_rem(cowl_data_prop_get_iri((CowlDataProp *)prop))));
        parser->space->logicalName(propUri, propVar);
    CowlClsExp * dom=cowl_data_prop_domain_axiom_get_domain((CowlDataPropDomainAxiom *)axiom);
    std::string domUri = ustring_to_string(cowl_string_get_raw(cowl_iri_get_rem(cowl_class_get_iri((CowlClass *)dom))));
    parser->space->logicalName(domUri, domVar);
    cowl_write_cstring((UOStream *)stream, propUri.c_str());
    cowl_write_static((UOStream *)stream, " a pour domaine  ");
    cowl_write_cstring((UOStream *)stream, domUri.c_str());

   parser->space->owlDataPropertyDomain(propVar, domVar);
    cowl_write_static((UOStream *)stream, "\n");
}

template <typename T>
void ParserCowl<T>:: iterateDataPropRange(ParserCowl<T>* parser, CowlAny *axiom){
    //to do
    UOStream *stream = uostream_std();
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
void ParserCowl<T>:: iterateSubDataProp(ParserCowl<T>* parser, CowlAny *axiom){ 
 UOStream *stream = uostream_std();
    CowlDataProp * sub=(CowlDataProp*)cowl_sub_data_prop_axiom_get_sub((CowlSubDataPropAxiom *)axiom)  ;
    CowlDataProp * sup=(CowlDataProp*)cowl_sub_data_prop_axiom_get_super((CowlSubDataPropAxiom *)axiom);

    // Créer des variables logiques pour les propriétés
    chr::Logical_var<std::string> subVar, supVar;
    std::string subUri = ustring_to_string(cowl_string_get_raw(cowl_iri_get_rem(cowl_data_prop_get_iri(sub))));
    std::string supUri = ustring_to_string(cowl_string_get_raw(cowl_iri_get_rem(cowl_data_prop_get_iri(sup))));

    // Associer les URI aux variables logiques
    parser->space->logicalName(subUri, subVar);
    parser->space->logicalName(supUri, supVar);

    cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_data_prop_get_iri(sub)));
    cowl_write_static((UOStream *)stream, " subDataproperty de  ");
    cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_data_prop_get_iri(sup)));

    // Utiliser les variables logiques pour la contrainte
    parser->space->owlSubDataPropertyOf(subVar, supVar);
    cowl_write_static((UOStream *)stream, "\n");

}

template <typename T>
void ParserCowl<T>:: iterateEquivDataProp(ParserCowl<T>* parser, CowlAny *axiom){
    UOStream *stream = uostream_std();
    cowl_write_static((UOStream *)stream, "data propriétés équivalentes : ");

    CowlVector *properties_list = cowl_nary_data_prop_axiom_get_props((CowlNAryDataPropAxiom *)axiom);
    ulib_uint count = cowl_vector_count(properties_list);
    
    std::vector<chr::Logical_var<std::string>> propVars;
    
    for (ulib_uint i = 0; i < count; ++i) {
        CowlDataProp *prop = (CowlDataProp *) cowl_vector_get_item(properties_list, i);
        CowlString *propName = cowl_iri_get_rem(cowl_data_prop_get_iri(prop));

        // Créer variable logique et associer l'URI
        chr::Logical_var<std::string> propVar;
        std::string propUri = ustring_to_string(cowl_string_get_raw(propName));
        parser->space->logicalName(propUri, propVar);
        
        propVars.push_back(propVar);
        cowl_write_string((UOStream *)stream, propName);
        cowl_write_static((UOStream *)stream, " , ");
    }
    
    // Générer toutes les paires d'équivalence
    for (size_t i = 0; i < propVars.size(); ++i) {
        for (size_t j = i + 1; j < propVars.size(); ++j) {
            parser->space->owlEquivalentObjectProperty(propVars[i], propVars[j]);
        }
    }
    
    cowl_write_static((UOStream *)stream, "\n");
}

template <typename T>
void ParserCowl<T>:: iterateDisjDataProp(ParserCowl<T>* parser, CowlAny *axiom){ 
    UOStream *stream = uostream_std();
    std::set<chr::Logical_var<std::string>> propNames; // Pour stocker les noms des propriétés disjointes
    cowl_write_static((UOStream *)stream, "propriétés disjointes : ");
    
    CowlVector * properties_list=cowl_nary_obj_prop_axiom_get_props((CowlNAryObjPropAxiom*)axiom);
    ulib_uint count = cowl_vector_count(properties_list);
    for (ulib_uint  i = 0; i < count; ++i) {
        CowlObjProp *prop = (CowlObjProp *) cowl_vector_get_item(properties_list, i);
        CowlString *propName = cowl_iri_get_rem(cowl_obj_prop_get_iri(prop));

        // Créer variable logique et associer l'URI
        chr::Logical_var<std::string> propVar;
        std::string propUri = ustring_to_string(cowl_string_get_raw(propName));
        parser->space->logicalName(propUri, propVar);

        propNames.insert(propVar);
        cowl_write_string((UOStream *)stream, propName);
        cowl_write_static((UOStream *)stream, " , ");
    }

    parser->space->owlDisjointDataProperty(propNames);
    cowl_write_static((UOStream *)stream, "\n");
}

template <typename T>
void ParserCowl<T>:: iterateFuncDataProp(ParserCowl<T>* parser, CowlAny *axiom){ 
    UOStream *stream = uostream_std();
    chr::Logical_var<std::string> propVar;
    CowlDataPropExp *prop = cowl_func_data_prop_axiom_get_prop((CowlFuncDataPropAxiom *) axiom);
    std::string propUri = ustring_to_string(cowl_string_get_raw(cowl_iri_get_rem(cowl_data_prop_get_iri((CowlDataProp*)prop))));
        parser->space->logicalName(propUri, propVar);
    cowl_write_cstring((UOStream *)stream, propUri.c_str());
    cowl_write_static((UOStream *)stream, " est fonctionnelle");

    parser->space->owlFunctionalDataProperty(propVar);
    cowl_write_static((UOStream *)stream, "\n");
    
}


template <typename T>
void ParserCowl<T>:: iterateInvObjProp(ParserCowl<T>* parser, CowlAny *axiom){
    UOStream *stream = uostream_std();
    chr::Logical_var<std::string> firstPropVar, secondPropVar;
    CowlObjProp *first_prop=(CowlObjProp*)cowl_inv_obj_prop_axiom_get_first_prop((CowlInvObjPropAxiom *)axiom);
    std::string firstPropUri = ustring_to_string(cowl_string_get_raw(cowl_iri_get_rem(cowl_obj_prop_get_iri(first_prop))));
        parser->space->logicalName(firstPropUri, firstPropVar);
    CowlObjProp *second_prop=(CowlObjProp*)cowl_inv_obj_prop_axiom_get_second_prop((CowlInvObjPropAxiom *)axiom);
    std::string secondPropUri = ustring_to_string(cowl_string_get_raw(cowl_iri_get_rem(cowl_obj_prop_get_iri(second_prop))));
        parser->space->logicalName(secondPropUri, secondPropVar);

    cowl_write_cstring((UOStream *)stream, firstPropUri.c_str());
    cowl_write_static((UOStream *)stream, " est inverse de  ");
    cowl_write_cstring((UOStream *)stream, secondPropUri.c_str());

    parser->space->owlInverseObjectProperty(firstPropVar, secondPropVar);
    cowl_write_static((UOStream *)stream, "\n");
}
template <typename T>
void ParserCowl<T>:: iterateSymObjProp(ParserCowl<T>* parser, CowlAny *axiom){
    UOStream *stream = uostream_std();
    chr::Logical_var<std::string> propVar;
    CowlObjProp *prop=(CowlObjProp*)cowl_obj_prop_char_axiom_get_prop((CowlObjPropCharAxiom *) axiom);
    std::string propUri = ustring_to_string(cowl_string_get_raw(cowl_iri_get_rem(cowl_obj_prop_get_iri(prop))));
        parser->space->logicalName(propUri, propVar);
    cowl_write_cstring((UOStream *)stream, propUri.c_str());
    cowl_write_static((UOStream *)stream, " est symétrique");

    parser->space->owlSymmetricObjectProperty(propVar);
    cowl_write_static((UOStream *)stream, "\n");
}

template <typename T>
void ParserCowl<T>:: iterateFuncObjProp(ParserCowl<T>* parser, CowlAny *axiom){
    UOStream *stream = uostream_std();
    chr::Logical_var<std::string> propVar;
    CowlObjProp *prop=(CowlObjProp*)cowl_obj_prop_char_axiom_get_prop((CowlObjPropCharAxiom *) axiom);
    std::string propUri = ustring_to_string(cowl_string_get_raw(cowl_iri_get_rem(cowl_obj_prop_get_iri(prop))));
        parser->space->logicalName(propUri, propVar);
    cowl_write_cstring((UOStream *)stream, propUri.c_str());
    cowl_write_static((UOStream *)stream, " est fonctionnelle");

    parser->space->owlFunctionalObjectProperty(propVar);
    cowl_write_static((UOStream *)stream, "\n");
}

template <typename T>
void ParserCowl<T>:: iterateInvFuncObjProp(ParserCowl<T>* parser, CowlAny *axiom){
    UOStream *stream = uostream_std();
    chr::Logical_var<std::string> propVar;
    CowlObjProp *prop=(CowlObjProp*)cowl_obj_prop_char_axiom_get_prop((CowlObjPropCharAxiom *) axiom);
    std::string propUri = ustring_to_string(cowl_string_get_raw(cowl_iri_get_rem(cowl_obj_prop_get_iri(prop))));
        parser->space->logicalName(propUri, propVar);
    cowl_write_cstring((UOStream *)stream, propUri.c_str());
    cowl_write_static((UOStream *)stream, " est inverse fonctionnelle");

    parser->space->owlInverseFunctionalObjectProperty(propVar);
    cowl_write_static((UOStream *)stream, "\n");
}

template <typename T>
void ParserCowl<T>:: iterateAsymmObjProp(ParserCowl<T>* parser, CowlAny *axiom){
    UOStream *stream = uostream_std();
    chr::Logical_var<std::string> propVar;
    CowlObjProp *prop=(CowlObjProp*)cowl_obj_prop_char_axiom_get_prop( (CowlObjPropCharAxiom *)axiom);
    std::string propUri = ustring_to_string(cowl_string_get_raw(cowl_iri_get_rem(cowl_obj_prop_get_iri(prop))));
    parser->space->logicalName(propUri, propVar);
    cowl_write_cstring((UOStream *)stream, propUri.c_str());
    cowl_write_static((UOStream *)stream, " est asymétrique");

    parser->space->owlAsymmetricObjectProperty(propVar);
    cowl_write_static((UOStream *)stream, "\n");
}


template <typename T>
void ParserCowl<T>:: iterateTransObjProp(ParserCowl<T>* parser, CowlAny *axiom){
    UOStream *stream = uostream_std();
    chr::Logical_var<std::string> propVar;
    CowlObjProp *prop=(CowlObjProp*)cowl_obj_prop_char_axiom_get_prop((CowlObjPropCharAxiom *) axiom);
    std::string propUri = ustring_to_string(cowl_string_get_raw(cowl_iri_get_rem(cowl_obj_prop_get_iri(prop))));
    parser->space->logicalName(propUri, propVar);
    cowl_write_cstring((UOStream *)stream, propUri.c_str());
    cowl_write_static((UOStream *)stream, " est transitive");

    parser->space->owlTransitiveObjectProperty(propVar);
    cowl_write_static((UOStream *)stream, "\n");

}


template <typename T>
void ParserCowl<T>:: iterateReflObjProp(ParserCowl<T>* parser, CowlAny *axiom){
    UOStream *stream = uostream_std();
    chr::Logical_var<std::string> propVar;
    CowlObjProp *prop=(CowlObjProp*)cowl_obj_prop_char_axiom_get_prop( (CowlObjPropCharAxiom *)axiom);
    std::string propUri = ustring_to_string(cowl_string_get_raw(cowl_iri_get_rem(cowl_obj_prop_get_iri(prop))));
    parser->space->logicalName(propUri, propVar);
    cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_obj_prop_get_iri(prop)));
    cowl_write_static((UOStream *)stream, " est réflexive");

    parser->space->owlReflexiveObjectProperty(propVar);
    cowl_write_static((UOStream *)stream, "\n");
}


template <typename T>
void ParserCowl<T>:: iterateIrrefObjProp(ParserCowl<T>* parser, CowlAny *axiom){
    UOStream *stream = uostream_std();
    chr::Logical_var<std::string> propVar;
    CowlObjProp *prop=(CowlObjProp*)cowl_obj_prop_char_axiom_get_prop((CowlObjPropCharAxiom *) axiom);
    std::string propUri = ustring_to_string(cowl_string_get_raw(cowl_iri_get_rem(cowl_obj_prop_get_iri(prop))));
    parser->space->logicalName(propUri, propVar);
    cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_obj_prop_get_iri(prop)));
    cowl_write_static((UOStream *)stream, " est irréflexive");

    parser->space->owlIrreflexiveObjectProperty(propVar);
    cowl_write_static((UOStream *)stream, "\n");
}


template <typename T>
void ParserCowl<T>:: iterateDisjObjProp(ParserCowl<T>* parser, CowlAny *axiom){
    UOStream *stream = uostream_std();
    std::set<chr::Logical_var<std::string>> propNames; // Pour stocker les noms des propriétés disjointes
    cowl_write_static((UOStream *)stream, "propriétés disjointes : ");
    
    CowlVector * properties_list=cowl_nary_obj_prop_axiom_get_props((CowlNAryObjPropAxiom*)axiom);
    ulib_uint count = cowl_vector_count(properties_list);
    for (ulib_uint  i = 0; i < count; ++i) {
        CowlObjProp *prop = (CowlObjProp *) cowl_vector_get_item(properties_list, i);
        CowlString *propName = cowl_iri_get_rem(cowl_obj_prop_get_iri(prop));

        // Créer variable logique et associer l'URI
        chr::Logical_var<std::string> propVar;
        std::string propUri = ustring_to_string(cowl_string_get_raw(propName));
        parser->space->logicalName(propUri, propVar);

        propNames.insert(propVar);
        cowl_write_string((UOStream *)stream, propName);
        cowl_write_static((UOStream *)stream, " , ");
    }

    parser->space->owlDisjointObjectProperty(propNames);
    cowl_write_static((UOStream *)stream, "\n");
}

template <typename T>
bool ParserCowl<T>::for_each(void *stream, CowlAny *axiom) {
    ParserCowl<T>* parser = static_cast<ParserCowl<T>*>(stream);
    CowlAxiomType axiomType = cowl_axiom_get_type(axiom);
    switch (axiomType)
    {
    case COWL_AT_DECL:
        iterateDecl(parser,axiom);
        break;
    case COWL_AT_SUB_CLASS:
        iterateSubclass(parser,axiom);
        break;
    case COWL_AT_EQUIV_CLASSES:
        iterateEquivClass(parser,axiom);
        break;
    case COWL_AT_DISJ_CLASSES:
        iterateDisjClass(parser,axiom);
        break;
    case COWL_AT_CLASS_ASSERT:
        iterateClassAssert(parser,axiom);
        break;
    case COWL_AT_OBJ_PROP_ASSERT:
        iterateObjPropAssert(parser,axiom);
        break;
    case COWL_AT_NEG_OBJ_PROP_ASSERT:
        iterateNegObjPropAssert(parser,axiom);
        break;
    case COWL_AT_SUB_OBJ_PROP:
        iterateSubObjProp(parser,axiom);
        break;
    case COWL_AT_EQUIV_OBJ_PROP :
        iterateEquivObjProp(parser,axiom); 
        break;
    case COWL_AT_OBJ_PROP_DOMAIN:
        iterateObjPropDomain(parser,axiom);
        break;
    case COWL_AT_OBJ_PROP_RANGE:
        iterateObjPropRange(parser,axiom);
        break;
    case COWL_AT_DIFF_IND:
        iterateDiffInd(parser,axiom);
        break;
    case COWL_AT_SAME_IND:
        iterateSameInd(parser,axiom);
        break;
    case COWL_AT_DATA_PROP_ASSERT:
        iterateDataPropAssert(parser,axiom);
        break;
    case COWL_AT_NEG_DATA_PROP_ASSERT:
        iterateNegDataPropAssert(parser,axiom);
        break;
    case COWL_AT_DATA_PROP_DOMAIN:
        iterateDataPropDomain(parser,axiom);
        break;
    case COWL_AT_DATA_PROP_RANGE:
        iterateDataPropRange(parser,axiom);
        break;
    case COWL_AT_SUB_DATA_PROP:
        iterateSubDataProp(parser,axiom);
        break;
    case COWL_AT_EQUIV_DATA_PROP :
        iterateEquivDataProp(parser,axiom); 
        break;
    case COWL_AT_DISJ_DATA_PROP :
        iterateDisjDataProp(parser,axiom);
        break;
    case COWL_AT_FUNC_DATA_PROP :
        iterateFuncDataProp(parser,axiom);
        break;
    case COWL_AT_INV_OBJ_PROP:
        iterateInvObjProp(parser,axiom);
        break;

    case COWL_AT_SYMM_OBJ_PROP:
        iterateSymObjProp(parser,axiom);
        break;
    case COWL_AT_FUNC_OBJ_PROP:
        iterateFuncObjProp(parser,axiom);
        break;
    case COWL_AT_INV_FUNC_OBJ_PROP:
        iterateInvFuncObjProp(parser,axiom);
        break;
    case COWL_AT_ASYMM_OBJ_PROP:
        iterateAsymmObjProp(parser,axiom);
        break;
    case COWL_AT_TRANS_OBJ_PROP:
        iterateTransObjProp(parser,axiom);
        break;
    case COWL_AT_REFL_OBJ_PROP:
        iterateReflObjProp(parser,axiom);
        break;
    case COWL_AT_IRREFL_OBJ_PROP:
        iterateIrrefObjProp(parser,axiom);
        break;
    case COWL_AT_DISJ_OBJ_PROP:
        iterateDisjObjProp(parser,axiom);
        break;
    case COWL_AT_ANNOT_ASSERT:{
        UOStream *out = uostream_std();
        cowl_write_static(out, "annotation pas prise en charge \n");
        break; 
    }
    case COWL_AT_SUB_ANNOT_PROP:{
        UOStream *out = uostream_std();
        cowl_write_static(out, "annotation pas prise en charge \n");
        break;}
    case COWL_AT_ANNOT_PROP_RANGE:{
        UOStream *out = uostream_std();
        cowl_write_static(out, "annotation pas prise en charge \n");
        break;
    }
    default:
        {
            UOStream *out = uostream_std();
            cowl_write_static(out, "axiome pas prise en charge \n");
        }
        break;
    }
    //cowl_write_static((UOStream *)stream, "\n");
    return true;
}
template <typename T>
bool ParserCowl<T>::load()
{
    //test d'insertion dans l'espace CHR++
    this->space->owlClass(chr::Logical_var_ground<std::string>("Ari"));

    std::ifstream f("example2.ofn");
            if (!f) {
                std::cout << " Fichier example2.ofn introuvable au moment de l'exécution." << std::endl;
            }else{
                std::cout << " Fichier example2.ofn trouvé." << std::endl;
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
        if (!onto) {
            std::cerr << "Échec du chargement de l'ontologie " << this->getOnto().c_str() << std::endl;
            cowl_release(manager);
            return EXIT_FAILURE;
        }
        
        // Charger les préfixes et les instancier dans CHR++
        printPrefixes(this, onto);
        
        cowl_release(manager);
        UOStream *out = uostream_std();
        cowl_write_static(out, "Tout les axiomes :\n");
        CowlIterator iter = { this, for_each };
        cowl_ontology_iterate_axioms_of_types(onto,COWL_AF_ALL, &iter, true);
        cowl_release(onto);
        return EXIT_SUCCESS;

}

template<typename T>
void ParserCowl<T>::print() {
    std::cout << "ParserCowl::print() pour " << this->getOnto() << std::endl;
}
