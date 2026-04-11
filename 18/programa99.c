#include <stdio.h>

// Función que calcula la superficie
int retornarSuperficie(int lado1, int lado2) {
    int superficie = lado1 * lado2;
    return superficie;
}

int main() {
    int ladoA1, ladoA2, ladoB1, ladoB2;
    int sup1, sup2;

    // Carga de datos del primer rectángulo
    printf("Datos del primer rectángulo:\n");
    printf("Ingrese lado 1: ");
    scanf("%i", &ladoA1);
    printf("Ingrese lado 2: ");
    scanf("%i", &ladoA2);

    // Carga de datos del segundo rectángulo
    printf("\nDatos del segundo rectángulo:\n");
    printf("Ingrese lado 1: ");
    scanf("%i", &ladoB1);
    printf("Ingrese lado 2: ");
    scanf("%i", &ladoB2);

    sup1 = retornarSuperficie(ladoA1, ladoA2);
    sup2 = retornarSuperficie(ladoB1, ladoB2);

    printf("\nSuperficie Rectángulo 1: %i\n", sup1);
    printf("Superficie Rectángulo 2: %i\n", sup2);

    if (sup1 > sup2) {
        printf("El primer rectángulo tiene una superficie mayor.\n");
    } else {
        if (sup2 > sup1) {
            printf("El segundo rectángulo tiene una superficie mayor.\n");
        } else {
            printf("Ambos rectángulos tienen la misma superficie.\n");
        }
    }

    return 0;
}