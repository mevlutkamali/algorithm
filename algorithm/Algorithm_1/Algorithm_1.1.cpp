/*

	Algorithm_1 :
	Girilen vize ve final notu üzerinden vizenin %40’I finalin %60’ýný alarak yýl sonu puanýný hesaplayan programýn algoritmasýný yazýnýz .
		
*/

#include <stdio.h>

main()
{
	
	float visa, final, average;
	
	printf("Enter visa note :");		scanf("%f", &visa);
	printf("Enter final note :");		scanf("%f", &final);
	
	average = (visa * 0.4) + (final * 0.6);
	
	printf("Average : %f",average);
	
	return 0;
	
}

