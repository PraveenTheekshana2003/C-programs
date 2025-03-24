#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
	int i;
	
	if (num<=1) {
		return false;
	}
	
	for (i=2; i*i<=num; i++) {
		if (num%i == 0) {
			return false;
		}
	}
	
	return true;
}

int main() {
	int limit , num , count;
	count = 0;
	
	printf("Prime number generator upto a given limit.\n");
	printf("------------------------------------------\n\n\n");
	
	printf("Enter the limit : ");
	scanf("%d" , &limit);
	
	printf("\nPrime numbers upto the limit of %d are : " , limit);
	
	for (num=2; num<=limit; num++) {
		if (isPrime(num)) {
			printf("%d " , num);
			count = 1;
		}
	}
	
	if (count == 0) {
		printf("Undefined!");
	}
	
	printf("\n");
	
	return 0;
}

