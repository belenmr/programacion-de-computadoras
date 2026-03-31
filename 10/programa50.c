#include <stdio.h>

int main()
{
    int i, edad;
	int cantTM = 5, cantTT = 6, cantTN = 11;
    int sumaTM = 0, sumaTT = 0, sumaTN = 0;
    int promTM, promTT, promTN;

    printf("Ingrese las edades del Turno Manana:\n");
    for (i = 1; i <= cantTM; i++)
    {
        printf("Estudiante %i: ", i);
        scanf("%i", &edad);
        sumaTM += edad;
    }
    promTM = sumaTM / cantTM;


    printf("\nIngrese las edades del Turno Tarde:\n");
    for (i = 1; i <= cantTT; i++)
    {
        printf("Estudiante %i: ", i);
        scanf("%i", &edad);
        sumaTT += edad;
    }
    promTT = sumaTT / cantTT;


    printf("\nIngrese las edades del Turno Noche:\n");
    for (i = 1; i <= cantTN; i++)
    {
        printf("Estudiante %i: ", i);
        scanf("%i", &edad);
        sumaTN += edad;
    }
    promTN = sumaTN / cantTN;

    printf("\n--- Promedios por Turno ---\n");
    printf("Turno Manana: %i\n", promTM);
    printf("Turno Tarde: %i\n", promTT);
    printf("Turno Noche: %i\n", promTN);

    printf("El turno con el promedio de edades menor es: ");
    if (promTM < promTT && promTM < promTN)
    {
        printf("Turno Manana");
    }
    else if (promTT < promTN)
    {
        printf("Turno Tarde");
    }
    else
    {
        printf("Turno Noche");
    }

    return 0;
}