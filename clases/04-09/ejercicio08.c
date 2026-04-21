#include <stdio.h>

int main()
{
    int n;
    printf("Cantidad de filas de la mitad superior del rombo: ");
    scanf("%i", &n);

    // --- PARTE SUPERIOR (Pirámide normal) ---
    for (int i = 1; i <= n; i++)
	{
        
        for (int j = 1; j <= n - i; j++)
		{
            printf(" ");
        }
        
        for (int k = 1; k <= (2 * i - 1); k++)
		{
            printf("X");
        }

        printf("\n");
    }

    // --- PARTE INFERIOR (Pirámide invertida) ---
    // Empezamos desde n-1 para no repetir la línea más larga
    for (int i = n - 1; i >= 1; i--)
	{
        
        for (int j = 1; j <= n - i; j++)
		{
            printf(" ");
        }
        
        for (int k = 1; k <= (2 * i - 1); k++)
		{
            printf("X");
        }

        printf("\n");
    }

    return 0;
}