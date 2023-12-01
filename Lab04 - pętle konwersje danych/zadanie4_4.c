#include <stdio.h>
//kolejne nieparzyste 2: 1 i 3 3: 1 3 5 7:..
/*Micha³ Œlêzak WCY23IY3S1 860 65*/
int main()
{
	int h = 0;
	printf("Wprowadz H: ");
	scanf("%d", &h);
	
//	a)
	int i;
	for(i = 0; i < h; i++)
	{	
		int j;
		for(j = 0; j < h + 1; j++)
		{
			printf("X");
		}
		printf("\n");
	}

	printf("\n");
	
//	b)
	for(i = 0; i < h; i++)
	{
		int ile_x = (i % h) + 1;
		int j;
		for(j = 0; j< ile_x; j++)
		{
			printf("X");
		}
		printf("\n");
	}
	
	printf("\n");
	
//	c)
	for(i = h - 1; i >= 0; i--)
	{
		int ile_x = (i % h) + 1;
		int k;
		for(k = 0; k < ile_x; k++)
		{
			printf("X");
		}
		printf("\n");
	}

	printf("\n");
	
//	d)
	for(i = 0; i < h; i++)
	{
		int spac = h - (i + 1);
		int ile_x = (i % h) + 1;
		int m;
		for(m = 0; m < spac; m++)
		{
			printf(" ");
		}
		
		int k;
		for(k = 0; k < ile_x; k++)
		{
			printf("X");
		}		
		printf("\n");
	}
	
	printf("\n");

//	e)
	int ix = (2 * h) - 1;
	int ind1 = 0, ind2 = (2 * h) - 1 - 1;
	for(i = 0; i < h; i++)
	{
		if(i > 0)
		{
			int k;
			for(k = 0; k <= ind1; k++)
				printf(" ");
				
			int m;
			for(m = ind1 + 1; m < ind2; m++)
				printf("X");
			
			int n;
			for(n = ind1; n <= ind2; n++) // n < ix?
				printf(" ");
			
			ix -= 2;
			ind1++;
			ind2--;
		}else
		{
			int l;
			for(l = 0; l < ix; l++)
				printf("X");
		}
		printf("\n");
	}
	
	return 0;
}
