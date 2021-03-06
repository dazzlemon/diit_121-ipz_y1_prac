#include <cmath>
#include "integral_methods.h"
#include <iostream>

double f_x(double x) {
	return sin(x);
}

double integral_rectangles(pointFunc2d F, double a, double b, double fragment_amount, int method) {//method = 0,1,2 to choose left, middle or right rectangles
	double integral = 0, step = (b - a) / fragment_amount;
	a += method * step / 2;
	for (int i = 0; i <= fragment_amount; i++)
		integral += F(a + step * i);
	return step * integral;
}

double integral_trapezoid(pointFunc2d F, double a, double b, double fragment_amount) {
	double integral = 0, step = (b - a) / fragment_amount;
	for (int i = 0; i <= fragment_amount; i++) 
		integral += F(a + step * i) + F(a + step * (i - 1));
	return step * integral / 2;
}

double integral_simpson(pointFunc2d F, double a, double b, double fragment_amount) {//fragment_amount % 2 = 0
	double integral = F(a) + F(b), step = (b - a) / fragment_amount;
	for (int i = 1; i < fragment_amount; i += 2)
		integral += 2 * F(a + step * (i + 1)) + 4 * F(a + step * i);
	return step * integral / 3;
}