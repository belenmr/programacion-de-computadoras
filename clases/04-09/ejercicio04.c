#include <stdio.h>

int main()
{
    int filas;
    printf("Ingrese la altura de la piramide: ");
    scanf("%i", &filas);

    for (int i = 1; i <= filas; i++)
	{        
        for (int j = 1; j <= filas - i; j++) {
            printf(" "); // Espacios
        }

        // 2*i - 1 garantiza números impares: 1, 3, 5...
        for (int k = 1; k <= (2 * i - 1); k++)
		{
            printf("X");
        }

        printf("\n");
    }

    return 0;
}