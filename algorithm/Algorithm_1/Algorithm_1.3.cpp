/*

	Algorithm_1.3 :
	Klavyeden girilen bir N sayısının faktöriyelini hesaplayan programın algoritmasını  tasarlayınız .

*/

#include <stdio.h>

main(){
	
	int n, faktoriyel=1;
	
	printf("Enter N numbers :");		scanf("%d", &n);
	
	for(int i=1; i<=n; i++){
		
		faktoriyel *= i;
		
	}
	
	printf("%d Faktoriyels : %d", n, faktoriyel);
	
	return 0;
	
}


