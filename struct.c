#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printstud(struct student myStudent) {
	printf("person1.name = %s\n", myStudent.name);
	printf("person1.stadt = %s\n", myStudent.stadt);
	printf("person1.strasse = %s\n", myStudent.strasse);
	printf("person1.num = %d\n", myStudent.hausnummer);
	printf("person1.plz = %d\n", myStudent.plz);
	printf("person1.groesse = %lf\n", myStudent.groesse);


}




struct student
{
	char name[50];
	//ANschrift
	char stadt[50];
	char strasse[100];
	int hausnummer;
	int plz;
	//groesse
	double groesse;
};


int main() {

	

	struct student studenten[2];
	person1.groesse = 1.80;

	strcpy(studenten[1].name, "Cedrik");
	strcpy(studenten[1].stadt, "Murrhardt");
	strcpy(studenten[1].strasse, "blablabl");
	studenten[1].hausnummer = 9;
	studenten[1].plz = 71540;
	studenten[1].groesse = 1.90;


	
	void printstud(studenten[1]);
	
	

















	return 0;
}