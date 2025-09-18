
#include<stdio.h>
int main() {
	int pizza;
	printf("how many pizzas you want: ");
	scanf("%d" ,&pizza);
if(pizza>1) {
	printf("Check our multi-pizza deals");
} 	else {
	printf("Your total is $8");
}
	return 0;
}
