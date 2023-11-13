// zadanie2.1
// WCY23IY3S1 Michał Ślęzak

#include <stdio.h>

int main()
{
	char a, b, g;
	long int c, d;
	float f1, f2;
	unsigned int i1, i2;
	
	printf("Wprowdz 2 liczby calkowite typu long int: ");
	scanf("%d%d", &c, &d);
	printf("Wynik odejmowania liczby %d i %d to: %li\nIch reszta z dzielenia to: %d\n", c, d, c - d, c % d);
	
	printf("Wprowadz 2 liczby calkowite bez znaku unsigned int: ");
	scanf("%u%u", &i1, &i2);
	printf("Wynik dodawania liczb %u i %u to: %u\n", i1, i2, i1 + i2);
	
	printf("Wprowadz 2 liczby zmiennoprzecinkowe float: ");
	scanf("%f%f", &f1, &f2);
	printf("Wynik mnozenia liczby %f i %f to: %f\n", f1, f2, f1 * f2);
	
	printf( "Wprowadz 2 znaki: \n");
	fflush(stdin); ////////////////////// to trzeba doda� dla czyszczenia bufora znak�w
	scanf("%c %c", &a, &b);
	fflush(stdin); ////////////////////// to trzeba doda� dla czyszczenia bufora znak�w
	g = a - b;
//	fflush(stdin);
	fflush(stdin);
	printf("Wynik po odjeciu znakow %c i %c to: %c", a, b, g);
	
	
	return 0;
}
