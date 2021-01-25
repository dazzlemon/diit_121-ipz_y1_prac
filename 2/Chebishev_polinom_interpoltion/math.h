#ifndef math_H
#define math_H

typedef double (*pointFunc)(double);

double f_x(double x);

double Q_x(double x, int polynom_power, int node_amount, double step, double* y, double* X);

int Factorial(int n);

double polynom_chebishev(int current_power, int node_amount, double t);

int falling_factorial(int n, int k);

int falling_factorial_mod(int n, int k);

#endif
