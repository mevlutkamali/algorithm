/*
	Question 5 :
		Klavyeden girilen �� farkl� tam say�n�n toplam�n� sadece 2 de�i�ken kullanarak ger�ekle�tiren C kodunu yaz�n�z . De�i�kenler : int toplam , say� �eklinde . Ba�ka de�i�ken
	kullan�lmayacakt�r . 
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
