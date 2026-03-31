#include<stdio.h>

int main()
{
	int i, nota, aprobados, reprobados;
	aprobados = 0;
	reprobados = 0;

	for (i = 1; i <= 10; i++)
	{
		printf("Ingrese la nota:");
		scanf("%i", &nota);

		if (nota >= 7)
		{
			aprobados = aprobados + 1; // aprobados++;
		}
		else
		{
			reprobados = reprobados + 1; // reprobados++;
		}
	}

	printf("Cantidad de aprobados: %i \n", aprobados);
	printf("Cantidad de reprobados: %i", reprobados);

	return 0;
}