
/*
	Question 6 :
		0-10 arasý rastgele sayýlardan oluþturulmuþ 6x6 bir matris içerisinde iki köþegende bulunan sayýlarýn yerlerini ters çeviren program kodunu yazýnýz.
*/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int matrix[6][6];
	
	srand(time(NULL)); 	// Random sayýlar üretmek için kullanýlýr .
	
	for(int i = 0; i < 6; i++) {
		
		for(int j = 0; j < 6; j++) {
			
			matrix[i][j] = rand() % 11;
			
		}
		
	}
	
	printf("Start matrix[][]:\n");
	
	for(int i = 0; i < 6; i++) {
		
		for(int j = 0; j < 6; j++) {
			
			printf("%3d", matrix[i][j]);
			
		}
		
		printf("\n");
		
	}
	
	int temp;
	
	for(int i = 0; i < 6; i++) {
		
		temp = matrix[i][i];
		matrix[i][i] = matrix[i][5 - i];
		matrix[i][5 - i] = temp;
		
	}
	
	printf("Finish matrix[][]:\n");
	
	for(int i = 0; i < 6; i++) {
		
		for(int j = 0; j < 6 ; j++) {
			
			printf("%3d", matrix[i][j]);
			
		}
		
		printf("\n");
		
	}
	
	return 0;
	
}

