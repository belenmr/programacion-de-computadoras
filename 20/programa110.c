#include <stdio.h>

// Carga vector de 5 elementos
void cargarVector(int vec[5]) {
    for (int i = 0; i < 5; i++) {
        printf("Ingrese elemento [%i]: ", i);
        scanf("%i", &vec[i]);
    }
}

// Encuentra el menor y lo retorna
int buscarMenor(int vec[5]) {
    int menor = vec[0];
    for (int i = 1; i < 5; i++) {
        if (vec[i] < menor) {
            menor = vec[i];
        }
    }
    return menor;
}

// Cuenta cuántas veces está un valor en el vector
int contarRepeticiones(int vec[5], int valorBusqueda) {
    int cant = 0;
    for (int i = 0; i < 5; i++) {
        if (vec[i] == valorBusqueda) {
            cant++;
        }
    }
    return cant;
}

int main() {
    int datos[5];
    int menorValor, cantidad;

    cargarVector(datos);

    menorValor = buscarMenor(datos);
    
    cantidad = contarRepeticiones(datos, menorValor);

    printf("\nEl menor valor es: %i\n", menorValor);
    if (cantidad > 1) {
        printf("Se repite %i veces.\n", cantidad);
    } else {
        printf("No se repite.\n");
    }

    return 0;
}