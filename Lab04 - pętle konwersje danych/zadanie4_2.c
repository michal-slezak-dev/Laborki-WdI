#include <stdio.h>
/*Micha� �l�zak */
int main()
{
	
	int suma = 0;
	int ujemne = 0;
	int liczba = 0;
	int ilosc_liczb = 0;
	
	while(suma <= 100 && ujemne <= 5)
	{
		printf("Podaj liczbe: ");
		scanf("%d", &liczba);
		ilosc_liczb++;
		
		if(liczba < 0)
			ujemne++;
		
		suma += liczba;
		
	}
	
	printf("Wczytano %d liczb, ich suma wynosi %d, liczba ujemnych liczb to: %d", ilosc_liczb, suma, ujemne);
	
	return 0;
}
