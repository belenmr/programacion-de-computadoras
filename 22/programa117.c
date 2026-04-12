#include <stdio.h>

// Carga matriz 3x4
void cargar(int mat[3][4]){
	printf("--- Carga de matriz (3 filas x 4 columnas) ---\n");

	for (int f = 0; f < 3; f++)
	{
		for (int c = 0; c < 4; c++)
		{
			printf("Ingrese elemento de la Fila %i, Columna %i: ", f, c);
            scanf("%i", &mat[f][c]);
		}		
	}	
}

// Imprime matriz 3x4
void imprimir(int mat[3][4]){
	printf("\n--- Matriz ---\n");

	for (int f = 0; f < 3; f++)
	{
		for (int c = 0; c < 4; c++)
		{
			printf("%i ", mat[f][c]);
		}
		printf("\n");
	}
}

// Busca el elemento mayor de la matriz 3x4
void buscarMayor(int mat[3][4]) {
    int mayor = mat[0][0];
    int filaMayor = 0;
    int colMayor = 0;

    for (int f = 0; f < 3; f++) {
        for (int c = 0; c < 4; c++) {
            if (mat[f][c] > mayor) {
                mayor = mat[f][c];
                filaMayor = f;
                colMayor = c;
            }
        }
    }

    printf("\nEl elemento mayor es %i\n", mayor);
    printf("Se encuentra en la Fila %i, Columna %i\n", filaMayor, colMayor);
}

int main ()
{
	int matriz[3][4];

	cargar(matriz);
	imprimir(matriz);
	buscarMayor(matriz);

	return 0;
}