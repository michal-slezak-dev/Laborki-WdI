/*
Zadanie 3.3
Michał Ślęzak 
*/
// jak ujemne to od ujemne do 0
#include <stdio.h>
int main()
{
	int suma = 0;
	int n = 0;
	printf("Podaj liczbe calkowita n: ");
	scanf("%d", &n);
	
	if(n < 0)
	{
		int i;
		for(i = n; i <= 0; i++)
		{
			suma += i;
		}
		printf("Suma liczb od %d do 0 to: %d", n, suma);
	}else
	{
		int i;
		for(i = 0; i <= n; i++)
		{
			suma += i;
		}
		printf("Suma liczb od 0 do %d to: %d", n, suma);
	}
	
	
	return 0;
}
