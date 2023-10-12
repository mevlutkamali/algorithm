/*
	Question 2 :
		Klavyeden girilen 3 tam sayının ortalamasını bulan program kodunu yazınız . 
*/

#include <math.h>
#include <stdio.h>

main(){
	
	int number_1, number_2, number_3, average;
	
	printf("Enter number 1 :");		scanf("%d", &number_1);
	printf("Enter number 2 :");		scanf("%d", &number_2);
	printf("Enter number 3 :");		scanf("%d", &number_3);
	
	average = (number_1 + number_2 + number_3) / 3;
	
	printf("Value : %d", average);
		
	return 0;	
	
}

