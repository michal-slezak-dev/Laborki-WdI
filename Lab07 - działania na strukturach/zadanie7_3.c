/*Michał Ślęzak*/
#include <stdio.h>
#include <string.h>
#include <math.h>

struct punkty_2d {
	int x;
	int y;
	char pol;
};


int main()
{	

	int n = 0;
	
	int a = 0, b = 0, r = 0, x = 0, y = 0;
	printf("Podaj wspolrzedne (a, b) srodka okregu: ");
	scanf("%d %d", &a, &b);
	
	printf("Podaj promien okregu: ");
	scanf("%d", &r);
	
	printf("Podaj liczbe punktow do sprawdzenia: ");
	scanf("%d", &n);
	
	struct punkty_2d punkty[n];
	
	int i;
	for(i = 0; i < n; i++){
		printf("Podaj wspolrzedne %d punktu do sprawdzenia (x, y) (po spacji): ", i + 1);
		scanf("%d %d", &punkty[i].x, &punkty[i].y);
		
		int polozenie = (pow((punkty[i].x - a), 2) + pow((punkty[i].y - b), 2));
		
		// na okregu
		if(polozenie == pow(r, 2))
			punkty[i].pol = 'n';
			
		// wewnatrz okregu
		if(polozenie < pow(r, 2))
			punkty[i].pol = 'w';
			
		// na zewnatrz okregu
		if(polozenie > pow(r, 2))
			punkty[i].pol = 'z';
	}
	
	printf("\t X\t Y\tPolozenie\n");
	for(i = 0; i < n; i++){
		// na okregu
		if(punkty[i].pol == 'n')
		{
			char poloze[] = "na okregu";
//			printf("Punkt (%d, %d) lezy na okregu o srodku w punkcie (%d, %d) i promieniu %d.", punkty[i].x, punkty[i].y, a, b, r);
			printf("\t%2d\t%2d\t%s", punkty[i].x, punkty[i].y, poloze);
		}

			
		// wewnatrz okregu
		if(punkty[i].pol == 'w')
		{
			char poloze[] = "wewnatrz okregu";
//			printf("Punkt (%d, %d) lezy wewnatrz okregu o srodku w punkcie (%d, %d) i promieniu %d.", punkty[i].x, punkty[i].y, a, b, r);
			printf("\t%2d\t%2d\t%s", punkty[i].x, punkty[i].y, poloze);
		}

		// na zewnatrz okregu
		if(punkty[i].pol == 'z')
		{
			char poloze[] = "na zewnatrz okregu";
//			printf("Punkt (%d, %d) lezy na zewnatrz okregu o srodku w punkcie (%d, %d) i promieniu %d.", punkty[i].x, punkty[i].y, a, b, r);
			printf("\t%2d\t%2d\t%s", punkty[i].x, punkty[i].y, poloze);	
		}

		
		printf("\n");
	}
	
	
	


	return 0;
}
