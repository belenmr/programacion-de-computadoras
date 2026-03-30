#include<stdio.h>

int main ()
{
    int i, cantidad, num, cantPares, cantImpares;
	i = 1;
	cantImpares = 0;
	cantPares = 0;
	printf("¿Cuantos numeros desea ingresar?: ");
    scanf("%i", &cantidad);

    while (i <= cantidad)
    {
        printf("Ingrese un numero: ");
    	scanf("%i", &num);
		if ((num % 2) == 0)
		{
			cantPares = cantPares + 1;
		}
		else
		{
			cantImpares = cantImpares + 1;
		}

		i = i + 1;	
    }

	printf("Cantidad de numeros pares: %i", cantPares);
	printf("\n");
	printf("Cantidad de numeros impares: %i", cantImpares);

	return 0;
}