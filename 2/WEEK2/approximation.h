#ifndef approximation_H
#define approximation_H

#include <vector>

typedef double (*pointFunc)(double);

double f_x(double x);
double f_x0(double x);
double f_x1(double x);

double Q_x(double x, int polynom_power, int node_amount, double step, std::vector<double>& y, std::vector<double>& X);

int Factorial(int n);

double polynom_chebishev(int current_power, int node_amount, double t);

int falling_factorial(int n, int k);

int falling_factorial_mod(int n, int k);

double cubicSpline(double X, std::vector<double> &a, double* b, double* c, double* d, std::vector<double> &x);
void cubicSplineInit(std::vector<double>& a, double* b, double* c, double* d, std::vector<double>& x, int N);

#endif
