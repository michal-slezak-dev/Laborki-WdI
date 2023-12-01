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
	
	int suma = 0, min = tab[0], max = -1;
	printf("\n\t\t\tWylosowane elementy tablicy: \n");
	for(i = 0; i < n; i++)
	{
		printf("%7d", tab[i]);
		//suma
		suma += tab[i];
		
		//min i max
		if(tab[i] > max)
			max = tab[i];
		
		if(tab[i] < min)
			min = tab[i];
		
		if((i + 1) % 10 == 0)
			printf("\n");
	}
	
	float srednia = (double)suma / n;
	
	printf("\n\n");
	printf("Suma wylosowanych elementow wynosi: %d\nSrednia wylosowanych elementow wynosi: %lf\nElement maksymalny: %d\nElement minimalny: %d", suma, srednia, max, min);
	
	return 0;
}
