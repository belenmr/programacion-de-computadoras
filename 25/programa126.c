#include <stdio.h>
#include <string.h>

#define CANT 5
#define LARGO 41

void cargar(char nombres[CANT][LARGO], int notas[CANT])
{
    for (int f = 0; f < CANT; f++)
	{
        printf("Ingrese nombre del alumno [%i]: ", f + 1);
        gets(nombres[f]);

        printf("Ingrese nota de %s: ", nombres[f]);
        scanf("%i", &notas[f]);

        getchar();
        printf("\n");
    }
}

void ordenarPorNota(char nombres[CANT][LARGO], int notas[CANT])
{
    int auxNota;
    char auxNombre[LARGO];

    for (int k = 0; k < CANT - 1; k++)
	{
        for (int f = 0; f < (CANT - 1) - k; f++)
		{
            // Criterio: Mayor a menor (Descendente)
            if (notas[f] < notas[f + 1])
			{
                
                // 1. Intercambio de notas
                auxNota = notas[f];
                notas[f] = notas[f + 1];
                notas[f + 1] = auxNota;

                // 2. Intercambio de nombres (Sincronización)
                strcpy(auxNombre, nombres[f]);
                strcpy(nombres[f], nombres[f + 1]);
                strcpy(nombres[f + 1], auxNombre);
            }
        }
    }
}

void imprimir(char nombres[CANT][LARGO], int notas[CANT])
{
    printf("--- Listado de Alumnos (ordenado por nota) ---\n");
    printf("%-40s %-10s\n", "Nombre", "Nota");

    for (int f = 0; f < CANT; f++)
	{
        printf("%-40s %-10i\n", nombres[f], notas[f]);
    }
}

int main()
{
    char nombres[CANT][LARGO];
    int notas[CANT];

    cargar(nombres, notas);
    ordenarPorNota(nombres, notas);
    imprimir(nombres, notas);

    return 0;
}