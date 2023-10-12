/*	
	Question 1 :
		Personel türüne göre 1 ise %50, 2 ise %30, 3 ise %20, 4 ise %10 zam yapan C kodunu switch/case yardýmýyla yazýnýz. Örnek: Maas:4000 TL, tur 2 => zamlý maas : 5200 TL.
*/

#include <math.h>
#include <stdio.h>

main(){
	
	int election; float salary;
	
	printf("Plase enter a salary .");		scanf("%f", &salary);
	printf("Plase enter a election .");		scanf("%d", &election);
	
	switch(election){
		
		case 1:
			salary *= 1.5;
			break;
		
		case 2:
			salary *= 1.3;
			break;
		
		case 3:
			salary *= 1.2;
			break;		
				
		case 4:
			salary *= 1.1;
			break;
			
		default:
			printf("A valid personnel type has not been entered .");
			return 1;
		
	}
	
	printf("New_Salary : %f", salary);
	
	return 0;
	
}
