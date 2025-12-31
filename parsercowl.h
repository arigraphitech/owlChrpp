#pragma once
#include "Parser.h"
#include <fstream>
#include <vector>
#include <string>
#include <cstring>
#include <unordered_map>
#include "AnySimpleType.h"
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

// Type pour les ensembles de variables logiques
#include <set>
namespace chr {
    template<typename T> class Logical_var;
}
using LogicalVarSet = std::set<chr::Logical_var<std::string>>;

enum class XSDType  {
    // Numériques
    INTEGER, NON_NEGATIVE_INTEGER, NON_POSITIVE_INTEGER,
    POSITIVE_INTEGER, NEGATIVE_INTEGER, UNSIGNED_INT, INT,
    SHORT, UNSIGNED_SHORT, BYTE, UNSIGNED_BYTE, LONG, UNSIGNED_LONG,
    FLOAT, DOUBLE, DECIMAL,

    // Booléens
    BOOLEAN,

    // Chaînes
    STRING, NORMALIZED_STRING, TOKEN, LANGUAGE, NAME, NCNAME,
    ID, IDREF, IDREFS, ENTITY, ENTITIES, NMTOKEN, NMTOKENS,

    // Dates / Heures
    DATE, TIME, DATE_TIME, DATE_TIME_STAMP, DURATION, G_YEAR, G_YEAR_MONTH,
    G_MONTH, G_MONTH_DAY, G_DAY,

    // Binary
    BASE64_BINARY, HEX_BINARY,

    // URI
    ANY_URI,

    // Divers
    QNAME, NOTATION,

    UNKNOWN
};

XSDType mapXsdType(const std::string& t){
    std::string s = t;
    std::transform(s.begin(), s.end(), s.begin(), ::tolower);

    // numériques
    if (s == "integer") return XSDType::INTEGER;
    if (s == "nonNegativeInteger" || s == "nonnegativeinteger") return XSDType::NON_NEGATIVE_INTEGER;
    if (s == "nonPositiveInteger" || s == "nonpositiveinteger") return XSDType::NON_POSITIVE_INTEGER;
    if (s == "positiveInteger" || s == "positiveinteger") return XSDType::POSITIVE_INTEGER;
    if (s == "negativeInteger" || s == "negativeinteger") return XSDType::NEGATIVE_INTEGER;
    if (s == "int") return XSDType::INT;
    if (s == "unsignedInt" || s == "unsignedint") return XSDType::UNSIGNED_INT;
    if (s == "short") return XSDType::SHORT;
    if (s == "unsignedShort" || s == "unsignedshort") return XSDType::UNSIGNED_SHORT;
    if (s == "byte") return XSDType::BYTE;
    if (s == "unsignedByte" || s == "unsignedbyte") return XSDType::UNSIGNED_BYTE;
    if (s == "long") return XSDType::LONG;
    if (s == "unsignedLong" || s == "unsignedlong") return XSDType::UNSIGNED_LONG;
    if (s == "float") return XSDType::FLOAT;
    if (s == "double") return XSDType::DOUBLE;
    if (s == "decimal") return XSDType::DECIMAL;

    // booléen
    if (s == "boolean") return XSDType::BOOLEAN;

    // string & lexical
    if (s == "string") return XSDType::STRING;
    if (s == "normalizedString" || s == "normalizedstring") return XSDType::NORMALIZED_STRING;
    if (s == "token") return XSDType::TOKEN;
    if (s == "language") return XSDType::LANGUAGE;
    if (s == "name") return XSDType::NAME;
    if (s == "ncname") return XSDType::NCNAME;
    if (s == "id") return XSDType::ID;
    if (s == "idref") return XSDType::IDREF;
    if (s == "idrefs") return XSDType::IDREFS;
    if (s == "entity") return XSDType::ENTITY;
    if (s == "entities") return XSDType::ENTITIES;
    if (s == "nmtoken") return XSDType::NMTOKEN;
    if (s == "nmtokens") return XSDType::NMTOKENS;

    // dates & temps
    if (s == "date") return XSDType::DATE;
    if (s == "time") return XSDType::TIME;
    if (s == "dateTime" || s == "datetime") return XSDType::DATE_TIME;
    if (s == "dateTimeStamp" || s == "datetimestamp") return XSDType::DATE_TIME_STAMP;
    if (s == "duration") return XSDType::DURATION;
    if (s == "gYear" || s == "gyear") return XSDType::G_YEAR;
    if (s == "gYearMonth" || s == "gyearmonth") return XSDType::G_YEAR_MONTH;
    if (s == "gMonth" || s == "gmonth") return XSDType::G_MONTH;
    if (s == "gMonthDay" || s == "gmonthday") return XSDType::G_MONTH_DAY;
    if (s == "gDay" || s == "gday") return XSDType::G_DAY;

    // binary
    if (s == "base64Binary" || s == "base64binary") return XSDType::BASE64_BINARY;
    if (s == "hexBinary" || s == "hexbinary") return XSDType::HEX_BINARY;

    // URI
    if (s == "anyURI" || s == "anyuri") return XSDType::ANY_URI;

    // divers
    if (s == "qname") return XSDType::QNAME;
    if (s == "notation") return XSDType::NOTATION;

    return XSDType::UNKNOWN;

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

// Fonction helper pour obtenir l'IRI complète (namespace + fragment)
inline std::string getFullIRI(CowlIRI* iri) {
    if (!iri) return "";
    CowlString* fullIriStr = cowl_to_string(iri);
    return cowlStringToStdString(fullIriStr);
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
    
    // Fonctions pour gérer les classes complexes (retournent la variable logique)
    static chr::Logical_var<std::string> processComplexClass(ParserCowl<T>* parser, CowlClsExp* clsExp);
    static chr::Logical_var<std::string> iterateUnion(ParserCowl<T>* parser, CowlClsExp* unionExp);
    static chr::Logical_var<std::string> iterateIntersection(ParserCowl<T>* parser, CowlClsExp* intersectExp);
    static chr::Logical_var<std::string> iterateObjectSomeValuesFrom(ParserCowl<T>* parser, CowlClsExp* someExp);
    static chr::Logical_var<std::string> iterateObjectAllValuesFrom(ParserCowl<T>* parser, CowlClsExp* allExp);
    static chr::Logical_var<std::string> iterateObjectHasValue(ParserCowl<T>* parser, CowlClsExp* hasValueExp);
    static chr::Logical_var<std::string> iterateObjectOneOf(ParserCowl<T>* parser, CowlClsExp* oneOfExp);
    static chr::Logical_var<std::string> iterateDataSomeValuesFrom(ParserCowl<T>* parser, CowlClsExp* dataSomeExp);
    static chr::Logical_var<std::string> iterateDataAllValuesFrom(ParserCowl<T>* parser, CowlClsExp* dataAllExp);
    static chr::Logical_var<std::string> iterateMaxCardinality(ParserCowl<T>* parser, CowlClsExp* maxCardinalityExp);
    static chr::Logical_var<std::string> iterateObjectComplementOf(ParserCowl<T>* parser, CowlClsExp* complementExp);
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
    static void  iterateNegDataPropAssert (ParserCowl<T>* parser,CowlAny *axiom);
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
    static void  iterateHasKey(ParserCowl<T>* parser,CowlAny *axiom);
    static bool for_each(void *stream, CowlAny *axiom) ;
    bool load() override;
    void print() override;
    
    // Méthode helper pour obtenir ou créer une variable logique avec cache
    chr::Logical_var<std::string>& getOrCreateLogicalVar(const std::string& uri);

private:
    // Cache pour stocker les variables logiques et éviter les doublons
    std::unordered_map<std::string, chr::Logical_var<std::string>> logicalVarCache;
    
    // Compteur pour générer des IDs uniques pour les unions/intersections anonymes
    static int anonymousClassExpressionCounter;
};

// Initialisation du compteur statique
template <typename T>
int ParserCowl<T>::anonymousClassExpressionCounter = 0;

template <typename T>
ParserCowl<T>::ParserCowl(std::string const &  onto,T & space)
    :Parser<T>(onto,&space){}

template <typename T>
chr::Logical_var<std::string>& ParserCowl<T>::getOrCreateLogicalVar(const std::string& uri) {
    // Vérifier si la variable existe déjà dans le cache
    auto it = logicalVarCache.find(uri);
    if (it != logicalVarCache.end()) {
        // Variable déjà existante, la retourner
        return it->second;
    }
    
    // Créer une nouvelle variable logique
    chr::Logical_var<std::string> newVar;
    this->space->logicalName(uri, newVar);
    
    // Stocker dans le cache
    logicalVarCache[uri] = newVar;
    
    // Retourner la référence
    return logicalVarCache[uri];
}

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
            chr::Logical_var<std::string>& prefixVar = parser->getOrCreateLogicalVar(prefixStr);
            chr::Logical_var<std::string>& nsVar = parser->getOrCreateLogicalVar(nsStr);
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
    
    // Obtenir l'IRI complète au lieu du fragment court
    std::string uri_str = getFullIRI((CowlIRI *)iri);
    
    // Obtenir ou créer la variable logique pour cette entité (avec cache)
    chr::Logical_var<std::string> entityVar = parser->getOrCreateLogicalVar(uri_str);
    
        switch (type) {
            case COWL_ET_CLASS:
                cowl_write_static((UOStream *)stream, "Classe ");
            // Déclarer la classe
            parser->space->owlClass(entityVar);
                break;
            case COWL_ET_OBJ_PROP:
                cowl_write_static((UOStream *)stream, "Propriété d'objet ");
            parser->space->owlObjectProperty(entityVar);
                break;
            case COWL_ET_DATA_PROP:
                cowl_write_static((UOStream *)stream, "Propriété de données  ");
            parser->space->owlDataProperty(entityVar);
                break;
            case COWL_ET_ANNOT_PROP:
                cowl_write_static((UOStream *)stream, "annotation pas prise en charge");
                break;
            case COWL_ET_NAMED_IND:
                cowl_write_static((UOStream *)stream, "Individu ");
            parser->space->owlNamedIndividual(entityVar);
                break;
            case COWL_ET_DATATYPE:
            cowl_write_static((UOStream *)stream, "declaration de datatype pas prise en charge pour l'instant");
                break;
            default:
                cowl_write_static((UOStream *)stream, "Inconnu ");
        }

        // Afficher le nom court pour le log
        cowl_write_string((UOStream *)stream, cowl_iri_get_rem(iri));
}

template <typename T>
void ParserCowl<T>:: iterateSubclass(ParserCowl<T>* parser, CowlAny *axiom){
    UOStream *stream = uostream_std();
    // Obtenir les expressions de classes
    CowlAnyClsExp  *sub = cowl_sub_cls_axiom_get_sub((CowlSubClsAxiom *) axiom);
    CowlAnyClsExp *sup = cowl_sub_cls_axiom_get_super((CowlSubClsAxiom *)axiom);

    cowl_write_static((UOStream *)stream, "\n Traitement SubClassOf axiome...\n");
    // Traiter récursivement la sous-classe et la superclasse avec processComplexClass si non atomique
    chr::Logical_var<std::string> supVar, subVar;
    
    if (cowl_cls_exp_get_type(sub) == COWL_CET_CLASS) {
        CowlIRI* iriSub = cowl_class_get_iri((CowlClass*)sub);
        std::string classUri = getFullIRI(iriSub);
        subVar = parser->getOrCreateLogicalVar(classUri);
    }
    else{
        subVar = processComplexClass(parser, (CowlClsExp*)sub);
    }
    
    if(cowl_cls_exp_get_type(sup) == COWL_CET_CLASS) {
        CowlIRI* iriSup = cowl_class_get_iri((CowlClass*)sup);
        std::string classUri = getFullIRI(iriSup);
        supVar = parser->getOrCreateLogicalVar(classUri);
    }
    else{
        supVar = processComplexClass(parser, (CowlClsExp*)sup);
    }

    cowl_write_static((UOStream *)stream, "   Création de la contrainte SubClassOf\n");
    // Créer la contrainte SubClassOf
    parser->space->owlSubclassOf(subVar, supVar);
    cowl_write_static((UOStream *)stream, "    SubClassOf créé avec succès\n");
}


template <typename T>
chr::Logical_var<std::string> ParserCowl<T>::iterateUnion(ParserCowl<T>* parser, CowlClsExp* unionExp) {
    UOStream* stream = uostream_std();
    cowl_write_static((UOStream*)stream, " Traitement ObjectUnionOf...\n");
    
    // Obtenir la liste des classes de l'union
    CowlNAryBool* union_exp = (CowlNAryBool*) unionExp;
    CowlVector* operands = cowl_nary_bool_get_operands(union_exp);
    ulib_uint count = cowl_vector_count(operands);
    
    cowl_write_static((UOStream*)stream, "   Union de ");
    char countStr[20];
    snprintf(countStr, sizeof(countStr), "%u", count);
    cowl_write_cstring((UOStream*)stream, countStr);
    cowl_write_static((UOStream*)stream, " classes:\n");
    
    // Générer un ID unique pour cette union
    std::string unionId = "http://anonymous.org#Union_" + std::to_string(++anonymousClassExpressionCounter);
    chr::Logical_var<std::string> unionVar = parser->getOrCreateLogicalVar(unionId);
    parser->space->owlClass(unionVar);
    
    cowl_write_static((UOStream*)stream, "   ID: ");
    cowl_write_cstring((UOStream*)stream, unionId.c_str());
    cowl_write_static((UOStream*)stream, "\n");
    std::set<chr::Logical_var<std::string>> unionClasses;

    for (ulib_uint i = 0; i < count; ++i) {
        CowlClsExp* operand = (CowlClsExp*) cowl_vector_get_item(operands, i);
        
        // Vérifier si c'est une classe atomique
        if (cowl_cls_exp_get_type(operand) == COWL_CET_CLASS) {
            CowlClass* cls = (CowlClass*) operand;
            CowlIRI* iri = cowl_class_get_iri(cls);
            std::string classUri = getFullIRI(iri);
            // Récupérer ou créer la variable logique pour cette classe
            chr::Logical_var<std::string> classVar = parser->getOrCreateLogicalVar(classUri);
            unionClasses.insert(classVar);
        } else {
            // Expression complexe dans l'union pas supporté en owl2 RL
            cowl_write_static((UOStream*)stream, "      - [Expression complexe dans union]\n");
        }
    }
    parser->space->owlUnionOf(unionVar, unionClasses);
    cowl_write_static((UOStream*)stream, "    Union terminée\n");
    return unionVar;
}

