#include <stdio.h>

int main()
{
	int n, i, cantidadMayor12 = 0;
	float base, altura, superficie;

	printf("¿Cuantos triangulos desea procesar?: ");
	scanf("%i", &n);

	for (i = 1; i <= n; i++)
	{
		printf("\n--- Triangulo %i ---\n", i);
		printf("Ingrese la base: ");
		scanf("%f", &base);
		printf("Ingrese la altura: ");
		scanf("%f", &altura);

		superficie = (base * altura) / 2;

		printf("Base: %.2f | Altura: %.2f | Superficie: %.2f\n", base, altura, superficie);

		if (superficie > 12)
		{
			cantidadMayor12++;
		}
	}

	printf("\n------------------------------------------\n");
	printf("Cantidad de triangulos con superficie mayor a 12: %i\n", cantidadMayor12);

	return 0;
}