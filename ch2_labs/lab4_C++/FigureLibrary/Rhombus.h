#pragma once
#include "Figure.h"

class Rhombus : public Figure {
public:
    Rhombus(const std::vector<Point>& points);
    double getPerimeter() const;
    double getArea() const;
};
