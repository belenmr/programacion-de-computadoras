#include <stdio.h>

int main ()
{
	int num, producto = 0;

	printf("Ingrese un numero del 1 al 10 para ver su tabla de multiplicar: ");
	scanf("%i", &num);

	if (num >= 1 && num <=10)
	{
		printf("\n--- Tabla de multiplicar del %i ---\n", num);
	
		for (int i = 1; i <= 12; i++)
		{
			producto = num * i;
			printf("%i x %i = %i\n", num, i, producto);  
		}
	}
	else
	{
		printf("Error: El numero ingresado debe ser del 1 al 10 ");
	}
	
	return 0;
}