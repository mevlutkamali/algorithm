/*
	Question 2 :
		Klavyeden girilen 10 adet tam sayýdan en büyük 2. sayýyý bulan program kodunu yazýnýz.
*/

#include <stdio.h>

main() {
	
	int big=INT_MIN;
	int treeBig=INT_MIN;
	int numberIndex[10];
	
	for(int i=0 ; i<10 ; i++) {
		
		printf("Plase enter a number:");		scanf("%d", &numberIndex[i]);
		
		if(big<numberIndex[i]) {
			
			treeBig = big;
			big = numberIndex[i];
			
		}else if(numberIndex[i]>treeBig && big!=numberIndex[i]) {
			
			treeBig = big;
			
		}
		
	}
	
	printf("TreeBig: %d\n", treeBig);
	
	return 0;
	
}
