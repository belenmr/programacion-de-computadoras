#include <stdio.h>

int main()
{
    int edad1, edad2;
    char sexo1, sexo2;

    printf("---------- Datos Persona 1 ----------\n");
    printf("Ingrese edad: ");
    scanf("%i", &edad1);
    printf("Ingrese sexo (m/f): ");
    scanf(" %c", &sexo1);

    printf("\n---------- Datos Persona 2 ----------\n");
    printf("Ingrese edad: ");
    scanf("%i", &edad2);
    printf("Ingrese sexo (m/f): ");
    scanf(" %c", &sexo2);


    printf("\n======================================\n");
    printf("Resultado - Persona Mayor:\n");

    if (edad1 > edad2)
    {
        printf("Edad: %i | Sexo: %c\n", edad1, sexo1);
    }
    else if (edad2 > edad1)
    {
        printf("Edad: %i | Sexo: %c\n", edad2, sexo2);
    }
    else
    {
        printf("Ambas personas tienen la misma edad (%i).\n", edad1);
        printf("Sexos: Persona 1 (%c) - Persona 2 (%c)\n", sexo1, sexo2);
    }
    printf("======================================\n");

    return 0;
}