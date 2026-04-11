#include <stdio.h>

// Función que muestra la secuencia desde 1 hasta el valor recibido
void mostrarSerie(int tope) {
    if (tope < 1) {
        printf("Error: El valor debe ser mayor a 0.\n");
    } else {
        printf("Serie del 1 al %i:\n", tope);
        for (int i = 1; i <= tope; i++) {
            printf("%i ", i);
        }
        printf("\n");
    }
    printf("------------------------------------------\n");
}

int main() {
    int valor;

    printf("Ingrese un valor entero positivo para ver la serie: ");
    scanf("%i", &valor);

    mostrarSerie(valor);

    // Prueba con un valor negativo
    printf("Prueba de validacion con un negativo:\n");
    mostrarSerie(-5);

    return 0;
}