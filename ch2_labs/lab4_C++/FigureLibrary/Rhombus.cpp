#include "Rhombus.h"

Rhombus::Rhombus(const std::vector<Point>& points) : Figure(points) {}

double Rhombus::getPerimeter() const {
    double side = getSideLength(0);
    return 4 * side;
}

double Rhombus::getArea() const {
    double d1 = vertices[0].distanceTo(vertices[2]);
    double d2 = vertices[1].distanceTo(vertices[3]);
    return (d1 * d2) / 2;
}
