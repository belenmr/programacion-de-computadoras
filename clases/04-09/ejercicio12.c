#include <stdio.h>

int main ()
{
	int cant;

	printf("Ingrese cantidad de caracteres: ");
	scanf("%i", &cant);

	for (int i = 0; i < cant; i++)
	{
		if (i % 2 == 0)
		{
			printf("X");
		}
		else
		{
			printf("_");
		}		
	}

	printf("\n");

	return 0;
}