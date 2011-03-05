// Author - John McGonegal
// 8/19/2008
#include <stdio.h>
#include <math.h>
#include <string.h>
// function declaration
double calc_pythag(double,double);
double calc_area(double,double);

int main(int argc, char *argv[]) {
	double prompt1, prompt2;
	double result;

	if(strcmp(argv[1],"hyp") == 0) {
		// ask user for input
		printf("Side 1: ");
		scanf("%g",&prompt1);
		printf("Side 2: ");
		scanf("%g",&prompt2);
		// find out the answer
		result = calc_pythag(prompt1,prompt2);
	}
	else if(strcmp(argv[1],"area") == 0) {
		// ask user for input
		printf("Base: ");
		scanf("%g",&prompt1);
		printf("Height: ");
		scanf("%g",&prompt2);
		// find out the answer
		result = calc_area(prompt1,prompt2);
	}
	else {
		printf("Invalid Parameter\nUsage: %s [hyp|area]\n", argv[0]);
		return 1;
	}
	
	// display the answer
	printf("Result for %g and %g is %g",prompt1,prompt2,result);
	return 0;
}

double calc_pythag(double a, double b) {
	return sqrt(pow(a,2.0) + pow(b,2.0));
}

double calc_area(double a, double b) {
	return a*b/2.0;
}