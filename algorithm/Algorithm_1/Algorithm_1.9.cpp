/*

	Algorithm_1.9 :
	Girilen sayının kaç basamaklı olduğunu bulan algoritmayı tasarlayınız .

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
