#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include 'newtonfcn.h'

//Newton-Raphson Verfahren
//Cedrik Holzwarth
//Dat 09-05-20

int main()
{




	do {


		fkt = pow((i - 3), 2);
		deriv = (2 * (i - 3));
		temp = i - (fkt / deriv);
		printf("fkt=%lf; Deriv = %lf; x1 = %lf; x +1 = %lf\n", fkt, deriv, i, temp);

		i = temp;
		// plot[count] = fkt;
		// count++;
	} while (fkt > 0.00001);

	return temp;

























}