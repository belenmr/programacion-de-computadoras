#include <stdio.h>

// Función que recibe un vector de 5 elementos y permite la carga por teclado
void cargar(int vec[5]) {
    printf("------- Carga de Elementos -------\n");

    for (int i = 0; i < 5; i++) {
        printf("Ingrese elemento de indice [%i]: ", i);
        scanf("%i", &vec[i]);
    }

    printf("\n");
}

// Función que recibe un vector de 5 elementos y lo muestra por pantalla
void mostrar(int vec[5]) {
    printf("------- Contenido del Vector -------\n");

    for (int i = 0; i < 5; i++) {
        printf("indice %i => %i \n", i, vec[i]);
    }

    printf("----------------------------\n");
}

int main() {
    int numeros[5];

    cargar(numeros);
    mostrar(numeros);

    return 0;
}