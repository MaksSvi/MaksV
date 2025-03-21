#ifndef TRAPEZOID_H
#define TRAPEZOID_H

#include <iostream>
#include <cmath>
using namespace std;

class Trapezoid {
private:
    double a, b, h;

public:
    Trapezoid();
    Trapezoid(double base1, double base2, double height);
    Trapezoid(const Trapezoid &other);
    double area() const;
    double perimeter() const;
    Trapezoid operator-(double value);
    Trapezoid operator*(const Trapezoid &other);
    void display() const;
};

#endif