
/*
	Question 3 :
		Kullanýcý tarafýndan girilen string ifadede her kelime ‘_’ ile ayrýlmýþ olup bu string ifadenin kaç kelimeden oluþtuðunu bulan program kodunu yazýnýz.
		Örnek:
			“ali_veli_sami_sukru” Sonuc: 4 olacaktýr	
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

