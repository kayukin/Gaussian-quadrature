#include <iostream>
#include "method.h"
#include <math.h>

using namespace std;

double func(double x) {
	return exp(1 / (x - 0));
}

int main(int argc, char* argv[])
{
	cout << Gauss_Legendre_Integration_3pts(0, 1, func) << endl;
	system("pause");
}