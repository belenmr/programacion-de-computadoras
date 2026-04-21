#include <stdio.h>

int main() 
{
    int n;
    printf("Ingrese la altura de la V invertida: ");
    scanf("%i", &n);

    for (int i = 1; i <= n; i++)
	{
        // Espacios externos para centrar
        for (int j = 1; j <= n - i; j++)
		{
            printf(" ");
        }

        // Primera X
        printf("X");

        // Espacios internos
        if (i > 1)
		{
            // El ancho interno crece: 1, 3, 5...
            for (int k = 1; k <= (2 * i - 3); k++) {
                printf(" ");
            }
            printf("X"); // Segunda X
        }

        printf("\n");
    }

    return 0;
}