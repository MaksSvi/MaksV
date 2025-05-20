#pragma once
#include <stdexcept>

class Expression {
private:
    double a, b, c, d;

public:
    Expression(double a, double b, double c, double d);

    void SetValues(double a, double b, double c, double d);
    double Calculate() const;
};
