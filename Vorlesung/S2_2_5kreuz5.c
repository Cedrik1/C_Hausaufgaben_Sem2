#include <stdio.h>
#include <stdlib.h>

#Cedrik Holzwarth Dat 07-05-20
#Aufgabe: 


int main()
{
	int dim = 5;

	int **mat = malloc(sizeof(int) * dim);
	for (int i = 0; i < dim; i++) {
		mat[i] = malloc(sizeof(int) * dim);

	}

	for (int x = 0; x < dim; x++)
	{
		for (int y = 0; y < dim; y++) {

			printf("X = %d, y = %d , %d   ",x,y,mat[x][y]);
		}
		printf("\n");
	}


}