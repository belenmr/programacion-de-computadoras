#include <stdio.h>

// Carga el vector
void cargarVector(int vec[5]) {
    printf("--- Carga de datos ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Ingrese valor para la posicion [%i]: ", i);
        scanf("%i", &vec[i]);
    }
}

// Busca, encuentra y muestra el mayor y su posición
void mostrarMayor(int vec[5]) {
    int mayor = vec[0]; // Hipótesis inicial: el primero es el más grande
    int posicion = 0;   // Su índice es 0

    // Empezamos a comparar desde la posición 1
    for (int i = 1; i < 5; i++) {
        if (vec[i] > mayor) {
            mayor = vec[i];  // Actualizamos el valor máximo
            posicion = i;    // Guardamos dónde lo encontramos
        }
    }

    printf("\n--- Resultado de la busqueda ---\n");
    printf("El mayor elemento es: %i\n", mayor);
    printf("Se encuentra en el indice: %i\n", posicion);
}

int main() {
    int datos[5];

    cargarVector(datos);
    mostrarMayor(datos);

    return 0;
}