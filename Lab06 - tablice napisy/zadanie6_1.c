/*Michał Ślęzak */
#include <stdio.h>
#include <ctype.h>

int main()
{
	char zdanie[201]; // 201, bo null
	printf("Wczytaj zdanie: ");
	fflush(stdin);
//	fgets(zdanie, 201, stdin);
	gets(zdanie);
	
	printf("Podaj litere: ");
	char litera = getchar();
	
//	printf("%s -> %c", zdanie, litera);

	int wystapienia = 0;
	int i;
	for(i = 0; zdanie[i]; i++)
	{	
//		printf("%c %c\n", zdanie[i], litera);
		if(tolower(zdanie[i]) == tolower(litera))
			wystapienia++;
	}
	
	printf("Litera %c wystepuje %d razy w podanym zdaniu (bez rozrozniania wielkosci liter): %s.", litera, wystapienia, zdanie);
	
	return 0;
}
