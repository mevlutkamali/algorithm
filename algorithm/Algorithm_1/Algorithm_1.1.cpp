/*

	Algorithm_1 :
	Girilen vize ve final notu �zerinden vizenin %40�I finalin %60��n� alarak y�l sonu puan�n� hesaplayan program�n algoritmas�n� yaz�n�z .
		
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

