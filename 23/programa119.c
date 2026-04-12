#include <stdio.h>

// Definimos constantes para facilitar cambios en el futuro
#define CANT_ARTICULOS 3
#define LARGO_NOMBRE 31 //(30 caracteres + \0)

// Carga los nombres de los artículos
void cargar(char articulos[CANT_ARTICULOS][LARGO_NOMBRE]) {    
    for (int f = 0; f < CANT_ARTICULOS; f++) {
        printf("Ingrese el nombre del articulo [%i]: ", f);        
        gets(articulos[f]); // Usamos gets para capturar la fila completa (incluyendo espacios)
    }
}

// Imprime el listado
void imprimir(char articulos[CANT_ARTICULOS][LARGO_NOMBRE]) {
    
    for (int f = 0; f < CANT_ARTICULOS; f++) {
        printf("- %s\n", articulos[f]);
    }
}

int main() {
    char articulos[CANT_ARTICULOS][LARGO_NOMBRE];

	printf("--- Carga de Articulos ---\n");
    cargar(articulos);
	printf("\n--- Listado de Articulos ---\n");
    imprimir(articulos);

    return 0;
}