//spec
#include <windows.h>
#include <iostream>
#include "methods.h"
#include "math_functions_x.h"
#include <iomanip>

int main(){

    char f_ch1[]{ "'f(x) = pow(x1, 4) + (2 * pow(x2, 4)) + (x1 * x1 * x2 * x2) + (2 * x1) + x2'" };
    char f_ch2[]{ "'f(x) = ((x1 - 5) * (x1 - 5)) * ((x2 - 4) * (x2 - 4)) + ((x1 - 5) * (x1 - 5)) + ((x2 - 4) * (x2 - 4)) + 1'" };
    char f_ch3[]{ "'f(x) = (x1 * x1) + (2 * x2 * x2) + pow(exp(1), ((x1 * x1) + (x2 * x2))) - x1 + (2 * x2)'" };

    Function3d func3d[3]{   {F1_3d, f1_x1_3d, f1_x2_3d, f_ch1},
                            {F2_3d, f2_x1_3d, f2_x2_3d, f_ch2},
                            {F3_3d, f3_x1_3d, f3_x2_3d, f_ch3}
    };

    int n = 0;

    double x0[]{ 0, 0 };
    std::cout << "cg2 starting point : (x1 = " << x0[0] << "; x2 = " << x0[1] << ")" << std::endl;
    CG2(func3d[n].Function, func3d[n].f_x1, func3d[n].f_x2, 0.001, x0);
    std::cout << "answer(x1; x2): " << std::setprecision(6) << "(" << x0[0] << ";" << x0[1] << ")" << std::endl;
    std::cout << func3d[n].Function_char << " = " << func3d[n].Function(x0[0], x0[1]) << std::endl << std::endl;

    x0[0] = 0;
    x0[1] = 0;
    std::cout << "cg1 starting point : (x1 = " << x0[0] << "; x2 = " << x0[1] << ")" << std::endl;
    CG(func3d[n].Function, func3d[n].f_x1, func3d[n].f_x2, 0.001, x0);
    std::cout << "answer(x1; x2): " << std::setprecision(6) << "(" << x0[0] << ";" << x0[1] << ")" << std::endl;
    std::cout << func3d[n].Function_char << " = " << func3d[n].Function(x0[0], x0[1]) << std::endl << std::endl;

    x0[0] = 0;
    x0[1] = 0;
    std::cout << "cg3 starting point : (x1 = " << x0[0] << "; x2 = " << x0[1] << ")" << std::endl;
    CG3(func3d[n].Function, func3d[n].f_x1, func3d[n].f_x2, 0.001, x0);
    std::cout << "answer(x1; x2): " << std::setprecision(6) << "(" << x0[0] << ";" << x0[1] << ")" << std::endl;
    std::cout << func3d[n].Function_char << " = " << func3d[n].Function(x0[0], x0[1]) << std::endl << std::endl;

    std::cout << "((3 * x * x) + (6 * x) - 8) = 0; x = " << bisection_null(F_sqr, -5, 5, 0.001) << std::endl;

    system("pause");
    return 0;
}
