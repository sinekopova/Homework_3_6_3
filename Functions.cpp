#include "Functions.h"

void printFigureInfo(Figure* fig) {
    std::cout << fig->getName() << " : " << std::endl;
    std::cout << "������� : " << fig->getSides() << std::endl;
    std::cout << "���� : " << fig->getAngles() << std::endl << std::endl;
};