// Fonction principale de traitement récursif des classes complexes
template <typename T>
chr::Logical_var<std::string> ParserCowl<T>::processComplexClass(ParserCowl<T>* parser, CowlClsExp* clsExp) {
    CowlClsExpType type = cowl_cls_exp_get_type(clsExp);
    
    switch(type) {
        case COWL_CET_CLASS: {
            // Classe nommée simple - n'entre jamais ici normalement
            CowlIRI *iri = cowl_class_get_iri((CowlClass*)clsExp);
            std::string uri = getFullIRI(iri);
            return parser->getOrCreateLogicalVar(uri);
        }
        case COWL_CET_OBJ_UNION:
            return iterateUnion(parser, clsExp);
            
        case COWL_CET_OBJ_INTERSECT:
            return iterateIntersection(parser, clsExp);
            
        case COWL_CET_OBJ_SOME:
            return iterateObjectSomeValuesFrom(parser, clsExp);
            
        case COWL_CET_OBJ_ALL:
            return iterateObjectAllValuesFrom(parser, clsExp);

        case COWL_CET_OBJ_HAS_VALUE:
            return iterateObjectHasValue(parser, clsExp);
            
        case COWL_CET_OBJ_ONE_OF:
            return iterateObjectOneOf(parser, clsExp);
            
        case COWL_CET_DATA_SOME:
            return iterateDataSomeValuesFrom(parser, clsExp);
            
        case COWL_CET_DATA_ALL:
            return iterateDataAllValuesFrom(parser, clsExp);
            
        case COWL_CET_OBJ_MAX_CARD:
        case COWL_CET_DATA_MAX_CARD:
            return iterateMaxCardinality(parser, clsExp);

        case COWL_CET_OBJ_COMPL:
            return iterateObjectComplementOf(parser, clsExp);

        default: {
            UOStream* stream = uostream_std();
            cowl_write_static((UOStream*)stream, "Type de classe complexe non supporté: ");
            char buffer[50];
            sprintf(buffer, "%d\n", type);
            cowl_write_static((UOStream*)stream, buffer);
            // Retourner un ID générique pour les types non supportés
            std::string unknownId = "http://anonymous.org#Unknown_" + std::to_string(++anonymousClassExpressionCounter);
            chr::Logical_var<std::string> unknownVar(unknownId);
            parser->space->owlClass(unknownVar);
            return unknownVar;
        }
    }
}

// Gestion de ObjectIntersectionOf (⊓)
template <typename T>
chr::Logical_var<std::string> ParserCowl<T>::iterateIntersection(ParserCowl<T>* parser, CowlClsExp* intersectExp) {
    UOStream* stream = uostream_std();
    cowl_write_static((UOStream*)stream, "Traitement ObjectIntersectionOf...\n");
    // Générer un ID unique pour l'intersection
    std::string intersectionId = "http://anonymous.org#Intersection_" + std::to_string(++anonymousClassExpressionCounter);
    chr::Logical_var<std::string> intersectionVar= parser->getOrCreateLogicalVar(intersectionId);
    parser->space->owlClass(intersectionVar);
    cowl_write_static((UOStream*)stream, "   ID: ");
    cowl_write_static((UOStream*)stream, intersectionId.c_str());
    cowl_write_static((UOStream*)stream, "\n");
    
    // Récupérer les opérandes de l'intersection
    CowlNAryBool* nary_bool = (CowlNAryBool*)intersectExp;
    CowlVector* operands = cowl_nary_bool_get_operands(nary_bool);
    size_t count = cowl_vector_count(operands);
    
    char buffer[100];
    sprintf(buffer, "   Nombre d'opérandes: %zu\n", count);
    cowl_write_static((UOStream*)stream, buffer);
    
    // Créer un set pour stocker les opérandes
    std::set<chr::Logical_var<std::string>> intersectionClasses;
    
    // Pour chaque opérande Ci de l'intersection, l'ajouter au set
    for(size_t i = 0; i < count; i++) {
        CowlClsExp* operand = (CowlClsExp*)cowl_vector_get_item(operands, i);
        
        sprintf(buffer, "   Opérande %zu: ", i+1);
        cowl_write_static((UOStream*)stream, buffer);
        chr::Logical_var<std::string> operandVar;
        // Traiter récursivement l'opérande
        if(cowl_cls_exp_get_type(operand) == COWL_CET_CLASS){
            CowlClass* cls = (CowlClass*) operand;
            CowlIRI* iri = cowl_class_get_iri(cls);
            std::string classUri = getFullIRI(iri);
            // Récupérer ou créer la variable logique pour cette classe
            operandVar = parser->getOrCreateLogicalVar(classUri);
        }
        else {
            operandVar = processComplexClass(parser, operand);
        }
        // Ajouter au set
        intersectionClasses.insert(operandVar);
        
        cowl_write_static((UOStream*)stream, "       Opérande ajouté\n");
    }
    // Créer la contrainte owlIntersectionOf
    cowl_write_static((UOStream*)stream, "   Création de la contrainte IntersectionOf\n");
    parser->space->owlIntersectionOf(intersectionVar, intersectionClasses);
    cowl_write_static((UOStream*)stream, "    Intersection terminée\n");
    
    return intersectionVar;
}

// Gestion de ObjectSomeValuesFrom (∃P.C)
template <typename T>
chr::Logical_var<std::string> ParserCowl<T>::iterateObjectSomeValuesFrom(ParserCowl<T>* parser, CowlClsExp* someExp) {
    UOStream* stream = uostream_std();
    cowl_write_static((UOStream*)stream, " Traitement ObjectSomeValuesFrom...\n");
    
    // Générer un ID unique
    std::string someId = "http://anonymous.org#SomeValuesFrom_" + std::to_string(++anonymousClassExpressionCounter);
    
    cowl_write_static((UOStream*)stream, "   ID: ");
    cowl_write_static((UOStream*)stream, someId.c_str());
    cowl_write_static((UOStream*)stream, "\n");

    chr::Logical_var<std::string> someVar=parser->getOrCreateLogicalVar(someId);
    parser->space->owlClass(someVar);
    
    // Récupérer la propriété et le filler
    CowlObjQuant* quant = (CowlObjQuant*)someExp;
    CowlObjPropExp* property = cowl_obj_quant_get_prop(quant);
    CowlClsExp* filler = cowl_obj_quant_get_filler(quant);
    
    // Obtenir l'IRI de la propriété
    std::string propertyUri = getFullIRI(cowl_obj_prop_get_iri((CowlObjProp*)property));
    chr::Logical_var<std::string> propertyVar = parser->getOrCreateLogicalVar(propertyUri);
    chr::Logical_var<std::string> fillerVar;
    if(cowl_cls_exp_get_type(filler) == COWL_CET_CLASS) {
        CowlClass* cls = (CowlClass*) filler;
        CowlIRI* iri = cowl_class_get_iri(cls);
        std::string classUri = getFullIRI(iri);
        // Récupérer ou créer la variable logique pour ce filler
        fillerVar = parser->getOrCreateLogicalVar(classUri);
    }
    else {
      // Traiter récursivement le filler
     fillerVar = processComplexClass(parser, filler);
    }    
    cowl_write_static((UOStream*)stream, "    Propriété et filler traités\n");
    
    parser->space->owlObjectSomeValuesFrom(someVar, propertyVar, fillerVar);  
     cowl_write_static((UOStream*)stream, "    SomeValuesFrom terminé\n");

    return someVar;
}

// Gestion de ObjectAllValuesFrom (∀P.C)
template <typename T>
chr::Logical_var<std::string> ParserCowl<T>::iterateObjectAllValuesFrom(ParserCowl<T>* parser, CowlClsExp* allExp) {
    UOStream* stream = uostream_std();
    cowl_write_static((UOStream*)stream, " Traitement ObjectAllValuesFrom...\n");
    
    // Générer un ID unique
    std::string allId = "http://anonymous.org#AllValuesFrom_" + std::to_string(++anonymousClassExpressionCounter);
    
    cowl_write_static((UOStream*)stream, "   ID: ");
    cowl_write_static((UOStream*)stream, allId.c_str());
    cowl_write_static((UOStream*)stream, "\n");

    chr::Logical_var<std::string> allVar=parser->getOrCreateLogicalVar(allId);
    parser->space->owlClass(allVar);
    
    // Récupérer la propriété et le filler
    CowlObjQuant* quant = (CowlObjQuant*)allExp;
    CowlObjPropExp* property = cowl_obj_quant_get_prop(quant);
    CowlClsExp* filler = cowl_obj_quant_get_filler(quant);
    
    // Obtenir l'IRI de la propriété
    std::string propertyUri = getFullIRI(cowl_obj_prop_get_iri((CowlObjProp*)property));
    chr::Logical_var<std::string> propertyVar = parser->getOrCreateLogicalVar(propertyUri);
    chr::Logical_var<std::string> fillerVar;
    if(cowl_cls_exp_get_type(filler) == COWL_CET_CLASS) {
        CowlClass* cls = (CowlClass*) filler;
        CowlIRI* iri = cowl_class_get_iri(cls);
        std::string classUri = getFullIRI(iri);
        // Récupérer ou créer la variable logique pour ce filler
        fillerVar = parser->getOrCreateLogicalVar(classUri);
    }else{
       // Traiter récursivement le filler
       fillerVar = processComplexClass(parser, filler);
   }
    cowl_write_static((UOStream*)stream, "    Propriété et filler traités\n");
    cowl_write_static((UOStream*)stream, "    AllValuesFrom terminé\n");
    parser->space->owlObjectAllValuesFrom(allVar, propertyVar, fillerVar);
    return allVar;
}

// Gestion de ObjectHasValue
template <typename T>
chr::Logical_var<std::string> ParserCowl<T>::iterateObjectHasValue(ParserCowl<T>* parser, CowlClsExp* hasValueExp) {
    UOStream* stream = uostream_std();
    cowl_write_static((UOStream*)stream, " Traitement ObjectHasValue...\n");
    
    std::string hasValueId = "http://anonymous.org#HasValue_" + std::to_string(++anonymousClassExpressionCounter);

    chr::Logical_var<std::string> hasValueVar=parser->getOrCreateLogicalVar(hasValueId);
    parser->space->owlClass(hasValueVar);
    
    // Récupérer la propriété et l'individu
    CowlObjHasValue* hasValue = (CowlObjHasValue*)hasValueExp;
    CowlObjPropExp* property = cowl_obj_has_value_get_prop(hasValue);
    CowlIndividual* individual = cowl_obj_has_value_get_ind(hasValue);
    
    // Obtenir les URIs
    std::string propertyUri = getFullIRI(cowl_obj_prop_get_iri((CowlObjProp*)property));
    chr::Logical_var<std::string> propertyVar = parser->getOrCreateLogicalVar(propertyUri);
    
    CowlIRI* indIri = cowl_named_ind_get_iri((CowlNamedInd*)individual);
    std::string individualUri = getFullIRI(indIri);
    chr::Logical_var<std::string> individualVar = parser->getOrCreateLogicalVar(individualUri);
    
    // Créer la contrainte owlHasValueObject
    parser->space->owlHasValueObject(hasValueVar, propertyVar, individualVar);
    cowl_write_static((UOStream*)stream, "    HasValue terminé\n");
    
    return hasValueVar;
}

// Gestion de ObjectOneOf
template <typename T>
chr::Logical_var<std::string> ParserCowl<T>::iterateObjectOneOf(ParserCowl<T>* parser, CowlClsExp* oneOfExp) {
    UOStream* stream = uostream_std();
    cowl_write_static((UOStream*)stream, " Traitement ObjectOneOf...\n");
    
    std::string oneOfId = "http://anonymous.org#OneOf_" + std::to_string(++anonymousClassExpressionCounter);

    chr::Logical_var<std::string> oneOfVar=parser->getOrCreateLogicalVar(oneOfId);
    parser->space->owlClass(oneOfVar);
    
    // Récupérer les individus
    CowlObjOneOf* oneOf = (CowlObjOneOf*)oneOfExp;
    CowlVector* individuals = cowl_obj_one_of_get_inds(oneOf);
    size_t count = cowl_vector_count(individuals);
    std::set<chr::Logical_var<std::string>> oneOfIndividuals;
    
    // Créer un set d'URIs pour les individus et créer des assertions de classe
    for(size_t i = 0; i < count; i++) {
        CowlIndividual* ind = (CowlIndividual*)cowl_vector_get_item(individuals, i);
        CowlIRI* indIri = cowl_named_ind_get_iri((CowlNamedInd*)ind);
        std::string individualUri = getFullIRI(indIri);
        chr::Logical_var<std::string> indVar = parser->getOrCreateLogicalVar(individualUri);
        oneOfIndividuals.insert(indVar);
    }
    parser->space->owlOneOf(oneOfVar, oneOfIndividuals);
    cowl_write_static((UOStream*)stream, "    OneOf terminé\n");
    
    return oneOfVar;
}

