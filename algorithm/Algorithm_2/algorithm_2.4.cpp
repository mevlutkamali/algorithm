/*
	Question 4 :
		F = (K - 273.15) � 9 / 5 + 32 form�l�ne g�re girilen Kelvin (K) de�erine g�re Fahrenheit�a �eviren program kodunu yaz�n�z.
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
