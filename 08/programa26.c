#include <stdio.h>

int main()
{
    int num1, num2, num3, mayor, menor;
    printf("Ingrese el primer valor: ");
    scanf("%i", &num1);
    printf("Ingrese el segundo valor: ");
    scanf("%i", &num2);
    printf("Ingrese el tercer valor: ");
    scanf("%i", &num3);

    // --- Busco el mayor ---
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            mayor = num1;
        }
        else
        {
            mayor = num3;
        }
    }
    else
    {
        if (num2 > num3)
        {
            mayor = num2;
        }
        else
        {
            mayor = num3;
        }
    }

    // --- Busco el menor ---
    if (num1 < num2)
    {
        if (num1 < num3)
        {
            menor = num1;
        }
        else
        {
            menor = num3;
        }
    }
    else
    {
        if (num2 < num3)
        {
            menor = num2;
        }
        else
        {
            menor = num3;
        }
    }

    printf("El rango de variacion es:\n");
    printf("Mayor: %i\n", mayor);
    printf("Menor: %i\n", menor);

    return 0;
}