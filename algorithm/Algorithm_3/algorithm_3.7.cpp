
/*
	Question 7 :
		Klavyeden girilen 3 tam say� de�erine g�re ��genin �e�idini (E�kenar, �kizkenar, �e�itkenar) ekrana yazan program kodunu yaz�n�z.
*/

#include <math.h>
#include <stdio.h>

main(){
	
	int x, y, z;
	
	printf("Number 1:");	scanf("%d", &x);
	printf("Number 2:");	scanf("%d", &y);
	printf("Number 3:");	scanf("%d", &z);
	
	if(x==y && y==z){
		
		printf("Eskenar ucgen .");
		
	}else if(x==y || x==z || y==z){
	
		printf("ikizkenar .");
	
	}else{
		
		printf("cesit kenar .");
		
	}
	
	
	return 0;
	
}

