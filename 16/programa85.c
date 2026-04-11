#include<stdio.h>s

void cargaSuma()
{
	int valor1, valor2, suma;
	printf("Ingrese el primer valor entero: ");
	scanf("%i", &valor1);
	printf("Ingrese el segundo valor entero: ");
	scanf("%i", &valor2);
	suma=valor1+valor2;
	printf("La suma de los dos valores es: %i", suma);
}

void separacion()
{
	printf("\n*******************************\n");
}


int main()
{
	cargaSuma();
	separacion();
	cargaSuma();
	separacion();
	
	return 0;
}