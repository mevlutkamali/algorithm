
/*
	Question 14 :
		A�a��daki �ekli * kullanarak bo� ��gen elde ediniz. Her bir sat�rda s�ras�yla; 1, 3, 5, 7 ve 9 bo�luk 
    bulunmaktad�r. 
 			*
 		   * *
		  *	  *
		 *	   *
		*	    *
*/

#include <stdio.h>

int main(void) {
	
	int rows;
	
	printf("Please enter the number of rows in the window:");		scanf("%d", &rows);
	
	for(int i=1 ; i<=rows ; i++) {
		
		for(int j=1 ; j<=rows-i ; i++) {
			
			printf(" ");
			
		}
		
		for(int j=1 ; j=i*2-1 ; i++) {
			
			printf("*");
			
		}
		
		printf("\n");
		
	}
	
	return 0;
	
}

