#include<stdio.h>
int main() {
	int size;
	printf("Choose Pizza Size: \n");
    printf("1 for small\n");
	printf("2 for medium\n");
	printf("3 for large\n");
	scanf("%d" ,&size);
	switch(size) {
		case 1: printf("Small Size of Pizza");
		        break;
		case 2: printf("Medium Size Of Pizza");
		        break;
		case 3: printf("Large Size Of Pizza");
		        break;
		default: printf("Invalid Size");
    }
	return 0;
}