// Gestion de DataSomeValuesFrom
template <typename T>
chr::Logical_var<std::string> ParserCowl<T>::iterateDataSomeValuesFrom(ParserCowl<T>* parser, CowlClsExp* dataSomeExp) {
    UOStream* stream = uostream_std();
    cowl_write_static((UOStream*)stream, " Traitement DataSomeValuesFrom...\n");
    
    std::string dataSomeId = "http://anonymous.org#DataSomeValuesFrom_" + std::to_string(++anonymousClassExpressionCounter);
    chr::Logical_var<std::string> dataSomeVar=parser->getOrCreateLogicalVar(dataSomeId);
    // Récupérer la propriété et le range
    CowlDataQuant* quant = (CowlDataQuant*)dataSomeExp;
    CowlDataPropExp* property = cowl_data_quant_get_prop(quant);
    CowlDataRange* range = cowl_data_quant_get_range(quant);
    // Obtenir l'IRI de la propriété
    std::string propertyUri = getFullIRI(cowl_data_prop_get_iri((CowlDataProp*)property));
    chr::Logical_var<std::string> propertyVar = parser->getOrCreateLogicalVar(propertyUri);
    std::shared_ptr<AnySimpleType> typeVal;
    std::string dataTypeUri = getFullIRI(cowl_datatype_get_iri((CowlDatatype*)range));
    XSDType type = mapXsdType(dataTypeUri);
    
        switch (type) {
            // Types numériques entiers
            case XSDType::INTEGER:  
                typeVal = std::make_shared<IntegerType>(); 
                break;
            case XSDType::NON_NEGATIVE_INTEGER: 
                typeVal = std::make_shared<NonNegativeIntegerType>(); 
                break;
            case XSDType::NON_POSITIVE_INTEGER: 
                typeVal = std::make_shared<NonPositiveIntegerType>(); 
                break;
            case XSDType::POSITIVE_INTEGER: 
                typeVal = std::make_shared<PositiveIntegerType>(); 
                break;
            case XSDType::NEGATIVE_INTEGER: 
                typeVal = std::make_shared<NegativeIntegerType>(); 
                break;
            case XSDType::INT: 
                typeVal = std::make_shared<IntType>(); 
                break;
            case XSDType::UNSIGNED_INT: 
                typeVal = std::make_shared<UnsignedIntType>(); 
                break;
            case XSDType::SHORT: 
                typeVal = std::make_shared<ShortType>(); 
                break;
            case XSDType::UNSIGNED_SHORT: 
                typeVal = std::make_shared<UnsignedShortType>(); 
                break;
            case XSDType::BYTE: 
                typeVal = std::make_shared<ByteType>(); 
                break;
            case XSDType::UNSIGNED_BYTE: 
                typeVal = std::make_shared<UnsignedByteType>(); 
                break;
            case XSDType::LONG: 
                typeVal = std::make_shared<LongType>(); 
                break;
            case XSDType::UNSIGNED_LONG: 
                typeVal = std::make_shared<UnsignedLongType>(); 
                break;
            
            // Types numériques décimaux
            case XSDType::FLOAT:  
                typeVal = std::make_shared<FloatType>(); 
                break;
            case XSDType::DOUBLE: 
                typeVal = std::make_shared<DoubleType>(); 
                break;
            case XSDType::DECIMAL: 
                typeVal = std::make_shared<DecimalType>(); 
                break;
            
            // Type booléen
            case XSDType::BOOLEAN: 
                typeVal = std::make_shared<BooleanType>(); 
                break;
            
            // Types chaînes de caractères
            case XSDType::STRING: 
                typeVal = std::make_shared<StringType>(); 
                break;
            case XSDType::NORMALIZED_STRING: 
                typeVal = std::make_shared<NormalizedStringType>(); 
                break;
            case XSDType::TOKEN: 
                typeVal = std::make_shared<TokenType>(); 
                break;
            case XSDType::LANGUAGE: 
                typeVal = std::make_shared<LanguageType>(); 
                break;
            case XSDType::NAME: 
                typeVal = std::make_shared<NameType>(); 
                break;
            case XSDType::NCNAME: 
                typeVal = std::make_shared<NCNameType>(); 
                break;
            case XSDType::ID: 
                typeVal = std::make_shared<IDType>(); 
                break;
            case XSDType::IDREF: 
                typeVal = std::make_shared<IDREFType>(); 
                break;
            case XSDType::IDREFS: 
                typeVal = std::make_shared<IDREFSType>(); 
                break;
            case XSDType::ENTITY: 
                typeVal = std::make_shared<ENTITYType>(); 
                break;
            case XSDType::ENTITIES: 
                typeVal = std::make_shared<ENTITIESType>(); 
                break;
            case XSDType::NMTOKEN: 
                typeVal = std::make_shared<NMTOKENType>(); 
                break;
            case XSDType::NMTOKENS: 
                typeVal = std::make_shared<NMTOKENSType>(); 
                break;
            
            // Types dates et heures
            case XSDType::DATE: 
                typeVal = std::make_shared<DateType>(); 
                break;
            case XSDType::TIME: 
                typeVal = std::make_shared<TimeType>(); 
                break;
            case XSDType::DATE_TIME: 
                typeVal = std::make_shared<DateTimeType>(); 
                break;
            case XSDType::DATE_TIME_STAMP: 
                typeVal = std::make_shared<DateTimeStampType>(); 
                break;
            case XSDType::DURATION: 
                typeVal = std::make_shared<DurationType>(); 
                break;
            case XSDType::G_YEAR: 
                typeVal = std::make_shared<GYearType>(); 
                break;
            case XSDType::G_YEAR_MONTH: 
                typeVal = std::make_shared<GYearMonthType>(); 
                break;
            case XSDType::G_MONTH: 
                typeVal = std::make_shared<GMonthType>(); 
                break;
            case XSDType::G_MONTH_DAY: 
                typeVal = std::make_shared<GMonthDayType>(); 
                break;
            case XSDType::G_DAY: 
                typeVal = std::make_shared<GDayType>(); 
                break;
            
            // Types binaires
            case XSDType::BASE64_BINARY: 
                typeVal = std::make_shared<Base64BinaryType>(); 
                break;
            case XSDType::HEX_BINARY: 
                typeVal = std::make_shared<HexBinaryType>(); 
                break;

            // Type URI
            case XSDType::ANY_URI: 
                typeVal = std::make_shared<AnyURIType>(); 
                break;
            
            // Types divers
            case XSDType::QNAME: 
                typeVal = std::make_shared<QNameType>(); 
                break;
            case XSDType::NOTATION: 
                typeVal = std::make_shared<NotationType>(); 
                break;
            
            // Type inconnu
            case XSDType::UNKNOWN:
            default: 
                typeVal = std::make_shared<StringType>(); // Type par défaut pour types inconnus
                break;
        }

    parser->space->owlDataSomeValuesFrom(dataSomeVar, propertyVar,std::move(typeVal));
    cowl_write_static((UOStream*)stream, "    DataSomeValuesFrom terminé\n");
    
    return dataSomeVar;
}

// Gestion de DataAllValuesFrom
template <typename T>
chr::Logical_var<std::string> ParserCowl<T>::iterateDataAllValuesFrom(ParserCowl<T>* parser, CowlClsExp* dataAllExp) {
    UOStream* stream = uostream_std();
    cowl_write_static((UOStream*)stream, " Traitement DataAllValuesFrom...\n");
    
    std::string dataAllId = "http://anonymous.org#DataAllValuesFrom_" + std::to_string(++anonymousClassExpressionCounter);
    chr::Logical_var<std::string> dataAllVar = parser->getOrCreateLogicalVar(dataAllId);
    parser->space->owlClass(dataAllVar);

    // Extraire la propriété et le range
    CowlDataQuant* quant = (CowlDataQuant*)dataAllExp;
    CowlDataPropExp* property = cowl_data_quant_get_prop(quant);
    CowlDataRange* range = cowl_data_quant_get_range(quant);

    // Récupérer l'URI de la propriété
    std::string propertyUri = getFullIRI(cowl_data_prop_get_iri((CowlDataProp*)property));
    chr::Logical_var<std::string> propertyVar = parser->getOrCreateLogicalVar(propertyUri);

    // Récupérer le type de données et le mapper
    std::string dataTypeUri = getFullIRI(cowl_datatype_get_iri((CowlDatatype*)range));
    XSDType type = mapXsdType(dataTypeUri);
    
    // Créer le DataType correspondant
    std::shared_ptr<AnySimpleType> typeVal;    
    switch (type) {
        // Types entiers
        case XSDType::INTEGER: 
            typeVal = std::make_shared<IntegerType>(); 
            break;
        case XSDType::NON_NEGATIVE_INTEGER: 
            typeVal = std::make_shared<NonNegativeIntegerType>(); 
            break;
        case XSDType::NON_POSITIVE_INTEGER: 
            typeVal = std::make_shared<NonPositiveIntegerType>(); 
            break;
        case XSDType::POSITIVE_INTEGER: 
            typeVal = std::make_shared<PositiveIntegerType>(); 
            break;
        case XSDType::NEGATIVE_INTEGER: 
            typeVal = std::make_shared<NegativeIntegerType>(); 
            break;
        case XSDType::INT: 
            typeVal = std::make_shared<IntType>(); 
            break;
        case XSDType::UNSIGNED_INT: 
            typeVal = std::make_shared<UnsignedIntType>(); 
            break;
        case XSDType::SHORT: 
            typeVal = std::make_shared<ShortType>(); 
            break;
        case XSDType::UNSIGNED_SHORT: 
            typeVal = std::make_shared<UnsignedShortType>(); 
            break;
        case XSDType::BYTE: 
            typeVal = std::make_shared<ByteType>(); 
            break;
        case XSDType::UNSIGNED_BYTE: 
            typeVal = std::make_shared<UnsignedByteType>(); 
            break;
        case XSDType::LONG: 
            typeVal = std::make_shared<LongType>(); 
            break;
        case XSDType::UNSIGNED_LONG: 
            typeVal = std::make_shared<UnsignedLongType>(); 
            break;
        
        // Types numériques décimaux
        case XSDType::FLOAT:  
            typeVal = std::make_shared<FloatType>(); 
            break;
        case XSDType::DOUBLE: 
            typeVal = std::make_shared<DoubleType>(); 
            break;
        case XSDType::DECIMAL: 
            typeVal = std::make_shared<DecimalType>(); 
            break;
        
        // Type booléen
        case XSDType::BOOLEAN: 
            typeVal = std::make_shared<BooleanType>(); 
            break;
        
        // Types chaînes de caractères
        case XSDType::STRING: 
            typeVal = std::make_shared<StringType>(); 
            break;
        case XSDType::NORMALIZED_STRING: 
            typeVal = std::make_shared<NormalizedStringType>(); 
            break;
        case XSDType::TOKEN: 
            typeVal = std::make_shared<TokenType>(); 
            break;
        case XSDType::LANGUAGE: 
            typeVal = std::make_shared<LanguageType>(); 
            break;
        case XSDType::NAME: 
            typeVal = std::make_shared<NameType>(); 
            break;
        case XSDType::NCNAME: 
            typeVal = std::make_shared<NCNameType>(); 
            break;
        case XSDType::ID: 
            typeVal = std::make_shared<IDType>(); 
            break;
        case XSDType::IDREF: 
            typeVal = std::make_shared<IDREFType>(); 
            break;
        case XSDType::IDREFS: 
            typeVal = std::make_shared<IDREFSType>(); 
            break;
        case XSDType::ENTITY: 
            typeVal = std::make_shared<ENTITYType>(); 
            break;
        case XSDType::ENTITIES: 
            typeVal = std::make_shared<ENTITIESType>(); 
            break;
        case XSDType::NMTOKEN: 
            typeVal = std::make_shared<NMTOKENType>(); 
            break;
        case XSDType::NMTOKENS: 
            typeVal = std::make_shared<NMTOKENSType>(); 
            break;
        
        // Types dates et heures
        case XSDType::DATE: 
            typeVal = std::make_shared<DateType>(); 
            break;
        case XSDType::TIME: 
            typeVal = std::make_shared<TimeType>(); 
            break;
        case XSDType::DATE_TIME: 
            typeVal = std::make_shared<DateTimeType>(); 
            break;
        case XSDType::DATE_TIME_STAMP: 
            typeVal = std::make_shared<DateTimeStampType>(); 
            break;
        case XSDType::DURATION: 
            typeVal = std::make_shared<DurationType>(); 
            break;
        case XSDType::G_YEAR: 
            typeVal = std::make_shared<GYearType>(); 
            break;
        case XSDType::G_YEAR_MONTH: 
            typeVal = std::make_shared<GYearMonthType>(); 
            break;
        case XSDType::G_MONTH: 
            typeVal = std::make_shared<GMonthType>(); 
            break;
        case XSDType::G_MONTH_DAY: 
            typeVal = std::make_shared<GMonthDayType>(); 
            break;
        case XSDType::G_DAY: 
            typeVal = std::make_shared<GDayType>(); 
            break;
        
        // Types binaires
        case XSDType::BASE64_BINARY: 
            typeVal = std::make_shared<Base64BinaryType>(); 
            break;
        case XSDType::HEX_BINARY: 
            typeVal = std::make_shared<HexBinaryType>(); 
            break;

        // Type URI
        case XSDType::ANY_URI: 
            typeVal = std::make_shared<AnyURIType>(); 
            break;
        
        // Types divers
        case XSDType::QNAME: 
            typeVal = std::make_shared<QNameType>(); 
            break;
        case XSDType::NOTATION: 
            typeVal = std::make_shared<NotationType>(); 
            break;
        
        // Type inconnu
        case XSDType::UNKNOWN:
        default: 
            typeVal = std::make_shared<StringType>(); // Type par défaut pour types inconnus
            break;
    }

    parser->space->owlDataAllValuesFrom(dataAllVar, propertyVar, std::move(typeVal) );
    cowl_write_static((UOStream*)stream, "    DataAllValuesFrom terminé\n");
    
    return dataAllVar;
}


