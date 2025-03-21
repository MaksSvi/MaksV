#include "Trapezoid.h"

Trapezoid::Trapezoid() : a(1), b(1), h(1) {}
Trapezoid::Trapezoid(double base1, double base2, double height) : a(base1), b(base2), h(height) {}
Trapezoid::Trapezoid(const Trapezoid &other) : a(other.a), b(other.b), h(other.h) {}

double Trapezoid::area() const {
    return 0.5 * (a + b) * h;
}

double Trapezoid::perimeter() const {
    double side = sqrt(((b - a) / 2) * ((b - a) / 2) + h * h);
    return a + b + 2 * side;
}

Trapezoid Trapezoid::operator-(double value) {
    return Trapezoid(a - value, b - value, h - value);
}

Trapezoid Trapezoid::operator*(const Trapezoid &other) {
    return Trapezoid(a * other.a, b * other.b, h * other.h);
}

void Trapezoid::display() const {
    cout << "Trapezoid(a: " << a << ", b: " << b << ", h: " << h << ")" << endl;
    cout << "Area: " << area() << " Perimeter: " << perimeter() << endl;
}
