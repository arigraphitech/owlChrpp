#pragma once
#include <iostream>
#include <string>
#include <memory>

class AnySimpleType {
public:
    AnySimpleType(){};
    virtual bool verify(AnySimpleType * type) = 0;
    virtual unsigned int getId() = 0;
    virtual std::string toString() = 0 ;
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
// TYPES NUMÉRIQUES ENTIERS
// ============================================================================

class IntegerType: public AnySimpleType
{
public:
    IntegerType(){};
    bool verify(AnySimpleType* type) override {
           return dynamic_cast<IntegerType*>(type) != nullptr;
    };
    unsigned int getId() override { return 1; }
    std::string toString() override { return "IntegerType"; }
};

class NonNegativeIntegerType: public AnySimpleType
{
public:
    NonNegativeIntegerType(){};
    bool verify(AnySimpleType* type) override {
           return dynamic_cast<NonNegativeIntegerType*>(type) != nullptr;
    };
    unsigned int getId() override { return 3; }
    std::string toString() override { return "NonNegativeIntegerType"; }
};

class NonPositiveIntegerType: public AnySimpleType
{
public:
    NonPositiveIntegerType(){};
    bool verify(AnySimpleType* type) override {
           return dynamic_cast<NonPositiveIntegerType*>(type) != nullptr;
    };
    unsigned int getId() override { return 4; }
    std::string toString() override { return "NonPositiveIntegerType"; }
};

class PositiveIntegerType: public AnySimpleType
{
public:
    PositiveIntegerType(){};
    bool verify(AnySimpleType* type) override {
           return dynamic_cast<PositiveIntegerType*>(type) != nullptr;
    };
    unsigned int getId() override { return 5; }
    std::string toString() override { return "PositiveIntegerType"; }
};

class NegativeIntegerType: public AnySimpleType
{
public:
    NegativeIntegerType(){};
    bool verify(AnySimpleType* type) override {
           return dynamic_cast<NegativeIntegerType*>(type) != nullptr;
    };
    unsigned int getId() override { return 6; }
    std::string toString() override { return "NegativeIntegerType"; }
};

class IntType: public AnySimpleType
{
public:
    IntType(){};
    bool verify(AnySimpleType* type) override {
           return dynamic_cast<IntType*>(type) != nullptr;
    };
    unsigned int getId() override { return 7; }
    std::string toString() override { return "IntType"; }
};

class UnsignedIntType: public AnySimpleType
{
public:
    UnsignedIntType(){};
    bool verify(AnySimpleType* type) override {
           return dynamic_cast<UnsignedIntType*>(type) != nullptr;
    };
    unsigned int getId() override { return 8; }
    std::string toString() override { return "UnsignedIntType"; }
};

class ShortType: public AnySimpleType
{
public:
    ShortType(){};
    bool verify(AnySimpleType* type) override {
           return dynamic_cast<ShortType*>(type) != nullptr;
    };
    unsigned int getId() override { return 9; }
    std::string toString() override { return "ShortType"; }
};

class UnsignedShortType: public AnySimpleType
{
public:
    UnsignedShortType(){};
    bool verify(AnySimpleType* type) override {
           return dynamic_cast<UnsignedShortType*>(type) != nullptr;
    };
    unsigned int getId() override { return 10; }
    std::string toString() override { return "UnsignedShortType"; }
};

class ByteType: public AnySimpleType
{
public:
    ByteType(){};
    bool verify(AnySimpleType* type) override {
           return dynamic_cast<ByteType*>(type) != nullptr;
    };
    unsigned int getId() override { return 11; }
    std::string toString() override { return "ByteType"; }
};

class UnsignedByteType: public AnySimpleType
{
public:
    UnsignedByteType(){};
    bool verify(AnySimpleType* type) override {
           return dynamic_cast<UnsignedByteType*>(type) != nullptr;
    };
    unsigned int getId() override { return 12; }
    std::string toString() override { return "UnsignedByteType"; }
};

class LongType: public AnySimpleType
{
public:
    LongType(){};
    bool verify(AnySimpleType* type) override {
           return dynamic_cast<LongType*>(type) != nullptr;
    };
    unsigned int getId() override { return 13; }
    std::string toString() override { return "LongType"; }
};

class UnsignedLongType: public AnySimpleType
{
public:
    UnsignedLongType(){};
    bool verify(AnySimpleType* type) override {
           return dynamic_cast<UnsignedLongType*>(type) != nullptr;
    };
    unsigned int getId() override { return 14; }
    std::string toString() override { return "UnsignedLongType"; }
};

// ============================================================================
// TYPES NUMÉRIQUES DÉCIMAUX
// ============================================================================

class FloatType: public AnySimpleType
{
public:
    FloatType(){};
    bool verify(AnySimpleType* type) override {
           return dynamic_cast<FloatType*>(type) != nullptr;
    };
    unsigned int getId() override { return 15; }
    std::string toString() override { return "FloatType"; }
};

class DoubleType: public AnySimpleType
{
public:
    DoubleType(){};
    bool verify(AnySimpleType* type) override {
           return dynamic_cast<DoubleType*>(type) != nullptr;
    };
    unsigned int getId() override { return 16; }
    std::string toString() override { return "DoubleType"; }
};

class DecimalType: public AnySimpleType
{
public:
    DecimalType(){};
    bool verify(AnySimpleType* type) override {
           return dynamic_cast<DecimalType*>(type) != nullptr;
    };
    unsigned int getId() override { return 17; }
    std::string toString() override { return "DecimalType"; }
};

// ============================================================================
// TYPE BOOLÉEN
// ============================================================================

class BooleanType: public AnySimpleType
{
public:
    BooleanType(){};
    bool verify(AnySimpleType* type) override {
           return dynamic_cast<BooleanType*>(type) != nullptr;
    };
    unsigned int getId() override { return 18; }
    std::string toString() override { return "BooleanType"; }
};

// ============================================================================
// TYPES CHAÎNES DE CARACTÈRES
// ============================================================================

class StringType: public AnySimpleType
{
public:
    StringType(){};
    bool verify(AnySimpleType* type) override {
           return dynamic_cast<StringType*>(type) != nullptr;
    };
    unsigned int getId() override { return 2; }
    std::string toString() override { return "StringType"; }
};

class NormalizedStringType: public AnySimpleType
{
public:
    NormalizedStringType(){};
    bool verify(AnySimpleType* type) override {
           return dynamic_cast<NormalizedStringType*>(type) != nullptr;
    };
    unsigned int getId() override { return 19; }
    std::string toString() override { return "NormalizedStringType"; }
};

class TokenType: public AnySimpleType
{
public:
    TokenType(){};
    bool verify(AnySimpleType* type) override {
           return dynamic_cast<TokenType*>(type) != nullptr;
    };
    unsigned int getId() override { return 20; }
    std::string toString() override { return "TokenType"; }
};

class LanguageType: public AnySimpleType
{
public:
    LanguageType(){};
    bool verify(AnySimpleType* type) override {
           return dynamic_cast<LanguageType*>(type) != nullptr;
    };
    unsigned int getId() override { return 21; }
    std::string toString() override { return "LanguageType"; }
};

class NameType: public AnySimpleType
{
public:
    NameType(){};
    bool verify(AnySimpleType* type) override {
           return dynamic_cast<NameType*>(type) != nullptr;
    };
    unsigned int getId() override { return 22; }
    std::string toString() override { return "NameType"; }
};

class NCNameType: public AnySimpleType
{
public:
    NCNameType(){};
    bool verify(AnySimpleType* type) override {
           return dynamic_cast<NCNameType*>(type) != nullptr;
    };
    unsigned int getId() override { return 23; }
    std::string toString() override { return "NCNameType"; }
};

class IDType: public AnySimpleType
{
public:
    IDType(){};
    bool verify(AnySimpleType* type) override {
           return dynamic_cast<IDType*>(type) != nullptr;
    };
    unsigned int getId() override { return 24; }
    std::string toString() override { return "IDType"; }
};

class IDREFType: public AnySimpleType
{
public:
    IDREFType(){};
    bool verify(AnySimpleType* type) override {
           return dynamic_cast<IDREFType*>(type) != nullptr;
    };
    unsigned int getId() override { return 25; }
    std::string toString() override { return "IDREFType"; }
};

class IDREFSType: public AnySimpleType
{
public:
    IDREFSType(){};
    bool verify(AnySimpleType* type) override {
           return dynamic_cast<IDREFSType*>(type) != nullptr;
    };
    unsigned int getId() override { return 26; }
    std::string toString() override { return "IDREFSType"; }
};

class NMTOKENType: public AnySimpleType
{
public:
    NMTOKENType(){};
    bool verify(AnySimpleType* type) override {
           return dynamic_cast<NMTOKENType*>(type) != nullptr;
    };
    unsigned int getId() override { return 27; }
    std::string toString() override { return "NMTOKENType"; }
};

class NMTOKENSType: public AnySimpleType
{
public:
    NMTOKENSType(){};
    bool verify(AnySimpleType* type) override {
           return dynamic_cast<NMTOKENSType*>(type) != nullptr;
    };
    unsigned int getId() override { return 28; }
    std::string toString() override { return "NMTOKENSType"; }
};

// ============================================================================
// TYPES DATES ET HEURES
// ============================================================================

class DateType: public AnySimpleType
{
public:
    DateType(){};
    bool verify(AnySimpleType* type) override {
           return dynamic_cast<DateType*>(type) != nullptr;
    };
    unsigned int getId() override { return 29; }
    std::string toString() override { return "DateType"; }
};

class TimeType: public AnySimpleType
{
public:
    TimeType(){};
    bool verify(AnySimpleType* type) override {
           return dynamic_cast<TimeType*>(type) != nullptr;
    };
    unsigned int getId() override { return 30; }
    std::string toString() override { return "TimeType"; }
};

class DateTimeType: public AnySimpleType
{
public:
    DateTimeType(){};
    bool verify(AnySimpleType* type) override {
           return dynamic_cast<DateTimeType*>(type) != nullptr;
    };
    unsigned int getId() override { return 31; }
    std::string toString() override { return "DateTimeType"; }
};

class DurationType: public AnySimpleType
{
public:
    DurationType(){};
    bool verify(AnySimpleType* type) override {
           return dynamic_cast<DurationType*>(type) != nullptr;
    };
    unsigned int getId() override { return 32; }
    std::string toString() override { return "DurationType"; }
};

class GYearType: public AnySimpleType
{
public:
    GYearType(){};
    bool verify(AnySimpleType* type) override {
           return dynamic_cast<GYearType*>(type) != nullptr;
    };
    unsigned int getId() override { return 33; }
    std::string toString() override { return "GYearType"; }
};

class GYearMonthType: public AnySimpleType
{
public:
    GYearMonthType(){};
    bool verify(AnySimpleType* type) override {
           return dynamic_cast<GYearMonthType*>(type) != nullptr;
    };
    unsigned int getId() override { return 34; }
    std::string toString() override { return "GYearMonthType"; }
};

class GMonthType: public AnySimpleType
{
public:
    GMonthType(){};
    bool verify(AnySimpleType* type) override {
           return dynamic_cast<GMonthType*>(type) != nullptr;
    };
    unsigned int getId() override { return 35; }
    std::string toString() override { return "GMonthType"; }
};

class GMonthDayType: public AnySimpleType
{
public:
    GMonthDayType(){};
    bool verify(AnySimpleType* type) override {
           return dynamic_cast<GMonthDayType*>(type) != nullptr;
    };
    unsigned int getId() override { return 36; }
    std::string toString() override { return "GMonthDayType"; }
};

class GDayType: public AnySimpleType
{
public:
    GDayType(){};
    bool verify(AnySimpleType* type) override {
           return dynamic_cast<GDayType*>(type) != nullptr;
    };
    unsigned int getId() override { return 37; }
    std::string toString() override { return "GDayType"; }
};

// ============================================================================
// TYPES BINAIRES
// ============================================================================

class Base64BinaryType: public AnySimpleType
{
public:
    Base64BinaryType(){};
    bool verify(AnySimpleType* type) override {
           return dynamic_cast<Base64BinaryType*>(type) != nullptr;
    };
    unsigned int getId() override { return 38; }
    std::string toString() override { return "Base64BinaryType"; }
};

class HexBinaryType: public AnySimpleType
{
public:
    HexBinaryType(){};
    bool verify(AnySimpleType* type) override {
           return dynamic_cast<HexBinaryType*>(type) != nullptr;
    };
    unsigned int getId() override { return 39; }
    std::string toString() override { return "HexBinaryType"; }
};

// ============================================================================
// TYPE URI
// ============================================================================

class AnyURIType: public AnySimpleType
{
public:
    AnyURIType(){};
    bool verify(AnySimpleType* type) override {
           return dynamic_cast<AnyURIType*>(type) != nullptr;
    };
    unsigned int getId() override { return 40; }
    std::string toString() override { return "AnyURIType"; }
};

// ============================================================================
// TYPES DIVERS
// ============================================================================

class QNameType: public AnySimpleType
{
public:
    QNameType(){};
    bool verify(AnySimpleType* type) override {
           return dynamic_cast<QNameType*>(type) != nullptr;
    };
    unsigned int getId() override { return 41; }
    std::string toString() override { return "QNameType"; }
};

class NotationType: public AnySimpleType
{
public:
    NotationType(){};
    bool verify(AnySimpleType* type) override {
           return dynamic_cast<NotationType*>(type) != nullptr;
    };
    unsigned int getId() override { return 42; }
    std::string toString() override { return "NotationType"; }
};