#include "math_functions_x.h"
#include <cmath>

double F1_3d(double x1, double x2) {
	return (pow(x1, 4) + (2 * pow(x2, 4)) + (x1 * x1 * x2 * x2) + (2 * x1) + x2);
}

double f1_x1_3d(double x1, double x2) {
	return ((4 * pow(x1, 3)) + (2 * x1) + 2);
}

double f1_x2_3d(double x1, double x2) {
	return ((8 * pow(x1, 3)) + (2 * x2) + 1);
}

double phi(double alpha, double* x_k, double* rho_k, pointFunc3d F) {
	return F((x_k[0] - (alpha * rho_k[0])), (x_k[1] - (alpha * rho_k[1])));
}

double F2d(double x) {
	return((2 * x) + (1 / x));
}

double F2_3d(double x1, double x2) {
	return(((x1 - 5) * (x1 - 5)) * ((x2 - 4) * (x2 - 4)) + ((x1 - 5) * (x1 - 5)) + ((x2 - 4) * (x2 - 4)) + 1);
}

double f2_x1_3d(double x1, double x2) {
	return ((2 * x1) + (((2 * x1) - 10) * (x2 - 4) * (x2 - 4)) - 10);
}

double f2_x2_3d(double x1, double x2) {
	return((2 * x2) + ((x1 - 5) * (x1 - 5) * ((2 * x2) - 8)) - 8);
}

double F3_3d(double x1, double x2) {
	return((x1 * x1) + (2 * x2 * x2) + pow(exp(1), ((x1 * x1) + (x2 * x2))) - x1 + (2 * x2));
}

double f3_x1_3d(double x1, double x2) {
	return ((2 * x1 * pow(exp(1), ((x1 * x1) + (x2 * x2)))) + (2 * x1) - 1);
}

double f3_x2_3d(double x1, double x2) {
	return((2 * x2 * pow(exp(1), ((x1 * x1) + (x2 * x2)))) + (4 * x2) + 2);
}

double F_sqr(double x) {
	return((3 * x * x) + (6 * x) - 8);
}