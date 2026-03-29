#include <stdio.h>

int main()
{
    int cantPreguntas, cantCorrectas, porcentaje;
    printf("Ingrese la cantidad total de preguntas realizadas: ");
    scanf("%i", &cantPreguntas);
    printf("Ingrese la cantidad de preguntas contestadas correctamente: ");
    scanf("%i", &cantCorrectas);
    porcentaje = (cantCorrectas * 100) / cantPreguntas;
    printf("El porcentaje obtenido es: %i%%\n", porcentaje);

    if (porcentaje >= 90)
    {
        printf("Nivel maximo");
    }
    else
    {
        if (porcentaje >= 75)
        {
            printf("Nivel medio");
        }
        else
        {
            if (porcentaje >= 50)
            {
                printf("Nivel regular");
            }
            else
            {
                printf("Fuera de nivel");
            }
        }
    }

    return 0;
}