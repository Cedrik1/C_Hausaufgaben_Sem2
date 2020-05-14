// Datum: 08.05.2020
// Autoren: Jan Bruderm�ller, Tim Schierle

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "myFunction.h"






int main() {

	double xn = 5;  //Startwert f�r x
	
	double xo = 5;

	double f = 5;

	double a = 0;

	int zaehler = 0;

	double* speicher = malloc(sizeof(double));

	double (*myFcnPtr) (double);

	while (f > 0.000000000001 || f < -0.000000000001) {
		myFcnPtr = function;
		f = myFcnPtr(xn);

		
		a = ableitung(myFcnPtr, xn);
	
		xo = xn - (f / a);
		
		speicher = malloc(sizeof(double)*(zaehler));
		speicher[zaehler] = xo;

		xn = xo;

		printf("%d. Annaeherung: %lf\n",zaehler, speicher[zaehler]);

		zaehler += 1;
	}

	printf("\n\n\nNullstelle bei: %.5lf\n", xn);

	FILE* fp;
	fp = fopen("data2plot.txt", "w");
	if (fp == NULL) {
		printf("Diese Datei could not open\n");
		return -1;
	}
for (int i = 0; i < ????; )



}