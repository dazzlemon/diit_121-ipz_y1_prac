#include "algorithm.h"
#include <cmath>
#include <iostream>

void gauss_zeidel(double** a, double* b, double epsilon, int n, double* x_new){
	double* x_old = new double[n], * error_ar = new double[n], error;
	do {
		for (int i = 0; i < n; i++)
			x_old[i] = x_new[i];
		for (int i = 0; i < n; i++) {
			x_new[i] = b[i];
			for (int j = 0; j < i; j++)
				x_new[i] -= a[i][j] * x_new[j];
			for (int j = i + 1; j < n; j++)
				x_new[i] -= a[i][j] * x_old[j];
			x_new[i] /= a[i][i];
		}
		for (int j = 0; j < n; j++)
			error_ar[j] = abs(x_new[j] - x_old[j]);
		error = max(error_ar, n);
	} while (error > epsilon);
}

double max(double* array, int n) {

	double* temp = new double[n];
	for (int i = 0; i < n; i++) {
		temp[i] = array[i];
	}

	bool sorted = false;
	for (int i = 0; !sorted && (i < (n - 1)); i++) {//i - #of iteration
		bool sorted = true;
		for (int j = 0; j < (n - i - 1); j++) {//j - #element being compared to next
			if (temp[j] < temp[j + 1]) {

				float TEMP = temp[j];
				temp[j] = temp[j + 1];
				temp[j + 1] = TEMP;

				sorted = false;
			}
		}
	}
	return(temp[0]);
}

bool zeidel_check(double** a, int n) {
	bool ok = true;

	double row_sum;

	for (int i = 0; i < n; i++) {
		row_sum = 0;

		for (int j = 0; j < n; j++) {
			row_sum += a[i][j];
		}
		if (abs(a[i][i]) < abs(row_sum));
	}
	return ok;
}