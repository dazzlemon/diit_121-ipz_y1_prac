
typedef double (*pointFunc2d)(double);

double f_x(double x);

double integral_rectangles(pointFunc2d F, double a, double b, double N, int method);
double integral_trapezoid(pointFunc2d F, double a, double b, double fragment_amount);
double integral_simpson(pointFunc2d F, double a, double b, double fragment_amount);