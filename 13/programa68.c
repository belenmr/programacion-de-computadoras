#include <stdio.h>

int main ()
{
	int num, suma = 0;
	char continua;

	do
	{
		printf("Ingrese un valor entero: ");
		scanf("%i", &num);

		suma += num;

		printf("Desea cargar otro valor [s/n]:");
        scanf(" %c", &continua);
		
	} while (continua == 'S' || continua == 's');
	
	printf("La suma de los valores ingresados es: %i", suma);

}