template <typename T>
chr::Logical_var<std::string> ParserCowl<T>::iterateMaxCardinality(ParserCowl<T>* parser, CowlClsExp* maxCardExp){
    UOStream* stream = uostream_std();
    cowl_write_static((UOStream*)stream, " Traitement MaxCardinality...\n");
    
    std::string maxCardId = "http://anonymous.org#MaxCardinality_" + std::to_string(++anonymousClassExpressionCounter);
    chr::Logical_var<std::string> maxCardVar = parser->getOrCreateLogicalVar(maxCardId);
    parser->space->owlClass(maxCardVar);

    // Déterminer si c'est une object property ou data property cardinality
    CowlClsExpType expType = cowl_cls_exp_get_type(maxCardExp);
    
    if (expType == COWL_CET_OBJ_MAX_CARD) {
        // Object Property MaxCardinality
        CowlObjCard* objCard = (CowlObjCard*)maxCardExp;
        CowlClsExp* filler = cowl_obj_card_get_filler(objCard);
        
        // Vérifier si c'est qualifié (filler != owl:Thing)
        bool isQualified = false;
        if (filler != NULL) {
            CowlClsExpType fillerType = cowl_cls_exp_get_type(filler);
            if (fillerType == COWL_CET_CLASS) {
                CowlClass* fillerClass = (CowlClass*)filler;
                std::string fillerUri = getFullIRI(cowl_class_get_iri(fillerClass));
                // Qualifié si le filler n'est pas owl:Thing
                isQualified = (fillerUri != "http://www.w3.org/2002/07/owl#Thing");
            } else {
                // Si c'est une expression complexe, c'est qualifié
                isQualified = true;
            }
        }
        
        // Traiter la cardinalité (qualifiée ou non)
        ulib_uint cardinality = cowl_obj_card_get_cardinality(objCard);
        CowlObjPropExp* property = cowl_obj_card_get_prop(objCard);
        
        // Obtenir l'IRI de la propriété
        std::string propertyUri = getFullIRI(cowl_obj_prop_get_iri((CowlObjProp*)property));
        chr::Logical_var<std::string> propertyVar = parser->getOrCreateLogicalVar(propertyUri);
        
        if (!isQualified) {
            // Non qualifié (autorisé en OWL2 RL)
            cowl_write_static((UOStream*)stream, "    ObjectMaxCardinality non qualifié terminé\n");
            parser->space->owlObjectMaxCardinality(maxCardVar, propertyVar, cardinality);
        } else {
            // Qualifié : traiter le filler
            cowl_write_static((UOStream*)stream, "    ObjectMaxCardinality qualifié - traitement du filler\n");
            
            chr::Logical_var<std::string> fillerVar;
            if (cowl_cls_exp_get_type(filler) == COWL_CET_CLASS) {
                // Classe simple
                CowlClass* fillerClass = (CowlClass*)filler;
                std::string fillerUri = getFullIRI(cowl_class_get_iri(fillerClass));
                fillerVar = parser->getOrCreateLogicalVar(fillerUri);
            } else {
                // Expression complexe : traiter récursivement
                fillerVar = processComplexClass(parser, filler);
            }
            
            // Générer la contrainte qualifiée : ObjectMaxCardinality(C, P, n, Filler)
            // Pour l'instant on utilise owlObjectSomeValuesFrom pour exprimer la qualification
            parser->space->owlObjectMaxCardinality(maxCardVar, propertyVar, cardinality);
            parser->space->owlObjectAllValuesFrom(maxCardVar, propertyVar, fillerVar);
            
            cowl_write_static((UOStream*)stream, "    ObjectMaxCardinality qualifié terminé\n");
        }
        
    } else if (expType == COWL_CET_DATA_MAX_CARD) {
        // Data Property MaxCardinality
        CowlDataCard* dataCard = (CowlDataCard*)maxCardExp;
        CowlDataRange* range = cowl_data_card_get_range(dataCard);
        
        // Vérifier si c'est qualifié (range != rdfs:Literal)
        bool isQualified = false;
        if (range != NULL) {
            CowlDataRangeType rangeType = cowl_data_range_get_type(range);
            if (rangeType == COWL_DRT_DATATYPE) {
                CowlDatatype* datatype = (CowlDatatype*)range;
                std::string rangeUri = getFullIRI(cowl_datatype_get_iri(datatype));
                // Qualifié si le range n'est pas rdfs:Literal
                isQualified = (rangeUri != "http://www.w3.org/2000/01/rdf-schema#Literal");
            } else {
                // Si c'est un range complexe, c'est qualifié
                isQualified = true;
            }
        }
        
        // Traiter la cardinalité (qualifiée ou non)
        ulib_uint cardinality = cowl_data_card_get_cardinality(dataCard);
        CowlDataPropExp* property = cowl_data_card_get_prop(dataCard);
        
        // Obtenir l'IRI de la propriété
        std::string propertyUri = getFullIRI(cowl_data_prop_get_iri((CowlDataProp*)property));
        chr::Logical_var<std::string> propertyVar = parser->getOrCreateLogicalVar(propertyUri);
        
        if (!isQualified) {
            // Non qualifié
            cowl_write_static((UOStream*)stream, "    DataMaxCardinality non qualifié terminé\n");
            parser->space->owlDataMaxCardinality(maxCardVar, propertyVar, cardinality);
        } else {
            // Qualifié : traiter le range
            cowl_write_static((UOStream*)stream, "    DataMaxCardinality qualifié - traitement du range\n");
            
            // Convertir le range en type XSD approprié
            std::shared_ptr<AnySimpleType> rangeType = nullptr;
            if (cowl_data_range_get_type(range) == COWL_DRT_DATATYPE) {
                CowlDatatype* datatype = (CowlDatatype*)range;
                std::string rangeUri = getFullIRI(cowl_datatype_get_iri(datatype));
                
                // Extraire le nom du type XSD et utiliser mapXsdType
                size_t pos = rangeUri.find_last_of("#/");
                if (pos != std::string::npos) {
                    std::string typeName = rangeUri.substr(pos + 1);
                    XSDType xsdType = mapXsdType(typeName);
                    
                    // Créer le type approprié (logique similaire à iterateDataPropertyRange)
                    switch (xsdType) {
                        case XSDType::INTEGER: rangeType = std::make_shared<IntegerType>(); break;
                        case XSDType::STRING: rangeType = std::make_shared<StringType>(); break;
                        case XSDType::BOOLEAN: rangeType = std::make_shared<BooleanType>(); break;
                        case XSDType::DOUBLE: rangeType = std::make_shared<DoubleType>(); break;
                        case XSDType::FLOAT: rangeType = std::make_shared<FloatType>(); break;
                        // Ajouter d'autres types selon les besoins
                        default: rangeType = std::make_shared<StringType>(); break;
                    }
                }
            }
            
            // Générer les contraintes qualifiées
            parser->space->owlDataMaxCardinality(maxCardVar, propertyVar, cardinality);
            if (rangeType) {
                parser->space->owlDataAllValuesFrom(maxCardVar, propertyVar, rangeType);
            }
            
            cowl_write_static((UOStream*)stream, "    DataMaxCardinality qualifié terminé\n");
        }
        
    } else {
        cowl_write_static((UOStream*)stream, "    Type de MaxCardinality non reconnu\n");
    }
    
    return maxCardVar;
}

template <typename T>
chr::Logical_var<std::string> ParserCowl<T>::iterateObjectComplementOf(ParserCowl<T>* parser, CowlClsExp* complementExp) {
    UOStream* stream = uostream_std();
    cowl_write_static((UOStream*)stream, "itération sur le complément d'objet : ");

    std::string complementID = "http://anonymous.org#ComplementOf_" + std::to_string(++anonymousClassExpressionCounter);
    chr::Logical_var<std::string> complementVar = parser->getOrCreateLogicalVar(complementID);
    parser->space->owlClass(complementVar);
    
    // Obtenir l'opérande du complément
    CowlObjCompl* complement = (CowlObjCompl*)complementExp;
    CowlClsExp* operand = cowl_obj_compl_get_operand(complement);
    
    // Traiter l'opérande (peut être une classe atomique ou complexe)
    chr::Logical_var<std::string> operandVar;
    if (cowl_cls_exp_get_type(operand) == COWL_CET_CLASS) {
        // Classe atomique
        CowlIRI* iri = cowl_class_get_iri((CowlClass*)operand);
        std::string classUri = getFullIRI(iri);
        operandVar = parser->getOrCreateLogicalVar(classUri);
    } else {
        // Classe complexe - traiter récursivement
        cowl_write_static((UOStream*)stream, "   Opérande complexe détectée à l'interrieur dun complement - interdit en owl2 RL\n");
    }

    parser->space->owlComplementOf(complementVar, operandVar);
    cowl_write_static((UOStream*)stream, "ComplementOf terminé\n");
    return complementVar;
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

    
    // Variables pour gérer les unions
    chr::Logical_var<std::string> atomicClassVar;
    std::string atomicClassUri;

    for (ulib_uint i = 0; i < count; ++i) { 
           chr::Logical_var<std::string> classVar;

        CowlClsExp* cls = (CowlClsExp*) cowl_vector_get_item(class_list, i);
        CowlClsExpType clsType = cowl_cls_exp_get_type(cls);
        
        if (clsType == COWL_CET_CLASS) {
            // Classe atomique
            CowlIRI* iri = cowl_class_get_iri((CowlClass*)cls);
            std::string classUri = getFullIRI(iri);
            classVar = parser->getOrCreateLogicalVar(classUri);
        }
        else {
             classVar = processComplexClass(parser, cls);
        }
        classVars.push_back(classVar);
    }

    cowl_write_static((UOStream*)stream, "\n");

    // Créer les paires d’équivalence 
    for (size_t i = 0; i < classVars.size(); ++i) {
        for (size_t j = i + 1; j < classVars.size(); ++j) {
            parser->space->owlEquivalentClass(classVars[i], classVars[j]);
        }
    }
}



