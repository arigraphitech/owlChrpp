#pragma once
#include <iostream>
#include <string>
#include "AnySimpleType.h"



class StringType: public AnySimpleType
{
public:
    StringType();
    bool verify(AnySimpleType* type) override {
           return dynamic_cast<StringType*>(type) != nullptr;
    };
};

