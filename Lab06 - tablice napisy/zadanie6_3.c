/*Michał Ślęzak */
#include <stdio.h>

int main()
{

	int macierz[3][3];
	
	int i;
	int j;
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
			macierz[i][j] = 0;
	}
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("Podaj element macierzy do wczytania do %d. wiersza i %d. kolumny: ", i + 1, j + 1);
			scanf("%d", &macierz[i][j]);	
		}
	}

	printf("Ta macierz to: \n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%7d ", macierz[i][j]);
		}
		printf("\n");
	}
	
	int wyznacznik = (macierz[0][0] * macierz[1][1] * macierz[2][2]) + (macierz[0][1] * macierz[1][2] * macierz[2][0]) + (macierz[0][2] * macierz[1][0] * macierz[2][1]);
	wyznacznik -= (macierz[0][1] * macierz[1][0] * macierz[2][2]) + (macierz[0][0] * macierz[1][2] * macierz[2][1]) + (macierz[0][2] * macierz[1][1] * macierz[2][0]);
	
	printf("\nWyznacznik tej macierzy wymiaru 3x3 jest rowny: %d", wyznacznik);
	return 0;
}
