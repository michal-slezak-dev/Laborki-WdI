#include <stdio.h>
/*Micha³ Œlêzak WCY23IY3S1 860 65*/
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
