/*
	Question 5 :
		Klavyeden girilen üç farklý tam sayýnýn toplamýný sadece 2 deðiþken kullanarak gerçekleþtiren C kodunu yazýnýz . Deðiþkenler : int toplam , sayý þeklinde . Baþka deðiþken
	kullanýlmayacaktýr . 
*/

#include <math.h>
#include <stdio.h>

main(){
	
	int number, sum=0;
	
	printf("Please enter one number :");		scanf("%d", &number);
	sum += number;
	
	printf("Please enter two number :");		scanf("%d", &number);
	sum += number;
	
	printf("Please enter tree number :");		scanf("%d", &number);
	sum += number;
	
	printf("Value : %d", sum);
	
	
		
	return 0;
	
}
