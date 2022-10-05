#include "Figure.h"
#include "Triangle.h"
#include "Quadrangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Parallelogram.h"
#include "Rectangle.h"
#include "Rhomb.h"
#include "Square.h"
#include "Functions.h"



int main()
{

    setlocale(LC_ALL, "Russian");

    Triangle triangle(10, 20, 30, 50, 60);
    printFigureInfo(&triangle);

    RightTriangle rightTriangle(10, 20, 30, 50);
    printFigureInfo(&rightTriangle);

    IsoscelesTriangle isoscelesTriangle(10, 20, 50);
    printFigureInfo(&isoscelesTriangle);

    EquilateralTriangle equilateralTriangle(30);
    printFigureInfo(&equilateralTriangle);

    Quadrangle quadrangle(10, 20, 30, 40, 80, 110, 70);
    printFigureInfo(&quadrangle);

    Parallelogram parallelogram(20, 30, 120);
    printFigureInfo(&parallelogram);

    Rectangle rectangle(10, 20);
    printFigureInfo(&rectangle);

    Rhomb rhomb(10, 40);
    printFigureInfo(&rhomb);

    Square square(30);
    printFigureInfo(&square);

}
