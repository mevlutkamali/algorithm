
/*
	Question 8 :
		5 basamaklı bir sayının son basamağı (en sağdaki) ilk basamaktan küçükse birbiriyle yer değiştiren C kodunu yazınız. Örnek: 24578 => 84572
*/

#include <math.h>
#include <stdio.h>

main() {
	
	int number, newNumber, temp;
	int ones, tens, hundreds, thousands, tensOfThousands;
	
	printf("Plase enter five step :");		scanf("%d", &number);
	
	ones = number % 10;
	tens = (number / 10) % 10;
	hundreds = (number / 100) % 10;
	thousands = (number / 1000) % 10;
	tensOfThousands = (number / 10000) % 10;
	
	if(ones<tensOfThousands) {
		
		temp = ones;
		ones = tensOfThousands;
		tensOfThousands = temp;
		
	}
	
	newNumber = tensOfThousands * 10000 + thousands * 1000 + hundreds * 100 + tens * 10 + ones;
	
	printf("NewNumber : %d\n", newNumber);
	

	
	return 0;
	
}

