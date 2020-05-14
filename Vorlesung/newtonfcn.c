#include <stdio.h>
#include <math.h>

double nfcn(double x) {
	double y = 0;
	y = pow((x - 3), 2);
	return y;



}

double derv(double x) {
	double y = 0;
	double dx = 1e-8;

	y = ((nfcn + 1) - nfcn) / dx;



	return y;
}

double myFcnG3(double x) {										//

	double a0 = 0;
	double a1 = 0;
	double a2 = 1;
	double a3 = 0;

	return a3 * x * x * x + a2 * x * x + a1 * x + a0;


}

double myDifq(double(*nfcn)(double),double x) {

	double dx = 1e-8;

	return (nfcn())



}