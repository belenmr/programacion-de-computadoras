#include <stdio.h>

// Función que recibe el lado y retorna la superficie calculada
int retornarSuperficie(int lado) {
    int superficie = lado * lado;
    return superficie; // Devuelve el entero a quien llamó a la función
}

int main() {
    int valorLado, resultado;

    printf("Ingrese el valor del lado del cuadrado: ");
    scanf("%i", &valorLado);

    // Guardamos el valor que "vuelve" de la función en la variable resultado
    resultado = retornarSuperficie(valorLado);

    printf("La superficie del cuadrado es: %i\n", resultado);

    return 0;
}