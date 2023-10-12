
/*
	Question 5 :
		Aþaðýdaki denklemi çözen C program kodunu yazýnýz.
	f(x) = {
				3x^2 == x < 0,
				1 / x^2 == 0 <= x < 10,
				5x^2-x^3 == x >= 10				
		   }

*/

#include <math.h>
#include <stdio.h>

double f(double x){
		
	if(x<0){
			
		return	3 * x * x;
			
	}else if(x>0 && x<10){
			
		return 1 / (x * x);
			
	}else if(x>=10){
			
		return (5 * x * x) - (x * x * x); 
			
	}
		
}

main(){
	
	double x;
	
	printf("Plase enter a x :");		scanf("%lf", &x);
	
	double sonuc = f(x);
	
	printf("VALUE : %lf", sonuc);
	
	return 0;
	
}

