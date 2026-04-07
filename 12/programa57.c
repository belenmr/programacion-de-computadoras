#include <stdio.h>

int main() 
{
    float alturas[5];
    float suma = 0, promedio;
    int i, altos = 0, bajos = 0;

    for (i = 0; i < 5; i++) 
    {
        printf("Ingrese la altura de la persona %i: ", i + 1);
        scanf("%f", &alturas[i]);
        suma += alturas[i]; // Acumulación para el promedio
    }

    promedio = suma / 5;
    printf("\nEl promedio de alturas es: %.2f metros\n", promedio);

    for (i = 0; i < 5; i++) 
    {
        if (alturas[i] > promedio) 
        {
            altos++;
        } 
        else if (alturas[i] < promedio) 
        {
            bajos++;
        }
    }

    printf("Personas mas altas que el promedio: %i\n", altos);
    printf("Personas mas bajas que el promedio: %i\n", bajos);

    return 0;
}