#include <stdio.h>

int main()
{
    int suma=0;
    int valor;
    char continua;

    do {
        printf("Ingrese un valor entero: ");
        scanf("%i",&valor);
        suma = suma + valor;
        printf("Desea cargar otro valor [s/n]: ");
        scanf(" %c",&continua);
    } while(continua =='s');

    printf("La suma de todos los valores ingresados es: ");
    printf("%i",suma);

    return 0;
}