
/*
	Question 6 :
		0-10 aras� rastgele say�lardan olu�turulmu� 6x6 bir matris i�erisinde iki k��egende bulunan say�lar�n yerlerini ters �eviren program kodunu yaz�n�z.
*/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int matrix[6][6];
	
	srand(time(NULL)); 	// Random say�lar �retmek i�in kullan�l�r .
	
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

