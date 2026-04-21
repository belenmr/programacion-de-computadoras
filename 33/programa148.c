#include <stdio.h>

#define TAMANO 5

void cargar (int vec[TAMANO])
{
    for (int i = 0; i < TAMANO; i++)
    {
        printf("Ingrese elemento de %i del vector: ", i);
        scanf("%i", &vec[i]);
    }    
}

void mayorMenor(int vec[TAMANO],int *pMayor,int *pMenor)
{
    *pMayor = vec[0];
    *pMenor = vec[0];

    for (int i = 0; i < TAMANO; i++)
    {
        if (vec[i] < *pMenor)
        {
            *pMenor = vec[i];
        }

        if (vec[i] > *pMayor)
        {
            *pMayor = vec[i];
        }
        
        
    }
    
}

int main ()
{
    int vector[TAMANO];
    int mayor, menor;

    cargar(vector);

    mayorMenor(vector, &mayor, &menor);

    printf("El elemento mayor es: %i\n", mayor);
    printf("El elemento menor es: %i\n", menor);

    return 0;
}