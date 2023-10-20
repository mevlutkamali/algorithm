/*
	Question 4 :
		1’den 10’a kadar olan sayýlarýn n, nxn, n!, n^n deðerlerini matrise aþaðýdaki gibi yazan program kodunu yazýnýz.
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

//	Açýklama . . .

/*

	tgamma fonksiyonu, matematiksel bir fonksiyondur ve "gama fonksiyonu" olarak da bilinir. tgamma(x) ifadesi, gama fonksiyonunu hesaplar ve sonucu geri döndürür. Ýþte tgamma fonksiyonunu ve kullanýmýný daha ayrýntýlý bir þekilde açýklayan bilgi:

Gama fonksiyonu (?(x)) genellikle bir pozitif tam sayý olmayan gerçek sayýlar için tanýmlanýr ve þu þekilde hesaplanýr:

scss
?(x) = (x - 1)!

Burada x, pozitif bir tam sayý olmayan bir gerçek sayýdýr. tgamma(x) fonksiyonu, bu gama fonksiyonunu hesaplamak için kullanýlýr. Özellikle, pozitif olmayan tam sayýlar için faktöriyel hesaplamalarý gerçekleþtirmek için kullanýlýr.

Örneðin, tgamma(4) hesaplamasý þu þekildedir:

scss
?(4) = (4 - 1)! = 3! = 3 * 2 * 1 = 6

Yani, tgamma(4) ifadesinin deðeri 6 olacaktýr.

Bu nedenle, tgamma(i + 1) ifadesi, i deðerinin bir fazlasýnýn (yani i + 1) gama fonksiyonunu hesaplar. Bu, i'nin faktöriyelini hesaplamak için kullanýlýr ve i! ile ayný sonucu verir. Örneðin, tgamma(i + 1) ifadesi, i'nin faktöriyelini hesaplar.

*/

/*

	pow üst alma fonksiyonudur. 

*/
