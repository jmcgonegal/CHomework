// Author - John McGonegal
// 8/19/2008
#include <stdio.h>

// function declaration

int main(int argc, char *argv[]) {
	int prompt1 = -1;
	int result = 0;
	int i;

	while(prompt1 < 0) {
		printf("Enter an integer greater than zero: ");
		scanf("%d",&prompt1);
	}
	
	for(i=0;i<=prompt1;i++) {
		result+=i;
	}
	// display the answer
	printf("Input was %d and Sum of count was %d",prompt1,result);
	return 0;
}