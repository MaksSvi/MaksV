#include <iostream>
#include "../FigureLibrary/Rhombus.h"

int main() {
    std::vector<Point> points = {
        Point(0, 0),
        Point(2, 2),
        Point(4, 0),
        Point(2, -2)
    };

    Rhombus rhombus(points);

    std::cout << "Rhombus vertices:\n";
    for (const auto& p : rhombus.getVertices()) {
        std::cout << "(" << p.x << ", " << p.y << ")\n";
    }

    std::cout << "Perimeter: " << rhombus.getPerimeter() << std::endl;
    std::cout << "Area: " << rhombus.getArea() << std::endl;

    return 0;
}
