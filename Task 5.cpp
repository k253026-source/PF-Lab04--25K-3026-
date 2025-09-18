#include<stdio.h>
int main() {
	float Without_cheese = 8;
	printf("Without Cheese Pizza is: %f" ,Without_cheese);
	printf("\nYes = 1\nNo = 2\n");
    int Yes;
	printf("You want extra cheese (Y/N): ");
	scanf("%d" ,&Yes);
	if(Yes==1) {
		printf("Total: %f" ,9.5);
	} else {
		printf("Total: 8" );
	}
	return 0;
}
