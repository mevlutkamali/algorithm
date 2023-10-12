/*
	
	Algorithm_1.5 :
	Kullanýcý klavyeden rastgele pozitif sayýlar girecektir. Bu iþlem kullanýcý sýfýr sayýsýný girene kadar 
devam edecektir . Kullanýcý sýfýr sayýsý girene kadar toplam kaç adet tek ve çift sayý girildiðini hesaplayan 
programýn algoritmasýný tasarlayýnýz .

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
