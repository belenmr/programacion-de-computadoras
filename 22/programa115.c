#include <stdio.h>

// Carga matriz 3x4
void cargar(int mat[3][4]) {
    printf("--- Carga de Matriz (3 filas x 4 columnas) ---\n");
    for (int f = 0; f < 3; f++) {
        for (int c = 0; c < 4; c++) {
            printf("Fila %i, Columna %i: ", f, c);
            scanf("%i", &mat[f][c]);
        }
    }
}

// Imprime la primera fila (índice 0)
void imprimirPrimerFila(int mat[3][4]) {
    printf("\nPrimer fila: ");
    for (int c = 0; c < 4; c++) {
        printf("%i ", mat[0][c]); // La fila queda fija en 0
    }
    printf("\n");
}

// Imprimir la última fila (índice 2)
void imprimirUltimaFila(int mat[3][4]) {
    printf("Ultima fila: ");
    for (int c = 0; c < 4; c++) {
        printf("%i ", mat[2][c]); // La fila queda fija en 2
    }
    printf("\n");
}

// Imprimir la primera columna (índice 0)
void imprimirPrimerColumna(int mat[3][4]) {
    printf("Primer columna:\n");
    for (int f = 0; f < 3; f++) {
        printf("%i\n", mat[f][0]); // La columna queda fija en 0
    }
}

int main() {
    int matriz[3][4];

    cargar(matriz);
    imprimirPrimerFila(matriz);
    imprimirUltimaFila(matriz);
    imprimirPrimerColumna(matriz);

    return 0;
}