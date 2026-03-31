#include<stdio.h>

int main()
{
	int i, cantidad, n, num;
	cantidad = 0;

	printf("Cuantos valores ingresara:");
	scanf("%i",&n);

	for (i = 1; i <= n; i++)
	{
		printf("Ingrese un numero entero:");
		scanf("%i", &num);

		if (num >= 1000)
		{
			cantidad++;
		}
	}

	printf("Cantidad de numeros ingresados mayores o iguales a 1000: %i", cantidad);

	return 0;
}