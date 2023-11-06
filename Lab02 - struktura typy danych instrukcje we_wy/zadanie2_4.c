//
// Created by micha on 06.11.2023.
//

#include <stdio.h>

int main()
{
    int n = 0;
    printf("Podaj liczbe ocen: ");
    scanf("%d", &n);

    int oceny[n] = {};
//    memset( boardAux, 0, length*length*sizeof(int) );
    int i;
    for (i = 0; i < n; i++){
        printf("Podaj %d ocene: ", i + 1);
        scanf("%d", &oceny[i]);
    }

    double srednia = 0;
    double suma = 0;
    int niedostateczne = 0; // 2

    int j;
    for (j = 0; j < n; j++){
        if (oceny[j] == 2)
            niedostateczne++;
        suma += oceny[j];
    }

    srednia = suma / n;
    printf("Srednia wartosc ocen: %lf, ilosc ocen niedostatecznych: %d", srednia, niedostateczne);

    return 0;
}