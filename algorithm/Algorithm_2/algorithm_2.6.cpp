/*
	Question 6 :
		Klavyeden girilen Vize1, Vize2 ve Final notlarýna göre öðrencinin yýl sonu notunu hesaplayan program kodunu yazýnýz. Vize1: %30, Vize2: %30, Final: %40 yýl sonuna etki edecek 
	þekilde hesaplanacaktýr. Örnek: Vize1=10, Vize2=20, Final:60, Sonuc:33 .
*/

#include <math.h>
#include <stdio.h>

main(){
	
	float vize_1, vize_2, final, ortalama;
	
	printf("Plase vize_1 enter :");		scanf("%f", &vize_1);
	printf("Plase vize_2 enter :");		scanf("%f", &vize_2);
	printf("Plase final enter :");		scanf("%f", &final);
	
	ortalama = ((vize_1 * 0.3) + (vize_2 * 0.3) + (final * 0.4));
	
	printf("PointValue : %f", ortalama);
	
	return 0;
		
}

