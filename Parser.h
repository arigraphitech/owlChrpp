 #pragma once
#include <iostream>
#include <string>
template <typename T>

class Parser {
private:
    std::string onto;
protected:
    T  * space ;
public:
    Parser(std::string const & ontologyPath,T & space){onto=ontologyPath;this->space=&space;};
    virtual bool load() = 0;
    virtual void print() = 0;
    virtual ~Parser() = default;
    std::string getOnto() const;
    T *getSpace() const;
};

template <typename T>
inline T *Parser<T>::getSpace() const
{
    return space;
}

template <typename T>
std::string Parser<T>::getOnto() const
{
    return onto;
}
