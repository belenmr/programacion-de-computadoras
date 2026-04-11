#include <stdio.h>

// Carga las notas de un curso de 5 alumnos
void cargarNotas(int notas[5]) {
    for (int i = 0; i < 5; i++) {
        printf("Ingrese la nota del alumno %i: ", i + 1);
        scanf("%i", &notas[i]);
    }
}

// Calcula y retorna el promedio de un curso de 5 alumnos
float calcularPromedio(int notas[5]) {
    int suma = 0;
    for (int i = 0; i < 5; i++) {
        suma += notas[i];
    }
    return (float)suma / 5; // Convertimos suma a float para no perder decimales
}

int main() {
    int cursoA[5];
    int cursoB[5];
    float promedioA, promedioB;

    printf("--- Carga de Notas Curso A ---\n");
    cargarNotas(cursoA);

    printf("\n--- Carga de Notas Curso B ---\n");
    cargarNotas(cursoB);

    promedioA = calcularPromedio(cursoA);
    promedioB = calcularPromedio(cursoB);

    printf("\nPromedio Curso A: %0.2f", promedioA);
    printf("\nPromedio Curso B: %0.2f\n", promedioB);

    if (promedioA > promedioB) {
        printf("El Curso A obtuvo el mayor promedio general.\n");
    } else {
        if (promedioB > promedioA) {
            printf("El Curso B obtuvo el mayor promedio general.\n");
        } else {
            printf("Ambos cursos obtuvieron el mismo promedio.\n");
        }
    }

    return 0;
}