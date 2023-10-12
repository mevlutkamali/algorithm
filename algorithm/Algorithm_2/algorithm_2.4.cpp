/*
	Question 4 :
		F = (K - 273.15) × 9 / 5 + 32 formülüne göre girilen Kelvin (K) deðerine göre Fahrenheit’a çeviren program kodunu yazýnýz.
*/

#include <math.h>
#include <stdio.h>

main(){
	
	float F, K;
	
	printf("Plase enter kelvin .");		scanf("%f", &K);
	
	F = (K - 273.15) * 9 / 5 + 32;
	
	printf("FAHRENHEIT : %f", F);
	
	return 0;
	
}
