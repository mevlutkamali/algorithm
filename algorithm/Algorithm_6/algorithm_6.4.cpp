/*
	Question 4 :
		1�den 10�a kadar olan say�lar�n n, nxn, n!, n^n de�erlerini matrise a�a��daki gibi yazan program kodunu yaz�n�z.
			1	1	1	1
			2	4	2	4
			3	9	6	27
			...
*/

#include <math.h>
#include <stdio.h>

int main() {

	int n = 10;
	 
	for(int i = 1; i <= n; i++) {
	 	
	 printf("%d\t%d\t%d\t%d\t\n", i, i * i, (int) tgamma(i + 1), (int) pow(i, i));
	 	
	}  
	  
    return 0;

}

//	A��klama . . .

/*

	tgamma fonksiyonu, matematiksel bir fonksiyondur ve "gama fonksiyonu" olarak da bilinir. tgamma(x) ifadesi, gama fonksiyonunu hesaplar ve sonucu geri d�nd�r�r. ��te tgamma fonksiyonunu ve kullan�m�n� daha ayr�nt�l� bir �ekilde a��klayan bilgi:

Gama fonksiyonu (?(x)) genellikle bir pozitif tam say� olmayan ger�ek say�lar i�in tan�mlan�r ve �u �ekilde hesaplan�r:

scss
?(x) = (x - 1)!

Burada x, pozitif bir tam say� olmayan bir ger�ek say�d�r. tgamma(x) fonksiyonu, bu gama fonksiyonunu hesaplamak i�in kullan�l�r. �zellikle, pozitif olmayan tam say�lar i�in fakt�riyel hesaplamalar� ger�ekle�tirmek i�in kullan�l�r.

�rne�in, tgamma(4) hesaplamas� �u �ekildedir:

scss
?(4) = (4 - 1)! = 3! = 3 * 2 * 1 = 6

Yani, tgamma(4) ifadesinin de�eri 6 olacakt�r.

Bu nedenle, tgamma(i + 1) ifadesi, i de�erinin bir fazlas�n�n (yani i + 1) gama fonksiyonunu hesaplar. Bu, i'nin fakt�riyelini hesaplamak i�in kullan�l�r ve i! ile ayn� sonucu verir. �rne�in, tgamma(i + 1) ifadesi, i'nin fakt�riyelini hesaplar.

*/

/*

	pow �st alma fonksiyonudur. 

*/
