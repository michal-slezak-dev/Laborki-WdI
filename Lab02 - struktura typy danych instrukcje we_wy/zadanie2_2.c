//
// Created by micha on 06.11.2023.
//

#include <stdio.h>
#include <string.h>
#define MAX_DL_NAPISU 20
int main()
{

    char imie[MAX_DL_NAPISU] = "", nazwisko[MAX_DL_NAPISU] = "";

    int nr_albumu = 0, wiek = 0, n = 0;
//    char zainteresowania[3][MAX_DL_NAPISU] = {"programowanie", "koszykowka", "czytanie"};

    printf("Podaj swoje imie: ");
    gets(imie);
    printf("Podaj swoje nazwisko: ");
    gets(nazwisko);
    printf("Podaj swoj numer albumu: ");
    scanf("%d", &nr_albumu);
    printf("Podaj swoj wiek: ");
    scanf("%d", &wiek);

    printf("Podaj liczbe zainteresowan: ");
    scanf("%d", &n);

    char zainteresowania[n][MAX_DL_NAPISU];

    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d zainteresowanie: ", i + 1);
        scanf("%s", &zainteresowania[i]);
//        fgets(zainteresowania[i], MAX_DL_NAPISU, stdin);

//        int dl = strlen(zainteresowania[i]);
//        if (zainteresowania[i][dl - 1] == '\n')
//        {
//            zainteresowania[i][dl - 1] = '\0';
//        }
//        else
//        {
//            int zn;
//            while ((zn = getchar()) != '\n' && zn != EOF) {}
//        }

    }


    int suma = nr_albumu + wiek;
    printf("Nazywasz sie %s %s, twoj numer albumu to %d, masz %d lat, numer albumu + wiek = %d\nTwoje zainteresowania to: ", imie, nazwisko, nr_albumu, wiek, suma);
    int j;
    for (j = 0; j < n; j++)
    {
        printf("%s ", zainteresowania[j]);
    }



    return 0;
}
