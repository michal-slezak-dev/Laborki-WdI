#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
/*Micha³ Œlêzak WCY23IY3S1 860 65*/
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
	
	printf("\nWylosowane elementy tablicy przed sortowaniem: \n");
	for(i = 0; i < n; i++)
	{
		printf("%7d", tab[i]);
		
		if((i + 1) % 10 == 0)
			printf("\n");
	}
	printf("\n\n");
	
	int j;
	bool zamiana;
	for(i = 0; i < n; i++)
	{
		zamiana = false;
		for(j = 0; j < n - i - 1; j++)
		{
			if(tab[j] > tab[j + 1])
			{
				int pomoc = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = pomoc;
				zamiana = true;
			}
		}
		if(zamiana == false)
			break;
	}
	
	printf("\nWylosowane elementy tablicy po sortowaniu: \n");
	for(i = 0; i < n; i++)
	{
		printf("%7d", tab[i]);
		
		if((i + 1) % 10 == 0)
			printf("\n");
	}
	printf("\n");
	
	return 0;
}
