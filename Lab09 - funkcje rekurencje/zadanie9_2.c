#include <stdio.h>
#include <math.h>
#include <ctype.h>
/* Michał Ślęzak */


float przeciwpr(float a, float b);
float przypr(float a, float b);

int main()
{
		
	char decyzja = 'T';
	float a = 0, b = 0;
	while(toupper(decyzja) != 'N'){
		int nr_decyzji;

		
		printf("Co chcesz zrobic?:\n1.Obliczyc przeciwprostokatna dla przyprostokatnych a i b\n2.Obliczyc przyprostokatna dla przeciwprostokatnej a i przyprostokatnej b\n");
		printf("Ktory numer wybierasz (1 czy 2)?: ");
		scanf("%d", &nr_decyzji);
		
		switch(nr_decyzji){
			case 1:
				printf("Podaj dlugosc przyprostokatnej a: ");
				scanf("%f", &a);
				printf("Podaj dlugosc przyprostokatnej b: ");
				scanf("%f", &b);
				
				float obliczona_przeciw = przeciwpr(a, b);
				printf("Dla przyprostokatnych %f i %f przeciwprostokatna wynosi %f", a, b, obliczona_przeciw);
				break;
			case 2:
				printf("Podaj przeciwprostokatna a: ");
				scanf("%f", &a);
				printf("Podaj przyprostokatna b: ");
				scanf("%f", &b);
				
				float obliczona_przyp = przypr(a, b);
				printf("Dla przeciwprostokatnej %f i przyprostokatnej %f, druga przyprostokatna wynosi %f", a, b, obliczona_przyp);
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


float przeciwpr(float a, float b) // przyprostokatne a i b --> a^2 + b^2 = przeciw^2
{
	float pom = (a * a) + (b * b);
	float przeciw = sqrt(pom);
	
	return przeciw;
}

float przypr(float a, float b) //przeciwprostokatna a i przyprostokatna b --> przyp^2 + b^2 = a^2
{
	float pom = (a * a) - (b * b);
	float przyp = sqrt(pom);
	
	return przyp;
}
