/*
Zadanie 3.1
Micha³ Œlêzak 
*/

#include <stdio.h>
#define Kon_1 0.73549875

int main()
{
	
	int n = 0;
	
	printf("Podaj liczbe n (KM): ");
	scanf("%d", &n);
	
	double waty = 0.0;
	
	if(n < 10)
	{	
		waty = n * Kon_1;
		printf("%d KM to: %lf kW", n, waty);

	}else if(n % 10 == 0)
	{	
		int i;
		for(i = 10; i <= n; i += 10)
		{
			waty = i * Kon_1;
			printf("%d KM to: %lf kW\n", i, waty);
		}
	}else if(n > 10 && n % 10 != 0)
	{
		int i;
		for(i = 10; i <= n; i += 10)
		{
			waty = i * Kon_1;
			printf("%d KM to: %lf kW\n", i, waty);
		}
		waty = n * Kon_1;
		printf("%d KM to: %lf kw", n, waty);
	}
	
	
	return 0;
}
