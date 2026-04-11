#include <stdio.h>

// Carga de vector de alturas
void cargarAlturas(float alturas[5]) {
    printf("--- Carga de Alturas ---\n");

    for (int i = 0; i < 5; i++) {
        printf("Ingrese altura de la persona %i (ej: 1.75): ", i + 1);
        scanf("%f", &alturas[i]);
    }
}

// Retorna el promedio del vector
float calcularPromedio(float alturas[5]) {
    float suma = 0;

    for (int i = 0; i < 5; i++) {
        suma += alturas[i];
    }

    return suma / 5;
}

// 3. Contar e imprimir quiénes están por encima y por debajo del promedio
void altasBajas(float alturas[5], float pro) {
    int altas = 0;
    int bajas = 0;

    for (int i = 0; i < 5; i++) {
        if (alturas[i] > pro) {
            altas++;
        } else {
            if (alturas[i] < pro) {
                bajas++;
            }
        }
    }

    printf("\n----- Resultados -----\n");
    printf("Personas mas altas que el promedio: %i\n", altas);
    printf("Personas mas bajas que el promedio: %i\n", bajas);
}

int main() {
    float vectorAlturas[5];
    float promedio;

    cargarAlturas(vectorAlturas);

    promedio = calcularPromedio(vectorAlturas);
    printf("\nEl promedio de altura es: %0.2f\n", promedio);

    altasBajas(vectorAlturas, promedio);

    return 0;
}