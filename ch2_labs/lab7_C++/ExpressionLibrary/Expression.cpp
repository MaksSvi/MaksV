#include "Expression.h"
#include <cmath>

Expression::Expression(double a, double b, double c, double d)
    : a(a), b(b), c(c), d(d) {}

void Expression::SetValues(double a_, double b_, double c_, double d_) {
    a = a_; b = b_; c = c_; d = d_;
}

double Expression::Calculate() const {
    if (b == 0)
        throw std::runtime_error("Divide by zero: b = 0");

    double ratio = a / b;
    if (ratio <= 0)
        throw std::runtime_error("Invalid argument for ln(a/b): non-positive value");

    double numerator = 4 * std::log(ratio) + 1;
    double denominator = c + b - d + a;

    if (denominator == 0)
        throw std::runtime_error("Divide by zero in denominator");

    return numerator / denominator;
}
    