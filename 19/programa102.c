#include <stdio.h>

// Función para cargar vector de 5 elementos
void cargarVector(int vec[5]) {
    for (int i = 0; i < 5; i++) {
        printf("Ingrese elemento [%i]: ", i);
        scanf("%i", &vec[i]);
    }
}

// Función que suma 2 vectores de 5 elementos y carga el resultado en un tercer vector
void sumarVectores(int vec1[5], int vec2[5], int vecSuma[5]) {
    for (int i = 0; i < 5; i++) {
        vecSuma[i] = vec1[i] + vec2[i];
    }
}

// Función para imprimir vector de 5 elementos
void imprimir(int vec[5]) {
    for (int i = 0; i < 5; i++) {
        printf("%i ", vec[i]);
    }

    printf("\n");
}

int main() {
    int v1[5], v2[5], vSuma[5];

    printf("----- Carga del Primer Vector -----\n");
    cargarVector(v1);

    printf("\n----- Carga del Segundo Vector -----\n");
    cargarVector(v2);

    sumarVectores(v1, v2, vSuma);

    printf("\n----- Resultados Finales -----\n");
	printf("Vector 1 \n");
    imprimir(v1);
	printf("Vector 2 \n");
    imprimir(v2);
	printf("Vector Suma \n");
    imprimir(vSuma);

    return 0;
}