/*
	Question 1 :
		y = 3 x 2 fonksiyonuna ait C program kodunu yaz�n�z . �rnek : x=2 ise y=12 olmal�d�r . 
*/

#include <math.h>
#include <stdio.h>

main(){
	
	float x, y;
	
	printf("Please define an 'x' value :");		scanf("%f", &x);
	
	y = 3 * x * 2;
	
	printf("Value : %f", y);
	
	return 0; 
	
}
