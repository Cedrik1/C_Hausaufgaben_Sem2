#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Newton-Raphson Verfahren
//Cedrik Holzwarth
//Dat 09-05-20

int main()
{
	/*#fkt(x - 3) ^ 2
		# 2 * (x - 3)*/
	double i = 5; // Startwert
	double fkt;
	double deriv;
	double temp = 0;
	int count = 0;
	//double* plot = malloc(sizeof(double) * 50); //Zahl noch anpassen
		//Schleife
		do {
			
			
			fkt = pow((i - 3), 2);
			deriv = (2 * (i - 3));
			temp = i - (fkt / deriv);
			printf("fkt=%lf; Deriv = %lf; x1 = %lf; x +1 = %lf\n",fkt, deriv, i, temp);

			 i = temp;
			// plot[count] = fkt;
			// count++;
		} while (fkt > 0.00001);
		printf("Nullstelle liegt bei x = %.2lf", temp);

		/*for (int i = 0; i <= 20; i++) {
			printf("Wert Nr. %d = %.2lf\n", i, plot[i]);
	}
	*/



		return 0;
































}