#include <stdio.h>

// Función que recibe tres enteros y retorna el promedio
float calcularPromedio(int v1, int v2, int v3) {
    float suma = v1 + v2 + v3;
    float promedio = suma / 3;
    return promedio;
}

int main() {
    int n1, n2, n3;
    float resultado;

    printf("Ingrese el primer valor: ");
    scanf("%i", &n1);
    printf("Ingrese el segundo valor: ");
    scanf("%i", &n2);
    printf("Ingrese el tercer valor: ");
    scanf("%i", &n3);

    resultado = calcularPromedio(n1, n2, n3);

    printf("El promedio de los tres valores es: %0.2f\n", resultado);

    return 0;
}