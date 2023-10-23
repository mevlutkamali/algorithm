
/*
	Algorithm_3 :
		Parametre olarak verilen iki tam sayý arasýndaki sayýlardan 3’ün katý olan sayýlarýn ortalamasýný bulan fonksiyonu yazýnýz.
			int Ortalama_Hesapla(int sayi1, int sayi2);
			sayi1=4; sayi2=15 ise; 6, 9 ve 12 sayýlarý olacaðý için; Ort: 9 dönecektir
*/

#include <stdio.h>

int averageCalculate(int number1, int number2) {
	
	int counter = 0, sum = 0, value;
		
	for(int i = number1; i <= number2; i++) {
			
		printf("%d", i);
			
		if(i % 3 == 0) {
			
			sum += i;
			counter++;
			
		}
			
	}
		
	if(counter > 0) {
		
		return sum / counter;
		
	}else {
		
		return 0;
		 
	}
	
}

int main(){
	
	int number1, number2;
	 
	printf("Plase a enter number1: ");			scanf("%d", &number1); 
	printf("Plase a enter number2: ");			scanf("%d", &number2); 
	
	float value = averageCalculate(number1, number2);
	
	if(value != 0) {
		
		printf("VALUE: %f\n", value);
		
	}else {
		
		printf("No value found in the given range:(\n");
		
	}
	
	return 0;
	
}

