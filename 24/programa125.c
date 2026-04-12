#include <stdio.h>

#define CANT 4
#define LARGO 41

void cargar(char nombres[CANT][LARGO], int notas[CANT]) {
    for (int f = 0; f < CANT; f++) {
        printf("Ingrese nombre del alumno [%i]: ", f + 1);
        gets(nombres[f]);
        
        printf("Ingrese nota de %s: ", nombres[f]);
        scanf("%i", &notas[f]);
        
        getchar(); // Limpieza del buffer para el próximo gets
        printf("\n");
    }
}

void procesarAlumnos(char nombres[CANT][LARGO], int notas[CANT]) {
    int contadorMuyBueno = 0;
    
    printf("--- Listado de Condicion de Alumnos ---\n");
    printf("%-40s %-10s %-15s\n", "Nombre", "Nota", "Condicion");
    printf("---------------------------------------------------\n");

    for (int f = 0; f < CANT; f++) {
        printf("%-40s %-10i ", nombres[f], notas[f]);

        if (notas[f] >= 8) {
            printf("Muy Bueno\n");
            contadorMuyBueno++;
        } else if (notas[f] >= 4) {
            printf("Bueno\n");
        } else {
            printf("Insuficiente\n");
        }
    }

    printf("\nCantidad de alumnos con la leyenda 'Muy Bueno': %i\n", contadorMuyBueno);
}

int main() {
    char nombres[CANT][LARGO];
    int notas[CANT];

    cargar(nombres, notas);
    procesarAlumnos(nombres, notas);

    return 0;
}