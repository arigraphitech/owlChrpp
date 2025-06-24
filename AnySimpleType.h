#pragma once
#include <iostream>
#include <string>

class AnySimpleType {
public:
    AnySimpleType();
    virtual bool verify(AnySimpleType * type) = 0;
    virtual ~AnySimpleType() = default;
};

struct Value {
std::string val;
AnySimpleType * typeVal;
};
