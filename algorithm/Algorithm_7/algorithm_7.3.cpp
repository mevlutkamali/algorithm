
/*
	Question 3 :
		Kullan�c� taraf�ndan girilen string ifadede her kelime �_� ile ayr�lm�� olup bu string ifadenin ka� kelimeden olu�tu�unu bulan program kodunu yaz�n�z.
		�rnek:
			�ali_veli_sami_sukru� Sonuc: 4 olacakt�r	
*/

#include <stdio.h>
#include <string.h> 

int main() {
	
	int wordNumber = 0;
	char userStr[100];
	
	printf("Plase enter a string: ");		gets(userStr);
	
	int startWord = 0;
	
	for(int i = 0; i <= strlen(userStr); i++) {
		
		if(userStr[i] == ' ' || userStr[i] == '_' || userStr[i] == '\0') {
			
			wordNumber++;
			startWord = i + 1;
			
		}
		
	}
	
	printf("Word Number: %d\n", wordNumber);
	
	return 0;
	
}

