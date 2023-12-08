/*Michał Ślęzak */

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
	

//	printf("Tablica Tab to:\t\t\tSUMA       SREDNIA\n");

//	int k;
//	for(k = 0; k < m; k++)
//		printf("%7c", ' ');
//	printf("%7s %7s\n", su1, su2);
	
	double TabW[n][2];
	for(i = 0; i < n; i++)
	{	
		int suma = 0;
		for(j = 0; j < m; j++)
		{
//			printf("%7d ", Tab[i][j]);
			suma += Tab[i][j];
		}
		double srednia = (double) suma / m;
		TabW[i][0] = (double) suma;
		TabW[i][1] = srednia;
//		printf("\n");
	}
//	printf("\n\n");
	
	printf("Ta tablica to (2 ostatnie wartosci w wierszu to suma i srednia elementow w danym wierszu): \n");
	char su1[] = "Suma";
	char su2[] = "Srednia";
	for(i = 0; i < 1; i++)
	{	
		printf("    ");
		for(j = 0; j < m; j++)
		{
			printf("       ");
		}
		printf("   %7.7s %7.7s", su1, su2);
		printf("\n");
	}


	// wypisuje elementy tablicy oraz sume i srednia w wierszu
	for(i = 0; i < n; i++)
	{	
		printf("    ");
		for(j = 0; j < m; j++)
		{
			printf("%7d ", Tab[i][j]);
		}
		printf("%7.2lf %7.2lf", TabW[i][0], TabW[i][1]);
		printf("\n");
	}

	int TabK[2][m]; // 0 - max 1 - min, obliczam max i min z kolumny danej
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
		TabK[1][i] = min;
		TabK[0][i] = max;
	}
	
	printf("\n");
	for(i = 0; i < 2; i++) // wypisuje max i min z danej kolumny pod tablica wylosowanych liczb
	{
		if(i == 0)
			printf("Max ");
		else
			printf("Min ");
		for(j = 0; j < m; j++)
		{
			printf("%7d ", TabK[i][j]);
		}
		printf("\n");
	}
		
	return 0;
}
