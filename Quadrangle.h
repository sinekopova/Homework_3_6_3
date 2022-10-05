#pragma once

#include <string>

#include "Figure.h"

class Quadrangle : public Figure {
public:
    Quadrangle(int a, int b, int c, int d, int A, int B, int C);
    std::string getSides() override;
    std::string getAngles() override;
protected:
    int A, B, C, D;
    int a, b, c, d;
};
