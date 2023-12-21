/*Michał Ślęzak*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct PIES {
	char imie[500];
	char rasa[500];
	int wiek;
	char zajecie[500];
};

struct WLASCICIEL {
	char imie[500];
	char nazwisko[500];
	char zwrot[500];
	int wiek;
	char miasto_pochodzenia[100];
	struct PIES pies;
	
};


int main()
{	
	struct WLASCICIEL wlasciciel;
	printf("Podaj imie i nazwisko wlasciciela: ");
	fflush(stdin);
	scanf("%s %s", wlasciciel.imie, wlasciciel.nazwisko); // pod to jakby 2 czlonowe imie
	
//	printf("Podaj imie wlasciciela: ");
//	fflush(stdin);
//	gets(wlasciciel.imie);
//	fgets(wlasciciel.imie, sizeof(wlasciciel.imie), stdin);
//	
//	printf("Podaj nazwisko wlasciciela: ");
//	fflush(stdin);
//	gets(wlasciciel.nazwisko);
//	fgets(wlasciciel.nazwisko, sizeof(wlasciciel.nazwisko), stdin);
	
	printf("Podaj wiek wlasciciela: ");
	fflush(stdin);
	scanf("%d", &wlasciciel.wiek);
	
	printf("Podaj miasto pochodzenia wlasciciela: ");
	fflush(stdin);
	gets(wlasciciel.miasto_pochodzenia);
	
	printf("Podaj imie psa wlasciciela: ");
	fflush(stdin);
	gets(wlasciciel.pies.imie);
	
	printf("Podaj rase psa wlasciciela: ");
	fflush(stdin);
	gets(wlasciciel.pies.rasa);
	
	printf("Podaj wiek psa wlasciciela: ");
	fflush(stdin);
	scanf("%d", &wlasciciel.pies.wiek);
	
	printf("Podaj ulubione zajecie psa wlasciciela: ");
	fflush(stdin);
	gets(wlasciciel.pies.zajecie);
	
	printf("%s %s, %d-latek z %s, ma psa, ktory wabi sie %s. Jego pies to %s, ma %d lat(a) i uwielbia %s", wlasciciel.imie, wlasciciel.nazwisko, wlasciciel.wiek, wlasciciel.miasto_pochodzenia, wlasciciel.pies.imie, wlasciciel.pies.rasa, wlasciciel.pies.wiek, wlasciciel.pies.zajecie);
	
	return 0;
}
