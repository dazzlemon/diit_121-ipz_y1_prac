#include "methods.h"
#include "math_functions_x.h"
#include <cmath>
#include <vector>
#include <iostream>

void CG(pointFunc3d F, pointFunc3d f1, pointFunc3d f2, double epsilon, double* x0) {//x0[2]
	std::vector<double*> x{ x0 };//current estimate
	double rho[]{ f1(x0[0], x0[1]), f2(x0[0], x0[1]) };//current gradient
	double alpha;//current search
	double beta;
	int n_3d = 3;
	double* x_new = new double[2];
	for (int k = 0; (std::abs(f1(x[k][0], x[k][1])) >= epsilon) && (std::abs(f2(x[k][0], x[k][1])) >= epsilon) && (k < 1000); k++) {
		alpha = Fibonacci_minimization_mod(x[k], rho, F, phi);
		x_new[0] = x[k][0] - alpha * rho[0];
		x_new[1] = x[k][1] - alpha * rho[1];
		x.push_back(x_new);
		if (((k + 1) % n_3d) == 0)
			beta = 0;
		else
			beta = (pow(f1(x[k + 1][0], x[k + 1][1]), 2) + pow(f2(x[k + 1][0], x[k + 1][1]), 2)) / (pow(f1(x[k][0], x[k][1]), 2) + pow(f2(x[k][0], x[k][1]), 2));
		rho[0] = (f1(x[k + 1][0], x[k + 1][1]) - beta * rho[0]);
		rho[1] = (f2(x[k + 1][0], x[k + 1][1]) - beta * rho[1]);
	}
	x0[0] = x.back()[0];
	x0[1] = x.back()[1];
}

void CG2(pointFunc3d F, pointFunc3d f1, pointFunc3d f2, double epsilon, double* x0) {
	std::vector<double*> x{ x0 };//current estimate
	double d[]{ -f1(x0[0], x0[1]), -f2(x0[0], x0[1]) };//test
	double rho[]{ d[0], d[1] };//current antigradient
	double alpha;//current search
	double beta;
	double* d_n = new double[2];//test
	double* x_new = new double[2];
	int n = 3;//for 3d
	for (int k = 0; (std::abs(rho[0]) >= epsilon) && (std::abs(rho[1]) >= epsilon) && (k < 1000); k++) {
		d_n[0] = -d[0];
		d_n[1] = -d[1];
		alpha = Fibonacci_minimization_mod(x[k], d_n, F, phi);
		x_new[0] = x[k][0] + alpha * d[0];
		x_new[1] = x[k][1] + alpha * d[1];
		x.push_back(x_new);
		rho[0] = -f1(x[k + 1][0], x[k + 1][1]);
		rho[1] = -f2(x[k + 1][0], x[k + 1][1]);
		if (((k + 1) % n) == 0)
			beta = 0;
		else
			beta = -(pow(f1(x[k + 1][0], x[k + 1][1]), 2) + pow(f2(x[k + 1][0], x[k + 1][1]), 2)) / (pow(f1(x[k][0], x[k][1]), 2) + pow(f2(x[k][0], x[k][1]), 2));
		d[0] = rho[0] + beta * d[0];
		d[1] = rho[1] + beta * d[1];
	}
	x0[0] = x.back()[0];
	x0[1] = x.back()[1];
}

void CG3(pointFunc3d F, pointFunc3d f1, pointFunc3d f2, double epsilon, double* x0, std::vector<double>& x1, std::vector<double>& x2) {//x0[2]
	std::vector<double*> x{ x0 };//current estimate
	x1.push_back(x0[0]);
	x2.push_back(x0[1]);
	double rho[]{ f1(x0[0], x0[1]), f2(x0[0], x0[1]) };//current gradient
	double alpha;//current search
	double beta;
	int n_3d = 3;
	double* x_new = new double[2];
	for (int k = 0; (std::abs(f1(x1[k], x2[k])) >= epsilon) && (std::abs(f2(x1[k], x2[k])) >= epsilon) && (k < 1000); k++) {
		double x_k[2]{x1[k], x2[k]};///
		alpha = Fibonacci_minimization_mod(x_k, rho, F, phi);
		x_new[0] = x1[k] - alpha * rho[0];
		x_new[1] = x2[k] - alpha * rho[1];
		x.push_back(x_new);
		x1.push_back(x_new[0]);
		x2.push_back(x_new[1]);
		if (((k + 1) % n_3d) == 0)
			beta = 0;
		else {
			beta = (pow(f1(x1[k + 1], x2[k + 1]), 2) + pow(f2(x1[k + 1], x2[k + 1]), 2)) / (pow(f1(x[k][0], x[k][1]), 2) + pow(f2(x[k][0], x[k][1]), 2));//error in denominator
			//beta = (pow(f1(x1[k + 1], x2[k + 1]), 2) + pow(f2(x1[k + 1], x2[k + 1]), 2)) / (pow(f1(x1[k], x2[k]), 2) + pow(f2(x1[k], x2[k]), 2));///
			//std::cout << x[k][0] << " " << x[k][0] << " * " << x1[k] << " " << x2[k] << std::endl;
		}
		rho[0] = (f1(x1[k + 1], x2[k + 1]) - beta * rho[0]);///
		rho[1] = (f2(x1[k + 1], x2[k + 1]) - beta * rho[1]);///
	}
	x0[0] = x1.back();
	x0[1] = x2.back();
}

