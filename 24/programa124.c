#include <stdio.h>
#include <string.h>

#define CANT 5
#define LARGO 41

void cargar(char productos[CANT][LARGO], float precios[CANT]) {
    for (int f = 0; f < CANT; f++) {
        printf("Ingrese nombre del producto [%i]: ", f + 1);
        gets(productos[f]);
        
        printf("Ingrese precio de %s: ", productos[f]);
        scanf("%f", &precios[f]);        
        
        getchar(); // Limpiamos el buffer para el próximo gets
        printf("\n");
    }
}

void compararConPrimero(char productos[CANT][LARGO], float precios[CANT]) {
    int contador = 0;

    printf("El primer producto (%s) tiene un precio de: %.2f\n", productos[0], precios[0]);

    // Empezamos el bucle desde f=1 porque no tiene sentido comparar el primero consigo mismo
    for (int f = 1; f < CANT; f++) { 
        if (precios[f] > precios[0]) {
            contador++;
        }
    }

    printf("\nCantidad de productos con precio mayor al primero: %i\n", contador);
}

int main() {
    char productos[CANT][LARGO];
    float precios[CANT];

    cargar(productos, precios);
    compararConPrimero(productos, precios);

    return 0;
}