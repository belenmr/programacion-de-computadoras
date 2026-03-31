#include<stdio.h>

int main()
{
	int i, num, multiplo3, multiplo5;
	multiplo3 = 0;
	multiplo5 = 0;

	for (i = 1; i <= 10; i++)
	{
		printf("Ingrese un numero entero: ");
		scanf("%i", &num);

		if (num %3 == 0)
		{
			multiplo3++;
		}

		if (num %5 == 0)
		{
			multiplo5++;
		}
	}

	printf("Cantidad de valores ingresados multiplos de 3: %i \n", multiplo3);
	printf("Cantidad de valores ingresados multiplos de 5: %i", multiplo5);

	return 0;
}