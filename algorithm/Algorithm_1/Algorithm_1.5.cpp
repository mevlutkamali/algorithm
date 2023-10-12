/*
	
	Algorithm_1.5 :
	Kullan�c� klavyeden rastgele pozitif say�lar girecektir. Bu i�lem kullan�c� s�f�r say�s�n� girene kadar 
devam edecektir . Kullan�c� s�f�r say�s� girene kadar toplam ka� adet tek ve �ift say� girildi�ini hesaplayan 
program�n algoritmas�n� tasarlay�n�z .

*/

#include <stdio.h>

main(){
	
	int numbers, only=0, couple=0;
	
	printf("Please enter a positive number (When 0 is entered, there is a stop command .) .");
	
	while(1){
		
		scanf("%d", &numbers);
		
		if(numbers == 0){
			
			printf("Exit");
			break;
		}
		else if(numbers < 0){
			
			printf("You entered a negative number .");
			continue;
			
		}
		
		printf("Enter a numbers : %d", numbers);
		
		if(numbers % 2 == 0){
			
			couple++;
			
		}
		else if(numbers % 2 == 1){
			
			only++;
			
		}
		
	}
	
	printf(" %d only piece , %d couple piece .", only, couple);
	
	return 0;
	
}only
