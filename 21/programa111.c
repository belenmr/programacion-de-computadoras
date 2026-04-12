#include <stdio.h>

// Carga los 5 sueldos
void cargarVector(float sueldos[5]) {
    printf("--- Carga de Sueldos ---\n");

    for (int i = 0; i < 5; i++) {
        printf("Ingrese el sueldo del empleado %i: ", i + 1);
        scanf("%f", &sueldos[i]);
    }
}

// Implementa Ordenamiento Burbuja (de menor a mayor)
void ordenar(float sueldos[5]) {
    float aux;
    // Bucle externo: controla las pasadas (N-1)
    for (int k = 0; k < 4; k++) {
        // Bucle interno: realiza las comparaciones e intercambios
        // La optimización '4 - k' evita revisar lo que ya está ordenado
        for (int f = 0; f < 4 - k; f++) {
            if (sueldos[f] > sueldos[f + 1]) {
                // Intercambio usando la variable auxiliar
                aux = sueldos[f];
                sueldos[f] = sueldos[f + 1];
                sueldos[f + 1] = aux;
            }
        }
    }
}

// Imprime vector
void imprimir(float sueldos[5]) {

    for (int i = 0; i < 5; i++) {
        printf("Sueldo %i : $%0.2f\n", i, sueldos[i]);
    }
}

int main() {
    float sueldos[5];

    cargarVector(sueldos);
    ordenar(sueldos);
    imprimir(sueldos);

    return 0;
}