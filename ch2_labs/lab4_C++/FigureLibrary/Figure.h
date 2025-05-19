#pragma once
#include <vector>

struct Point {
    double x, y;
    Point(double xVal, double yVal);
    double distanceTo(const Point& other) const;
};

class Figure {
protected:
    std::vector<Point> vertices;

public:
    Figure(const std::vector<Point>& points);
    double getSideLength(int index) const;
    std::vector<Point> getVertices() const;
};
