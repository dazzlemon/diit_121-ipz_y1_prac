#include <iostream>
#include "algorithm.h"
#include <iomanip>

int main()
{

    const int n = 5;

    double** a = new double* [n];

    for (int i = 0; i < n; i++) {
        a[i] = new double[n];
    }

    a[0][0] = 10;
    a[0][1] = 3;
    a[0][2] = -3;
    a[0][3] = 1;
    a[0][4] = 0;
    
    a[1][0] = -5;
    a[1][1] = 10;
    a[1][2] = 3;
    a[1][3] = 2;
    a[1][4] = 0;

    a[2][0] = 0;
    a[2][1] = 0;
    a[2][2] = 10;
    a[2][3] = 0;
    a[2][4] = 0;

    a[3][0] = 4;
    a[3][1] = 1;
    a[3][2] = 0;
    a[3][3] = 10;
    a[3][4] = 0;

    a[4][0] = 0;
    a[4][1] = 0;
    a[4][2] = 0;
    a[4][3] = 0;
    a[4][4] = 0;
        
    double b[n]{ -23, 37, 0, 0, 0};
    double epsilon = 0.0000001;
    double x_new[n]{ 0, 0, 0, 0 };

    //std::cout << std::boolalpha << zeidel_check(a, n);

    gauss_zeidel(a, b, epsilon, 4, x_new);

    for (int i = 0; i < n; i++) {
        std::cout << x_new[i] << " ";
    }

    system("pause");
    return 0;
}
