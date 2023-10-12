
/*
	Question 12 :
		Aþaðýdaki þekli * kullanarak elde ediniz.
		*
		***
		*****
		*******
		*********
*/

#include <stdio.h>

int main(void) {
	
	int rows;
	
	printf("Window plase a rows:");		scanf("%d", &rows);
	
	for(int i=1 ; i<=rows ; i++) {
		
		for(int j=1 ; j<=i ; j++) {
			
			printf("*");
			
		}
		
		printf("\n");
		
	}
	
	return 0;
	
}

