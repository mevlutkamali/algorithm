/*
	Algorithm_2 :
		n! hesabý yapan fonksiyonu yazýnýz. 
			n=5 ise; Sonuc=120 dönecektir.
			int Faktoriyel_Hesapla(int n);
*/

#include <stdio.h>

int faktoriyelHesapla(int n) {
	
    int faktoriyel = 1;

    for (int i = 1; i <= n; i++) { 
    
        faktoriyel *= i;
        
    }

    return faktoriyel;
    
}

int main() {
	
    int n;
    
    printf("Plase a enter n: ");		scanf("%d", &n);
    
    int value = faktoriyelHesapla(n);
    
    printf("FAKTORIYEL : %d", value);
    
    return 0;
    
}

