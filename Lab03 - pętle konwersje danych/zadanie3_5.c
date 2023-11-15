/*
Zadanie 3.5
Michał Ślęzak 
*/

#include <stdio.h>
int main()
{
	int a = 0, b = 0, k = 0;
	printf("Podaj liczby a i b (odpowiednio lewy i prawy kraniec przedzialu): ");
	scanf("%d %d", &a, &b);
	
	printf("Podaj liczbe calkowita dodatnia k: ");
	scanf("%d", &k);
	
	int licznik = 0;
	int i;
	
	for(i = a; i <= b; i++)
	{
		if(i % k == 0)
			licznik++;
	}
	
	printf("Ilosc liczb z przedzialu od %d do %d podzielnych przez %d: %d", a, b, k, licznik);
	
	
	return 0;
}
