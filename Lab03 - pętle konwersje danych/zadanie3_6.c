/*
Zadanie 3.6
Michał Ślęzak 
*/

#include <stdio.h>
int main()
{
	
	int n = 0;
	printf("Podaj ilosc liczb (n): ");
	scanf("%d", &n);
	
	int i = 0;
	int suma = 0;
	int liczba = 0;
	
	while(i != n)
	{
		printf("Podaj %d liczbe: ", i + 1);
		scanf("%d", &liczba);
//		printf("%d", i);
		int liczba_kopia = liczba;
		int ilosc_cyfr = 0;
		
		while(liczba > 0)
		{
			ilosc_cyfr++;
			liczba /= 10;
		}
		
		if(ilosc_cyfr == 2)
			suma += liczba_kopia;
		
		i++;
		
	}
	
	printf("Suma liczb dwucyfrowych sposrod wczytanych %d liczb wynosi: %d", n, suma);
	
	return 0;
}
