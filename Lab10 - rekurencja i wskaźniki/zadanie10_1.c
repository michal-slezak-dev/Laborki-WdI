#include <stdio.h>
#include <ctype.h>
/* Michał Ślęzak */

int susz_it(int n);
int susz_rk(int n);

int main()
{
	
	char decyzja = 'T';
	int n = 0;
	while(toupper(decyzja) != 'N'){
		int nr_decyzji;

		
		printf("Co chcesz zrobic?:\n1.Obliczyc sume szeregu iteracyjnie\n2.Obliczyc sume szeregu rekurencyjnie\n");
		printf("Ktory numer wybierasz (1 czy 2)?: ");
		scanf("%d", &nr_decyzji);
		
		switch(nr_decyzji){
			case 1:
				printf("Podaj n: ");
				scanf("%d", &n);
				
				int obliczona_s = susz_it(n);
				printf("Obliczona iteracyjnie suma szeregu dla n = %d wynosi: %d", n, obliczona_s);
				break;
			case 2:
				printf("Podaj n: ");
				scanf("%d", &n);
				
				int obliczona_s2 = susz_rk(n);
				printf("Obliczona rekurencyjnie suma szeregu dla n = %d wynosi: %d", n, obliczona_s2);
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

int susz_it(int n)
{
	int i;
	int suma = 0;
	for(i = 1; i <= n; i++)
		suma += i;
	
	return suma;
}

int susz_rk(int n)
{
	if(n == 0)
		return 0; // 0 nic nie zmienia w sumie
	else
	{	
		int pom = n - 1;
		return (n + susz_rk(pom));	
	}

}
