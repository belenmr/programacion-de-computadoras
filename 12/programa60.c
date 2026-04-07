#include <stdio.h>

#define ELEM 4

int main ()
{
	int i;
	int vector1[ELEM], vector2[ELEM], vectorSuma[ELEM];

	printf("---------------------- Vector 1 ----------------------\n");

	for (i = 0; i < ELEM; i++)
	{
		printf("Ingrese un numero entero para la posicion %i: ", i);
		scanf("%i", &vector1[i]);
	}

	printf("---------------------- Vector 2 ----------------------\n");

	for (i = 0; i < ELEM; i++)
	{
		printf("Ingrese un numero entero para la posicion %i: ", i);
		scanf("%i", &vector2[i]);
	}

	printf("--------- Vector Suma componente a componente ---------\n");

	for (i = 0; i < ELEM; i++)
	{
		vectorSuma[i] = vector1[i] + vector2[i];
		printf("vector1[%i] + vector2[%i] = vectorSuma[%i] => %i + %i = %i\n", i, i, i, vector1[i], vector2[i], vectorSuma[i]);
	}
	
	
	return 0;
}