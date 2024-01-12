#include <stdio.h>
#include <math.h>
#include <ctype.h>

/* Michał Ślęzak */

#define PI 3.14159265
float pr_ah(float a, float b);
float pr_ak(float a, float b);
float pr_dd(float a, float b);

int main()
{
	
	char decyzja = 'T';
	float a = 0, b = 0;
	while(toupper(decyzja) != 'N'){
		int nr_decyzji;

		
		printf("Z ktorej wersji obliczania pola rombu chcesz skorzystac?:\n1.Dlugosc boku (a) i wysokosc (b)\n2.Dlugosc boku (a) i miara kata plaskiego (b)\n3.Dlugosc obu przekatnych (a i b)\n");
		printf("Ktory numer wybierasz (1, 2 czy 3)?: ");
		scanf("%d", &nr_decyzji);
		
		switch(nr_decyzji){
			case 1:
				printf("Podaj dlugosc boku a: ");
				scanf("%f", &a);
				printf("Podaj wysokosc b: ");
				scanf("%f", &b);
				
				float obliczone_p = pr_ah(a, b);
				printf("Romb o boku %f i wysokosci %f ma pole: %f", a, b, obliczone_p);
				break;
			case 2:
				printf("Podaj dlugosc boku a: ");
				scanf("%f", &a);
				printf("Podaj miare kata b: ");
				scanf("%f", &b);
				
				float obliczone_p2 = pr_ak(a, b);
				printf("Romb o boku %f i kacie %f ma pole: %f", a, b, obliczone_p2);
				break;
			case 3:
				printf("Podaj dlugosc przekatnej a: ");
				scanf("%f", &a);
				printf("Podaj dlugosc przekatnej b: ");
				scanf("%f", &b);
				
				float obliczone_p3 = pr_dd(a, b);
				printf("Romb o przekatnych %f i  %f ma pole: %f", a, b, obliczone_p3);
				break;
			default:
				break;
		}
		printf("\nCzy chcesz kontynuowac?[T/N]:");
		scanf(" %c", &decyzja);
//		if(decyzja == 'N')
//			break;
		printf("\n");
	}
	
	
	return 0;
}

float pr_ah(float a, float b)
{
	float pole = a * b;
	return pole;
}

float pr_ak(float a, float b)
{	
	float rad = PI/180; // funkcja sin(x) przyjmuje radiany, wiec zamieniam
	
	float poleak = (a * a) * sin(b * rad); // a^2 sin(b)
	return poleak;
}

float pr_dd(float a, float b)
{
	float poledd = (a * b)/2; // (a*b)/2
	return poledd;
}
