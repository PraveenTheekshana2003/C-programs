#include <stdio.h>

int main() {
	int num1 , num2 , i , j , temp1 , temp2 , gcd;
	
	printf("Find the greatest common divisor\n");
	printf("--------------------------------\n\n\n");
	
	printf("Enter first number : ");
	scanf("%d" , &num1);
	printf("Enter second number : ");
	scanf("%d" , &num2);
	
	printf("\n");
	
	if (num1<=0 || num2<=0) {
		printf("Invalid numbers!\n");
	}
	else if (num1 == num2) {
		printf("G.C.D. is %d\n" , num1);
	}
	else if (num1 < num2) {
		for (i=1; i<=num2; i++) {
			if (num2%i==0) {
				temp1 = i;
			}
			
			for (j=1; j<=num1; j++) {
				if (num1%j==0) {
					temp2 = j;
				}
				
				if (temp1 == temp2) {
					gcd = temp1;
				}
			}
		}
		
		printf("G.C.D. is %d\n" , gcd);
	}
	else {
		for (i=1; i<=num1; i++) {
			if (num1%i==0) {
				temp1 = i;
			}
			
			for (j=1; j<=num2; j++) {
				if (num2%j==0) {
					temp2 = j;
				}
				
				if (temp1 == temp2) {
					gcd = temp1;
				}
			}
		}
		
		printf("G.C.D. is %d\n" , gcd);
	}
	
	return 0;
}

