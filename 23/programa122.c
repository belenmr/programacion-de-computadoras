#include <stdio.h>
#include <string.h>

// Definimos constantes
#define CANT 5
#define LARGO 41

// Carga los nombres
void cargar(char nombres[CANT][LARGO]) {    
    for (int f = 0; f < CANT; f++) {
        printf("Ingrese el nombre de la persona [%i]: ", f + 1);
        gets(nombres[f]);
    }
}

// Imprime el listado
void imprimir(char nombres[CANT][LARGO]) {    
    for (int f = 0; f < CANT; f++) {
        printf("%s\n", nombres[f]);
    }
}

// Ordenamiento alfabético ascendente (método burbuja)
void ordenar(char nombres[CANT][LARGO]) {
    char aux[LARGO]; // Variable auxiliar para el intercambio de strings
    
    for (int k = 0; k < CANT - 1; k++) {
        for (int f = 0; f < (CANT - 1) - k; f++) {
            // Comparamos alfabéticamente
            // Si devuelve > 0, significa que nombres[f] va después que nombres[f+1]
            if (strcmp(nombres[f], nombres[f + 1]) > 0) {
                // Intercambio usando strcpy
                strcpy(aux, nombres[f]);
                strcpy(nombres[f], nombres[f + 1]);
                strcpy(nombres[f + 1], aux);
            }
        }
    }
}

int main() {
    char personas[CANT][LARGO];

	printf("--- Registro de Personas ---\n");
    cargar(personas);

	printf("\n--- Listado de Personas por orden alfabetico ---\n");
    ordenar(personas);
    imprimir(personas);

    return 0;
}