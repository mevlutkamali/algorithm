/*
	Question 3 :
		y= (3a2 + 2b3 + c4) / 6 fonksiyonuna ait C program kodunu yaz�n�z . �rnek : a,b ve c=1 ise y=1 olmal�d�r . 
*/

#include <math.h>
#include <stdio.h>

main(){
	
	int a, b, c, y;
	
	printf("Enter number a :");		scanf("%d", &a);
	printf("Enter number b :");		scanf("%d", &b);
	printf("Enter number c :");		scanf("%d", &c);
	
	y = ((3 * (a * a)) + (2 * (b * b * b)) + (c * c * c *c)) / 6;
	
	printf("Value : %d", y);
	
	return 0;
	
}
