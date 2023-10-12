
/*
	Question 6 :	
		Bir �irkette personelin maa�� a�a��daki �ekilde hesaplanmaktad�r. Klavyeden girilen maa� bilgisi ve �retilen par�a say�s�na g�re toplam maa�� hesaplayan program kodunu yaz�n�z.
	�retilen par�a say�s� 50-100 aras�nda ise maa��n %20 
	�retilen par�a say�s� 100-150 aras�nda ise maa��n %25 
	�retilen par�a say�s� 150-200 aras�nda ise maa��n %30 kadar ek maa� �demesi yap�lmaktad�r.
	�rnek:
		Maa�: 3000, Par�a say�s�: 120 ise bu durumda: Toplam maa�: 3750 olacakt�r.
*/

#include <math.h>
#include <stdio.h>

main() {
	
	int salary, newSalary, piece;
	
	printf("please enter salary :");		scanf("%d", &salary);
	printf("please enter piece :");		scanf("%d", &piece);
	
	if(piece>=50 && piece<=100) {
		
		newSalary = salary + (salary * 0.2);
		
		printf("SALARY : %d\n", newSalary);
		
	}else if(piece>100 && piece<=150) {
		
		newSalary = salary + (salary * 0.25);
		
		printf("SALARY : %d\n", newSalary);
		
	}else {
		
		newSalary = salary + (salary * 0.3);
		
		printf("TOTAL_SALARY : %d\n", newSalary);
		
	}
	
	return 0;
	
}

