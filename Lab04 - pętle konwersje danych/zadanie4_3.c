#include <stdio.h> // zakladamy, ze co najmiej 1 rownanie wprowadzi i potem pytamy czy dalej chce
#include <math.h>
/*Micha� �l�zak */
int main()
{
	
	while(1)
	{	
		float a = 0, b = 0, c = 0;
		printf("Podaj wspolczynniki a, b i c: ");
		fflush(stdin);
		scanf("%f %f %f", &a, &b, &c);
//		if(a == 0 && b == 0 && c == 0)
//      	printf("To nie jest rownanie);
		float delta = (b * b) - 4 * (a * c);
//		printf("%lf", delta);
		if(delta < 0)
		{
			printf("Rownanie nie ma rozwiazan, delta < 0\n");
		}else if(delta == 0)
		{
			float x0 = ((-1) * b) / (2 * a);
			printf("To rownanie ma 1 rozwiazanie x0: %f", x0);
		}else
		{
			float x1 = (((-1) * b) + sqrt(delta)) / (2 * a);
			float x2 = (((-1) * b) - sqrt(delta)) / (2 * a);
			
			printf("To rownanie ma 2 rozwiazania x1 i x2: %f %f", x1, x2);
		}
		
		char znak;
		printf("\nCzy chcesz dalej wprowadzac wspolczynniki? (T-tak, N-nie): ");
		fflush(stdin);
		znak = getchar();
//		if(znak != 'T')
		if(znak != 'T')
			break;
		
	}
	
	
	return 0;
}
