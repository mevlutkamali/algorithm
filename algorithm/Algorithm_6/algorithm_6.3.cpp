
/*
	Question 3 :
		10 ��renci ve 4 ders olacak �ekilde 0-100 aras�ndaki rastgele say�lardan olu�turulmu� bir matris �zerinde ��renci ortalamas� 50 �zerinde olan ka� ��renci oldu�unu bulan program 
	kodunu yaz�n�z. 
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

