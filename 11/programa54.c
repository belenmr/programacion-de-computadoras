#include<stdio.h>

int main ()
{
	int num, suma = 0;

	do
	{
		printf("Ingrese un valor entero (con 9999 finaliza):");
		scanf("%i",&num);

		suma = suma + num;

	} while (num != 9999);

	printf("Valor acumulado: %i \n", suma);
	
	if (suma == 0)
	{
		printf("El valor acumulado es cero");
	}
	else
	{
		if (suma > 0)
		{
			printf("El valor acumulado es mayor a cero");
		}
		else
		{
			printf("El valor acumulado es menor a cero");
		}		
	}	
	
	return 0;
}