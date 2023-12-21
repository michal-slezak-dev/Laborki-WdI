#include <stdio.h>
#include <math.h>
/*Michał Ślęzak*/
int czy_pitagorejska(int x, int y, int z)
{
	int decyzja = 0;
//	
//	if(pow(x, 2) + pow(y, 2) == pow(z, 2)) // a^2 + b^3 = c^2 ?
//		decyzja = 1;
//	else
//		decyzja = 0;
	
	decyzja = (pow(x, 2) + pow(y, 2) == pow(z, 2)) ? 1 : 0;
	
	return decyzja;
}

int main()
{
	int a = 0, b = 0, c = 0;
	
	printf("Podaj pierwsza przyprostokatna a: ");
	scanf("%d", &a);
	printf("Podaj druga przyprostokatna b: ");
	scanf("%d", &b);
	printf("Podaj przeciwprostokatna do sprawdzenia c: ");
	scanf("%d", &c);
	
	int dec = czy_pitagorejska(a, b, c);
	if(dec == 1)
		printf("Liczby %d %d i %d sa liczbami pitagorejskimi, funkcja zwrocila %d .", a, b, c, dec);
	else
		printf("Liczby %d %d i %d nie sa liczbami pitagorejskimi, funkcja zwrocila %d .", a, b, c, dec);
	
	return 0;
}
