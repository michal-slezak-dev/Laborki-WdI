#include <stdio.h>
/*Michał Ślęzak*/
int nwd(int x, int y) // x--> a y --> b
{
	while(x != y) // euklides ;-)
	{
		if(x > y)
			x -= y;
		else
			y -= x;
	}
	
	return x;
}

int nww(int o, int m)
{
	int wartosc_nww = (o * m) / nwd(o, m); // wzorek matematyczny
	
	return wartosc_nww;
}

int main()
{
	
	int a = 0, b = 0;
	printf("Podaj pierwsza liczbe a: ");
	scanf("%d", &a);
	printf("Podaj druga liczbe b: ");
	scanf("%d", &b);
	
	int wartosc_nwd = nwd(a, b); // funkcja przyjmuje liczby a i b
	int wart_nww = nww(a, b); // funkcja przyjmuje liczby a i b
	
	printf("Dla wczytanych liczb %d oraz %d, NWD = %d , NWW = %d", a, b, wartosc_nwd, wart_nww);
	
		
	
	return 0;
}
