#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	
	char slowa[10][201];
	
	int i = 0;
	int licznik = 0;
	while(licznik != 10)
	{	
		int wew = 0;
		fflush(stdin);
		printf("Podaj %d slowo (slowo sklada sie z malych liter alfabetu lacinskiego): ", i + 1);
		gets(slowa[i]);
		
		int j;
		for(j = 0; slowa[i][j]; j++)
		{
			if(islower(slowa[i][j]))
				wew++;
		}
		if(wew != strlen(slowa[i]))
		{
			printf("To nie slowo, wpisz jeszcze raz\n");
		}
		else
		{
			i++;
			licznik++;
		}
	}
		
		
//	char slowo1[10] = "albav";
//

//	printf("%c %c", slowo1[0], slowo1[strlen(slowo1) - 1]);	
	printf("\nSlowa, ktore maja ta sama 1. i ostatnia litere oraz dlugosc nie mniejsza niz 5 to: \n");
	for(i = 0; i < 10; i++)
	{			
		if(slowa[i][0] == slowa[i][strlen(slowa[i]) - 1] && strlen(slowa[i]) >= 5)
			printf("%s\n", slowa[i]);	
	}



	
	return 0;
}