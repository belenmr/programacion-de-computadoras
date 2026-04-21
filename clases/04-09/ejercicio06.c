#include <stdio.h>

int main()
{
    int n;
    printf("Ingrese cantidad de filas de la diagonal: ");
    scanf("%i", &n);

    for (int i = 0; i < n; i++)
	{
        for (int j = 0; j < n; j++)
		{
            if (i == j)
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