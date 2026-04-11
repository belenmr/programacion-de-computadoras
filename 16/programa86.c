#include <stdio.h>

void calcularCuadrado() {
	int numero, cuadrado;
	printf("--- Cálculo del Cuadrado ---\n");
	printf("Ingrese un número entero: ");
	scanf("%i", &numero);
	cuadrado = numero * numero;
	printf("El cuadrado de %i es: %i\n\n", numero, cuadrado);
}

void calcularProducto() {
	int num1, num2, producto;
	printf("--- Cálculo del Producto ---\n");
	printf("Ingrese el primer valor: ");
	scanf("%i", &num1);
	printf("Ingrese el segundo valor: ");
	scanf("%i", &num2);
	producto = num1 * num2;
	printf("El producto de %i * %i es: %i\n\n", num1, num2, producto);
}

int main() {
	calcularCuadrado();
	calcularProducto();

	printf("Proceso finalizado.\n");
	return 0;
}