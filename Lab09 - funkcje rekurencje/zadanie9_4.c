#include <stdio.h>
#include <math.h>
#include <ctype.h>

/* Michał Ślęzak */
int ilocz_it(int a, int b);
int ilocz_rk(int a, int b);

int main()
{
		
//	printf("%d\n", ilocz_it(-5, 2));
//	printf("%d", ilocz_rk(-5, 2));
	
	char decyzja = 'T';
	int a = 0, b = 0;
	while(toupper(decyzja) != 'N'){
		int nr_decyzji;

		
		printf("Co chcesz zrobic?:\n1.Obliczyc iloczyn liczb naturalnych a i b iteracyjnie\n2.Obliczyc iloczyn liczb naturalnych a i b rekurencyjnie\n");
		printf("Ktory numer wybierasz (1 czy 2)?: ");
		scanf("%d", &nr_decyzji);
		
		switch(nr_decyzji){
			case 1:
				printf("Podaj liczby naturalne a i b po spacji: ");
				scanf("%d %d", &a, &b);
				
				int iloczyn1 = ilocz_it(a, b);
				printf("Iloczyn liczb naturalnych %d i %d obliczony iteracyjnie wynosi: %d\n", a, b, iloczyn1);
				break;
			case 2:
				printf("Podaj liczby naturalne a i b po spacji: ");
				scanf("%d %d", &a, &b);
				
				int iloczyn2 = ilocz_rk(a, b);
				printf("Iloczyn liczb naturalnych %d i %d obliczony rekurencyjnie wynosi: %d\n", a, b, iloczyn2);
				break;
			default:
				break;
		}
		printf("\nCzy chcesz kontynuowac?[T/N]:");
		scanf(" %c", &decyzja);
//		if(decyzja == 'N')
//			break;
		printf("\n");
	}
	
	return 0;
}

int ilocz_it(int a, int b) // zrobilem tez dla ujemnych, bo nie zauwazylem tego w poleceniu, ze tylko dla naturalnych, ale to w sumie lepiej moze ;-)
{
	int ilocz = 0;
	if(b >= 0)
	{
		while(b > 0)
		{
			ilocz += a; // 2 * 5 = 2 + 2 + 2 + 2 + 2
			b--;
		}
	}else{
		while(b < 0)
		{
			ilocz -= a; // -2 * 2 = -2 + -2 
			b++;
		}
	}

	
	return ilocz;
}

int ilocz_rk(int a, int b) // dziala na tej samej zasadzie czyli dodawaniu jak ten iteracyjny
{	
	if(b < 0)
	{
		a = -a;
		b = -b;
	}

	if(b == 0 || a == 0)
	{
		return 0;
	}
	else
	{
		b = b - 1; 
		return (a + ilocz_rk(a, b)); // 2 * 2 = 2 + 2
	}
 
}


