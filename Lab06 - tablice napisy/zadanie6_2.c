/*Michał Ślęzak*/
//nie rozrozniamy liter
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	
	char slowa[5][201];
	
	int i = 0;
	for(i = 0; i < 5; i++)
	{
		printf("Wczytaj %d slowo: ", i + 1);
		fflush(stdin);
		gets(slowa[i]);
	}

//	printf("%c %c", slowo1[0], slowo1[strlen(slowo1) - 1]);	
	printf("\nSlowa, ktore maja ta sama 1. i ostatnia litere oraz dlugosc nie mniejsza niz 5 to: \n");
	for(i = 0; i < 5; i++)
	{			
		if(tolower(slowa[i][0]) == tolower(slowa[i][strlen(slowa[i]) - 1]) && strlen(slowa[i]) >= 5)
			printf("%s\n", slowa[i]);	
	}



	
	return 0;
}
