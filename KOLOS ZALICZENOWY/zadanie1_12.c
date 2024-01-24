//============================================================================
// Zadanie 11.2
//   Przygotowanie rekordow w oparciu o tablice
//   
//   Ślęzak Michał
//
//============================================================================

#include <stdio.h>
#include <conio.h>
#include <string.h>
#define N 12
struct Battle_S{
	char nazwa[20];
	int rok_w;
	char uzb_g[10];
	int v_max;
	
};



//const int N=12; // error const w C
char tabN[N][20]={"Kongo","Hiyei","Kirishima","Haruna","Fuso","Yamashiro","Ise","Hyuga","Nagato","Mutsu","Yamato","Musashi"};
int  tabR[N]={1913,1914,1915,1915,1914,1915,1917,1918,1920,1921,1941,1942};
char tabUg[N][10]={"8x356","8x356","8x356","8x356","12x356","12x356","12x356","12x356", "8x406","8x406","9x456","9x456"};
int  tabV[N]={30,30,30,30,25,25,25,25,27,27,27,27};
int i;

void naglowek()
{
	printf("%-10s %-15s %-15s %-15s %-15s\n", "L.p", "Nazwa", "Rok_w", "Uzb_g", "V_max");
	printf("---------------------------------------------------------------------------------------------\n");
}


void wypisz_od_konca(struct Battle_S battles[], int n, int index, int i) // funkcja po prostu tak jak na labach 10 o ile sie nie myle
{	
	if(index < 0)
		return; // tak sie konczy voida, jako war stop dla rekurencji

	printf("%-10d %-15s %-15d %-15s %-15d\n", i+1, battles[index].nazwa, battles[index].rok_w, battles[index].uzb_g, battles[index].v_max);
//	if((n - index) % 10 == 0) // np. n = 10 index = 19, 18, 17, 16, 15, 14, 13, 12, 11, 10 i n - index = 20 - 10 = 10 jest podzielne przez 10, wiec nowa linia dlatego ten enter dodatkowy mi dawalo
//		printf("\n");
	int pom = index - 1; // zmniejszamy o 1, bo "iterujemy" rekurencyjnie od tylu
	i++;
	wypisz_od_konca(battles, n, pom, i);
}


// numeryczne do prawej ? ---> nie ma znaczenia
int main()
{
	// Tu wpisz cz�c proceduraln� programu. 
	
	struct Battle_S battles[N]; // inicjacja tablicy struktur(rekordow)
	for(i = 0; i < N; i++) // kopiowanie z tablic do tablicy struktur
	{
		strcpy(battles[i].nazwa, tabN[i]);
		battles[i].rok_w = tabR[i];
	   	strcpy(battles[i].uzb_g, tabUg[i]);
	   	battles[i].v_max = tabV[i];
	}
	
	printf("Japonskie pancerniki w kolejnosci normalnej\n");
	naglowek();
	for(i = 0; i < N; i++) // wypisanie w kolejnosci normalnej
	{
		printf("%-10d %-15s %-15d %-15s %-15d\n", i+1, battles[i].nazwa, battles[i].rok_w, battles[i].uzb_g, battles[i].v_max);
	}
	
	printf("\n");
	printf("Japonskie pancerniki w kolejnosci od konca\n");
	naglowek();
	int test = N;
	wypisz_od_konca(battles, N, test - 1, 0); // wypisanie rekurencyjne od konca
	
	return 0;
}
