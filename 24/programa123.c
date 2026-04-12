#include <stdio.h>

#define CANT 5
#define LARGO 41

// Carga conjunta: usamos un solo for para ambas estructuras
void cargar(char nombres[CANT][LARGO], int edades[CANT]) {
    for (int f = 0; f < CANT; f++) {
        printf("Ingrese nombre: ");
        gets(nombres[f]);

        printf("Ingrese edad: ");
        scanf(" %i", &edades[f]);

        //fflush(stdin); // No funciona
		getchar(); // Limpia el enter para el proximo gets
		printf("\n");
    }
}

// Imprime nombre de los mayores de edad
void imprimirMayores(char nombres[CANT][LARGO], int edades[CANT]) {
    int hayMayores = 0;
    printf("--- Personas mayores de edad (>= 18) ---\n");
    
    for (int f = 0; f < CANT; f++) {
        if (edades[f] >= 18) {
            // Imprimimos los datos de ambas estructuras
            printf("- %s: %i años\n", nombres[f], edades[f]);
            hayMayores = 1;
        }
    }
    
    if (!hayMayores) {
        printf("No se encontraron personas mayores de edad.\n");
    }
}

int main ()
{
	char nombres[CANT][LARGO];
    int edades[CANT];

    cargar(nombres,edades);
    imprimirMayores(nombres,edades);

	return 0;
}