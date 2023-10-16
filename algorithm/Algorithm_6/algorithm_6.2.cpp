
/*
	Question 2 :
		0-100 arasýndaki rastgele sayýlardan oluþturulmuþ bir 4x4 matris üzerinde en küçük, en büyük ve ortalama sayýyý bulan program kodunu yazýnýz.
*/

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int matrix[4][4];
	
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
	
	int sum = 0;
	int min = matrix[0][0];
	int max = matrix[0][0];
	
	for(int i = 0; i < 4; i++) {
		
		for(int j = 0; j < 4; j++) {
			
			if(matrix[i][j] < min) {
				
				min = matrix[i][j];
				
			}if(matrix[i][j] > max) {
				
				max = matrix[i][j];
				
			}else {
				
				sum += matrix[i][j];
				
			}
			
		}
		
	}
	
	double average = (double)sum / (4 * 4);
	
	printf("MATRIX[i][j] < 50: %d\n", min);
	printf("MATRIX[i][j] == AVERAGE: %d\n", sum);
	printf("MATRIX[i][j] > 50: %d\n", max);
	
	return 0;
	
}

