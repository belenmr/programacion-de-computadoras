#include<stdio.h>

int main ()
{
    int num;
	int i = 1;
	int max = 15;
	int sumaLista1 = 0;
	int sumaLista2 = 0;

	printf("LISTA 1: \n");
	while (i <= max)
	{
		printf("Ingrese un numero entero a la Lista 1 (posicion %i): ", i);
        scanf("%i", &num);

		sumaLista1 = sumaLista1 + num;
		i = i + 1;
	}
	
	i = 1; // se reinicia i para reutilizarlo

	printf("\nLISTA 2: \n");
	while (i <= max)
	{
		printf("Ingrese un numero entero a la Lista 2 (posicion %i): ", i);
        scanf("%i", &num);

		sumaLista2 = sumaLista2 + num;
		i = i + 1;
	}

	printf("\nResultados: \n");
    printf("Total Lista 1: %i \n", sumaLista1);
    printf("Total Lista 2: %i \n", sumaLista2);

	if (sumaLista1 > sumaLista2)
	{
		printf("Lista 1 mayor");
	}
	else if (sumaLista1 == sumaLista2)
	{
		printf("Listas iguales");
	}
	else
	{
		printf("Lista 2 mayor");
	}	
	
	return 0;
}