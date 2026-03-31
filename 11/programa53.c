#include<stdio.h>

int main ()
{
	int cantidad1, cantidad2, cantidad3, suma;
	float peso;
	cantidad1 = 0;
	cantidad2 = 0;
	cantidad3 = 0;

	do
	{
		printf("Ingrese el peso de la pieza (con 0 finaliza):");
		scanf("%f",&peso);

		if (peso > 10.2)
		{
			cantidad1++;
		}
		else
		{
			if (peso >= 9.8)
			{
				cantidad2++;
			}
			else
			{
				if (peso > 0)
				{
					cantidad3++;
				}
				
			}
			
		}
		
	} while (peso != 0);
	
	suma = cantidad1 + cantidad2 + cantidad3;	
	printf("Cantidad de piezas con un peso mayor a 10.2 Kg: %i \n", cantidad1);
	printf("Cantidad de piezas con un peso entre 9.8 Kg y 10.2 Kg: %i \n", cantidad2);
	printf("Cantidad de piezas con un peso menor a 9.8 Kg: %i \n", cantidad3);
	printf("Cantidad de piezas procesadas en total: %i \n", suma);

	return 0;
}