template <typename T>
void ParserCowl<T>:: iterateDisjClass(ParserCowl<T>* parser, CowlAny *axiom){
    UOStream *stream = uostream_std();
    cowl_write_static((UOStream *)stream, "disjoin entre : ");

    CowlNAryClsAxiom *eq_axiom = (CowlNAryClsAxiom *) axiom;
    CowlVector *class_list = cowl_nary_cls_axiom_get_classes(eq_axiom);
    ulib_uint count = cowl_vector_count(class_list);

    // Stocker les URI des classes
    std::vector<std::string> classUris;

    for (ulib_uint  i = 0; i < count; ++i) {
        CowlClass *cls = (CowlClass *) cowl_vector_get_item(class_list, i);
        CowlIRI *iri = cowl_class_get_iri(cls);
        CowlString *name = cowl_iri_get_rem(iri);  // Pour l'affichage seulement
        std::string classUri = getFullIRI(iri);  // IRI complète
        classUris.push_back(classUri);

        cowl_write_string((UOStream *)stream, name);
        if (i < count - 1) cowl_write_static((UOStream *)stream, " , ");
    }
    
    cowl_write_static((UOStream *)stream, "\n");

    // Créer toutes les paires de classes disjointes : (A,B), (A,C), (B,C), ...
    for (size_t i = 0; i < classUris.size(); ++i) {
        for (size_t j = i + 1; j < classUris.size(); ++j) {
            // Récupérer les variables logiques depuis le cache au moment de l'appel
            chr::Logical_var<std::string>& classVar_i = parser->getOrCreateLogicalVar(classUris[i]);
            chr::Logical_var<std::string>& classVar_j = parser->getOrCreateLogicalVar(classUris[j]);
            parser->space->owlDisjointClass(classVar_i, classVar_j);
        }
    }
}
template <typename T>
void ParserCowl<T>:: iterateClassAssert(ParserCowl<T>* parser, CowlAny *axiom){
    UOStream *stream = uostream_std();
    CowlClass *classe =(CowlClass* )cowl_cls_assert_axiom_get_cls_exp((CowlClsAssertAxiom*)axiom);
    CowlNamedInd *indiv= (CowlNamedInd*)cowl_cls_assert_axiom_get_ind((CowlClsAssertAxiom*)axiom);
    CowlIRI *iriClasse = cowl_class_get_iri(classe);
    CowlIRI *iriIndiv =cowl_named_ind_get_iri(indiv);
    CowlString *nameClasse = cowl_iri_get_rem(iriClasse);  // Pour l'affichage seulement
    CowlString *nameIndiv = cowl_iri_get_rem(iriIndiv);  // Pour l'affichage seulement

    // Obtenir les IRI complètes pour les variables logiques
    std::string classeUri = getFullIRI(iriClasse);
    std::string indivUri = getFullIRI(iriIndiv);

    chr::Logical_var<std::string>& classeVar = parser->getOrCreateLogicalVar(classeUri);
    chr::Logical_var<std::string>& indivVar = parser->getOrCreateLogicalVar(indivUri);

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
    CowlString *nameSujet= cowl_iri_get_rem(iriSujet);  // Pour l'affichage seulement
    CowlString *nameObjet = cowl_iri_get_rem(iriObjet);  // Pour l'affichage seulement

    CowlIRI *iriProp = cowl_obj_prop_get_iri(prop);
    CowlString *nameProp = cowl_iri_get_rem(iriProp);  // Pour l'affichage seulement

    // Obtenir les IRI complètes pour les variables logiques
    std::string sujetUri = getFullIRI(iriSujet);
    std::string propUri = getFullIRI(iriProp);
    std::string objetUri = getFullIRI(iriObjet);

    chr::Logical_var<std::string>& sujetVar = parser->getOrCreateLogicalVar(sujetUri);
    chr::Logical_var<std::string>& propVar = parser->getOrCreateLogicalVar(propUri);
    chr::Logical_var<std::string>& objetVar = parser->getOrCreateLogicalVar(objetUri);

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
    CowlString *nameSujet= cowl_iri_get_rem(iriSujet);  // Pour l'affichage seulement
    CowlString *nameObjet = cowl_iri_get_rem(iriObjet);  // Pour l'affichage seulement


    CowlIRI *iriProp = cowl_obj_prop_get_iri(prop);
    CowlString *nameProp = cowl_iri_get_rem(iriProp);  // Pour l'affichage seulement

    // Obtenir les IRI complètes pour les variables logiques
    std::string sujetUri = getFullIRI(iriSujet);
    std::string propUri = getFullIRI(iriProp);
    std::string objetUri = getFullIRI(iriObjet);

    // Obtenir les références aux variables logiques depuis le cache
    chr::Logical_var<std::string>& sujetVar = parser->getOrCreateLogicalVar(sujetUri);
    chr::Logical_var<std::string>& propVar = parser->getOrCreateLogicalVar(propUri);
    chr::Logical_var<std::string>& objetVar = parser->getOrCreateLogicalVar(objetUri);

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
    //on teste si sub est une propriété ou un chaine de propriétés
    CowlAny * sub = cowl_sub_obj_prop_axiom_get_sub((CowlSubObjPropAxiom *)axiom);
    CowlObjProp * sup=(CowlObjProp*)cowl_sub_obj_prop_axiom_get_super((CowlSubObjPropAxiom *)axiom);

    // Vérifier si sub est une chaîne de propriétés (CowlVector) ou une propriété simple
    CowlObjectType subType = cowl_get_type(sub);
    
    if (subType == COWL_OT_VECTOR) {
        // C'est une chaîne de propriétés (property chain)
        CowlVector* propChain = (CowlVector*)sub;
        ulib_uint count = cowl_vector_count(propChain);
        
        cowl_write_static((UOStream *)stream, "Property chain: ");
        for (ulib_uint i = 0; i < count; ++i) {
            CowlObjProp* prop = (CowlObjProp*)cowl_vector_get_item(propChain, i);
            cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_obj_prop_get_iri(prop)));
            if (i < count - 1) {
                cowl_write_static((UOStream *)stream, " o ");
            }
        }
        cowl_write_static((UOStream *)stream, " subObjectProperty de ");
        cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_obj_prop_get_iri(sup)));
        cowl_write_static((UOStream *)stream, "\n");
        
        std::string chainID = "http://anonymous.org#ChainProperty_" + std::to_string(++anonymousClassExpressionCounter);
        chr::Logical_var<std::string> chainVar = parser->getOrCreateLogicalVar(chainID);
        cowl_write_static((UOStream *)stream, "Property chain constraint: ");
        for (ulib_uint i = 0; i < count; ++i) {
            CowlObjProp* prop = (CowlObjProp*)cowl_vector_get_item(propChain, i);
            cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_obj_prop_get_iri(prop)));
            if (i < count - 1) {
                cowl_write_static((UOStream *)stream, " o ");
            }
            chr::Logical_var<std::string> property = parser->getOrCreateLogicalVar(getFullIRI(cowl_obj_prop_get_iri(prop)));
            parser->space->owlObjectPropertyChain(chainVar, property, i, count-1);
        }
        cowl_write_static((UOStream *)stream, " subObjectProperty de ");
        cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_obj_prop_get_iri(sup)));
        cowl_write_static((UOStream *)stream, "\n");
        
        std::string supUri = getFullIRI(cowl_obj_prop_get_iri(sup));
        chr::Logical_var<std::string>& supVar = parser->getOrCreateLogicalVar(supUri);

        parser->space->owlSubObjectPropertyOf(chainVar, supVar);

    } else {
        // C'est une propriété simple
        CowlObjProp* subProp = (CowlObjProp*)sub;
        
        // Créer des variables logiques pour les propriétés
        std::string subUri = getFullIRI(cowl_obj_prop_get_iri(subProp));
        std::string supUri = getFullIRI(cowl_obj_prop_get_iri(sup));

        // Obtenir les références aux variables logiques depuis le cache
        chr::Logical_var<std::string>& subVar = parser->getOrCreateLogicalVar(subUri);
        chr::Logical_var<std::string>& supVar = parser->getOrCreateLogicalVar(supUri);

        cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_obj_prop_get_iri(subProp)));
        cowl_write_static((UOStream *)stream, " subObjectproperty de  ");
        cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_obj_prop_get_iri(sup)));

        // Utiliser les variables logiques pour la contrainte
        parser->space->owlSubObjectPropertyOf(subVar, supVar);
        cowl_write_static((UOStream *)stream, "\n");
    }
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
        CowlIRI *propIri = cowl_obj_prop_get_iri(prop);
        CowlString *propName = cowl_iri_get_rem(propIri);  // Pour l'affichage seulement
        
        // Obtenir l'IRI complète pour la variable logique
        std::string propUri = getFullIRI(propIri);
        chr::Logical_var<std::string>& propVar = parser->getOrCreateLogicalVar(propUri);
        
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
    
    CowlObjProp* prop= (CowlObjProp*)cowl_obj_prop_domain_axiom_get_prop((CowlObjPropDomainAxiom *)axiom);
    std::string propUri = getFullIRI(cowl_obj_prop_get_iri(prop));
    chr::Logical_var<std::string>& propVar = parser->getOrCreateLogicalVar(propUri);
    
    CowlClsExp * dom=cowl_obj_prop_domain_axiom_get_domain((CowlObjPropDomainAxiom *)axiom);
    std::string domUri = getFullIRI(cowl_class_get_iri((CowlClass *)dom));
    chr::Logical_var<std::string>& domVar = parser->getOrCreateLogicalVar(domUri);

    cowl_write_cstring((UOStream *)stream, propUri.c_str());
    cowl_write_static((UOStream *)stream, " a pour domaine  ");
    cowl_write_cstring((UOStream *)stream, domUri.c_str());
    parser->space->owlObjectPropertyDomain(propVar, domVar);
    cowl_write_static((UOStream *)stream, "\n");
}

template <typename T>
void ParserCowl<T>:: iterateObjPropRange(ParserCowl<T>* parser, CowlAny *axiom){
    UOStream *stream = uostream_std();
    CowlObjProp* prop= (CowlObjProp*)cowl_obj_prop_range_axiom_get_prop((CowlObjPropRangeAxiom *)axiom);
    std::string propUri = getFullIRI(cowl_obj_prop_get_iri(prop));
    chr::Logical_var<std::string>& propVar = parser->getOrCreateLogicalVar(propUri);
    
    CowlClsExp * dom=cowl_obj_prop_range_axiom_get_range((CowlObjPropRangeAxiom *)axiom);
    std::string domUri = getFullIRI(cowl_class_get_iri((CowlClass *)dom));
    chr::Logical_var<std::string>& domVar = parser->getOrCreateLogicalVar(domUri);
    cowl_write_cstring((UOStream *)stream, propUri.c_str());
    cowl_write_static((UOStream *)stream, " a pour range  ");
    cowl_write_cstring((UOStream *)stream, domUri.c_str());

    parser->space->owlObjectPropertyRange(propVar, domVar);
    cowl_write_static((UOStream *)stream, "\n");
}


template <typename T>
void ParserCowl<T>:: iterateDiffInd(ParserCowl<T>* parser, CowlAny *axiom){
    UOStream *stream = uostream_std();
    cowl_write_static((UOStream *)stream, "different individuals : ");
    
    CowlVector *indiv_list=cowl_nary_ind_axiom_get_individuals((CowlNAryIndAxiom *)axiom);
    ulib_uint count = cowl_vector_count(indiv_list);
    
    // Stocker les URI des individus
    std::vector<std::string> indivUris;
    
    for (ulib_uint  i = 0; i < count; ++i) {
        CowlNamedInd *indiv = (CowlNamedInd *) cowl_vector_get_item(indiv_list, i);
        std::string indivUri = getFullIRI(cowl_named_ind_get_iri(indiv));
        indivUris.push_back(indivUri);
        
        cowl_write_cstring((UOStream *)stream, indivUri.c_str());
        if (i < count - 1) cowl_write_static((UOStream *)stream, " , ");
    }
    
    cowl_write_static((UOStream *)stream, "\n");
    
    // Créer toutes les paires d'individus différents : (A,B), (A,C), (B,C), ...
    for (size_t i = 0; i < indivUris.size(); ++i) {
        for (size_t j = i + 1; j < indivUris.size(); ++j) {
            // Récupérer les variables logiques depuis le cache au moment de l'appel
            chr::Logical_var<std::string>& indivVar_i = parser->getOrCreateLogicalVar(indivUris[i]);
            chr::Logical_var<std::string>& indivVar_j = parser->getOrCreateLogicalVar(indivUris[j]);
            parser->space->owlDifferentIndividual(indivVar_i, indivVar_j);
        }
    }
}



template <typename T>
void ParserCowl<T>:: iterateSameInd(ParserCowl<T>* parser, CowlAny *axiom){
    UOStream *stream = uostream_std();
    cowl_write_static((UOStream *)stream, "same individuals : ");
    
    CowlVector *indiv_list=cowl_nary_ind_axiom_get_individuals((CowlNAryIndAxiom *)axiom);
    ulib_uint count = cowl_vector_count(indiv_list);
    
    // Stocker les URI des individus
    std::vector<std::string> indivUris;
    
    for (ulib_uint  i = 0; i < count; ++i) {
        CowlNamedInd *indiv = (CowlNamedInd *) cowl_vector_get_item(indiv_list, i);
        std::string indivUri = getFullIRI(cowl_named_ind_get_iri(indiv));
        indivUris.push_back(indivUri);
        
        cowl_write_cstring((UOStream *)stream, indivUri.c_str());
        if (i < count - 1) cowl_write_static((UOStream *)stream, " , ");
    }
    
    cowl_write_static((UOStream *)stream, "\n");
    
    // Créer toutes les paires d'individus identiques : (A,B), (A,C), (B,C), ...
    for (size_t i = 0; i < indivUris.size(); ++i) {
        for (size_t j = i + 1; j < indivUris.size(); ++j) {
            // Récupérer les variables logiques depuis le cache au moment de l'appel
            chr::Logical_var<std::string>& indivVar_i = parser->getOrCreateLogicalVar(indivUris[i]);
            chr::Logical_var<std::string>& indivVar_j = parser->getOrCreateLogicalVar(indivUris[j]);
            parser->space->owlSameIndividual(indivVar_i, indivVar_j);
        }
    }
}

