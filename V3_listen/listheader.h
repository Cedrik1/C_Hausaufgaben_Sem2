//#pragma once
#ifndef  LISTHEADER_H_
#define LISTHEADER_H_
struct listElem {
	char lastName[50];
	char firstName[50];
	int age;
	struct listElem *nextElem;

};

typedef struct listElem listElement;

void addlistElem(listElement*);
void printlist(listElement*);
#endif