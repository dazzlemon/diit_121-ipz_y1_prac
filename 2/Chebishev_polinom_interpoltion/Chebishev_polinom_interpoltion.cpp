#include <iostream>
#include "math.h"
#include <cmath>

int main()
{
    int node_amount = 9;

    double* x0 = new double[node_amount + 1];
    double* y0 = new double[node_amount + 1];
    double step = 0.3;

    double x_start = 0;

    for (int i = 0; i <= node_amount; i++) {
        x0[i] = x_start + step * i;
        y0[i] = sin(x0[i]);
    }


  /*  y0[0] = 1.3;
    y0[1] = 1.245;
    y0[2] = 1.095;
    y0[3] = 0.855;
    y0[4] = 0.514;
    y0[5] = 0.037;
    y0[6] = -0.6;
    y0[7] = -1.295;
    y0[8] = -1.767;
    y0[9] = -1.914;*/

    std::cout << std::endl << "x ";
    for (int i = 0; i <= node_amount; i++) {
        std::cout << x0[i] << " ";
    }
    std::cout << std::endl << "y ";
    for (int i = 0; i <= node_amount; i++) {
        std::cout << y0[i] << " ";
    }
    std::cout << std::endl;
    std::cout << std::endl;

    double aproximation = 0.15;
    int aprox_am = (node_amount - 1) * step / aproximation;

    //for (int i = 0; i <= aprox_am; i++) {
    //    std::cout << Q_x((x_start + aproximation * i), 5, node_amount, step, y0, x0) << " ";
    //}
    //std::cout << std::endl;
    //std::cout << std::endl;
    //for (int i = 0; i <= aprox_am; i++) {
    //    std::cout << sin(x_start + aproximation * i) << " ";
    //}
    //std::cout << std::endl;
    for (int i = 0; i <= aprox_am; i++) {
      std::cout << Q_x((x_start + aproximation * i), 5, node_amount, step, y0, x0) << " ";
    }
    std::cout << std::endl;

    double error_avg = 0;
    for (int i = 0; i <= aprox_am; i++) {
        error_avg += abs(Q_x((x_start + aproximation * i), 5, node_amount, step, y0, x0) - sin(x_start + aproximation * i));
    }
    error_avg /= aprox_am;
    std::cout << error_avg << std::endl;


    /*std::cout << "y~" << std::endl;
    for (int i = 0; i <= 9; i++) {
        std::cout << Q_x(x0[i], 5, node_amount, 0.3, y0, x0) << " ";
    }
    std::cout << std::endl;

    std::cout << std::endl;
    for (int i = 0; i <= 9; i++) {
        std::cout << "i = " << i << " ";
        std::cout << polynom_chebishev(6, 9, i) << std::endl;
    }
    std::cout << std::endl;*/

    system("pause");
    return 0;
}