#include <stdio.h>

void mostrarMayor(int v1, int v2, int v3) {
    printf("\n--------- Resultado  ---------\n");
    if (v1 > v2 && v1 > v3) {
        printf("El mayor de los tres es: %i\n", v1);
    } else {
        if (v2 > v3) {
            printf("El mayor de los tres es: %i\n", v2);
        } else {
            printf("El mayor de los tres es: %i\n", v3);
        }
    }
    printf("------------------------------\n");
}

int main() {
    int valor1, valor2, valor3;

    printf("Ingrese el primer valor: ");
    scanf("%i", &valor1);
    printf("Ingrese el segundo valor: ");
    scanf("%i", &valor2);
    printf("Ingrese el tercer valor: ");
    scanf("%i", &valor3);

    mostrarMayor(valor1, valor2, valor3);

    return 0;
}