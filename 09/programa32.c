#include<stdio.h>

int main()
{
    int cantidadPersonas, i;
    float altura, suma, promedio;
    suma = 0;
    i = 1;
    printf("¿Cuantas personas desea ingresar?: ");
    scanf("%i", &cantidadPersonas);

    while (i <= cantidadPersonas)
    {
        printf("Ingrese la altura de la persona %i: ", i);
        scanf("%f", &altura);

        suma = suma + altura;
        i = i + 1;
    }

    if (cantidadPersonas > 0) 
    {
        promedio = suma / cantidadPersonas;
        printf("\nLa altura promedio es: %.2f metros\n", promedio);
    }
    else 
    {
        printf("\nNo se ingresaron alturas para promediar.\n");
    }
    
    return 0;
}