#include <stdio.h>

// Función que recibe el lado y retorna el perímetro
int calcularPerimetro(int lado) {
    int perimetro = lado * 4;
    return perimetro;
}

int main() {
    int ladoCuadrado, resultado;

    printf("Ingrese el valor del lado del cuadrado: ");
    scanf("%i", &ladoCuadrado);

    resultado = calcularPerimetro(ladoCuadrado);

    printf("El perimetro del cuadrado es: %i\n", resultado);

    // Ejemplo de uso directo en una expresión
    printf("Si el lado fuera el triple, el perimetro seria: %i\n", calcularPerimetro(ladoCuadrado * 3));

    return 0;
}