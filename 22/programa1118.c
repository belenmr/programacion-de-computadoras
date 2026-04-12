#include <stdio.h>

// Carga matriz 2x5
void cargar(int mat[2][5]){
	printf("--- Carga de matriz (2 filas x 5 columnas) ---\n");

	for (int f = 0; f < 2; f++)
	{
		for (int c = 0; c < 5; c++)
		{
			printf("Ingrese elemento de la Fila %i, Columna %i: ", f, c);
            scanf("%i", &mat[f][c]);
		}		
	}	
}

// Imprime matriz 2x5
void imprimir(int mat[2][5]){
	for (int f = 0; f < 2; f++)
	{
		for (int c = 0; c < 5; c++)
		{
			printf("%i ", mat[f][c]);
		}
		printf("\n");
	}
}

void intercambiarFilas(int mat[2][5]) {
    int aux;
    // Recorremos las columnas para ir intercambiando elemento a elemento
    for (int c = 0; c < 5; c++) {
        aux = mat[0][c];        // Guardamos elemento de la primera fila
        mat[0][c] = mat[1][c];  // Ponemos el de la segunda en la primera
        mat[1][c] = aux;        // Ponemos el guardado en la segunda
    }
}


int main ()
{
	int matriz[2][5];

	cargar(matriz);
    
    printf("\nMatriz original:\n");
    imprimir(matriz);

    intercambiarFilas(matriz);

    printf("\nMatriz con la primera fila intercambiada con la segunda:\n");
    imprimir(matriz);

	return 0;
}