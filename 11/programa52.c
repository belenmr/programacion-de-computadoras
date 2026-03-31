#include<stdio.h>

int main ()
{
	int valor;
	float promedio;
	int suma = 0;
	int cantidad = 0;

	do
	{
		printf("Ingrese un valor entero (con 0 finaliza):");
		scanf("%i",&valor);

		if (valor != 0)
		{
			suma = suma + valor;
			cantidad++;
		}		
	} while (valor != 0);
	
	if (cantidad != 0)
	{
		promedio = (float)suma / cantidad;
		printf("El promedio de los valores ingresados es: %.2f", promedio);
	}
	else
	{
		printf("No se ingresaron valores.");
	}	
	
	return 0;
}