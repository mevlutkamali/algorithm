/*

	Algorithm_1.8 :
	M�kemmel say�y� bulan algoritmay� tasarlay�n�z .

*/

#include <stdio.h>

main(){
	
	int legend_number, sum=0;
	
	printf("Enter a legend number :");		scanf("%d", &legend_number);
	
	for(int i=1; i<legend_number; i++){
		
		if(legend_number % i == 0){
			
			sum += i;
			
		}
		
	}
	
	if(sum == legend_number){
		
		printf("Yes legend_number : %d", legend_number);
		
	}
	else{
		
		printf("No legend_number %d :(", legend_number);
		
	}
	
	return 0;
	
}
