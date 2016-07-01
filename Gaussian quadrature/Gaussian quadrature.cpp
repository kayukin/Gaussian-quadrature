#include <iostream>
#include "method.h"

using namespace std;

int main(int argc, char *argv[]) {
    cout << Gauss_Legendre_Integration_3pts(0, 1, [](double x) { return x * x; }) << endl;
    system("pause");
}