static const double x[] = {
	0.00000000000000000000e+00,    7.74596669241483377010e-01
};

static const double A[] = {
	8.88888888888888888877e-01,    5.55555555555555555562e-01
};

double Gauss_Legendre_Integration_3pts(double a, double b, double(*f)(double))
{
	double c = 0.5 * (b - a);
	double d = 0.5 * (b + a);
	double dum;

	dum = c * x[1];
	return  c * (A[1] * ((*f)(d - dum) + (*f)(d + dum)) + A[0] * (*f)(d));
}

double Gauss_Legendre_Integration_2pts(double a, double b, double(*f)(double))
{
	double c = 0.5 * (b - a);
	double d = 0.5 * (b + a);
	double dum = c * 5.77350269189625764507e-01;

	return c * ((*f)(d - dum) + (*f)(d + dum));
}