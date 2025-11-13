#pragma once
#include <iostream>
#include <string>

class AnySimpleType {
public:
    AnySimpleType();
    virtual bool verify(AnySimpleType * type) = 0;
    virtual ~AnySimpleType() = default;
    
    // Méthode getId() pour CHR++
    virtual int getId() const { return 0; }
    
    // Méthode checkTypedValue pour CHR++
    virtual bool checkTypedValue(const std::string& value) const { return true; }
    
    // Opérateur d'égalité pour CHR++
    virtual bool operator==(const AnySimpleType& other) const {
        return getId() == other.getId();
    }
    
    // Conversion vers string pour CHR++
    virtual std::string to_string() const {
        return "AnySimpleType";
    }
    
    // Opérateur de conversion vers string
    operator std::string() const {
        return to_string();
    }
};

struct Value {
    std::string val;
    AnySimpleType * typeVal;
    
    // Constructeur par défaut
    Value() : typeVal(nullptr) {}
    
    // Constructeur avec valeur
    Value(const std::string& v, AnySimpleType* t = nullptr) : val(v), typeVal(t) {}
    
    // Opérateur de conversion vers string pour CHR++
    operator std::string() const {
        return val;
    }
    
    // Méthode to_string pour CHR++
    std::string to_string() const {
        return val;
    }
    
    // Opérateur d'égalité pour CHR++
    bool operator==(const Value& other) const {
        if (val != other.val) return false;
        if (typeVal == nullptr && other.typeVal == nullptr) return true;
        if (typeVal == nullptr || other.typeVal == nullptr) return false;
        return *typeVal == *other.typeVal;
    }
};
