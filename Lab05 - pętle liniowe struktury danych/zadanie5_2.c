#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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
	
	int max = -1;
	printf("\n\t\t\tWylosowane elementy tablicy: \n");
	for(i = 0; i < n; i++)
	{
		printf("%7d", tab[i]);

		//max
		if(tab[i] > max)
			max = tab[i];
		
		if((i + 1) % 10 == 0)
			printf("\n");
	}
	printf("\n\n");
	
	int zliczenia[max + 1];
	
	for(i = 0; i < max + 1; i++)
		zliczenia[i] = 0;
	
	for(i = 0; i < n; i++)
		zliczenia[tab[i]]++;
		
	for(i = 0; i < max + 1; i++)
	{
		if(zliczenia[i] >= 2)
			printf("%d powtarza sie %d razy.\n", i, zliczenia[i]);
	}
	
	return 0;
}
