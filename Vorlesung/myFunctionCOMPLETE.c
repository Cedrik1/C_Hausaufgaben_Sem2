#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double function(double x) {
	double y = 0;
	y = pow((x - 3), 2);
	return y;
}

double ableitung(double(*fcn)(double), double x) {
	double dx = 1e-8;
	
	return (fcn(x+dx)-fcn(x))/dx;

}