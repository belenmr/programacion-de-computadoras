#include <stdio.h>

// Carga de matriz 4x4
void cargar(int mat[4][4]) {
    printf("--- Carga de Matriz 4x4 ---\n");

    for (int f = 0; f < 4; f++) {
        for (int c = 0; c < 4; c++) {
            printf("Fila %i, Columna %i: ", f, c);
            scanf("%i", &mat[f][c]);
        }
    }
}

// Imprime la diagonal principal
void imprimirDiagonalPrincipal(int mat[4][4]) {    
    for (int k = 0; k < 4; k++) {
        printf("%i ", mat[k][k]);
    }
    printf("\n");
}

int main() {
    int matriz[4][4];

    cargar(matriz);
    imprimirDiagonalPrincipal(matriz);

    return 0;
}