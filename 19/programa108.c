#include <stdio.h>

// Carga un vector de 10 elementos
void cargar(int vec[10]) {
    printf("--- Carga del vector (10 elementos) ---\n");

    for (int i = 0; i < 10; i++) {
        printf("Ingrese elemento [%i]: ", i);
        scanf("%i", &vec[i]);
    }
}

// Verifica si está un vector esta ordenado de menor a mayor
// Retorna 1 si está ordenado, 0 si no lo está
int estaOrdenado(int vec[10]) {
    for (int i = 0; i < 9; i++) {
        if (vec[i] > vec[i + 1]) {            
            return 0; // Si el elemento actual es mayor al siguiente no está ordenado
        }
    }
    
    return 1; // Si termino el for sin entrar al if, está ordenado
}

int main() {
    int numeros[10];

    cargar(numeros);

	// 1 = Verdadero, 0 = Falso
    if (estaOrdenado(numeros)) {
        printf("\nResultado: El vector esta ordenado de menor a mayor.\n");
    } else {
        printf("\nResultado: El vector NO esta ordenado de menor a mayor.\n");
    }

    return 0;
}