#ifndef math_functions_x_H
#define math_functions_x_H

#include <string>

typedef double (*pointFunc3d)(double, double);
typedef double (*pointFunc2d)(double);
typedef double (*pointFuncPhi)(double, double*, double*, pointFunc3d);

class Function3d {
public:
	pointFunc3d Function;
	pointFunc3d f_x1;
	pointFunc3d f_x2;
	std::string* Function_char;
};

class Function2d {
public:
	pointFunc2d Function;
	std::string* Function_char;
};

double phi(double alpha, double* x_k, double* rho_k, pointFunc3d F);

double F2d(double x);

double F1_3d(double x1, double x2);
double f1_x1_3d(double x1, double x2);
double f1_x2_3d(double x1, double x2);

double F2_3d(double x1, double x2);
double f2_x1_3d(double x1, double x2);
double f2_x2_3d(double x1, double x2);

double F3_3d(double x1, double x2);
double f3_x1_3d(double x1, double x2);
double f3_x2_3d(double x1, double x2);
double F_sqr(double x);
double F2d_0(double x);
double F2d_1(double x);

double signum(double x);

#endif
