/*
Zadanie 3.4
Michał Ślęzak 
*/

#include <stdio.h>
int main()
{
	int n = 0;
	int k = 0;
	printf("Podaj liczbe calkowita dodatnia n: ");
	scanf("%d", &n);
	
	printf("Podaj liczbe calkowita dodatnia k: ");
	scanf("%d", &k);
	
	int suma = 0;
	int i;
	
	for(i = 1; i <= n; i++)
	{
		if(i % k == 0)
			suma += i;
	}
	
	printf("Suma liczb od 1 do %d podzielnych przez %d: %d", n, k, suma);
	
	
	return 0;
}
