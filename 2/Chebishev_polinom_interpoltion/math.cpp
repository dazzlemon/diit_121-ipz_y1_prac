#include <cmath>
#include "math.h"
#include <iostream>

double f_x(double x) {
	return(sin(x));//return actual function
}

double Q_x(double x, int polynom_power, int node_amount, double step, double* y, double* X) {
	double Q = 0;
	double c, s;
	for (int k = 0; k <= polynom_power; k++) {
		c = 0;
		s = 0;
		for (int i = 0; i <= node_amount; i++) {
			//std::cout << polynom_chebishev(k, node_amount, i) << " ";
			c += y[i] * polynom_chebishev(k, node_amount, X[i] / step);
			s += pow(polynom_chebishev(k, node_amount, i), 2);
			
		}
		//std::cout << (c / s) << std::endl;
		Q += c * polynom_chebishev(k, node_amount, ((x - X[0])/step)) / s;
	}
	return Q;
}

double polynom_chebishev(int current_power, int node_amount, double t) {//
	double P = 0, numerator, denominator;
	for (int s = 0; s <= current_power; s++) {
		numerator = static_cast<double>(falling_factorial_mod(t, s));
		//std::cout <<"s= " <<s<<" n = " << numerator << " ";
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

int falling_factorial_mod(int n, int k) {
	if (k > n)
		return 0;
	if ((k == 0) || (n < k))
		return 1;
	int f = 1;
	for (int i = 0; i < k; i++, n--)
		f *= n;
	return f;
}