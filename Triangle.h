#pragma once

#include <string>

#include "Figure.h"

class Triangle : public Figure {
public:
    Triangle(int a, int b, int c, int A, int B) ;
    std::string getSides() override;
    std::string getAngles() override ;
protected:
    int A, B, C;
    int a, b, c;
};