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

// 2. Ordenamiento alfabético descendente (Z a A)
void ordenarDescendente(char nombres[CANT][LARGO]) {
    char aux[LARGO];
    
    for (int k = 0; k < CANT - 1; k++) {
        for (int f = 0; f < (CANT - 1) - k; f++) {
            // Usamos < 0 para que los "menores" se vayan al final
            // Si nombres[f] es menor que nombres[f+1], los intercambiamos
            if (strcmp(nombres[f], nombres[f + 1]) < 0) {
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

	printf("\n--- Listado de Personas por orden alfabetico descendente ---\n");
    ordenarDescendente(personas);
    imprimir(personas);

    return 0;
}