#pragma once
#include <iostream>
#include <string>
#include <memory>

class AnySimpleType {
public:
    AnySimpleType(AnySimpleType* parent = nullptr) : parent(parent) {}

    virtual bool verify(AnySimpleType* type) {
        
        if (this->getId() == type->getId()) return true;
        if (this->parent == nullptr) return false;
        return this->parent->verify(type);  // Remonte la hiérarchie de this
    }

    AnySimpleType* parent;

    virtual unsigned int getId() = 0;
    virtual std::string toString() = 0;
    virtual ~AnySimpleType() = default;
};

struct Value {
std::string val;
std::shared_ptr<AnySimpleType> typeVal;
};

inline bool operator==(const Value& a, const Value& b)
{
    bool sameStr = (a.val == b.val);
    bool sameType = (!a.typeVal && !b.typeVal)
                    || (a.typeVal && b.typeVal && a.typeVal->getId() == b.typeVal->getId());
    return sameStr && sameType;
}

// ============================================================================
// TYPES NUMÉRIQUES - HIÉRARCHIE XSD COMPLÈTE
// ============================================================================

// decimal est un type primitif et la racine de tous les types numériques entiers
class DecimalType : public AnySimpleType {
public:
    DecimalType() : AnySimpleType(nullptr) {}
    unsigned int getId() override { return 17; }
    std::string toString() override { return "DecimalType"; }
};

// integer dérive de decimal
class IntegerType : public AnySimpleType {
public:
    IntegerType() : AnySimpleType(new DecimalType()) {}
    unsigned int getId() override { return 1; }
    std::string toString() override { return "IntegerType"; }
};

// nonPositiveInteger dérive de integer
class NonPositiveIntegerType : public AnySimpleType {
public:
    NonPositiveIntegerType() : AnySimpleType(new IntegerType()) {}
    unsigned int getId() override { return 4; }
    std::string toString() override { return "NonPositiveIntegerType"; }
};

// negativeInteger dérive de nonPositiveInteger
class NegativeIntegerType : public AnySimpleType {
public:
    NegativeIntegerType() : AnySimpleType(new NonPositiveIntegerType()) {}
    unsigned int getId() override { return 6; }
    std::string toString() override { return "NegativeIntegerType"; }
};

// long dérive de integer
class LongType : public AnySimpleType {
public:
    LongType() : AnySimpleType(new IntegerType()) {}
    unsigned int getId() override { return 13; }
    std::string toString() override { return "LongType"; }
};

// int dérive de long
class IntType : public AnySimpleType {
public:
    IntType() : AnySimpleType(new LongType()) {}
    unsigned int getId() override { return 7; }
    std::string toString() override { return "IntType"; }
};

// short dérive de int
class ShortType : public AnySimpleType {
public:
    ShortType() : AnySimpleType(new IntType()) {}
    unsigned int getId() override { return 9; }
    std::string toString() override { return "ShortType"; }
};

// byte dérive de short
class ByteType : public AnySimpleType {
public:
    ByteType() : AnySimpleType(new ShortType()) {}
    unsigned int getId() override { return 11; }
    std::string toString() override { return "ByteType"; }
};

// nonNegativeInteger dérive de integer
class NonNegativeIntegerType : public AnySimpleType {
public:
    NonNegativeIntegerType() : AnySimpleType(new IntegerType()) {}
    unsigned int getId() override { return 3; }
    std::string toString() override { return "NonNegativeIntegerType"; }
};

// unsignedLong dérive de nonNegativeInteger
class UnsignedLongType : public AnySimpleType {
public:
    UnsignedLongType() : AnySimpleType(new NonNegativeIntegerType()) {}
    unsigned int getId() override { return 14; }
    std::string toString() override { return "UnsignedLongType"; }
};

// unsignedInt dérive de unsignedLong
class UnsignedIntType : public AnySimpleType {
public:
    UnsignedIntType() : AnySimpleType(new UnsignedLongType()) {}
    unsigned int getId() override { return 8; }
    std::string toString() override { return "UnsignedIntType"; }
};

