#include<stdio.h>

int main ()
{
	int i, num, promedio, suma = 0;
	for (i = 1; i <= 10; i++)
	{
		printf("Ingrese un numero entero: ");
		scanf("%i",&num);
		suma = suma + num;
	}
	
	promedio = suma / 10;

	printf("\nLa suma es: %i", suma);
	printf("\nEl promedio es: %i", promedio);

	return 0;
}