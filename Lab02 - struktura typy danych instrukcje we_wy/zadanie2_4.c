// zadanie2.4
// WCY23IY3S1 Michał Ślęzak

#include <stdio.h>

int main()
{
	float oc1, oc2, oc3, oc4, oc5;
//    printf("Wpisz liczbe ocen: ");
//    scanf("%d", &n);
    //    double oceny[n];
	int niedostateczne = 0;
	
//	int i;
//	for(i = 0; i < 5; i++){
//		printf("Wprowadz %d ocene w formacie zmiennoprzeciwnkowym: ", i + 1);
//		scanf("%f", &oceny[i]);
//	}
	
//	double suma = 0.0;
//	int j;
//	for(j = 0; j < 5; j++){
//		if(oceny[j] == 2.0)
//			niedostateczne++;
//		suma = suma + oceny[j];
//		printf("%f", oceny[j]);
//	}
	
//	printf("%f", suma);
//	double srednia = suma / 5;
//robie to manualnie dla 5 ocen, bo tablica double cos nie dzialala
	printf("Wprowadz 1 ocene: ");
	scanf("%f", &oc1);
	
	printf("Wprowadz 2 ocene: ");
	scanf("%f", &oc2);
	
	printf("Wprowadz 3 ocene: ");
	scanf("%f", &oc3);
	
	printf("Wprowadz 4 ocene: ");
	scanf("%f", &oc4);
	
	printf("Wprowadz 5 ocene: ");
	scanf("%f", &oc5);
	
	float suma = oc1 + oc2 + oc3 + oc4 + oc5;
//	printf("%f", suma);
	if (oc1 == 2.0)
		niedostateczne++;
	if (oc2 == 2.0)
		niedostateczne++;
	if (oc3 == 2.0)
		niedostateczne++;
	if (oc4 == 2.0)
		niedostateczne++;
	if (oc5 == 2.0)
		niedostateczne++;
	float srednia =  suma / 5;
	printf("Srednia wprowadzonych ocen, to: %f, liczba ocen niedostatecznych to: %d", srednia, niedostateczne);
	
	
	
	return 0;
}