template <typename T>
void ParserCowl<T>:: iterateDataPropAssert(ParserCowl<T>* parser, CowlAny *axiom){
    UOStream *stream = uostream_std();
    CowlIndividual * sujet=cowl_data_prop_assert_axiom_get_subject((CowlDataPropAssertAxiom *)axiom);
    CowlLiteral *objet=cowl_data_prop_assert_axiom_get_object((CowlDataPropAssertAxiom *)axiom);
    CowlDataPropExp *prop=cowl_data_prop_assert_axiom_get_prop((CowlDataPropAssertAxiom *)axiom);
    CowlDatatype * dataType=cowl_literal_get_datatype(objet);
    
    // Obtenir les URIs
    std::string propUri = getFullIRI(cowl_data_prop_get_iri((CowlDataProp *)prop));
    std::string dataTypeUri = getFullIRI(cowl_datatype_get_iri(dataType));
    
    cowl_write_static((UOStream *)stream, "data: ");
    cowl_write_string((UOStream *)stream, cowl_literal_get_value(objet));
    cowl_write_static((UOStream *)stream, "\ntype: ");
    cowl_write_cstring((UOStream *)stream, dataTypeUri.c_str());


    cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_named_ind_get_iri((CowlNamedInd*)sujet)));
    std::string sujetUri = getFullIRI(cowl_named_ind_get_iri((CowlNamedInd*)sujet));
    chr::Logical_var<std::string>& sujetVar = parser->getOrCreateLogicalVar(sujetUri);
    cowl_write_static((UOStream *)stream, " ");
    cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_data_prop_get_iri((CowlDataProp*)prop)));
    chr::Logical_var<std::string>& propVar = parser->getOrCreateLogicalVar(propUri);
    cowl_write_static((UOStream *)stream, " ");
    cowl_write_string((UOStream *)stream, cowl_literal_get_value(objet));
    std::shared_ptr<AnySimpleType> typeVal;
    Value v;
    std::string objetValue = ustring_to_string(cowl_string_get_raw(cowl_literal_get_value(objet)));
    cowl_write_static((UOStream *)stream, " ^^ ");
    cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_datatype_get_iri(dataType)));
    XSDType type = mapXsdType(dataTypeUri);
    
        switch (type) {
            // Types numériques entiers
            case XSDType::INTEGER:  
                typeVal = std::make_shared<IntegerType>(); 
                break;
            case XSDType::NON_NEGATIVE_INTEGER: 
                typeVal = std::make_shared<NonNegativeIntegerType>(); 
                break;
            case XSDType::NON_POSITIVE_INTEGER: 
                typeVal = std::make_shared<NonPositiveIntegerType>(); 
                break;
            case XSDType::POSITIVE_INTEGER: 
                typeVal = std::make_shared<PositiveIntegerType>(); 
                break;
            case XSDType::NEGATIVE_INTEGER: 
                typeVal = std::make_shared<NegativeIntegerType>(); 
                break;
            case XSDType::INT: 
                typeVal = std::make_shared<IntType>(); 
                break;
            case XSDType::UNSIGNED_INT: 
                typeVal = std::make_shared<UnsignedIntType>(); 
                break;
            case XSDType::SHORT: 
                typeVal = std::make_shared<ShortType>(); 
                break;
            case XSDType::UNSIGNED_SHORT: 
                typeVal = std::make_shared<UnsignedShortType>(); 
                break;
            case XSDType::BYTE: 
                typeVal = std::make_shared<ByteType>(); 
                break;
            case XSDType::UNSIGNED_BYTE: 
                typeVal = std::make_shared<UnsignedByteType>(); 
                break;
            case XSDType::LONG: 
                typeVal = std::make_shared<LongType>(); 
                break;
            case XSDType::UNSIGNED_LONG: 
                typeVal = std::make_shared<UnsignedLongType>(); 
                break;
            
            // Types numériques décimaux
            case XSDType::FLOAT:  
                typeVal = std::make_shared<FloatType>(); 
                break;
            case XSDType::DOUBLE: 
                typeVal = std::make_shared<DoubleType>(); 
                break;
            case XSDType::DECIMAL: 
                typeVal = std::make_shared<DecimalType>(); 
                break;
            
            // Type booléen
            case XSDType::BOOLEAN: 
                typeVal = std::make_shared<BooleanType>(); 
                break;
            
            // Types chaînes de caractères
            case XSDType::STRING: 
                typeVal = std::make_shared<StringType>(); 
                break;
            case XSDType::NORMALIZED_STRING: 
                typeVal = std::make_shared<NormalizedStringType>(); 
                break;
            case XSDType::TOKEN: 
                typeVal = std::make_shared<TokenType>(); 
                break;
            case XSDType::LANGUAGE: 
                typeVal = std::make_shared<LanguageType>(); 
                break;
            case XSDType::NAME: 
                typeVal = std::make_shared<NameType>(); 
                break;
            case XSDType::NCNAME: 
                typeVal = std::make_shared<NCNameType>(); 
                break;
            case XSDType::ID: 
                typeVal = std::make_shared<IDType>(); 
                break;
            case XSDType::IDREF: 
                typeVal = std::make_shared<IDREFType>(); 
                break;
            case XSDType::IDREFS: 
                typeVal = std::make_shared<IDREFSType>(); 
                break;
            case XSDType::ENTITY: 
                typeVal = std::make_shared<ENTITYType>(); 
                break;
            case XSDType::ENTITIES: 
                typeVal = std::make_shared<ENTITIESType>(); 
                break;
            case XSDType::NMTOKEN: 
                typeVal = std::make_shared<NMTOKENType>(); 
                break;
            case XSDType::NMTOKENS: 
                typeVal = std::make_shared<NMTOKENSType>(); 
                break;
            
            // Types dates et heures
            case XSDType::DATE: 
                typeVal = std::make_shared<DateType>(); 
                break;
            case XSDType::TIME: 
                typeVal = std::make_shared<TimeType>(); 
                break;
            case XSDType::DATE_TIME: 
                typeVal = std::make_shared<DateTimeType>(); 
                break;
            case XSDType::DATE_TIME_STAMP: 
                typeVal = std::make_shared<DateTimeStampType>(); 
                break;
            case XSDType::DURATION: 
                typeVal = std::make_shared<DurationType>(); 
                break;
            case XSDType::G_YEAR: 
                typeVal = std::make_shared<GYearType>(); 
                break;
            case XSDType::G_YEAR_MONTH: 
                typeVal = std::make_shared<GYearMonthType>(); 
                break;
            case XSDType::G_MONTH: 
                typeVal = std::make_shared<GMonthType>(); 
                break;
            case XSDType::G_MONTH_DAY: 
                typeVal = std::make_shared<GMonthDayType>(); 
                break;
            case XSDType::G_DAY: 
                typeVal = std::make_shared<GDayType>(); 
                break;
            
            // Types binaires
            case XSDType::BASE64_BINARY: 
                typeVal = std::make_shared<Base64BinaryType>(); 
                break;
            case XSDType::HEX_BINARY: 
                typeVal = std::make_shared<HexBinaryType>(); 
                break;

            // Type URI
            case XSDType::ANY_URI: 
                typeVal = std::make_shared<AnyURIType>(); 
                break;
            
            // Types divers
            case XSDType::QNAME: 
                typeVal = std::make_shared<QNameType>(); 
                break;
            case XSDType::NOTATION: 
                typeVal = std::make_shared<NotationType>(); 
                break;
            
            // Type inconnu
            case XSDType::UNKNOWN:
            default: 
                typeVal = std::make_shared<StringType>(); // Type par défaut pour types inconnus
                break;
        }
    v={objetValue, typeVal};
    parser->space->owlDataPropertyAssertion(sujetVar, propVar, v);
    cowl_write_static((UOStream *)stream, "\n");
}

template <typename T>
void ParserCowl<T>:: iterateNegDataPropAssert(ParserCowl<T>* parser, CowlAny *axiom){
    UOStream *stream = uostream_std();
    CowlIndividual * sujet=cowl_data_prop_assert_axiom_get_subject((CowlDataPropAssertAxiom *)axiom);
    CowlLiteral *objet=cowl_data_prop_assert_axiom_get_object((CowlDataPropAssertAxiom *)axiom);
    CowlDataPropExp *prop=cowl_data_prop_assert_axiom_get_prop((CowlDataPropAssertAxiom *)axiom);
    CowlDatatype * dataType=cowl_literal_get_datatype(objet);
    
    cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_named_ind_get_iri((CowlNamedInd*)sujet)));
    std::string sujetUri = getFullIRI(cowl_named_ind_get_iri((CowlNamedInd*)sujet));
    chr::Logical_var<std::string>& sujetVar = parser->getOrCreateLogicalVar(sujetUri);
    cowl_write_static((UOStream *)stream, " not ");
    cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_data_prop_get_iri((CowlDataProp*)prop)));
    std::string propUri = getFullIRI(cowl_data_prop_get_iri((CowlDataProp *)prop));
    chr::Logical_var<std::string>& propVar = parser->getOrCreateLogicalVar(propUri);
    cowl_write_static((UOStream *)stream, " ");
    cowl_write_string((UOStream *)stream, cowl_literal_get_value(objet));
    std::shared_ptr<AnySimpleType> typeVal;
    Value v;
    std::string objetValue = ustring_to_string(cowl_string_get_raw(cowl_literal_get_value(objet)));
    cowl_write_static((UOStream *)stream, " ^^ ");
    cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_datatype_get_iri(dataType)));
    std::string dataTypeUri = getFullIRI(cowl_datatype_get_iri(dataType));
    XSDType type = mapXsdType(dataTypeUri);
    
        switch (type) {
            // Types numériques entiers
            case XSDType::INTEGER:  
                typeVal = std::make_shared<IntegerType>(); 
                break;
            case XSDType::NON_NEGATIVE_INTEGER: 
                typeVal = std::make_shared<NonNegativeIntegerType>(); 
                break;
            case XSDType::NON_POSITIVE_INTEGER: 
                typeVal = std::make_shared<NonPositiveIntegerType>(); 
                break;
            case XSDType::POSITIVE_INTEGER: 
                typeVal = std::make_shared<PositiveIntegerType>(); 
                break;
            case XSDType::NEGATIVE_INTEGER: 
                typeVal = std::make_shared<NegativeIntegerType>(); 
                break;
            case XSDType::INT: 
                typeVal = std::make_shared<IntType>(); 
                break;
            case XSDType::UNSIGNED_INT: 
                typeVal = std::make_shared<UnsignedIntType>(); 
                break;
            case XSDType::SHORT: 
                typeVal = std::make_shared<ShortType>(); 
                break;
            case XSDType::UNSIGNED_SHORT: 
                typeVal = std::make_shared<UnsignedShortType>(); 
                break;
            case XSDType::BYTE: 
                typeVal = std::make_shared<ByteType>(); 
                break;
            case XSDType::UNSIGNED_BYTE: 
                typeVal = std::make_shared<UnsignedByteType>(); 
                break;
            case XSDType::LONG: 
                typeVal = std::make_shared<LongType>(); 
                break;
            case XSDType::UNSIGNED_LONG: 
                typeVal = std::make_shared<UnsignedLongType>(); 
                break;
            
            // Types numériques décimaux
            case XSDType::FLOAT:  
                typeVal = std::make_shared<FloatType>(); 
                break;
            case XSDType::DOUBLE: 
                typeVal = std::make_shared<DoubleType>(); 
                break;
            case XSDType::DECIMAL: 
                typeVal = std::make_shared<DecimalType>(); 
                break;
            
            // Type booléen
            case XSDType::BOOLEAN: 
                typeVal = std::make_shared<BooleanType>(); 
                break;
            
            // Types chaînes de caractères
            case XSDType::STRING: 
                typeVal = std::make_shared<StringType>(); 
                break;
            case XSDType::NORMALIZED_STRING: 
                typeVal = std::make_shared<NormalizedStringType>(); 
                break;
            case XSDType::TOKEN: 
                typeVal = std::make_shared<TokenType>(); 
                break;
            case XSDType::LANGUAGE: 
                typeVal = std::make_shared<LanguageType>(); 
                break;
            case XSDType::NAME: 
                typeVal = std::make_shared<NameType>(); 
                break;
            case XSDType::NCNAME: 
                typeVal = std::make_shared<NCNameType>(); 
                break;
            case XSDType::ID: 
                typeVal = std::make_shared<IDType>(); 
                break;
            case XSDType::IDREF: 
                typeVal = std::make_shared<IDREFType>(); 
                break;
            case XSDType::IDREFS: 
                typeVal = std::make_shared<IDREFSType>(); 
                break;
            case XSDType::ENTITY: 
                typeVal = std::make_shared<ENTITYType>(); 
                break;
            case XSDType::ENTITIES: 
                typeVal = std::make_shared<ENTITIESType>(); 
                break;
            case XSDType::NMTOKEN: 
                typeVal = std::make_shared<NMTOKENType>(); 
                break;
            case XSDType::NMTOKENS: 
                typeVal = std::make_shared<NMTOKENSType>(); 
                break;
            
            // Types dates et heures
            case XSDType::DATE: 
                typeVal = std::make_shared<DateType>(); 
                break;
            case XSDType::TIME: 
                typeVal = std::make_shared<TimeType>(); 
                break;
            case XSDType::DATE_TIME: 
                typeVal = std::make_shared<DateTimeType>(); 
                break;
            case XSDType::DATE_TIME_STAMP: 
                typeVal = std::make_shared<DateTimeStampType>(); 
                break;
            case XSDType::DURATION: 
                typeVal = std::make_shared<DurationType>(); 
                break;
            case XSDType::G_YEAR: 
                typeVal = std::make_shared<GYearType>(); 
                break;
            case XSDType::G_YEAR_MONTH: 
                typeVal = std::make_shared<GYearMonthType>(); 
                break;
            case XSDType::G_MONTH: 
                typeVal = std::make_shared<GMonthType>(); 
                break;
            case XSDType::G_MONTH_DAY: 
                typeVal = std::make_shared<GMonthDayType>(); 
                break;
            case XSDType::G_DAY: 
                typeVal = std::make_shared<GDayType>(); 
                break;
            
            // Types binaires
            case XSDType::BASE64_BINARY: 
                typeVal = std::make_shared<Base64BinaryType>(); 
                break;
            case XSDType::HEX_BINARY: 
                typeVal = std::make_shared<HexBinaryType>(); 
                break;

            // Type URI
            case XSDType::ANY_URI: 
                typeVal = std::make_shared<AnyURIType>(); 
                break;
            
            // Types divers
            case XSDType::QNAME: 
                typeVal = std::make_shared<QNameType>(); 
                break;
            case XSDType::NOTATION: 
                typeVal = std::make_shared<NotationType>(); 
                break;
            
            // Type inconnu
            case XSDType::UNKNOWN:
            default: 
                typeVal = std::make_shared<StringType>(); // Type par défaut pour types inconnus
                break;
        }
    v={objetValue, typeVal};
    parser->space->owlNegativeDataAssertion(sujetVar, propVar, v);
    cowl_write_static((UOStream *)stream, "\n");
}