double Fibonacci_minimization(pointFunc2d f, double lim_left, double lim_right, double epsilon, int max_iter) {//or golden ratio, idk
	double x[2];
	x[0] = (lim_left + Fibonacci(max_iter - 2) * (lim_right - lim_left) / Fibonacci(max_iter));
	x[1] = (lim_right - Fibonacci(max_iter - 2) * (lim_right - lim_left) / Fibonacci(max_iter));
	double A = f(x[0]);
	double B = f(x[1]);
	bool precise = false;
	do {
		if (A < B) {
			lim_right = x[1];
			if ((lim_right - lim_left) <= epsilon)
				precise = true;
			x[1] = x[0];
			B = A;
			x[0] = (lim_left + Fibonacci(max_iter - 2) * (lim_right - lim_left) / Fibonacci(max_iter));
			A = f(x[0]);
		}
		else {
			lim_left = x[0];
			if ((lim_right - lim_left) <= epsilon)
				precise = true;
			x[0] = x[1];
			A = B;
			x[1] = (lim_right - Fibonacci(max_iter - 2) * (lim_right - lim_left) / Fibonacci(max_iter));
			B = f(x[1]);
		}
	} while (!precise);
	return ((lim_left + lim_right) / 2);
}

int Fibonacci(int n) {
	int Fib[2]{ 1, 1 };
	for (int i = 0; i < (n - 2); i++) {
		int temp = Fib[0] + Fib[1];
		Fib[0] = Fib[1];
		Fib[1] = temp;
	}
	return Fib[1];
}

double Fibonacci_minimization_mod(double* x_k, double* rho_k, pointFunc3d F, pointFuncPhi Phi, double lim_left, double lim_right, double epsilon, int max_iter) {//or golden ratio, idk
	double x[2];
	x[0] = (lim_left + Fibonacci(max_iter - 2) * (lim_right - lim_left) / Fibonacci(max_iter));//alpha
	x[1] = (lim_right - Fibonacci(max_iter - 2) * (lim_right - lim_left) / Fibonacci(max_iter));//alpha
	double A = Phi(x[0], x_k, rho_k, F);
	double B = Phi(x[1], x_k, rho_k, F);
	bool precise = false;
	do {
		if (A < B) {
			lim_right = x[1];
			if ((lim_right - lim_left) <= epsilon)
				precise = true;
			x[1] = x[0];
			B = A;
			x[0] = (lim_left + Fibonacci(max_iter - 2) * (lim_right - lim_left) / Fibonacci(max_iter));
			A = Phi(x[0], x_k, rho_k, F);
		}
		else {
			lim_left = x[0];
			if ((lim_right - lim_left) <= epsilon)
				precise = true;
			x[0] = x[1];
			A = B;
			x[1] = (lim_right - Fibonacci(max_iter - 2) * (lim_right - lim_left) / Fibonacci(max_iter));
			B = Phi(x[1], x_k, rho_k, F);
		}
	} while (!precise);
	return ((lim_left + lim_right) / 2);
}

double bisection_null(pointFunc2d F, double lim_left, double lim_right, double epsilon) {
	double answer;
	if (F(lim_left) == 0)
		answer = lim_left;
	else if (F(lim_right) == 0)
		answer = lim_right;
	else {
		double half_length, x_current = lim_left;
		while (abs(F(x_current)) > epsilon) {//(lim_right - lim_left)
			half_length = (lim_right - lim_left) / 2;
			x_current = lim_left + half_length;
			if (signum(F(lim_left)) != signum(F(x_current)))
				lim_right = x_current;
			else
				lim_left = x_current;
		}
		answer = x_current;
	}
	return answer;
}

double signum(double x) {
	if (x == 0)
		return 0;
	if (x < 0)
		return -1;
	return 1;//if x>0
}