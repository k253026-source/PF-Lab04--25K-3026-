#include <stdio.h>
int main(){
	int pizzas;
	printf("If you Order Three Pizzas with Stuffed Crust, \nYou can get free garlic bread");
	int pizza;
	printf("\nHow many pizzas do  you want to  order with Stuffed Crust: ");
	scanf("%d" ,&pizza);
	if(pizza == 3) {
		printf("You get free garlic bread");
	} else { 
		printf("You cannot get free garlic bread");
	}
	return 0;
}
