#include <stdio.h>


double myFcn(double x) {

	return x * x;
}

int main(){

	double res = 0;
	double value = 5;

	//fcn fpointer
	double (*myFcnPtr)(double);
	myFcnPtr = myFcn;
	
	
	//with fcn
	res = myFcn(value);

	printf("MyFCN(%lf) = %lf\n", value, res);
	

	//with pointer 
	res = myFcnPtr(value);
	printf("myFcnPtr(%lf) = %lf\n", value, res);


	return 0;
}