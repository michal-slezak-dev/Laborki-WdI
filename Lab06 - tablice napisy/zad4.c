#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int losowanie(int a, int b)
{
	int wylosowana = (rand() % (b - a + 1)) + a;
	return wylosowana;
}

int main()
{	
	srand(time(NULL));
	
	int m, n, a, b;
	printf("Podaj wymiar macierzy n (wiersze) x m (kolumny): ");
	scanf("%d %d", &n, &m);
	
	printf("Podaj a (lewy kraniec przedzialu) oraz b (prawy kraniec przedzialu): ");
	scanf("%d %d", &a, &b);
	
	int Tab[n][m];
	
	int i;
	int j;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
			Tab[i][j] = losowanie(a, b);
	}
	

	printf("Tablica Tab to: \n");
	double TabW[n][2];
	for(i = 0; i < n; i++)
	{	
		int suma = 0;
		for(j = 0; j < m; j++)
		{
			printf("%7d ", Tab[i][j]);
			suma += Tab[i][j];
		}
		double srednia = (double) suma / m;
		TabW[i][0] = (double) suma;
		TabW[i][1] = srednia;
		printf("\n");
	}
	printf("\n\n");
	
	printf("Tablica TabW to: \n");	
	for(i = 0; i < n; i++)
	{
		printf("%7.9lf %7.9lf", TabW[i][0], TabW[i][1]); //???
		printf("\n");
	}
	printf("\n\n");
	int TabK[2][m]; // 0 - min 1 - max
	for(i = 0; i < m; i++)
	{
		int min = Tab[0][i], max = Tab[0][i];
		for(j = 1; j < n; j++)
		{
			if(Tab[j][i] > max)
				max = Tab[j][i];
			
			if(Tab[j][i] < min)
				min = Tab[j][i];
			
		}
		TabK[0][i] = min;
		TabK[1][i] = max;
	}
	
	printf("Tablica TabK to (1. wiersz to elementy minimalne, 2. wiersz to elementy maksymalne): \n");	
//	printf("%d %d", TabK[0][0], TabK[1][0]);
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < m; j++)
		{
			printf("%7d ", TabK[i][j]);
		}
		printf("\n");
	}
		
	return 0;
}