#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*Michał Ślęzak */
int losowanie(int a, int b)
{
	int wylosowana = (rand() % (b - a + 1)) + a;
	return wylosowana;
}

int main()
{
	srand(time(NULL));
	
	int a = 0, b = 0;
	printf("Wczytaj a (lewy kraniec przedzialu) i b (prawy kraniec przedzialu): ");
	scanf("%d %d", &a, &b);
	
	printf("Losowa liczba z przedzialu od %d do %d to %d", a, b, losowanie(a, b));
	
	return 0;
}
