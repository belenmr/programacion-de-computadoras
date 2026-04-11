#include <stdio.h>

// Función para cargar un vector de 4 elementos
void cargar(float sueldos[4]) {
    for (int i = 0; i < 4; i++) {
        printf("Ingrese sueldo del empleado %i: ", i + 1);
        scanf("%f", &sueldos[i]);
    }
}

// Función que suma sus 4 elementos y retorma el total
float gastosTurno(float sueldos[4]) {
    float total = 0;

    for (int i = 0; i < 4; i++) {
        total += sueldos[i];
    }

    return total;
}

int main() {
    float sueldosMa[4];
    float sueldosTar[4];

    printf("--- Carga de sueldos del turno M ---\n");
    cargar(sueldosMa);

    printf("\n--- Carga de sueldos del turno T ---\n");
    cargar(sueldosTar);

    printf("\nGastos del turno de la manana: %0.2f\n", gastosTurno(sueldosMa));
    printf("Gastos del turno de la tarde: %0.2f\n", gastosTurno(sueldosTar));

    return 0;
}