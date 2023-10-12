
/*
	Question 9 :
		Klavyeden girilen sýralý 3 tam sayý ile dik üçgen çizilip çizilemeyeceðini gösteren program kodunu yazýnýz. A^2 + B^2 = C^2þartýný saðlamalýdýr. Örnek: A=3, B=4, C=5 (sayýlar 
	sýralý girilmiþtir) girildiðinde sonuç “DÝK ÜÇGEN ÇÝZÝLEBÝLÝR” yazmalýdýr.
*/

#include <math.h>
#include <stdio.h>

main() {
	
	int a, b, c;
	
	printf("a : ");		scanf("%d", &a);
	printf("b : ");		scanf("%d", &b);
	printf("c : ");		scanf("%d", &c);
	
	if((c * c) == ((a * a) + (b * b))) {
	
		printf("The results give 'Right_Triangle' ;)");
			
	}else {
		
		printf("The results do not give 'Right_Triangle' :( ");
		
	}
	
	return 0;
	
}

