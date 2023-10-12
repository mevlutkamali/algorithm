/*

	Algorithm_1.2 :
	1 ile 1000 arasýndaki TEK sayýlarýn toplamýný bulan programýn algoritmasýný tasarlayýnýz .
	
*/

#include <stdio.h>

main()
{
	
	int only, couple, sum=0;
	
	for(int i=0; i<=1000; i++){
		
		if(i % 2 == 1){
			
			sum += i;
			
		}
		
	}
	
	printf("Sum : %d", sum);
	
	return 0;
	
}

