/*
Zadanie 3.2
Michał Ślęzak 
*/
//tylko konie wprowadzamy calkowite
#include <stdio.h>
#define Kon_1 0.73549875

int main()
{
	
	int n = 5;
//	double waty = 0.0;
	
	while(n != 0.0)
	{
		printf("Wprowadz liczbe n (KM): ");
		scanf("%d", &n);
		
		if(n == 0.0)
		{
			break;
		}else
		{
			double waty = n * Kon_1;
			printf("%d KM to: %lf kW\n", n, waty);
		}
		
	}
	
	
	
	return 0;
}
