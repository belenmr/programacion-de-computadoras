#include <stdio.h>

int main()
{
    int n, i, l1, l2, l3;
    int cantEquiletero = 0, cantIsosceles = 0, cantEscaleno = 0;

    printf("¿Cuantos triangulos desea procesar?: ");
    scanf("%i", &n);

    for (i = 1; i <= n; i++)
    {
        printf("\n--- Triangulo %i ---\n", i);
        printf("Ingrese lado 1: ");
        scanf("%i", &l1);
        printf("Ingrese lado 2: ");
        scanf("%i", &l2);
        printf("Ingrese lado 3: ");
        scanf("%i", &l3);

        if (l1 == l2 && l2 == l3)
        {
            printf("Tipo: Equilatero\n");
            cantEquiletero++;
        }
        else if (l1 == l2 || l1 == l3 || l2 == l3)
        {
            printf("Tipo: Isosceles\n");
            cantIsosceles++;
        }
        else
        {
            printf("Tipo: Escaleno\n");
            cantEscaleno++;
        }
    }

    printf("Cantidad de Equilateros: %i\n", cantEquiletero);
    printf("Cantidad de Isosceles: %i\n", cantIsosceles);
    printf("Cantidad de Escalenos: %i\n", cantEscaleno);

    printf("\nTipo con menor cantidad: ");
    if (cantEquiletero < cantIsosceles && cantEquiletero < cantEscaleno)
    {
        printf("Equilatero");
    }
    else if (cantIsosceles < cantEscaleno)
    {
        printf("Isosceles");
    }
    else
    {
        printf("Escaleno");
    }

    return 0;
}