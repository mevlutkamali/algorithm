/*

	Algorithm_1.3 :
	Klavyeden girilen bir N say�s�n�n fakt�riyelini hesaplayan program�n algoritmas�n�  tasarlay�n�z .

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


