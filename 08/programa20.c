#include<stdio.h>

int main()
{
    int dd,mm,aa;
    printf("Ingrese numero de dia: ");
    scanf("%i",&dd);
    printf("Ingrese numero de mes: ");
    scanf("%i",&mm);
    printf("Ingrese numero de año: ");
    scanf("%i",&aa);
	if (mm == 12 && dd == 25)
	{
		printf("La fecha ingresada corresponde a Navidad");
	}
	
	return 0;
}