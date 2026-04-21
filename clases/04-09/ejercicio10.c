#include <stdio.h>

int main()
{
    int n;
    printf("Ingrese la altura de la V: ");
    scanf("%i", &n);

    for (int i = 0; i < n; i++)
	{
        // Espacios iniciales
        for (int j = 0; j < i; j++)
		{
            printf(" ");
        }

        printf("X"); // Primera X

        // Espacios internos
        // En la última fila (el vértice), no lleva espacios internos
        for (int j = 0; j < 2 * (n - i - 1) - 1; j++)
		{
            printf(" ");
        }

        if (i != n - 1)
		{
            printf("X"); // Segunda X
        }

        printf("\n");
    }

    return 0;
}