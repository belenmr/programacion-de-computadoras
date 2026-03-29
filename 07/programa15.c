#include<stdio.h>

int main()
{
	int num;
    printf("Ingrese un numero entero: ");
    scanf("%i",&num);

	if (num >= 0)
	{
		if (num == 0)
		{
			printf("El numero ingresado es cero");
		}
		else
		{
			printf("El numero ingresado es positivo");
		}
		
	}
	else
	{
		printf("El numero ingresado es negativo");
	}

	return 0;
}