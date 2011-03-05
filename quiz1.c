#include <stdio.h>
#define MYNAME "JOHN MCGONEGAL"

// function definition
void part1();
void part2();
void part3();
void part4(int,float);

void main() {
	// the assignment
	part1();
	part2();
	part3();
	// part4 is called by part3()
	// part4();
}

void part1() {
	// hello world
	printf("Hello World!\n");
	// print my name
	printf(MYNAME);
}

void part2() {
	/* 5 data types for part 2
	 * Integer
	 * Float
	 * String or a pointer to an array of characters
	 * Character
	 * Unsigned Short
	 */
	int myInt = 5;
	float myFloat = 1.2525f;
	char* myString = MYNAME;
	char myChar = 'a';
	unsigned short myShort = 65535;
	
	printf("\nPart2:\n");
	
	// echo 5 formated data types
	printf("\nInt\tFloat\t\tString\t\tChar\tShort\n");
	printf("%d\t%f\t%s\t%c\t%u\n",myInt,myFloat,myString,myChar,myShort);
}

void part3() {
	int promptInt;
	float promptFloat;
	
	printf("\nPart3:\n");
	// get an interger from the user
	printf("Please enter an interger:");
	scanf("%d",&promptInt); // pass by reference
	
	// get a float from the user
	printf("\nPlease enter a floating point number:");
	scanf("%f",&promptFloat);
	
	// echo input
	printf("\nYou entered %d and %f.\n",promptInt,promptFloat);
	
	// move to part 4
	part4(promptInt,promptFloat);
}

void part4(int a, float b) {
	float sum = a + b;
	float minus = a - b;
	float mult = a * b;
	float div = a / b;
	printf("\nPart4:\n");
	// result of A + B
	printf("%d\t+\t%f\t=\t%f\n", a, b, sum);
	// result of A - B
	printf("%d\t-\t%f\t=\t%f\n", a, b, minus);
	// result of A * B
	printf("%d\t*\t%f\t=\t%f\n", a, b, mult);
	// result of A - B
	printf("%d\t/\t%f\t=\t%f\n", a, b, div);
	
}