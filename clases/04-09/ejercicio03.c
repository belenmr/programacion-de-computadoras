#include <stdio.h>

int main()
{
    int base;

	printf("Indique base del triangulo: ");
	scanf("%i", &base);

	for (int i = 1; i <= base; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf("X ");
		}
		printf("\n");

	}

    return 0;
}