// unsignedShort dérive de unsignedInt
class UnsignedShortType : public AnySimpleType {
public:
    UnsignedShortType() : AnySimpleType(new UnsignedIntType()) {}
    unsigned int getId() override { return 10; }
    std::string toString() override { return "UnsignedShortType"; }
};

// unsignedByte dérive de unsignedShort
class UnsignedByteType : public AnySimpleType {
public:
    UnsignedByteType() : AnySimpleType(new UnsignedShortType()) {}
    unsigned int getId() override { return 12; }
    std::string toString() override { return "UnsignedByteType"; }
};

// positiveInteger dérive de nonNegativeInteger
class PositiveIntegerType : public AnySimpleType {
public:
    PositiveIntegerType() : AnySimpleType(new NonNegativeIntegerType()) {}
    unsigned int getId() override { return 5; }
    std::string toString() override { return "PositiveIntegerType"; }
};

// ============================================================================
// TYPES NUMÉRIQUES À VIRGULE FLOTTANTE (primitifs)
// ============================================================================

class FloatType : public AnySimpleType {
public:
    FloatType() : AnySimpleType(nullptr) {}
    unsigned int getId() override { return 15; }
    std::string toString() override { return "FloatType"; }
};

class DoubleType : public AnySimpleType {
public:
    DoubleType() : AnySimpleType(nullptr) {}
    unsigned int getId() override { return 16; }
    std::string toString() override { return "DoubleType"; }
};

// ============================================================================
// TYPE BOOLÉEN (primitif)
// ============================================================================

class BooleanType : public AnySimpleType {
public:
    BooleanType() : AnySimpleType(nullptr) {}
    unsigned int getId() override { return 18; }
    std::string toString() override { return "BooleanType"; }
};

// ============================================================================
// TYPES CHAÎNES DE CARACTÈRES (primitif)
// ============================================================================

class StringType : public AnySimpleType {
public:
    StringType() : AnySimpleType(nullptr) {}
    unsigned int getId() override { return 2; }
    std::string toString() override { return "StringType"; }
};

class NormalizedStringType : public AnySimpleType {
public:
    NormalizedStringType() : AnySimpleType(new StringType()) {}
    unsigned int getId() override { return 19; }
    std::string toString() override { return "NormalizedStringType"; }
};

class TokenType : public AnySimpleType {
public:
    TokenType() : AnySimpleType(new NormalizedStringType()) {}
    unsigned int getId() override { return 20; }
    std::string toString() override { return "TokenType"; }
};

class LanguageType : public AnySimpleType {
public:
    LanguageType() : AnySimpleType(new TokenType()) {}
    unsigned int getId() override { return 21; }
    std::string toString() override { return "LanguageType"; }
};

class NameType : public AnySimpleType {
public:
    NameType() : AnySimpleType(new TokenType()) {}
    unsigned int getId() override { return 22; }
    std::string toString() override { return "NameType"; }
};

class NCNameType : public AnySimpleType {
public:
    NCNameType() : AnySimpleType(new NameType()) {}
    unsigned int getId() override { return 23; }
    std::string toString() override { return "NCNameType"; }
};

class IDType : public AnySimpleType {
public:
    IDType() : AnySimpleType(new NCNameType()) {}
    unsigned int getId() override { return 24; }
    std::string toString() override { return "IDType"; }
};

class IDREFType : public AnySimpleType {
public:
    IDREFType() : AnySimpleType(new NCNameType()) {}
    unsigned int getId() override { return 25; }
    std::string toString() override { return "IDREFType"; }
};

class IDREFSType : public AnySimpleType {
public:
    IDREFSType() : AnySimpleType(new IDREFType()) {}
    unsigned int getId() override { return 26; }
    std::string toString() override { return "IDREFSType"; }
};

class ENTITYType : public AnySimpleType {
public:
    ENTITYType() : AnySimpleType(new NCNameType()) {}
    unsigned int getId() override { return 43; }
    std::string toString() override { return "ENTITYType"; }
};

class ENTITIESType : public AnySimpleType {
public:
    ENTITIESType() : AnySimpleType(new ENTITYType()) {}
    unsigned int getId() override { return 44; }
    std::string toString() override { return "ENTITIESType"; }
};

