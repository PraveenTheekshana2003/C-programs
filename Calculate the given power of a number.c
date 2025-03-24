#include <stdio.h>

int getPower(int number , int power) {
	if (power == 0) {
		return 1;
	}
	
	return number*getPower(number , power-1);
}

int main() {
	int number , power;
	
	printf("Calculate the given power of a number\n");
	printf("-------------------------------------\n\n\n");
	
	printf("Enter the number : ");
	scanf("%d" , &number);
	printf("Enter the power : ");
	scanf("%d" , &power);
	
	printf("\n");
	
	if (power < 0) {
		printf("Inalid power!\n");
		return;
	}
	else if (power == 0) {
		printf("Result is : %d\n" , number);
		return;
	}
	else {
		printf("Result is : %d\n" , getPower(number , power));
	}
	
	return 0;
}

