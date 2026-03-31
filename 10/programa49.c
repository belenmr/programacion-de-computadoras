#include <stdio.h>

int main()
{
    int i, num;
    int cantNegativos = 0;
    int cantPositivos = 0;
    int cantMultiplos15 = 0;
    int sumaPares = 0;

    for (i = 1; i <= 10; i++)
    {
        printf("Ingrese valor entero nro %i: ", i);
        scanf("%i", &num);

        if (num < 0)
        {
            cantNegativos++;
        }
        else if (num > 0)
        {
            cantPositivos++;
        }

        if (num % 15 == 0 && num != 0)
        {
            cantMultiplos15++;
        }

        if (num % 2 == 0)
        {
            sumaPares = sumaPares + num;
        }
    }

    printf("\nCantidad de valores negativos: %i\n", cantNegativos);
    printf("Cantidad de valores positivos: %i\n", cantPositivos);
    printf("Cantidad de multiplos de 15: %i\n", cantMultiplos15);
    printf("Valor acumulado de los numeros pares: %i\n", sumaPares);

    return 0;
}