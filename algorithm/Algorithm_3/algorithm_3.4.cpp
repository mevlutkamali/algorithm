
/*
	Question 4 :
		Herhangi 2 say�n�n birbirinin 3 kat� olup olmad���n� ekrana yazan C program kodunu yaz�n�z. �rnek1: sayi1:6, sayi2:18, �rnek2: sayi1: 72, sayi2: 24 her iki �rnekte de �birbirinin
	3 kat�d�r� �eklinde yazmal�d�r.	
*/

#include <math.h>
#include <stdio.h>

main(){
	
	int number_1, number_2, sonuc_1=0, sonuc_2=0;
	
	printf("Number 1 :");		scanf("%d", &number_1);
	printf("Number 2 :");		scanf("%d", &number_2);
	
	sonuc_1 = (number_2 * 3) / 3;
	sonuc_2 = (number_1 * 3) / 3;	
	
	if(number_2==sonuc_1){
		
		printf("3 KATIDIR . . .");
		
	}else if(number_1==sonuc_2){
		
		printf("3 KATIDIR . . .");
		
	}else{
		
		printf("3 KATI DE�LD�R . . .");
		
	}
	
	return 0;
	
}

