#include <stdio.h>

int main ()
{
	int num, sumaUltimos = 0;

	for (int i = 1; i <= 10; i++)
	{
		printf("Ingrese un numero: ");
		scanf("%i", &num);

		if (i > 5)
		{
			sumaUltimos = sumaUltimos + num;
		}
	}
	
	printf("\nLa suma de los ultimos 5 valores ingresados es: %i\n", sumaUltimos);    

	return 0;
}