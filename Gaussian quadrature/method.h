#pragma once

#include <math.h>
#include <functional>

double Gauss_Legendre_Integration_3pts(double a, double b, std::function<double(double)> func);

double Gauss_Legendre_Integration_2pts(double a, double b, double(f)(double));