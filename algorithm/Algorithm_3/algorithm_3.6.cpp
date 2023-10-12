
/*
	Question 6 :	
		Bir þirkette personelin maaþý aþaðýdaki þekilde hesaplanmaktadýr. Klavyeden girilen maaþ bilgisi ve üretilen parça sayýsýna göre toplam maaþý hesaplayan program kodunu yazýnýz.
	Üretilen parça sayýsý 50-100 arasýnda ise maaþýn %20 
	Üretilen parça sayýsý 100-150 arasýnda ise maaþýn %25 
	Üretilen parça sayýsý 150-200 arasýnda ise maaþýn %30 kadar ek maaþ ödemesi yapýlmaktadýr.
	Örnek:
		Maaþ: 3000, Parça sayýsý: 120 ise bu durumda: Toplam maaþ: 3750 olacaktýr.
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

