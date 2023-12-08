#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*Michał Ślęzak*/
int losowanie(int a, int b)
{
	int wylosowana = (rand() % (b - a + 1)) + a;
	return wylosowana;
}

int main()
{
	srand(time(NULL));
	
	int n = 0;
	printf("Podaj liczbe liczb do wylosowania n (ilosc liczb): ");
	scanf("%d", &n);
	
	int a = 0, b = 0;
	printf("Wczytaj a (lewy kraniec przedzialu) i b (prawy kraniec przedzialu): ");
	scanf("%d %d", &a, &b);
	

	
	int tab[n];
	int i;
	for(i = 0; i < n; i++)
		tab[i] = losowanie(a, b);
	
	int spr = 0;
	printf("\n\t\t\tWylosowane elementy tablicy: \n");
	for(i = 0; i < n; i++)
	{
		printf("%7d", tab[i]);
		
		if((i + 1) % 10 == 0)
			printf("\n");
	}
	printf("\n\n");
	
	for(i = 0; i < n - 1; i++)
	{
		if(tab[i + 1] >= tab[i])
			spr++;
	}
	
	if((spr + 1) == n)
		printf("Tablica jest uporzadkowana niemalejaco");
	else
		printf("Tablica nie jest uporzadkowana niemalejaco");
	
	return 0;
}
