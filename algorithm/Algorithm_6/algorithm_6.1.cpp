/*
	Question 1 :
		0-100 arasýndaki rastgele sayýlardan oluþturulmuþ bir 4x4 matris üzerinde kaç tane sayýnýn 50’den küçük olduðunu bulan program kodunu yazýnýz.		
*/

#include <math.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int matrix[4][4];
	
	// Rastgele sayý üretmek için rastgele baþlatma
	srand(time(NULL));
	
	for(int i = 0; i < 4; i++) {
		
		for(int j = 0; j < 4; j++) {
			
			matrix[i][j] = rand() % 101;
			
		}
		
	}
	
	for(int i = 0; i < 4; i++) {
		
		for(int j = 0; j < 4; j++) {
			
			printf("%3d", matrix[i][j]);
			
		}
		
		printf("\n");
		
	}
	
	int counter = 0;
	
	for(int i = 0; i < 4; i++) {
		
		for(int j = 0; j < 4; j++) {
			
			if(matrix[i][j] < 50) {
				
				counter++;
				
			}
			
		}
		
	}
	
	printf("Matrix < 50 : %d", counter);
	
	return 0;
	
}
