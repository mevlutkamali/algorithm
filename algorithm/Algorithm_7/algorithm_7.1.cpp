/*	Question 1 :
		Kullan�c� taraf�ndan girilen string ifadeyi ters �evirip yeni bir diziye atan program kodunu yaz�n�z.
        �rnek: 
			Str1: �abcde123� Sonuc: Str2:�321edcba�
*/

#include <stdio.h>
#include <string.h>

int main() {
	
	char str1[100], str2[100];
	
	printf("Plase user string a enter: "); 		scanf("%s", str1);
	
	int i, j;
	
	for(i = strlen(str1) - 1; i >= 0; i--) {
		
		str2[j] = str1[i];
		j++;
		
	}
	
	printf("\0");
	
	printf("Opposite string: %s\n", str2);
	
	return 0;
	
}
