#include <stdio.h>

int main()
{
    int n;
    printf("Ingrese cantidad de filas de la diagonal inversa: ");
    scanf("%i", &n);

    for (int i = 0; i < n; i++)
	{
        for (int j = 0; j < n; j++)
		{
            if (i + j == n - 1)
			{
                printf("X");
            } else
			{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}