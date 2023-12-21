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
	int n = 0;
	printf("Podaj ilosc samochodow: ");
	scanf("%d", &n);
	fflush(stdin);
	
	struct samochod Auta[n];
	
	int i = 0;
	while(i < n)
	{
		printf("Podaj marke samochodu nr %d: ", i + 1);
		fflush(stdin);
		gets(Auta[i].marka);
		
		printf("Podaj model samochodu nr %d: ", i + 1);
		fflush(stdin);
		gets(Auta[i].model);
		
		printf("Podaj kolor samochodu nr %d: ", i + 1);
		fflush(stdin);
		gets(Auta[i].kolor);
		
		printf("Podaj przebieg samochodu nr %d: ", i + 1);
		fflush(stdin);
		scanf("%d", &Auta[i].przebieg);
		
		printf("Podaj cene samochodu nr %d: ", i + 1);
		fflush(stdin);
		scanf("%lf", &Auta[i].cena);
		

		i++;
	}
	
	char marka[] = "           Marka";
	char model[] = "           Model";
	char kolor[] = "           Kolor";
	char przebieg[] = "        Przebieg";
	char cena[] = "            Cena";
	char lp[] = "Lp.";
	
	printf("Wczytane samochody to: \n");
	printf("%s\t%16s\t%16s\t%16s\t%16s\t%16s\n", lp, marka, model, kolor, przebieg, cena);
	for(i = 0; i < n; i++)
	{
		printf("%d\t%16s\t%16s\t%16s\t%16d\t%16.2lf\n", i + 1, Auta[i].marka, Auta[i].model, Auta[i].kolor, Auta[i].przebieg, Auta[i].cena);
	}
	
	printf("\nDane samochodow o przebiegu < 100 000 km:\n");
	printf("%s\t%16s\t%16s\t%16s\t%16s\n", marka, model, kolor, przebieg, cena);
	for(i = 0; i < n; i++)
	{
		if(Auta[i].przebieg < 100000)
			printf("%16s\t%16s\t%16s\t%16d\t%16.2lf\n", Auta[i].marka, Auta[i].model, Auta[i].kolor, Auta[i].przebieg, Auta[i].cena);
	}
	
	    
	
	return 0;
}
