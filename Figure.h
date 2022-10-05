#pragma once
#include <string>

class Figure {
public:
    Figure() ;
    virtual std::string getSides();
    virtual std::string getAngles();
    std::string getName();

protected:
    std::string name;
};