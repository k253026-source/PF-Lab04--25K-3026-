#include<stdio.h>
int main() {
	printf("Pizza cost is $8\n");
	printf("delivery = 1 \npickup = 0");
	printf("\n");
	int delivery;
	int pickup;
	printf("You want delivery or pickup: ");
	scanf("%d" ,&delivery);
	if(delivery==1 && pickup==0) {
	printf("Total Cost is: %d",8 + 3);
}  else if(pickup==0) {
	printf("Total Cost is: %d" ,8);
}  else {
	printf("Invalid input");
}

	return 0;
}