template <typename T>
void ParserCowl<T>:: iterateDataPropDomain(ParserCowl<T>* parser, CowlAny *axiom){
    UOStream *stream = uostream_std();
    CowlDataPropExp* prop= cowl_data_prop_domain_axiom_get_prop((CowlDataPropDomainAxiom *)axiom);
    std::string propUri = getFullIRI(cowl_data_prop_get_iri((CowlDataProp *)prop));
    chr::Logical_var<std::string>& propVar = parser->getOrCreateLogicalVar(propUri);
    
    CowlClsExp * dom=cowl_data_prop_domain_axiom_get_domain((CowlDataPropDomainAxiom *)axiom);
    std::string domUri = getFullIRI(cowl_class_get_iri((CowlClass *)dom));
    chr::Logical_var<std::string>& domVar = parser->getOrCreateLogicalVar(domUri);
    cowl_write_cstring((UOStream *)stream, propUri.c_str());
    cowl_write_static((UOStream *)stream, " a pour domaine  ");
    cowl_write_cstring((UOStream *)stream, domUri.c_str());

   parser->space->owlDataPropertyDomain(propVar, domVar);
    cowl_write_static((UOStream *)stream, "\n");
}

template <typename T>
void ParserCowl<T>:: iterateDataPropRange(ParserCowl<T>* parser, CowlAny *axiom){
    UOStream *stream = uostream_std();
     CowlDataProp* prop= (CowlDataProp*)cowl_data_prop_range_axiom_get_prop((CowlDataPropRangeAxiom *)axiom);
    CowlDataRange * range=cowl_data_prop_range_axiom_get_range((CowlDataPropRangeAxiom *)axiom);
    
    if(cowl_data_range_get_type(range)==COWL_DRT_DATATYPE) //type simple
    {   
        cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_data_prop_get_iri(prop)));
        cowl_write_static((UOStream *)stream, " a pour range  ");
        cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_get_iri(range)));

        std::string propUri = getFullIRI(cowl_data_prop_get_iri((CowlDataProp *)prop));
        chr::Logical_var<std::string>& propVar = parser->getOrCreateLogicalVar(propUri);
        
        std::string rangeUri = getFullIRI(cowl_get_iri(range));
        XSDType type = mapXsdType(rangeUri);
        std::shared_ptr<AnySimpleType> typeVal;
        
        switch (type) {
            // Types numériques entiers
            case XSDType::INTEGER:  
                typeVal = std::make_shared<IntegerType>(); 
                std::cout << "→ type C++ : int\n"; 
                break;
            case XSDType::NON_NEGATIVE_INTEGER: 
                typeVal = std::make_shared<NonNegativeIntegerType>(); 
                std::cout << "→ type C++ : unsigned int\n"; 
                break;
            case XSDType::NON_POSITIVE_INTEGER: 
                typeVal = std::make_shared<NonPositiveIntegerType>(); 
                std::cout << "→ type C++ : non-positive int\n"; 
                break;
            case XSDType::POSITIVE_INTEGER: 
                typeVal = std::make_shared<PositiveIntegerType>(); 
                std::cout << "→ type C++ : positive int\n"; 
                break;
            case XSDType::NEGATIVE_INTEGER: 
                typeVal = std::make_shared<NegativeIntegerType>(); 
                std::cout << "→ type C++ : negative int\n"; 
                break;
            case XSDType::INT: 
                typeVal = std::make_shared<IntType>(); 
                std::cout << "→ type C++ : int32_t\n"; 
                break;
            case XSDType::UNSIGNED_INT: 
                typeVal = std::make_shared<UnsignedIntType>(); 
                std::cout << "→ type C++ : uint32_t\n"; 
                break;
            case XSDType::SHORT: 
                typeVal = std::make_shared<ShortType>(); 
                std::cout << "→ type C++ : short\n"; 
                break;
            case XSDType::UNSIGNED_SHORT: 
                typeVal = std::make_shared<UnsignedShortType>(); 
                std::cout << "→ type C++ : unsigned short\n"; 
                break;
            case XSDType::BYTE: 
                typeVal = std::make_shared<ByteType>(); 
                std::cout << "→ type C++ : int8_t\n"; 
                break;
            case XSDType::UNSIGNED_BYTE: 
                typeVal = std::make_shared<UnsignedByteType>(); 
                std::cout << "→ type C++ : uint8_t\n"; 
                break;
            case XSDType::LONG: 
                typeVal = std::make_shared<LongType>(); 
                std::cout << "→ type C++ : long\n"; 
                break;
            case XSDType::UNSIGNED_LONG: 
                typeVal = std::make_shared<UnsignedLongType>(); 
                std::cout << "→ type C++ : unsigned long\n"; 
                break;
            
            // Types numériques décimaux
            case XSDType::FLOAT:  
                typeVal = std::make_shared<FloatType>(); 
                std::cout << "→ type C++ : float\n"; 
                break;
            case XSDType::DOUBLE: 
                typeVal = std::make_shared<DoubleType>(); 
                std::cout << "→ type C++ : double\n"; 
                break;
            case XSDType::DECIMAL: 
                typeVal = std::make_shared<DecimalType>(); 
                std::cout << "→ type C++ : decimal\n"; 
                break;
            
            // Type booléen
            case XSDType::BOOLEAN: 
                typeVal = std::make_shared<BooleanType>(); 
                std::cout << "→ type C++ : bool\n"; 
                break;
            
            // Types chaînes de caractères
            case XSDType::STRING: 
                typeVal = std::make_shared<StringType>(); 
                std::cout << "→ type C++ : std::string\n"; 
                break;
            case XSDType::NORMALIZED_STRING: 
                typeVal = std::make_shared<NormalizedStringType>(); 
                std::cout << "→ type C++ : normalized string\n"; 
                break;
            case XSDType::TOKEN: 
                typeVal = std::make_shared<TokenType>(); 
                std::cout << "→ type C++ : token\n"; 
                break;
            case XSDType::LANGUAGE: 
                typeVal = std::make_shared<LanguageType>(); 
                std::cout << "→ type C++ : language tag\n"; 
                break;
            case XSDType::NAME: 
                typeVal = std::make_shared<NameType>(); 
                std::cout << "→ type C++ : XML Name\n"; 
                break;
            case XSDType::NCNAME: 
                typeVal = std::make_shared<NCNameType>(); 
                std::cout << "→ type C++ : XML NCName\n"; 
                break;
            case XSDType::ID: 
                typeVal = std::make_shared<IDType>(); 
                std::cout << "→ type C++ : XML ID\n"; 
                break;
            case XSDType::IDREF: 
                typeVal = std::make_shared<IDREFType>(); 
                std::cout << "→ type C++ : XML IDREF\n"; 
                break;
            case XSDType::IDREFS: 
                typeVal = std::make_shared<IDREFSType>(); 
                std::cout << "→ type C++ : XML IDREFS\n"; 
                break;
            case XSDType::NMTOKEN: 
                typeVal = std::make_shared<NMTOKENType>(); 
                std::cout << "→ type C++ : XML NMTOKEN\n"; 
                break;
            case XSDType::NMTOKENS: 
                typeVal = std::make_shared<NMTOKENSType>(); 
                std::cout << "→ type C++ : XML NMTOKENS\n"; 
                break;
            case XSDType::ENTITY: 
                typeVal = std::make_shared<ENTITYType>(); 
                std::cout << "→ type C++ : XML ENTITY\n"; 
                break;
            case XSDType::ENTITIES: 
                typeVal = std::make_shared<ENTITIESType>(); 
                std::cout << "→ type C++ : XML ENTITIES\n"; 
                break;
            
            // Types dates et heures
            case XSDType::DATE: 
                typeVal = std::make_shared<DateType>(); 
                std::cout << "→ type C++ : date (YYYY-MM-DD)\n"; 
                break;
            case XSDType::TIME: 
                typeVal = std::make_shared<TimeType>(); 
                std::cout << "→ type C++ : time (HH:MM:SS)\n"; 
                break;
            case XSDType::DATE_TIME: 
                typeVal = std::make_shared<DateTimeType>(); 
                std::cout << "→ type C++ : datetime\n"; 
                break;
            case XSDType::DATE_TIME_STAMP: 
                typeVal = std::make_shared<DateTimeStampType>(); 
                std::cout << "→ type C++ : dateTimeStamp (with timezone)\n"; 
                break;
            case XSDType::DURATION: 
                typeVal = std::make_shared<DurationType>(); 
                std::cout << "→ type C++ : duration\n"; 
                break;
            case XSDType::G_YEAR: 
                typeVal = std::make_shared<GYearType>(); 
                std::cout << "→ type C++ : year (YYYY)\n"; 
                break;
            case XSDType::G_YEAR_MONTH: 
                typeVal = std::make_shared<GYearMonthType>(); 
                std::cout << "→ type C++ : year-month (YYYY-MM)\n"; 
                break;
            case XSDType::G_MONTH: 
                typeVal = std::make_shared<GMonthType>(); 
                std::cout << "→ type C++ : month (--MM)\n"; 
                break;
            case XSDType::G_MONTH_DAY: 
                typeVal = std::make_shared<GMonthDayType>(); 
                std::cout << "→ type C++ : month-day (--MM-DD)\n"; 
                break;
            case XSDType::G_DAY: 
                typeVal = std::make_shared<GDayType>(); 
                std::cout << "→ type C++ : day (---DD)\n"; 
                break;
            
            // Types binaires
            case XSDType::BASE64_BINARY: 
                typeVal = std::make_shared<Base64BinaryType>(); 
                std::cout << "→ type C++ : base64 binary\n"; 
                break;
            case XSDType::HEX_BINARY: 
                typeVal = std::make_shared<HexBinaryType>(); 
                std::cout << "→ type C++ : hex binary\n"; 
                break;
            
            // Type URI
            case XSDType::ANY_URI: 
                typeVal = std::make_shared<AnyURIType>(); 
                std::cout << "→ type C++ : URI\n"; 
                break;
            
            // Types divers
            case XSDType::QNAME: 
                typeVal = std::make_shared<QNameType>(); 
                std::cout << "→ type C++ : QName\n"; 
                break;
            case XSDType::NOTATION: 
                typeVal = std::make_shared<NotationType>(); 
                std::cout << "→ type C++ : NOTATION\n"; 
                break;
            
            // Type inconnu
            case XSDType::UNKNOWN:
            default: 
                std::cout << "→ type inconnu ou non supporté: " << rangeUri << "\n"; 
                typeVal = std::make_shared<StringType>(); // Type par défaut pour types inconnus
                break;
        }
        
        parser->space->owlDataPropertyRange(propVar, std::move(typeVal));
    }
    else {
        cowl_write_static((UOStream *)stream, "DataRange complexe pas encore géré (restriction, union, intersection...)");
    }
    cowl_write_static((UOStream *)stream, "\n");
}

template <typename T>
void ParserCowl<T>:: iterateSubDataProp(ParserCowl<T>* parser, CowlAny *axiom){ 
 UOStream *stream = uostream_std();
    CowlDataProp * sub=(CowlDataProp*)cowl_sub_data_prop_axiom_get_sub((CowlSubDataPropAxiom *)axiom)  ;
    CowlDataProp * sup=(CowlDataProp*)cowl_sub_data_prop_axiom_get_super((CowlSubDataPropAxiom *)axiom);

    // Créer des variables logiques pour les propriétés
    std::string subUri = getFullIRI(cowl_data_prop_get_iri(sub));
    std::string supUri = getFullIRI(cowl_data_prop_get_iri(sup));

    // Obtenir les références aux variables logiques depuis le cache
    chr::Logical_var<std::string>& subVar = parser->getOrCreateLogicalVar(subUri);
    chr::Logical_var<std::string>& supVar = parser->getOrCreateLogicalVar(supUri);

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
        CowlIRI *propIri = cowl_data_prop_get_iri(prop);
        CowlString *propName = cowl_iri_get_rem(propIri);  // Pour l'affichage seulement

        // Créer variable logique et associer l'URI
        std::string propUri = getFullIRI(propIri);
        chr::Logical_var<std::string>& propVar = parser->getOrCreateLogicalVar(propUri);
        
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
    cowl_write_static((UOStream *)stream, "propriétés de données disjointes : ");
    
    CowlVector * properties_list=cowl_nary_data_prop_axiom_get_props((CowlNAryDataPropAxiom*)axiom);
    ulib_uint count = cowl_vector_count(properties_list);
    
    // Stocker les URI des propriétés
    std::vector<std::string> propUris;
    
    for (ulib_uint  i = 0; i < count; ++i) {
        CowlDataProp *prop = (CowlDataProp *) cowl_vector_get_item(properties_list, i);
        CowlIRI *propIri = cowl_data_prop_get_iri(prop);
        CowlString *propName = cowl_iri_get_rem(propIri);  // Pour l'affichage seulement
        std::string propUri = getFullIRI(propIri);
        propUris.push_back(propUri);

        cowl_write_string((UOStream *)stream, propName);
        if (i < count - 1) cowl_write_static((UOStream *)stream, " , ");
    }

    cowl_write_static((UOStream *)stream, "\n");

    // Créer toutes les paires de propriétés disjointes : (P1,P2), (P1,P3), (P2,P3), ...
    for (size_t i = 0; i < propUris.size(); ++i) {
        for (size_t j = i + 1; j < propUris.size(); ++j) {
            // Récupérer les variables logiques depuis le cache au moment de l'appel
            chr::Logical_var<std::string>& propVar_i = parser->getOrCreateLogicalVar(propUris[i]);
            chr::Logical_var<std::string>& propVar_j = parser->getOrCreateLogicalVar(propUris[j]);
            parser->space->owlDisjointDataProperty(propVar_i, propVar_j);
        }
    }
}

