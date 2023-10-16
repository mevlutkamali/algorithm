
/*
	Question 3 :
		10 öðrenci ve 4 ders olacak þekilde 0-100 arasýndaki rastgele sayýlardan oluþturulmuþ bir matris üzerinde öðrenci ortalamasý 50 üzerinde olan kaç öðrenci olduðunu bulan program 
	kodunu yazýnýz. 
		Not: Her bir ders %25 ortalamaya etki etmektedir.
*/

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int matrix[10][4];
	
	srand(time(NULL));
	
	for(int i = 0; i < 10; i++) {
		
		for(int j = 0; j < 4; j++) {
			
			matrix[i][j] = rand() % 101;
			
		}
		
	}
	
	for(int i = 0; i < 10; i++) {
		
		for(int j = 0; j < 4; j++) {
			
			printf("%3d", matrix[i][j]);
			
		}
		
		printf("\n");
		
	}
	
	int ogrSayisi = 10;
	int gecenOgrSayisi = 0;
	
	for(int i = 0; i < 10; i++) {
		
		int toplamNot = 0;
		
		for(int j = 0; j < 4; j++) {
			
			toplamNot += matrix[i][j];
			
		}
		
		double ortalama = (double)toplamNot / 4;
		
		if(50 <= ortalama) {
			
			gecenOgrSayisi++;
			
		}
		
	}
	
	printf("Not: %d\n", gecenOgrSayisi);
	
	return 0;
	
}

