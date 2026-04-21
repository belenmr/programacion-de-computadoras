#include <stdio.h>

int main()
{
    int filas;
    printf("Ingrese la altura de la piramide invertida: ");
    scanf("%i", &filas);

    // El bucle de filas va de atrás para adelante (desde el máximo hasta 1)
    for (int i = filas; i >= 1; i--)
	{
        for (int j = 1; j <= (filas - i); j++) {
            printf(" ");
        }

        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("X");
        }

        printf("\n");
    }

    return 0;
}