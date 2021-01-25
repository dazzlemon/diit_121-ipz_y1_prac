#include <iostream>
#include "integral_methods.h"
#include <math.h>
#include <iomanip>

int main()
{
    std::cout << "left " << std::setprecision(10) << integral_rectangles(f_x, 0, 2 * asin(1), 100, 0) << " error = " << abs(2 - integral_rectangles(f_x, 0, 2 * asin(1), 100, 0)) << std::endl;
    std::cout << "mid " << std::setprecision(10) << integral_rectangles(f_x, 0, 2 * asin(1), 100, 1) << " error = " << abs(2 - integral_rectangles(f_x, 0, 2 * asin(1), 100, 1)) << std::endl;
    std::cout << "right " << std::setprecision(10) << integral_rectangles(f_x, 0, 2 * asin(1), 100, 2) << " error = " << abs(2 - integral_rectangles(f_x, 0, 2 * asin(1), 100, 2)) << std::endl;
    std::cout << "trapezoid " << std::setprecision(10) << integral_trapezoid(f_x, 0, 2 * asin(1), 100) << " error = " << abs(2 - integral_trapezoid(f_x, 0, 2 * asin(1), 100)) << std::endl;
    std::cout << "simpson " << std::setprecision(10) << integral_simpson(f_x, 0, 2 * asin(1), 100) << " error = " << abs(2 - integral_simpson(f_x, 0, 2 * asin(1), 100)) << std::endl;
    system("pause");
    return 0;
}