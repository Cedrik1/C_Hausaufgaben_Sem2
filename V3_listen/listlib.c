#include <stdio.h>
#include <stdlib.h>
#include "listheader.h"

void addListElem(listElement *start) {

	listElement *new;
	new = (listElement*)malloc(sizeof(listElement*)); 
	if (new == NULL) {
		printf("Cant reserve storage.\n");

		return;
	}

	//manage pointers
	//start muss nun auf das erste Elemnt zeigen 

	listElement* currElem = start;     //current ist ein lokaler pointer 
	//new = start;

	while (currElem->nextElem != NULL) currElem = currElem->nextElem;
	currElem->nextElem = new;
	new->nextElem = NULL; 
	











	//enter data 

	printf("Insert last Name\n");
	scanf("%s", &new->lastName);
	printf("insert first Name\n");
	scanf("%s", &new->firstName);   //für string so weil strings sind poiter auf speicher platz
	printf("enter age\n");
	scanf("%d", &(new->age));     //für int den Andressoperator davor setzen!

}


void printlist(listElement* start) {

	if (start->nextElem == NULL ) printf("\nLIst is empty.\n");
	else {
		int i = 1;
		listElement* currElem = start;
		printf("\n current list:\n\n");
		do {
			currElem = currElem->nextElem;
			printf("%d", i); i;;
			printf("\tlast name %s\n",currElem->lastName);
			printf("\tfirst name %s\n", currElem->lastName);
			printf("\tage %d\n", currElem->age);

		} while (currElem->nextElem != NULL);
		printf("\n");
	}


}