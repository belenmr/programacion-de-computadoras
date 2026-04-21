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
			printf("X ");
		}
		printf("\n");

	}

	return 0;
}