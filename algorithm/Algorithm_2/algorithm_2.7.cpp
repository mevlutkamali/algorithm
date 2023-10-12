/*
	Question 7 :
		Yükseklik ve taban uzunluðu klavyeden girilen üçgenin alanýný hesaplayan C kodunu yazýnýz .
	
	Not : ALan = (Taban * Yükseklik) / 2 ==> Üçgenin alaný formülü .
*/

#include <math.h>
#include <stdio.h>

main(){
	
	int length, height, area;
	
	printf("Plase enter length :");		scanf("%d", &length);
	printf("Plase enter height :");		scanf("%d", &height);
	
	area = (length * height) / 2;
	
	printf("AREA : %d", area);
	
	return 0;
	
}

