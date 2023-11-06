//
// Created by micha on 06.11.2023.
//

#include <stdio.h>

int main()
{
    int liczba = 0;
    printf("Wczytaj liczbe do odwrocenia: ");
    scanf("%d", &liczba);

    printf("Odwrocona liczba %d, to: ", liczba);
    while (liczba > 0){
        int cyfra = liczba % 10;
        printf("%d", cyfra);
        liczba /= 10;
    }

    return 0;
}