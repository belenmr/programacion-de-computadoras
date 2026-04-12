#include <stdio.h>

// 1. Carga por COLUMNAS
void cargarPorColumna(int mat[2][5]) {
    printf("--- Carga de Matriz (2 filas x 5 columnas) por columnas ---\n");
    // El for externo recorre las columnas
    for (int c = 0; c < 5; c++) {
        // El for interno recorre las filas de esa columna
        for (int f = 0; f < 2; f++) {
            printf("Ingrese elemento de la Columna %i, Fila %i: ", c, f);
            scanf("%i", &mat[f][c]);
        }
    }
}

// 2. Imprime en formato tabla
void imprimir(int mat[2][5]) {
    printf("\n----- Matriz -----\n");

    for (int f = 0; f < 2; f++) {
        for (int c = 0; c < 5; c++) {
            printf("%i ", mat[f][c]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[2][5];

    cargarPorColumna(matriz);
    imprimir(matriz);

    return 0;
}