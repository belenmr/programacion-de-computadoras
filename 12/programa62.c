#include <stdio.h>

#define TAM 10

int main() 
{
    int vector[TAM];
    int i, ordenado = 1; // 1 = verdadero, 0 = falso

    printf("Carga de vector de %i numeros enteros:\n", TAM);
    for (i = 0; i < TAM; i++) 
    {
        printf("Elemento %i: ", i);
        scanf("%i", &vector[i]);
    }

    // El for llega hasta TAM - 1 para no desbordar al comparar con [i+1]
    for (i = 0; i < TAM - 1; i++) 
    {
        if (vector[i] > vector[i + 1]) 
        {
            ordenado = 0; 
            break;  // Como ya fallo, no hace falta seguir revisando
        }
    }

    if (ordenado == 1) 
    {
        printf("\nEl vector esta ordenado de menor a mayor.\n");
    } 
    else 
    {
        printf("\nEl vector NO esta ordenado de menor a mayor.\n");
    }

    return 0;
}