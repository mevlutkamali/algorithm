/*

	Algorithm_1.2 :
	1 ile 1000 aras�ndaki TEK say�lar�n toplam�n� bulan program�n algoritmas�n� tasarlay�n�z .
	
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

