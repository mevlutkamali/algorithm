/*
	Question 8 :
		Klavyeden girilen 3 basamaklý sayýnýn (soldan) 1. 2. ve 3. basamaðýný (Basamak Deðerlerini) bulan program kodunu yazýnýz. Örnek: 471 ise 1. Basamak 4, 2. Basamak 7, 3.
	Basamak 1 þeklinde yazmalýdýr.
*/

#include <math.h>
#include <stdio.h>

main(){
	
	int number;
	int ones, them, faces;
	
	printf("Please enter a tree digit number .");		scanf("%d", &number);
	
	if(number<100 || number>999){
		
		printf("The number you entered is not tree digits .");
		
	}else{
		
		ones = number % 10;
		them = (number / 10) % 10;
		faces = (number / 100) % 10;
		
		printf("Step 1 : %d\n", ones);
		printf("Step 2 : %d\n", them);
		printf("Step 3 : %d\n", faces);
		
	}
	
	return 0;
	
}