template <typename T>
void ParserCowl<T>:: iterateFuncDataProp(ParserCowl<T>* parser, CowlAny *axiom){ 
    UOStream *stream = uostream_std();
    CowlDataPropExp *prop = cowl_func_data_prop_axiom_get_prop((CowlFuncDataPropAxiom *) axiom);
    std::string propUri = getFullIRI(cowl_data_prop_get_iri((CowlDataProp*)prop));
    chr::Logical_var<std::string>& propVar = parser->getOrCreateLogicalVar(propUri);
    cowl_write_cstring((UOStream *)stream, propUri.c_str());
    cowl_write_static((UOStream *)stream, " est fonctionnelle");

    parser->space->owlFunctionalDataProperty(propVar);
    cowl_write_static((UOStream *)stream, "\n");
    
}

template <typename T>
void ParserCowl<T>:: iterateHasKey(ParserCowl<T>* parser, CowlAny *axiom){
    UOStream *stream = uostream_std();
    
    // Récupérer la classe
    CowlClsExp *cls_exp = cowl_has_key_axiom_get_cls_exp((CowlHasKeyAxiom *)axiom);
    
    // Récupérer les propriétés objets et données qui constituent la clé
    CowlVector *obj_props = cowl_has_key_axiom_get_obj_props((CowlHasKeyAxiom *)axiom);
    CowlVector *data_props = cowl_has_key_axiom_get_data_props((CowlHasKeyAxiom *)axiom);
    
    // Affichage
    cowl_write_static((UOStream *)stream, "HasKey pour la classe ");
    
    // Traiter la classe (peut être une expression complexe)
    chr::Logical_var<std::string> classVar;
    CowlObjectType clsType = cowl_get_type(cls_exp);
    
    if (clsType == COWL_OT_CE_CLASS) {
        CowlClass *cls = (CowlClass*)cls_exp;
        std::string classUri = getFullIRI(cowl_class_get_iri(cls));
        classVar = parser->getOrCreateLogicalVar(classUri);
        cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_class_get_iri(cls)));
    } else {
        // Expression de classe complexe
        cowl_write_static((UOStream *)stream, "[expression complexe] non prise en charge en owl2 RL");
    }
    
    cowl_write_static((UOStream *)stream, " avec les clés: ");
    
    LogicalVarSet keyProperties;
    
    // Ajouter les propriétés objets
    ulib_uint obj_count = cowl_vector_count(obj_props);
    for (ulib_uint i = 0; i < obj_count; ++i) {
        CowlObjProp *prop = (CowlObjProp*)cowl_vector_get_item(obj_props, i);
        std::string propUri = getFullIRI(cowl_obj_prop_get_iri(prop));
        chr::Logical_var<std::string>& propVar = parser->getOrCreateLogicalVar(propUri);
        keyProperties.insert(propVar);
        
        cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_obj_prop_get_iri(prop)));
        if (i < obj_count - 1 || cowl_vector_count(data_props) > 0) {
            cowl_write_static((UOStream *)stream, ", ");
        }
    }
    
    // Ajouter les propriétés de données
    ulib_uint data_count = cowl_vector_count(data_props);
    for (ulib_uint i = 0; i < data_count; ++i) {
        CowlDataProp *prop = (CowlDataProp*)cowl_vector_get_item(data_props, i);
        std::string propUri = getFullIRI(cowl_data_prop_get_iri(prop));
        chr::Logical_var<std::string>& propVar = parser->getOrCreateLogicalVar(propUri);
        keyProperties.insert(propVar);
        
        cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_data_prop_get_iri(prop)));
        if (i < data_count - 1) {
            cowl_write_static((UOStream *)stream, ", ");
        }
    }
    
    cowl_write_static((UOStream *)stream, "\n");
    
    // Ajouter la contrainte CHR
    parser->space->owlHasKey(classVar, keyProperties);
}


template <typename T>
void ParserCowl<T>:: iterateInvObjProp(ParserCowl<T>* parser, CowlAny *axiom){
    UOStream *stream = uostream_std();
    CowlObjProp *first_prop=(CowlObjProp*)cowl_inv_obj_prop_axiom_get_first_prop((CowlInvObjPropAxiom *)axiom);
    std::string firstPropUri = getFullIRI(cowl_obj_prop_get_iri(first_prop));
    chr::Logical_var<std::string>& firstPropVar = parser->getOrCreateLogicalVar(firstPropUri);
    CowlObjProp *second_prop=(CowlObjProp*)cowl_inv_obj_prop_axiom_get_second_prop((CowlInvObjPropAxiom *)axiom);
    std::string secondPropUri = getFullIRI(cowl_obj_prop_get_iri(second_prop));
    chr::Logical_var<std::string>& secondPropVar = parser->getOrCreateLogicalVar(secondPropUri);

    cowl_write_cstring((UOStream *)stream, firstPropUri.c_str());
    cowl_write_static((UOStream *)stream, " est inverse de  ");
    cowl_write_cstring((UOStream *)stream, secondPropUri.c_str());

    parser->space->owlInverseObjectProperty(firstPropVar, secondPropVar);
    cowl_write_static((UOStream *)stream, "\n");
}
template <typename T>
void ParserCowl<T>:: iterateSymObjProp(ParserCowl<T>* parser, CowlAny *axiom){
    UOStream *stream = uostream_std();
    CowlObjProp *prop=(CowlObjProp*)cowl_obj_prop_char_axiom_get_prop((CowlObjPropCharAxiom *) axiom);
    std::string propUri = getFullIRI(cowl_obj_prop_get_iri(prop));
    chr::Logical_var<std::string>& propVar = parser->getOrCreateLogicalVar(propUri);
    cowl_write_cstring((UOStream *)stream, propUri.c_str());
    cowl_write_static((UOStream *)stream, " est symétrique");

    parser->space->owlSymmetricObjectProperty(propVar);
    cowl_write_static((UOStream *)stream, "\n");
}

template <typename T>
void ParserCowl<T>:: iterateFuncObjProp(ParserCowl<T>* parser, CowlAny *axiom){
    UOStream *stream = uostream_std();
    CowlObjProp *prop=(CowlObjProp*)cowl_obj_prop_char_axiom_get_prop((CowlObjPropCharAxiom *) axiom);
    std::string propUri = getFullIRI(cowl_obj_prop_get_iri(prop));
    chr::Logical_var<std::string>& propVar = parser->getOrCreateLogicalVar(propUri);
    cowl_write_cstring((UOStream *)stream, propUri.c_str());
    cowl_write_static((UOStream *)stream, " est fonctionnelle");

    parser->space->owlFunctionalObjectProperty(propVar);
    cowl_write_static((UOStream *)stream, "\n");
}

template <typename T>
void ParserCowl<T>:: iterateInvFuncObjProp(ParserCowl<T>* parser, CowlAny *axiom){
    UOStream *stream = uostream_std();
    CowlObjProp *prop=(CowlObjProp*)cowl_obj_prop_char_axiom_get_prop((CowlObjPropCharAxiom *) axiom);
    std::string propUri = getFullIRI(cowl_obj_prop_get_iri(prop));
    chr::Logical_var<std::string>& propVar = parser->getOrCreateLogicalVar(propUri);
    cowl_write_cstring((UOStream *)stream, propUri.c_str());
    cowl_write_static((UOStream *)stream, " est inverse fonctionnelle");

    parser->space->owlInverseFunctionalObjectProperty(propVar);
    cowl_write_static((UOStream *)stream, "\n");
}

template <typename T>
void ParserCowl<T>:: iterateAsymmObjProp(ParserCowl<T>* parser, CowlAny *axiom){
    UOStream *stream = uostream_std();
    CowlObjProp *prop=(CowlObjProp*)cowl_obj_prop_char_axiom_get_prop( (CowlObjPropCharAxiom *)axiom);
    std::string propUri = getFullIRI(cowl_obj_prop_get_iri(prop));
    chr::Logical_var<std::string>& propVar = parser->getOrCreateLogicalVar(propUri);
    cowl_write_cstring((UOStream *)stream, propUri.c_str());
    cowl_write_static((UOStream *)stream, " est asymétrique");

    parser->space->owlAsymmetricObjectProperty(propVar);
    cowl_write_static((UOStream *)stream, "\n");
}


template <typename T>
void ParserCowl<T>:: iterateTransObjProp(ParserCowl<T>* parser, CowlAny *axiom){
    UOStream *stream = uostream_std();
    CowlObjProp *prop=(CowlObjProp*)cowl_obj_prop_char_axiom_get_prop((CowlObjPropCharAxiom *) axiom);
    std::string propUri = getFullIRI(cowl_obj_prop_get_iri(prop));
    chr::Logical_var<std::string>& propVar = parser->getOrCreateLogicalVar(propUri);
    cowl_write_cstring((UOStream *)stream, propUri.c_str());
    cowl_write_static((UOStream *)stream, " est transitive");

    parser->space->owlTransitiveObjectProperty(propVar);
    cowl_write_static((UOStream *)stream, "\n");

}


template <typename T>
void ParserCowl<T>:: iterateReflObjProp(ParserCowl<T>* parser, CowlAny *axiom){
    UOStream *stream = uostream_std();
    CowlObjProp *prop=(CowlObjProp*)cowl_obj_prop_char_axiom_get_prop( (CowlObjPropCharAxiom *)axiom);
    std::string propUri = getFullIRI(cowl_obj_prop_get_iri(prop));
    chr::Logical_var<std::string>& propVar = parser->getOrCreateLogicalVar(propUri);
    cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_obj_prop_get_iri(prop)));
    cowl_write_static((UOStream *)stream, " est réflexive");
    parser->space->owlReflexiveObjectProperty(propVar);
    cowl_write_static((UOStream *)stream, "\n");
}


template <typename T>
void ParserCowl<T>:: iterateIrrefObjProp(ParserCowl<T>* parser, CowlAny *axiom){
    UOStream *stream = uostream_std();
    CowlObjProp *prop=(CowlObjProp*)cowl_obj_prop_char_axiom_get_prop((CowlObjPropCharAxiom *) axiom);
    std::string propUri = getFullIRI(cowl_obj_prop_get_iri(prop));
    chr::Logical_var<std::string>& propVar = parser->getOrCreateLogicalVar(propUri);
    cowl_write_string((UOStream *)stream, cowl_iri_get_rem(cowl_obj_prop_get_iri(prop)));
    cowl_write_static((UOStream *)stream, " est irréflexive");

    parser->space->owlIrreflexiveObjectProperty(propVar);
    cowl_write_static((UOStream *)stream, "\n");
}


template <typename T>
void ParserCowl<T>:: iterateDisjObjProp(ParserCowl<T>* parser, CowlAny *axiom){
    UOStream *stream = uostream_std();
    cowl_write_static((UOStream *)stream, "propriétés d'objet disjointes : ");
    
    CowlVector * properties_list=cowl_nary_obj_prop_axiom_get_props((CowlNAryObjPropAxiom*)axiom);
    ulib_uint count = cowl_vector_count(properties_list);
    
    // Stocker les URI des propriétés
    std::vector<std::string> propUris;
    
    for (ulib_uint  i = 0; i < count; ++i) {
        CowlObjProp *prop = (CowlObjProp *) cowl_vector_get_item(properties_list, i);
        CowlIRI *propIri = cowl_obj_prop_get_iri(prop);
        CowlString *propName = cowl_iri_get_rem(propIri);  // Pour l'affichage seulement
        std::string propUri = getFullIRI(propIri);
        propUris.push_back(propUri);

        cowl_write_string((UOStream *)stream, propName);
        if (i < count - 1) cowl_write_static((UOStream *)stream, " , ");
    }

    cowl_write_static((UOStream *)stream, "\n");

    // Créer toutes les paires de propriétés disjointes : (P1,P2), (P1,P3), (P2,P3), ...
    for (size_t i = 0; i < propUris.size(); ++i) {
        for (size_t j = i + 1; j < propUris.size(); ++j) {
            // Récupérer les variables logiques depuis le cache au moment de l'appel
            chr::Logical_var<std::string>& propVar_i = parser->getOrCreateLogicalVar(propUris[i]);
            chr::Logical_var<std::string>& propVar_j = parser->getOrCreateLogicalVar(propUris[j]);
            parser->space->owlDisjointObjectProperty(propVar_i, propVar_j);
        }
    }
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
        cowl_write_static((UOStream *)stream, " domain ");
        iterateObjPropDomain(parser,axiom);
        break;
    case COWL_AT_OBJ_PROP_RANGE:
        cowl_write_static((UOStream *)stream, " range ");
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
    case COWL_AT_HAS_KEY:
        iterateHasKey(parser,axiom);
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

    std::ifstream f("example2.ofn");
            if (!f) {
                std::cout << " Fichier  introuvable au moment de l'exécution." << std::endl;
            }else{
                std::cout << " Fichier  trouvé." << std::endl;
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
