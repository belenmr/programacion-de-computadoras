#include <stdio.h>
#include <string.h>

#define CANT 5
#define LARGO 31

void cargar(char paises[CANT][LARGO], int habitantes[CANT])
{
    for (int f = 0; f < CANT; f++)
	{
        printf("Ingrese nombre del pais [%i]: ", f + 1);
        gets(paises[f]);

        printf("Ingrese cantidad de habitantes de %s: ", paises[f]);
        scanf("%i", &habitantes[f]);

        getchar();
        printf("\n");
    }
}

void ordenarPorHabitantes(char paises[CANT][LARGO], int habitantes[CANT])
{
    int auxHab;
    char auxPais[LARGO];

    for (int k = 0; k < CANT - 1; k++)
	{
        for (int f = 0; f < (CANT - 1) - k; f++)
		{
            // Criterio: Mayor a menor (Descendente)
            if (habitantes[f] < habitantes[f + 1])
			{
                
                // 1. Intercambio de cant habitantes
                auxHab = habitantes[f];
                habitantes[f] = habitantes[f + 1];
                habitantes[f + 1] = auxHab;

                // 2. Intercambio de paises
                strcpy(auxPais, paises[f]);
                strcpy(paises[f], paises[f + 1]);
                strcpy(paises[f + 1], auxPais);
            }
        }
    }
}


void imprimir(char paises[CANT][LARGO], int habitantes[CANT])
{
    printf("--- Listado de Paises (ordenado por cantidad de habitantes) ---\n");
    printf("%-30s %-30s\n", "Pais", "Habitantes");
	
    for (int f = 0; f < CANT; f++)
	{
        printf("%-30s %-30i\n", paises[f], habitantes[f]);
    }
}

int main()
{
    char paises[CANT][LARGO];
    int habitantes[CANT];

    cargar(paises, habitantes);
    ordenarPorHabitantes(paises, habitantes);
    imprimir(paises, habitantes);

    return 0;
}