#include <stdio.h>

int main()
{
    int num;
    printf("Ingrese un numero entero positivo de hasta tres cifras: ");
    scanf("%i", &num);

    if (num <= 0) 
    {
        printf("Error: El numero debe ser positivo.");
    }
    else 
    {
        if (num < 10)
        {
            printf("Tiene 1 cifra.");
        }
        else
        {
            if (num < 100)
            {
                printf("Tiene 2 cifras.");
            }
            else
            {
                if (num < 1000)
                {
                    printf("Tiene 3 cifras.");
                }
                else
                {
                    printf("Error: Tiene mas de 3 cifras.");
                }
            }
        }
    }

    return 0;
}