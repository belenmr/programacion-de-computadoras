#include <stdio.h>

void determinarMenor() {
    int num1, num2, num3;

    printf("--- Buscando el menor de tres números ---\n");
    printf("Ingrese primer valor: ");
    scanf("%i", &num1);
    printf("Ingrese segundo valor: ");
    scanf("%i", &num2);
    printf("Ingrese tercer valor: ");
    scanf("%i", &num3);

    if (num1 < num2 && num1 < num3) {
        printf("El menor es: %i\n", num1);
    } else {
        if (num2 < num3) {
            printf("El menor es: %i\n", num2);
        } else {
            printf("El menor es: %i\n", num3);
        }
    }
    printf("------------------------------------------\n\n");
}

int main() {
    determinarMenor();
    determinarMenor();
    determinarMenor();

    return 0;
}