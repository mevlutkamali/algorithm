/*
	Question 1 :
		Klavyeden girilen 10 adet tam sayýnýn en büyüðünü bulan program kodunu yazýnýz.
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>


main() {
	
	int big=0;
	int number[10];
	
	for(int i=0 ; i<10 ; i++) {
		
		printf("Plase enter a number:");		scanf("%d", &number[i]);
		
	}
	
	for(int i=0 ; i<10 ; i++) {
		
		if(big<number[i]) {
			
			big=number[i];
			
		}
		
	}
	
	printf("The largest number is: %d\n", big);
	
	return 0;
	
}

