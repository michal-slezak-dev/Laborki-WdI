#include <stdio.h>
#include <ctype.h>
/* Michał Ślęzak */

int dnab_it(int n);
int dnab_rk(int n);

int main()
{
		
//	printf("%d", dnab_it(100));
//	printf("\n%d", dnab_rk(100));
	
	char decyzja = 'T';
	int n = 0;
	while(toupper(decyzja) != 'N'){
		int nr_decyzji;

		
		printf("Co chcesz zrobic?:\n1.Przekonwertowac liczbe n na postac binarna iteracyjnie\n2.Przekonwertowac liczbe n na postac binarna rekurencyjnie\n");
		printf("Ktory numer wybierasz (1 czy 2)?: ");
		scanf("%d", &nr_decyzji);
		
		switch(nr_decyzji){
			case 1:
				printf("Podaj n: ");
				scanf("%d", &n);
				
				int obliczona_b = dnab_it(n);
				printf("Liczba %d przekonwertowana iteracyjnie na postac binarna wynosi: %d", n, obliczona_b);
				break;
			case 2:
				printf("Podaj n: ");
				scanf("%d", &n);
				
				int obliczona_b2 = dnab_rk(n);
				printf("Liczba %d przekonwertowana rekurencyjnie na postac binarna wynosi: %d", n, obliczona_b2);				
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

int dnab_it(int n)
{	
	int pom = 1;
	int bin = 0;
	while(n > 0)
	{
		int reszta = n % 2; // zwykly algorytm zamiany na binarny
		bin += reszta * pom; // tak robimy, bo nie chce sie bawic ze stringami
		n /= 2;
		pom *= 10; // 11 -> 1 + 1 * 10 + 0 * 100 + 1 * 1000 = 1 + 10 + 0 + 1000 = 1011
	}
	
	return bin;
}

int dnab_rk(int n)
{
	if(n == 0)
		return 0; // dodanie 0 nic nie zmienia
	else
	{
		int reszta = n % 2;
		int pom = n / 2;
		return (reszta + 10 * dnab_rk(pom)); // 11 -> to 10*kazde kolejne wywolanie to odpowiada za to, że tak jak w iteracyjnym nam da fajnie 1 + 1*10 + 0*100 + 1*1000 = 1011
	}
}
