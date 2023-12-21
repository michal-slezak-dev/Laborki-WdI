/*Michał Ślęzak*/

#include <stdio.h>
#include <string.h>
struct samochod {
	char marka[100];
	char model[100];
	char kolor[100];
	int przebieg;
	double cena;
};

int main()
{
	struct samochod Auto;
	printf("Podaj marke samochodu: ");
	fflush(stdin);
//	scanf("%s", Auto.marka); //fgets sprawdzic 
	gets(Auto.marka);
	
	printf("Podaj model samochodu: ");
	fflush(stdin);
	gets(Auto.model);
	
	printf("Podaj kolor samochodu: ");
	fflush(stdin);
	gets(Auto.kolor);
	
	printf("Podaj przebieg samochodu: ");
	fflush(stdin);
	scanf("%d", &Auto.przebieg);
	
	printf("Podaj cene samochodu: ");
	fflush(stdin);
	scanf("%lf", &Auto.cena);
	
	char marka[] = "           Marka";
	char model[] = "           Model";
	char kolor[] = "           Kolor";
	char przebieg[] = "        Przebieg";
	char cena[] = "            Cena";
	printf("%16s\t%16s\t%16s\t%16s\t%16s\n", marka, model, kolor, przebieg, cena);
	printf("%16s\t%16s\t%16s\t%16d\t%16.2lf", Auto.marka, Auto.model, Auto.kolor, Auto.przebieg, Auto.cena);
	
	
	
	
	    
	
	return 0;
}
