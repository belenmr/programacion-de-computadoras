#include<stdio.h>

int main()
{
    int num1, num2, num3, mayor;
    printf("Ingrese un numero entero: ");
    scanf("%i",&num1);
    printf("Ingrese otro numero entero distinto al anterior: ");
    scanf("%i",&num2);
    printf("Ingrese un tercer numero entero distinto a los anteriores: ");
    scanf("%i",&num3);
	
	if (num1 > num2)
	{
		if (num1 > num3)
		{
			mayor = num1;
		}
		else
		{
			mayor = num3;
		}
		
	}
	else
	{
		if (num2 > num3)
		{
			mayor = num2;
		}
		else
		{
			mayor = num3;
		}
	}

	printf("El mayor es: %i", mayor);
	
	return 0;
}