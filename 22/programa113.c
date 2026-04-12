#include <stdio.h>

// Carga la matriz
void cargar(int mat[3][5]) {
    printf("--- Carga de Matriz (3x5) ---\n");

    for (int f = 0; f < 3; f++) {
        for (int c = 0; c < 5; c++) {
            printf("Ingrese componente de la fila %i, columna %i: ", f, c);
            scanf("%i", &mat[f][c]);
        }
    }
}

// Imprime la matriz con formato de tabla
void imprimir(int mat[3][5]) {
    printf("\n--- Contenido de la Matriz ---\n");

    for (int f = 0; f < 3; f++) {
        for (int c = 0; c < 5; c++) {
            printf("%i ", mat[f][c]);
        }
    
        printf("\n"); // salto de línea al terminar cada fila
    }
}

int main() {
    int matriz[3][5];

    cargar(matriz);
    imprimir(matriz);

    return 0;
}