//
// Created by micha on 06.11.2023.
//

#include <stdio.h>

int main()
{
    int tabl[3] = {};
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("Wprowadz %d liczbe: ", i + 1);
        scanf("%d", &tabl[i]);
    }

    if (tabl[0] == tabl[1] || tabl[1] == tabl[2] || tabl[0] == tabl[2]){
        printf("1");
    }
    else
    {
        printf("0");
    }


    return 0;
}