class NMTOKENType : public AnySimpleType {
public:
    NMTOKENType() : AnySimpleType(new TokenType()) {}
    unsigned int getId() override { return 27; }
    std::string toString() override { return "NMTOKENType"; }
};

class NMTOKENSType : public AnySimpleType {
public:
    NMTOKENSType() : AnySimpleType(new NMTOKENType()) {}
    unsigned int getId() override { return 28; }
    std::string toString() override { return "NMTOKENSType"; }
};

// ============================================================================
// TYPES DATES ET HEURES (primitifs)
// ============================================================================

class DateType : public AnySimpleType {
public:
    DateType() : AnySimpleType(nullptr) {}
    unsigned int getId() override { return 29; }
    std::string toString() override { return "DateType"; }
};

class TimeType : public AnySimpleType {
public:
    TimeType() : AnySimpleType(nullptr) {}
    unsigned int getId() override { return 30; }
    std::string toString() override { return "TimeType"; }
};

class DateTimeType : public AnySimpleType {
public:
    DateTimeType() : AnySimpleType(nullptr) {}
    unsigned int getId() override { return 31; }
    std::string toString() override { return "DateTimeType"; }
};

class DurationType : public AnySimpleType {
public:
    DurationType() : AnySimpleType(nullptr) {}
    unsigned int getId() override { return 32; }
    std::string toString() override { return "DurationType"; }
};

class GYearType : public AnySimpleType {
public:
    GYearType() : AnySimpleType(nullptr) {}
    unsigned int getId() override { return 33; }
    std::string toString() override { return "GYearType"; }
};

class GYearMonthType : public AnySimpleType {
public:
    GYearMonthType() : AnySimpleType(nullptr) {}
    unsigned int getId() override { return 34; }
    std::string toString() override { return "GYearMonthType"; }
};

class GMonthType : public AnySimpleType {
public:
    GMonthType() : AnySimpleType(nullptr) {}
    unsigned int getId() override { return 35; }
    std::string toString() override { return "GMonthType"; }
};

class GMonthDayType : public AnySimpleType {
public:
    GMonthDayType() : AnySimpleType(nullptr) {}
    unsigned int getId() override { return 36; }
    std::string toString() override { return "GMonthDayType"; }
};

class GDayType : public AnySimpleType {
public:
    GDayType() : AnySimpleType(nullptr) {}
    unsigned int getId() override { return 37; }
    std::string toString() override { return "GDayType"; }
};

class DateTimeStampType : public AnySimpleType {
public:
    DateTimeStampType() : AnySimpleType(new DateTimeType()) {}
    unsigned int getId() override { return 45; }
    std::string toString() override { return "DateTimeStampType"; }
};

// ============================================================================
// TYPES BINAIRES (primitifs)
// ============================================================================

class Base64BinaryType : public AnySimpleType {
public:
    Base64BinaryType() : AnySimpleType(nullptr) {}
    unsigned int getId() override { return 38; }
    std::string toString() override { return "Base64BinaryType"; }
};

class HexBinaryType : public AnySimpleType {
public:
    HexBinaryType() : AnySimpleType(nullptr) {}
    unsigned int getId() override { return 39; }
    std::string toString() override { return "HexBinaryType"; }
};

// ============================================================================
// TYPE URI (primitif)
// ============================================================================

class AnyURIType : public AnySimpleType {
public:
    AnyURIType() : AnySimpleType(nullptr) {}
    unsigned int getId() override { return 40; }
    std::string toString() override { return "AnyURIType"; }
};

// ============================================================================
// TYPES DIVERS (primitifs)
// ============================================================================

class QNameType : public AnySimpleType {
public:
    QNameType() : AnySimpleType(nullptr) {}
    unsigned int getId() override { return 41; }
    std::string toString() override { return "QNameType"; }
};

class NotationType : public AnySimpleType {
public:
    NotationType() : AnySimpleType(nullptr) {}
    unsigned int getId() override { return 42; }
    std::string toString() override { return "NotationType"; }
};