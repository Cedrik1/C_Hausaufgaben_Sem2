#include <stdio.h>
#include <stdlib.h>
#include "listheader.h"

int main() {


	listElement* start;
	start = (listElement*)malloc(sizeof(listElement));

	if (start == NULL) {

		printf("Can't reserve storage\n");
		return -1;
	}
	start->nextElem = NULL;  //*start.nextElem


	int FLAGG = 1;
	while (FLAGG) {

			printf("1.. print list\n");
			printf("2.. add Element to list\n");
			printf("3.. dleete element");
			printf("4deleme list");
			printf("5 save lsit");
			printf("6 load list");
			printf("7 sort list");
			printf("0 exit");
			scanf("%d", &FLAGG);
			system("clear");
	

	switch (FLAGG)
	{
	case 1: printlist(start);
		break;
	case 2: addlistElem(start);
		break;
	case 0: FLAGG = 0; break;
	default: printf("invalid choice\n"); break;
	}
	
	}
	
	















	return 0;
}