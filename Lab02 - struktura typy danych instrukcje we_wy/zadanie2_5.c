// zadanie2.5
// WCY23IY3S1 Michał Ślęzak

#include <stdio.h>

int main()
{	
	int liczba = 0;
	printf("Wprowadz liczbe do odwrocenia: ");
	scanf("%d", &liczba);
	
	printf("Liczba odwrotna do %d, to: ", liczba);
	while(liczba > 0){
		int cyfra = liczba % 10;
		printf("%d", cyfra);
		liczba /= 10;
	}
	
	return 0;
}
