/*
	Question 11 :	
		Girilen 6 say� i�inden en b�y�k 2. Say�y� bulan C kodunu yaz�n�z.
*/

#include <math.h>
#include <stdio.h>

main() {
	
	int number[6];
	
	for(int i=0 ; i<6 ; i++) {
		
		printf("NUMBER %d :", i+1);		scanf("%d", &number[i]);
		
	}
	
	int bigNumber = number[0];
	int twoNumber = number[0];
	
	for(int i=0 ; i<6 ; i++) {
		
		if(number[i] > bigNumber) {
			
			twoNumber = bigNumber;
			bigNumber = number[i];
			
		}else if(number[i]>twoNumber && number[i]!=bigNumber) {
			
			twoNumber = number[i];
			
		}
		
	}
	
	printf("TwoBigNumber : %d\n", twoNumber);
	
	return 0;
	
}
