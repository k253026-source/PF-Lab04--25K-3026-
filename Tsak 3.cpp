#include<stdio.h>
int main() {
	int Number_of_pizzas;
	printf("How many pizza you want(1, 2, or 3): ");
	scanf("%d" ,&Number_of_pizzas);
	if(Number_of_pizzas==1) {
		printf("1 pizza costs $8");
	} else if(Number_of_pizzas==2) {
		printf("2 pizzas cost $15");
	} else if(Number_of_pizzas==3) {
		printf("3 pizzas cost $21");
	} else {
		printf("Invalid Number");
		
	}
	return 0;
}
