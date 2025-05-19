#include "Figure.h"
#include <cmath>

Point::Point(double xVal, double yVal) : x(xVal), y(yVal) {}

double Point::distanceTo(const Point& other) const {
    double dx = x - other.x;
    double dy = y - other.y;
    return std::sqrt(dx * dx + dy * dy);
}

Figure::Figure(const std::vector<Point>& points) : vertices(points) {}

double Figure::getSideLength(int index) const {
    int nextIndex = (index + 1) % vertices.size();
    return vertices[index].distanceTo(vertices[nextIndex]);
}

std::vector<Point> Figure::getVertices() const {
    return vertices;
}
