/*
	Question 3 :
		Klavyeden girilen 4 sayýdan hangi sayýlarýn ortalamadan büyük/eþit/küçük olduðunu yazan program kodunu yazýnýz. Örnek: 10, 5, 3, 12 Ort: 7.5 => Ortalamadan 10 ve 12 büyük, 3 ve 5 
	küçük olarak yazacaktýr.
*/

#include <math.h>
#include <stdio.h>

main(){
	
//	int number_1, number_2, number_3, number_4;
	int number[4], small=0, equal=0, big=0;
	float average=0;
	
	printf("Plase a enter two number =>\n");
	
	for(int i=0 ; i<4 ; i++) {
		
		printf("NUMBER %d:", i+1);		scanf("%d", &number[i]);
		average += number[i];
		
	}
	
	average /= 4;
	
	printf("VALUE : %.2f\n", average);
	
	for(int i=0 ; i<4 ; i++) {
		
		if(number[i] < average) {
			
			small++;
			
		}else if(number[i] == average) {
			
			equal++;
			
		}else {
			
			big++;
			
		}
		
	}
	
	printf("SMALL NUMBER  :%d\n", small);
	printf("EQUAL NUMBER  :%d\n", equal);
	printf("BIG NUMBER  :%d\n", big);
		
	return 0;
	
}
