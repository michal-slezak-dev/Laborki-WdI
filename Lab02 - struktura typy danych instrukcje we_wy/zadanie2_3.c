// zadanie2.3
// WCY23IY3S1 Michał Ślęzak

#include <stdio.h>

int main()
{
	int a, b, c;	
	
	printf("Wprowadz 1. liczbe: ");
	scanf("%d", &a);
	
	printf("Wprowadz 2. liczbe: ");
	scanf("%d", &b);
	
	printf("Wprowadz 3. liczbe: ");
	scanf("%d", &c);
	
	//dokladnie 2 liczby sa rowne, nie 3
	if ((a == b && a != c && b != c) || (b == c  && b != a && c != a) || (a == c && a != b && c != b)){
		printf("1");
	}else{
		printf("0");
	}
	
	return 0;
}
