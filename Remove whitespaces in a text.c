#include <stdio.h>

int main() {
	char text1[50] , text2[50];
	int i , j , length;
	j = 0;
	
	printf("Remove the whitespaces in a text\n");
	printf("--------------------------------\n\n\n");
	
	printf("Enter any text : ");
	fgets(text1 , sizeof(text1) , stdin);
	
	for (i=0; i<50; i++) {
		if (text1[i] != ' ') {
			text2[j] = text1[i];
			j++;
		}
	}
	
	printf("Updated text : ");
	printf("%s" , text2);
	
	return 0;
}

