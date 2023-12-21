#include <stdio.h>
/*Michał Ślęzak*/
void wyswietl(int a, int b)
{
	int i, licznik = 0;
	for(i = a; i <= b; i++) {
		if(i % 2 == 0) // czy parzysta
		{
			printf("%7d", i);
			licznik++;	
		}

		
		if(licznik == 10) // po 10 w wierszu
		{
			printf("\n");
			licznik = 0;
		}
	}
}

int main()
{
	int a = 0, b = 0;
	printf("Podaj lewy kraniec przedzialu a: ");
	scanf("%d", &a);
	printf("Podaj prawy kraniec przedzialu b: ");
	scanf("%d", &b);
	printf("\n");
	
	printf("Liczby parzyste z przedzialu <%d;%d>: \n", a, b);
	wyswietl(a, b);
	
	
	return 0;
}
