#include <stdio.h>

int main ()
{
	int lado;

	printf("Largo del lado del cuadrado: ");
	scanf("%i", &lado);

	for (int i = 0; i < lado; i++)
	{
		for (int j = 0; j < lado; j++)
		{	
			// Primera columna: j == 0
			// Ultima columna: j == lado - 1
			// Primera fila: i == 0
			// Ultima fila: i == lado - 1
			if (i == 0 || i == lado - 1 || j == 0 || j == lado - 1)
			{
				printf("X ");
			}
			else
			{
				printf("  ");
				
			}
						
		}
		printf("\n");

	}

	return 0;
}