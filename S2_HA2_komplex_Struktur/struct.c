#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Cedrik Holzwarth 
// Studenten struktur
//18.05.20



typedef struct
{
	char name[50];
	//ANschrift
	char stadt[50];
	char strasse[100];
	int hausnummer;
	int plz;
	//groesse
	double groesse;
}student;




void printstud(student myStudent) {
	printf("person1.name = %s\n", myStudent.name);
	printf("person1.stadt = %s\n", myStudent.stadt);
	printf("person1.strasse = %s\n", myStudent.strasse);
	printf("person1.num = %d\n", myStudent.hausnummer);
	printf("person1.plz = %d\n", myStudent.plz);
	printf("person1.groesse = %lf\n", myStudent.groesse);

}




int main() {

	student studenten[50];

	
	

	strcpy(studenten[0].name, "Cedrik");
	strcpy(studenten[0].stadt, "Murrhardt");
	strcpy(studenten[0].strasse, "blablabl");
	studenten[0].hausnummer = 9;
	studenten[0].plz = 71540;
	studenten[0].groesse = 1.90;


	
	printstud(studenten[0]);

	

	
	








	return 0;
}