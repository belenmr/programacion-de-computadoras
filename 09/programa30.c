#include<stdio.h>

int main()
{
    int contador, cantidadAptas, n;
    float longitud;
    contador = 1;
    cantidadAptas = 0;
    printf("Cantidad de piezas a procesar: ");
    scanf("%i", &n);
    while (contador <= n)
    {
        printf("Ingrese la medida de la pieza: ");
        scanf("%f", &longitud);
        if (longitud >= 1.20 && longitud <= 1.30)
        {
            cantidadAptas = cantidadAptas + 1;
        }
        contador = contador + 1;
    }
    printf("La cantidad de piezas aptas son: ");
    printf("%i", cantidadAptas);

    return 0;
}