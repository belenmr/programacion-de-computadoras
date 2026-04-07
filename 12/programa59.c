#include <stdio.h>

#define ELEM 8

int main ()
{
	int i;
	int elementos[ELEM];
	int suma = 0, mayor50 = 0, sumaMayores36 = 0;

	for (i = 0; i < ELEM; i++)
	{
		printf("Ingrese un numero entero: ");
        scanf("%i", &elementos[i]);
		suma += elementos[i];

		if (elementos[i] > 50)
		{
			mayor50++;
		}

		if (elementos[i] > 36)
		{
			sumaMayores36 += elementos[i];
		}
		
	}

	printf("==========================================");
	printf("\nValor acumulado de todos los elementos del vector: %i", suma);
	printf("\nValor acumulado de los elementos del vector que son mayores a 36: %i", sumaMayores36);
	printf("\nCantidad de elementos del vector que son mayor a 50: %i", mayor50);
	
	return 0;
}