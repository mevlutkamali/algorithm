/*
	Question 7 :
		Y�kseklik ve taban uzunlu�u klavyeden girilen ��genin alan�n� hesaplayan C kodunu yaz�n�z .
	
	Not : ALan = (Taban * Y�kseklik) / 2 ==> ��genin alan� form�l� .
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

