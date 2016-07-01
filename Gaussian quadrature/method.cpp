#include "method.h"

double Gauss_Legendre_Integration_2pts(double a, double b, double(f)(double)) {
    return ((b - a) / 2) *
           (f((b - a) / 2 * (-1 / sqrt(3)) + (b + a) / 2) + f((b - a) / 2 * (1 / sqrt(3)) + (b + a) / 2));
}

double Gauss_Legendre_Integration_3pts(double a, double b, std::function<double(double)> func) {
    return ((b - a) / 2) * (
            (5. / 9) * func((b - a) / 2 * (-sqrt(3 / 5)) + (b + a) / 2)
            + (8. / 9) * func((b + a) / 2)
            + (5. / 9) * func((b - a) / 2 * sqrt(3 / 5) + (b + a) / 2));
}