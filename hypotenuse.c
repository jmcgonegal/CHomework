#include <stdio.h>
#include <math.h>

int main(void)
{
	double count;
	double count1;
	
	double resultValue1;
	double resultValue2;
	
	int x;
	
	resultValue1 =0;
	
	//read in values
	puts("Enter the height: ");
	scanf("%g", &count);
	
	puts("Enter the base: ");
	scanf("%g", &count1);
	
	//first print statment
	printf("\nHeight is %g\n", count);
	printf("\nBase is %g\n", count1);
	
	resultValue1 = sqrt(count);
	resultValue2 = sqrt(count1);	
	
	//second print statement
	//printf("The Hypotenuse is %g\n", count);
	printf("\nThe Hypotenuse is %g\n", count1);
	
	return 0;
	
}