#include <stdio.h>

// Carga de vector de 8 elementos
void cargar(int vector[8]) {
    printf("--- Carga de 8 elementos enteros ---\n");
    for (int i = 0; i < 8; i++) {
        printf("Ingrese elemento [%i]: ", i);
        scanf("%i", &vector[i]);
    }
}

// Retorna el valor acumulado de todos los elementos de vector de 8 elementos
int sumar(int vector[8]) {
    int suma = 0;
    for (int i = 0; i < 8; i++) {
        suma += vector[i];
    }
    return suma;
}

// Retorna la suma de elementos mayores a 36 de vector de 8 elementos
int sumaMayores36(int vector[8]) {
    int suma = 0;
    for (int i = 0; i < 8; i++) {
        if (vector[i] > 36) {
            suma += vector[i];
        }
    }
    return suma;
}

// Retorna la cantidad de elementos mayores a 50 de vector de 8 elementos
int cantidadMayores50(int vector[8]) {
    int cant = 0;
    for (int i = 0; i < 8; i++) {
        if (vector[i] > 50) {
            cant++;
        }
    }
    return cant;
}

int main() {
    int vector[8];
    
    cargar(vector);
    
    printf("\nValor acumulado de todos los elementos: %i\n", sumar(vector));
    printf("Valor acumulado de los elementos mayores a 36: %i\n", sumaMayores36(vector));
    printf("Cantidad de componentes con valores mayores a 50: %i\n", cantidadMayores50(vector));
    
    return 0;
}