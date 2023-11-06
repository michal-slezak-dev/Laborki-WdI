//
// Created by micha on 06.11.2023.
//

#include <stdio.h>

int main()
{
    unsigned int a = 3, b = 5, c = 25;
    long int l = 230000000, k = 320000000;
    double f1 = 0.5, f2 = 0.2;
    char zn1 = 'a', zn2 = 'b';

    // dodawanie
    printf("zn1 + a = %c + %d = %d + %d = %c\n", zn1, a, zn1, a, zn1 + a);
    printf("zn2 + b = %c + %d = %d + %d = %c\n", zn2, b, zn2, b, zn2 + b);

    // odejmowanie
    printf("l - k = %li - %li = %li\n", l, k, l - k);

    // mnożenie
    printf("f1 * f2 = %f * %f = %f\n", f1, f2, f1 * f2);

    // dzielenie
    printf("c / b = %d / %d = %d\n", c, b, c / b);

    // modulo
    printf("b modulo c = %d %% %d = %d\n", b, c, b % c);

    return 0;
}