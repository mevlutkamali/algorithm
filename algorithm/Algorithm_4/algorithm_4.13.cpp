
/*
	Question 13 :
		Aþaðýdaki þekli * kullanarak üçgen elde ediniz.
		    *
		   ***
		  *****
		 *******
		*********
*/

#include <stdio.h>

int main(void) {
	
	int rows;
	
	printf("Window enter row a plase:");		scanf("%d", &rows);
	
	for(int i=1 ; i<=rows ; i++) {
		
		for(int j=1 ; j<=rows-i ; j++) {
			
			printf(" ");
			
		}
		
		for(int j=1 ; j<=i*2-1 ; j++) {
			
			printf("*");
			
		}
		
		printf("\n");
		
	};		
	
	return 0;
	
}

