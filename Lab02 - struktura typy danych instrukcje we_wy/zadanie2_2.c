// zadanie2.2
// WCY23IY3S1 Michał Ślęzak

#include <stdio.h>
#define MAX_DL_NAPISU 200000
int main()
{
	char imie[MAX_DL_NAPISU] = "", nazwisko[MAX_DL_NAPISU] = "";
	int nr_albumu = 0, wiek = 0;
	
	printf("Wprowadz swoje imie: ");
	gets(imie);
	printf("Wprowadz swoje nazwisko: ");
	gets(nazwisko);
	
//	printf("%s %s", imie, nazwisko);
	
	printf("Wprowadz swoj numer albumu i wiek po spacji: ");
	scanf("%d%d", &nr_albumu, &wiek);
//	printf("%d %d", nr_albumu, wiek);


	char zainteresowania[1000];
	fflush(stdin);
	printf("Wprowadz zainteresowania: ");
	scanf("%[^\t\n]s", zainteresowania);
	
	int suma = nr_albumu + wiek;
	printf("Nazywsza sie %s %s, masz %d lat, twoj numer albumu to %d, numer albumu + wiek to: %d Twoje zainteresowania to:\n%s", imie, nazwisko, wiek, nr_albumu, suma, zainteresowania);

	return 0;
}
