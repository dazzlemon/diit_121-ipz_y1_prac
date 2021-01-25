#ifndef methods_H
#define methods_H

#include "math_functions_x.h"

void CG(pointFunc3d F, pointFunc3d f1, pointFunc3d f2, double epsilon, double* x0);
void CG2(pointFunc3d F, pointFunc3d f1, pointFunc3d f2, double epsilon, double* x0);
void CG3(pointFunc3d F, pointFunc3d f1, pointFunc3d f2, double epsilon, double* x0);
double Fibonacci_minimization(pointFunc2d f, double lim_left = 0, double lim_right = 1, double epsilon = 0.001, int max_iter = 12);
double Fibonacci_minimization_mod(double* x_k, double* rho_k, pointFunc3d F, pointFuncPhi Phi, double lim_left = 0, double lim_right = 1, double epsilon = 0.001, int max_iter = 12);//or golden ratio, idk
int Fibonacci(int n);
double bisection_null(pointFunc2d F, double lim_left, double lim_right, double epsilon);

#endif

