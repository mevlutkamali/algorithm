/*
	Question 2 :
		Klavyeden girilen Vize1, Vize2 ve Final notlarýna göre öðrencinin yýl sonu notunu hesaplayan 50 puandan fazla ise “GEÇTÝ”, küçük ise Vize1, Vize2 ve Bütünleme notlarýna göre tekrar 
	yýl sonu notunu hesaplayan 50 puandan az ise KALDI”, fazla ise “GEÇTÝ” olarak ekrana yazan C programýný yazýnýz. Vize1: %30, Vize2: %30, Final: %40 yýl sonuna etki edecek þekilde
	hesaplanacaktýr.
*/

#include <math.h>
#include <stdio.h>

main(){
	
	int vize_1, vize_2, final, butunleme, ortalama;
	
	printf("Plase enter a Vize_1 :");		scanf("%d", &vize_1);
	printf("Plase enter a Vize_2 :");		scanf("%d", &vize_2);
	printf("Plase enter a Final :");		scanf("%d", &final);
	
	ortalama = ((vize_1 * 0.3) + (vize_2 * 0.3) + (final * 0.4));
	
	printf("Ortalama : %d\n", ortalama);
	
	if(ortalama >= 50){
		
		printf("You passed the course :)");
		
	}else{
		
		printf("You failed the course . Enter the make-up score :(\n");
		
		printf("Plase enter a butunleme :");		scanf("%d", &butunleme);
		
		
		ortalama = ((vize_1 * 0.3) + (vize_2 * 0.3) + (butunleme * 0.4));
		
		printf("Ortalama : %d", ortalama);
		
		if(ortalama>=50){
			
			printf("You passed the course :)");
			
		}else{
			
			printf("You failed the course . You have to take the course again :(");
			
		}

	}
	
	return 0;
	
}

