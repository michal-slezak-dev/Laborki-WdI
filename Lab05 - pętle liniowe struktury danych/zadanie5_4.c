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
	
	printf("\n\t\t\tWylosowane elementy tablicy: \n");
	for(i = 0; i < n; i++)
	{
		printf("%7d", tab[i]);
		
		if((i + 1) % 10 == 0)
			printf("\n");
	}
	printf("\n\n");
	
	int max_streak = 0; // 11 9 -> 0 // 11 11 -> 0
	int streak = 0;

	for(i = 0; i < n - 1; i++)
	{
		if(tab[i + 1] > tab[i])
			streak++;
		else
			streak = 0;
//		{
//			if(streak > max_streak)
//				max_streak = streak;
//			streak = 1;
//		}
//		
//		if(streak > max_streak)
//			max_streak = streak;
//			max_streak = 0;
//			streak = 1;
//			
		if(streak > max_streak)
			max_streak = streak;
	}
	
	if(max_streak != 0) // JESLI FAKTYCZNIE ROSNACY
		max_streak++;
	
	printf("Dlugosc najdluzszego podsiagu rosnacego w tej tablicy: %d", max_streak);
	
	return 0;
}
