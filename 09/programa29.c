#include<stdio.h>

int main()
{
    int contador, suma, num, promedio;
    contador = 1;
    suma = 0;

    while ( contador <= 10)
    {
        printf("Ingrese un num: ");
        scanf("%i", &num);
        suma = suma + num;
        contador = contador + 1;
    }
    promedio = suma / 10;

    printf("La suma de los 10 numeros es: ");
    printf("%i", suma);
    printf("\n");
    printf("El promedio es: ");
    printf("%i", promedio);

    return 0;
}