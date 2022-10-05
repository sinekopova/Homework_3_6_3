#include "Triangle.h"

Triangle::Triangle(int a, int b, int c, int A, int B) {
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = 180 - A - B;
    name = "Треугольник";
};

std::string Triangle::getSides() {
    return "a = " + std::to_string(a) + ", b = " + std::to_string(b) + ", c = " + std::to_string(c);
};

std::string Triangle::getAngles() {
    return "A = " + std::to_string(A) + ", B = " + std::to_string(B) + ", C = " + std::to_string(C);
};
