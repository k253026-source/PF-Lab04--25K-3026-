#include<stdio.h>
int main() {
	printf("enter crust type\nRegular Crust=$0\nThin Crust=$1\nStuffed Crust=$2\n ");
	int Base_cost;
	printf("Enter Base Pizza Cost: ");
	scanf("%d" ,&Base_cost);
	int crust;
	printf(" Enter crust type: ");
	scanf("%d" ,&crust);
	switch(crust) {
	 case 0: printf("Total Cost: %d", Base_cost  + 0 );
	        break;
	 case 1: printf("Total Cost: %d", Base_cost + 1);
	        break;
	 case 2: printf("Total Cost: %d", Base_cost + 2);
	        break;
	default: printf("Choose Value Between 1 to 3 ");
}     
	return 0;
}
