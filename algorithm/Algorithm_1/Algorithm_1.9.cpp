/*

	Algorithm_1.9 :
	Girilen say�n�n ka� basamakl� oldu�unu bulan algoritmay� tasarlay�n�z .

*/

#include <stdio.h>

main(){
	
	int number, step=0;
	
	printf("Enter a numbers :");	scanf("%d", &number);
	
	while(number != 0){
		
		number /= 10;
		step++;
		
	}
	
	printf("Steps : %d", step);
	
	return 0;
	
}
