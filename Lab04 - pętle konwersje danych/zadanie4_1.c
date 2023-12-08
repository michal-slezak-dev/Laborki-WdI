#include <stdio.h>
/*Micha� �l�zak */
int main()
{
	int n = 0;
	
	printf("Wprowadz liczbe N: ");
	scanf("%d", &n);
	
	int lustro = 0, kopia = n;
	
	while (n > 0)
	{
		int cyfra = n % 10;
		lustro = lustro * 10 + cyfra;
		n /= 10;
	}
	
	if(kopia == lustro)
		printf("%d jest lustrzane", kopia);
	else
		printf("%d nie jest lustrzane", kopia);
	
	
	return 0;
}
