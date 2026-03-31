#include <stdio.h>

int main()
{
    int n, i, x, y;
    int cuadrante1 = 0, cuadrante2 = 0, cuadrante3 = 0, cuadrante4 = 0;

    printf("¿Cuantos puntos desea ingresar?: ");
    scanf("%i", &n);

    for (i = 1; i <= n; i++)
    {
        printf("\n--- Punto %i ---\n", i);
        printf("Ingrese coordenada X: ");
        scanf("%i", &x);
        printf("Ingrese coordenada Y: ");
        scanf("%i", &y);

        if (x > 0 && y > 0)
        {
            cuadrante1++;
        }
        else if (x < 0 && y > 0)
        {
            cuadrante2++;
        }
        else if (x < 0 && y < 0)
        {
            cuadrante3++;
        }
        else if (x > 0 && y < 0)
        {
            cuadrante4++;
        }
        else
        {
            printf("El punto esta sobre un eje o en el origen (0,0).\n");
        }
    }

    printf("\n--- Resultados por Cuadrante ---\n");
    printf("Primer Cuadrante: %i\n", cuadrante1);
    printf("Segundo Cuadrante: %i\n", cuadrante2);
    printf("Tercer Cuadrante: %i\n", cuadrante3);
    printf("Cuarto Cuadrante: %i\n", cuadrante4);

    return 0;
}