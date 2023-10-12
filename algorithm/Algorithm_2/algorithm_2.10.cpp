/*
	Question 10 :
		Klavyeden alýnan 5 basamaklý bir sayýnýn basamak deðerleri bulan yazdýran C kodunu yazýnýz.
*/

#include <math.h>
#include <stdio.h>

main(){
	
	int number;
	int ones, them, faces, thousands, tenThousands;
	
	printf("Please enter a five digit number .");		scanf("%d", &number);
	
	if(number<10000 || number>99999){
		
		printf("The number you entered is not five digits .");
		
	}else{
		
		ones = number % 10;
		them = (number / 10) % 10;
		faces = (number / 100) % 10;
		thousands = (number / 1000) % 10;
		tenThousands = (number /10000) % 10;
		
		printf("Ones : %d\n", ones);
		printf("Them : %d\n", them);
		printf("Faces : %d\n", faces);
		printf("Thousands : %d\n", thousands);
		printf("tenThousands : %d\n", tenThousands);
		
	}
	
	return 0;
	
}
