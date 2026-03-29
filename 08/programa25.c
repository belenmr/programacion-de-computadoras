#include<stdio.h>

int main()
{
	float sueldo, sueldoFinal;
    int antiguedad;
    printf("Ingrese el sueldo del operario: ");
    scanf("%f", &sueldo);
    printf("Ingrese la antiguedad: ");
    scanf("%i", &antiguedad);

	if (sueldo < 500)
    {
        if (antiguedad >= 10)
        {
            sueldoFinal = sueldo * 1.20;
            printf("Sueldo con aumento del 20%%: %.2f", sueldoFinal);
        }
        else
        {
            sueldoFinal = sueldo * 1.05;
            printf("Sueldo con aumento del 5%%: %.2f", sueldoFinal);
        }
    }
    else
    {
        printf("Sueldo sin cambios: %.2f", sueldo);
    }

	return 0;
}