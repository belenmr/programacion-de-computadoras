#include <stdio.h>

// Función que recibe dos parámetros enteros y muestra el mayor
void mostrarMayor(int v1, int v2) {
    printf("--- Resultado de la comparación ---\n");
    if (v1 > v2) {
        printf("El valor mayor es: %i\n", v1);
    } else if (v2 > v1) {
        printf("El valor mayor es: %i\n", v2);
    } else {
        printf("Ambos valores son iguales (%i).\n", v1);
    }
    printf("------------------------------------\n");
}

int main ()
{
	int valor1, valor2;

	printf("Ingrese el primer valor: ");
    scanf("%i", &valor1);
    printf("Ingrese el segundo valor: ");
    scanf("%i", &valor2);

	// Invocamos la función pasando las variables como argumentos
    mostrarMayor(valor1, valor2);
	
	return 0;
}