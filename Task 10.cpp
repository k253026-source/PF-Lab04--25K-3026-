#include<stdio.h>
int main() {
		int size;
	printf("Choose Pizza Size: \n");
	printf("1 for small\n");
	printf("2 for medium\n");
	printf("3 for large\n");
	scanf("%d" ,&size);
	switch(size) {
		case 1: printf("Small Size of Pizza\n");
		        break;
		case 2: printf("Medium Size Of Pizza\n");
		        break;
		case 3: printf("Large Size Of Pizza\n");
		        break;
		default: printf("Invalid Size\n"); }
	int pizza;
	printf("how many pizzas you want: \n");
	scanf("%d" ,&pizza);
if(pizza>1) {
	printf("Check our multi-pizza deals\n");
} 	else {
	printf("Your total is $8 \n");
	
}
	int Number_of_pizzas;
	printf("How many pizza you want(1, 2, or 3): \n");
	scanf("%d" ,&Number_of_pizzas);
	if(Number_of_pizzas==1) {
		printf("1 pizza costs $8 \m");
	} else if(Number_of_pizzas==2) {
		printf("2 pizzas cost $15 \n");
	} else if(Number_of_pizzas==3) {
		printf("3 pizzas cost $21\n");
	} else {
		printf("Invalid Number");
		
	}
	printf("enter crust type\nRegular Crust=$0\nThin Crust=$1\nStuffed Crust=$2\n ");
	int Base_cost;
	printf("Enter Base Pizza Cost: \n");
	scanf("%d" ,&Base_cost);
	int crust;
	printf(" Enter crust type: \n");
	scanf("%d" ,&crust);
	switch(crust) {
	 case 0: printf("Total Cost: %d\n", Base_cost  + 0 );
	        break;
	 case 1: printf("Total Cost: %d\n", Base_cost + 1);
	        break;
	 case 2: printf("Total Cost: %d\n", Base_cost + 2);
	        break;
	default: printf("Choose Value Between 1 to 3 \n");
}     
	float Without_cheese = 8;
	printf("Without Cheese Pizza is: %f" ,Without_cheese);
	printf("\nYes = 1\nNo = 2\n");
    int Yes;
	printf("You want extra cheese (Y/N):\n ");
	scanf("%d" ,&Yes);
	if(Yes==1) {
		printf("Total: %f\n" ,9.5);
	} else {
		printf("Total: %f\n" ,8);
	}
		printf("Pizza price is $8\n");
		float time;
	printf("Between 11 AM and 14 PM, there is a 10 percent discount.\n");
	printf("Your purchasing time is:\n ");
	scanf("%f", &time);
	float total_discount= 8-(8*0.1);
	if(time>=11 && time<=14 ) {
		printf("after discount price will be: %f \n", 8-(8*0.1));
	} else {
		printf("price is: 8");
	}
	int Student_ID;
	printf("If Students have a Student ID then \nSubtract $2 from total \n");
	printf("\nYes = 1");
	printf("\nNo = 0 ");
	printf("\nEnter you have Student ID (Y/N): \n");
	scanf("%d",&Student_ID);
	if(Student_ID == 1) {
	  printf("Your Total cost is $6\n");
    }
	 else if (Student_ID == 0) {
	  printf("Your  Total cost is $8\n");	
     } 
	int pizzas;
	printf("If you Order Three Pizzas with Stuffed Crust, \nYou can get free garlic bread");
	printf("\nHow many pizzas do  you want to  order with Stuffed Crust: \n");
	scanf("%d", &pizza);
	if(pizza == 3) {
		printf("You get free garlic bread \n");
	} else { 
		printf("You cannot get free garlic bread \n");
	}
	printf("Pizza cost is $8\n");
	printf("delivery = 1 \npickup = 0");
	printf("\n");
	int delivery;
	int pickup;
	printf("You want delivery or pickup: \n");
	scanf("%d" ,&delivery);
	if(delivery==1 && pickup==0) {
	printf("Cost is: %d \n",8 + 3);
}  else if(pickup==0) {
	printf("Cost is 8");
}  else {
	printf("Invalid input \n");
}
int final_amount;
printf("Print Fee Receipt:- \n");
printf("Your Final Amount is: %d \n" ,11);
printf("You got free fries for regular costumer");
	return 0;
}
