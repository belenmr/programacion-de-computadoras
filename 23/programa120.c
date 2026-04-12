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

// Verifica si se encuentra almacenado el nombre
void consulta(char nombres[CANT][LARGO]) {
    char buscador[LARGO];
    int existe = 0; // (0 = no existe, 1 = existe)

    printf("\nIngrese el nombre que desea buscar: ");
    gets(buscador);

    for (int f = 0; f < CANT; f++) {
        // Comparamos el nombre ingresado con cada fila de la matriz
        if (strcmp(buscador, nombres[f]) == 0) {
            existe = 1; // Si lo encontramos, activamos la bandera
            break;      // Salimos del for porque ya lo encontramos
        }
    }

    if (existe == 1) {
        printf("Resultado: El nombre '%s' se encuentra en la matriz.\n", buscador);
    } else {
        printf("Resultado: El nombre '%s' no fue encontrado.\n", buscador);
    }
}

int main() {
    char personas[CANT][LARGO];

	printf("--- Registro de Personas ---\n");
    cargar(personas);
	printf("\n--- Listado de Personas ---\n");
    imprimir(personas);
    consulta(personas);

    return 0;
}