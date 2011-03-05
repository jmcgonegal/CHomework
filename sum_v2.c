// Author - John McGonegal
// 8/19/2008
#include <stdio.h>

// function declaration
void promptAndCalcSum();

int main(int argc, char *argv[]) {
	char prompt = 'y';
	// loop until user no longer says yes/no
	while(prompt == 'y' || prompt == 'Y') {
		// prompt user and calculate inputs
		promptAndCalcSum();
		printf("Would you like to add again? (Y/N): ");
		// ask for Y/N, the input "aY" will still work
		prompt = 'a';
		while(prompt != 'y' && prompt != 'Y' && prompt != 'n' && prompt != 'N') {
			
			prompt = getchar();
			// cbreak(); // no curses.h, impossible to reset keyboard buffer
		}
	}
	
	return 0;
}

void promptAndCalcSum() {
	float prompt1, prompt2;
	float result;
	
	// ask for input
	printf("Enter first number to add: ");
		scanf("%f",&prompt1);
	printf("Enter second number to add: ");
		scanf("%f",&prompt2);
	
	// calculate sum
	result = prompt1 + prompt2;
	
	// display the sum
	printf("The sum of %g and %g is %g\n",prompt1,prompt2,result);
}