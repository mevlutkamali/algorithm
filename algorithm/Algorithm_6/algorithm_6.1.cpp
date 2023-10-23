/*
	Question 1 :
		0-100 aras�ndaki rastgele say�lardan olu�turulmu� bir 4x4 matris �zerinde ka� tane say�n�n 50�den k���k oldu�unu bulan program kodunu yaz�n�z.		
*/

#include <math.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int matrix[4][4];
	
	// Rastgele say� �retmek i�in rastgele ba�latma
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
