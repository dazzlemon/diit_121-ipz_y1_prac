#include <cmath>
#include "approximation.h"
#include <iostream>
#include <vector>

double f_x(double x) {
	return(sin(x));//return actual function
}

double f_x0(double x) {
	return (3 * pow(x, 5) - pow(x, 4) + 12 * pow(x, 3) - 1.1 * x);//return actual function
}

double f_x1(double x) {
	return(pow(x, (1 / x)));//return actual function
}

double Q_x(double x, int polynom_power, int node_amount, double step, std::vector<double> &y, std::vector<double>& X) {
	double Q = 0;
	double c, s;
	for (int k = 0; k <= polynom_power; k++) {
		c = 0;
		s = 0;
		for (int i = 0; i <= node_amount; i++) {
			c += y[i] * polynom_chebishev(k, node_amount, i);
			s += pow(polynom_chebishev(k, node_amount, i), 2);
		}
		Q += c * polynom_chebishev(k, node_amount, ((x - X[0]) / step)) / s;
	}
	return Q;
}

double polynom_chebishev(int current_power, int node_amount, double t) {
	double P = 0, numerator, denominator;
	for (int s = 0; s <= current_power; s++) {
		numerator = static_cast<double>(falling_factorial_mod(t, s));
		denominator =  static_cast<double>(falling_factorial(node_amount, s));
		P += numerator * static_cast<double>((pow(-1, s) * falling_factorial((current_power + s), current_power))) / static_cast<double>(Factorial(s) * Factorial(current_power - s)) / denominator;
	}
	return P;
}

int Factorial(int n) {//
	if (n < 0)
		return 0;
	if (n == 0)
		return 1;
	return (n * Factorial(n - 1));
}

int falling_factorial(int n, int k) {
	if ((n == 0) && (k > 0))
		return 0;
	if ((k == 0) || (n < k))
		return 1;
	int f = 1;
	for (int i = 0; i < k ; i++, n--)
		f *= n;
	return f;
}

int falling_factorial_mod(int n, int k) {//unused atm
	if (k > n)
		return 0;
	if ((k == 0) || (n < k))
		return 1;
	int f = 1;
	for (int i = 0; i < k; i++, n--)
		f *= n;
	return f;
}

double cubicSpline(double X, std::vector<double>& a, double* b, double* c, double* d, std::vector<double>& x) {
	bool find = false;//found*
	int k = 0;
	for (k; !find && (k < a.size() - 2); k++)
		if (X <= x[k + 1])
			find = true;
	double t = (X - x[k]);
	return (a[k] + (b[k] * t) + (c[k] * pow(t, 2)) + (d[k] * pow(t, 3)));
}

void cubicSplineInit(std::vector<double>& a, double* b, double* c, double* d, std::vector<double> &x, int N) {
	double* h = new double[N];
	double* l = new double[N];
	for (int k = 1; k <= N; k++) {
		h[k] = x[k] - x[k - 1];
		l[k] = (a[k] - a[k - 1]) / h[k];
	}

	double* delta = new double[N], *lambda = new double[N];
	delta[1] = -h[2] / (2 * (h[1] + h[2]));
	lambda[1] = 1.5 * (l[2] - l[1]) / (h[1] + h[2]);
	for (int k = 3; k <= N; k++) {
		delta[k - 1] = -h[k] / (2 * h[k - 1] + 2 * h[k] + h[k - 1] * delta[k - 2]);
		lambda[k - 1] = (3 * l[k] - 3 * l[k - 1] - h[k - 1] * lambda[k - 2]) / (2 * h[k - 1] + 2 * h[k] + h[k - 1] * delta[k - 2]);
	}
	
	c[N] = 0;
	c[0] = 0;
	for (int k = N; k >= 2; k--) {
		c[k - 1] = delta[k - 1] * c[k] + lambda[k - 1];
	}
	for (int k = 1; k < N; k++) {
		d[k] = (c[k] - c[k - 1]) / (3 * h[k]);
		b[k] = l[k] + (2 * c[k] * h[k] + h[k] * c[k - 1]) / 3;
	}
}