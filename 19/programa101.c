#include <stdio.h>

// Función para la carga de 6 sueldos
void cargarSueldos(float sueldos[6]) {
    printf("--- Registro de Sueldos ---\n");

    for (int i = 0; i < 6; i++) {
        printf("Ingrese el sueldo del empleado %i: ", i + 1);
        scanf("%f", &sueldos[i]);
    }

    printf("\n");
}

// Función para mostrar el listado completo
void imprimirSueldos(float sueldos[6]) {
    printf("--- Listado de Sueldos ---\n");

    for (int i = 0; i < 6; i++) {
        printf("Empleado %i: $%0.2f \n", i + 1, sueldos[i]);
    }

    printf("--------------------------\n");
}

// Función que calcula el gasto total 
float calcularGastoTotal(float sueldos[6]) {
    float acumulador = 0;

    for (int i = 0; i < 6; i++) {
        acumulador += sueldos[i];
    }

    return acumulador;
}

int main() {
    float sueldos[6];
    float gastoTotal;

    cargarSueldos(sueldos);
    imprimirSueldos(sueldos);

    gastoTotal = calcularGastoTotal(sueldos);

    printf("\nEL GASTO TOTAL ES: $%0.2f\n", gastoTotal);

    return 0;
}