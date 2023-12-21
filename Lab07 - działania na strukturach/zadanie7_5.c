/*Michał Ślęzak*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
struct PIES {
	char imie[500];
	char rasa[500];
	int wiek;
	char zajecie[500];
};

struct WLASCICIEL {
	char imie[500];
	char nazwisko[500];
	int wiek;
	char miasto_pochodzenia[100];
	struct PIES pies[4];
	int ile_psow; // liczba psow danego wlasciciela
};
 
struct WLASCICIEL wlasciciele[1000];
int ile_wlascicieli = 0;

void dodaj_wlasciciela()
{
	printf("\t === Podaj imie i nazwisko wlasciciela: ");
	fflush(stdin);
	scanf("%s %s", wlasciciele[ile_wlascicieli].imie, wlasciciele[ile_wlascicieli].nazwisko);
	
	printf("\t === Podaj wiek wlasciciela: ");
	fflush(stdin);
	scanf("%d", &wlasciciele[ile_wlascicieli].wiek);
	
	printf("\t === Podaj miasto pochodzenia wlasciciela: ");
	fflush(stdin);
	gets(wlasciciele[ile_wlascicieli].miasto_pochodzenia);
	
	wlasciciele[ile_wlascicieli].ile_psow = 0; // na poczatku po dodaniu wlasciciel ma 0 psow
	ile_wlascicieli++;
	
}

void dodaj_psa(int nr_wlasciciela) // dodawanie psa
{
	if(wlasciciele[nr_wlasciciela].ile_psow >= 4)
		printf("\t =!= Nie mozna dodac wiecej niz 4 psy do wlasciciela.\n");
	else
	{
		printf("\t === Podaj imie psa wlasciciela: ");
		fflush(stdin);
		gets(wlasciciele[nr_wlasciciela].pies[wlasciciele[nr_wlasciciela].ile_psow].imie);
		
		printf("\t === Podaj rase psa wlasciciela: ");
		fflush(stdin);
		gets(wlasciciele[nr_wlasciciela].pies[wlasciciele[nr_wlasciciela].ile_psow].rasa);
		
		printf("\t === Podaj wiek psa wlasciciela: ");
		fflush(stdin);
		scanf("%d", &wlasciciele[nr_wlasciciela].pies[wlasciciele[nr_wlasciciela].ile_psow].wiek);
		
		printf("\t === Podaj ulubione zajecie psa wlasciciela: ");
		fflush(stdin);
		gets(wlasciciele[nr_wlasciciela].pies[wlasciciele[nr_wlasciciela].ile_psow].zajecie);
		
		wlasciciele[nr_wlasciciela].ile_psow++;	
	}
}

void usun_psa(int nr_wlasciciela, int nr_psa)
{
	int i; // usuwanie psa, czyli przesuwamy dane innych psow w lewo i zmniejszamiy licznik plus, dzieki czemu omijamy powtorzenie psy, jak usuwamy psa nr2: nr_psow: 1 2 3 4 --> po petli bedzie --> 1 3 4 | 4 
	for(i = nr_psa; i < wlasciciele[nr_wlasciciela].ile_psow - 1; i++)
		wlasciciele[nr_wlasciciela].pies[i] = wlasciciele[nr_wlasciciela].pies[i + 1];
	
	wlasciciele[nr_wlasciciela].ile_psow--;
}

void lista_wlascicieli()
{	
	int i;
	for(i = 0; i < ile_wlascicieli; i++)
		printf("\t=== %d. %s %s\n", i + 1, wlasciciele[i].imie, wlasciciele[i].nazwisko); // listowanie wlascicieli
}

void dane_wlasciciela_i_psow(int nr_wlasciciela)
{
	// dodac ze jesli nie ma psow, bo (lub) usuniete to komunikat
	if(wlasciciele[nr_wlasciciela].ile_psow == 0)
	{
		printf("\t == %s %s ma %d lat(a), pochodzi z %s, ale nie posiada (jeszcze) psow \n", wlasciciele[nr_wlasciciela].imie, wlasciciele[nr_wlasciciela].nazwisko, wlasciciele[nr_wlasciciela].wiek, wlasciciele[nr_wlasciciela].miasto_pochodzenia);
//		printf("Ten wlasciciel nie posiada (jeszcze) psow.");
	}

	else
	{ // wypisanie danych wlasciciela i jego psow
		printf("\t == %s %s ma %d lat(a), pochodzi z %s, jego psy to: \n", wlasciciele[nr_wlasciciela].imie, wlasciciele[nr_wlasciciela].nazwisko, wlasciciele[nr_wlasciciela].wiek, wlasciciele[nr_wlasciciela].miasto_pochodzenia);
		int i;
		for(i = 0; i < wlasciciele[nr_wlasciciela].ile_psow; i++)
			printf("\t    %d. %s, rasy %s,ma %d lat(a), lubi %s\n", i + 1, wlasciciele[nr_wlasciciela].pies[i].imie, wlasciciele[nr_wlasciciela].pies[i].rasa, wlasciciele[nr_wlasciciela].pies[i].wiek, wlasciciele[nr_wlasciciela].pies[i].zajecie);
	}

}

 int main()
 {
   
//   setlocale(LC_CTYPE, "Polish");
   
   int petla=1, data, powrot, ktory;

     
   while (petla) 
   {
   	   printf("Wybierz operacje : \n");
	   printf("\t1. Dodaj wlasciciela\n"); 
	   printf("\t2. Dodaj psa do wlasciciela\n");
	   printf("\t3. Lista wlascicieli \n");
	   printf("\t4. Dane wlasciciela i jego psow \n"); 
	   printf("\t5. Usun dane psa \n");
	   printf("\nWybierz operacje podajac jej numer (1--5, 0 - koniec dzialania): ");
	   scanf("%d",&petla);
	   fflush(stdin); // to trzeba dodaÄ‡ dla czyszczenia bufora znakĂłw
	   
	   switch(petla) 
	   {
		case 0: printf("\n\t=== No to koniec ===\n\n"); 
				break;
		case 1: printf("\n\t=== Dodaj wlasciciela\n ");
				dodaj_wlasciciela();
				printf("\n\t============================\n\n");
				break;
		case 2: printf("\n\t=== Dodaj psa do wlasciciela\n \t === Podaj numer wlasciciela : "); 
				int numer_wlasciciela = 0;
				scanf("%d", &numer_wlasciciela);
				dodaj_psa(numer_wlasciciela - 1);
				printf("\n\t============================\n\n");
				break;
		case 3: printf("\n\t=== Lista wlascicieli\n \t\n"); 
//				printf("\n\t=== Lista wlascicieli\n \t   podaj element : "); 
				lista_wlascicieli();
				printf("\n\t============================\n\n");
				break;
		case 4: printf("\n\t=== Dane wlasciciela i jego psow\n \t=== Podaj numer wlasciciela : "); 
				int numer_wlasciciela1 = 0;
				scanf("%d", &numer_wlasciciela1);
				dane_wlasciciela_i_psow(numer_wlasciciela1 - 1);
				printf("\n\t============================\n\n");
				break;
		case 5: printf("\n\t=== Usun dane psa \n \t=== Podaj numer wlasciciela i numer psa do usuniecia (po spacji) : ");
				int numer_wlasciciela2 = 0, numer_psa = 0;
				scanf("%d %d", &numer_wlasciciela2, &numer_psa);
				usun_psa(numer_wlasciciela2 - 1, numer_psa - 1);
				printf("\n\t============================\n\n");
				break;
        default : printf("\n\t=====  Jeszce jeden mazur dzisiaj  =====\n\n");
  }
   };
 
   return 0;
 }
