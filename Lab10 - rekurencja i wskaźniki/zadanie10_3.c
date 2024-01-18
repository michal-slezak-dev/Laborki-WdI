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


// 2 WYPISUJE ELEMENTY TABLICY OD KONCA 
void wypisz_od_konca(int tabl[], int n, int index)
{	
	if(index < 0)
		return; // tak sie konczy voida, jako war stop dla rekurencji

	printf("%7d", tabl[index]);
	if((n - index) % 10 == 0) // np. n = 10 index = 19, 18, 17, 16, 15, 14, 13, 12, 11, 10 i n - index = 20 - 10 = 10 jest podzielne przez 10, wiec nowa linia
		printf("\n");
	int pom = index - 1; // zmniejszamy o 1, bo "iterujemy" rekurencyjnie od tylu
	wypisz_od_konca(tabl, n, pom);
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
//	int i;
//	for(i = 0; i < n; i++)
//		printf("%d\n", tab[i]);
	printf("Tablica wypelniona wylosowanymi liczbami z zakresu <%d;%d> wypisana rekurencyjnie od konca: \n", a, b);
	wypisz_od_konca(tab, n, n - 1);
	
	return 0;
}
