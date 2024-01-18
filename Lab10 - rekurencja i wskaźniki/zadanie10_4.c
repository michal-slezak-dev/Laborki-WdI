#include <stdio.h>
/* Michał Ślęzak */
int main() 
{
   int *p;
   int a;
   int n = 0;   

   printf("Podaj wartosc n: ");
   scanf("%d", &n);
   
   p = &a;
   *p = n;
   
   printf("Wartosc n: %d\n", n);
   printf("Wartosc p: %d\n", p);
   printf("Wartosc a: %d\n", a);
   printf("Adres a: %p\n", &a);

   return 0;
}
