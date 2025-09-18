#include <stdio.h>
int main(){
	int Student_ID;
	printf("If Students have a Student ID then \nSubtract $2 from total");
	printf("\nYes = 1");
	 printf("\nNo = 0 ");
	printf("\nEnter you have Student ID (Y/N): ");
	scanf("%d",&Student_ID);
	if(Student_ID == 1) {
	  printf("Your Total cost is $6");
    }
	 else if (Student_ID == 0) {
	  printf("Your  Total cost is $8");	
     } 
	return 0;
}
