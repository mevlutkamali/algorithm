
/*
	Question 9 :
		Klavyeden girilen s�ral� 3 tam say� ile dik ��gen �izilip �izilemeyece�ini g�steren program kodunu yaz�n�z. A^2 + B^2 = C^2�art�n� sa�lamal�d�r. �rnek: A=3, B=4, C=5 (say�lar 
	s�ral� girilmi�tir) girildi�inde sonu� �D�K ��GEN ��Z�LEB�L�R� yazmal�d�r.
*/

#include <math.h>
#include <stdio.h>

main() {
	
	int a, b, c;
	
	printf("a : ");		scanf("%d", &a);
	printf("b : ");		scanf("%d", &b);
	printf("c : ");		scanf("%d", &c);
	
	if((c * c) == ((a * a) + (b * b))) {
	
		printf("The results give 'Right_Triangle' ;)");
			
	}else {
		
		printf("The results do not give 'Right_Triangle' :( ");
		
	}
	
	return 0;
	
}

