#include <stdio.h>

void cargarVector(int vec[5]) {
    printf("--- Carga de 5 elementos enteros ---\n");

    for (int i = 0; i < 5; i++) {
        printf("Ingrese valor [%i]: ", i);
        scanf("%i", &vec[i]);
    }
}

void imprimir(int vec[5]) {
    for (int i = 0; i < 5; i++) {
        printf("%i ", vec[i]);
    }

    printf("\n");
}

// Ordenamiento de mayor a menor
void ordenarMayorMenor(int vec[5]) {
    int aux;

    for (int k = 0; k < 4; k++) {
        for (int f = 0; f < 4 - k; f++) {

            // Si el actual es menor al siguiente, los intercambiamos para que los más chicos "bajen" al final.
            if (vec[f] < vec[f + 1]) {
                aux = vec[f];
                vec[f] = vec[f + 1];
                vec[f + 1] = aux;
            }
        }
    }
}

// Ordenamiento de menor a mayor
void ordenarMenorMayor(int vec[5]) {
    int aux;
	
    for (int k = 0; k < 4; k++) {
        for (int f = 0; f < 4 - k; f++) {
            
            // Si el actual es mayor al siguiente, los intercambiamos para que los más grandes "suban" al final.
            if (vec[f] > vec[f + 1]) {
                aux = vec[f];
                vec[f] = vec[f + 1];
                vec[f + 1] = aux;
            }
        }
    }
}

int main() {
    int datos[5];

    cargarVector(datos);

    printf("\nOrdenando de mayor a menor...\n");
    ordenarMayorMenor(datos);
    imprimir(datos);

    printf("\nOrdenando de menor a mayor...\n");
    ordenarMenorMayor(datos);
    imprimir(datos);

    return 0;
}