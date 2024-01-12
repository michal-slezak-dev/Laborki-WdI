#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/* Michał Ślęzak */

int losowanie(int a, int b)
{
	int wylosowana = (rand() % (b - a + 1)) + a;
	return wylosowana;
}

// 1 WYPELNIA TABLICE
void wypelnij_tabl(int tabl[], int n, int x, int y)
{
	int i;
	for(i = 0; i < n; i++)
		tabl[i] = losowanie(x, y);	
}


// 2 WYPISUJE ELEMENTY TABLICY 
void wypisz(int tabl[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{	
		printf("%7d", tabl[i]);
	
		if((i + 1) % 10 == 0)
			printf("\n");
	}
}

// srednia
float srednia(int tabl[], int n)
{	
	int suma = 0;
	int i;
	for(i = 0; i < n; i++)
		suma += tabl[i];
	
	float s = (float) suma / n;
	return s;
}

int main()
{
	srand(time(NULL));
	
	int a = 0, b = 0, n = 0;
	printf("Podaj lewy kraniec przedzialu a: ");
	scanf("%d", &a);
	printf("Podaj prawy kraniec przedzialu b: ");
	scanf("%d", &b);
	printf("Podaj ilosc elementow tablicy do wylosowania n: ");
	scanf("%d", &n);
	
	int tab[n];
	
	wypelnij_tabl(tab, n, a, b);
	printf("Tablica wypelniona wylosowanymi liczbami z zakresu <%d;%d>: \n", a, b);
	wypisz(tab, n);
	
	float sred = srednia(tab, n);
	printf("\nSrednia elementow tej tablicy to: %.2f", sred);
	
	return 0;
}
