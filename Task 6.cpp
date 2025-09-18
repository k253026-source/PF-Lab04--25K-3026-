#include<stdio.h>
int main() {
		printf("Pizza price is $8\n");
		float time;
	printf("Between 11 AM and 2 PM, there is a 10 percent discount.\n");
	printf("Your purchasing time is:\n ");
	scanf("%f", &time);
	float total_discount= 8-(8*0.1);
	if(time>=11 && time<=14 ) {
		printf("after discount price will be: %f", 8-(8*0.1));
	} else {
		printf("price is: 8");
	}
	
	return 0;
}

