#include <stdio.h>

// Función que recibe dos enteros y retorna el mayor de ellos
int retornarMayor(int v1, int v2) {
	int mayor;

    if (v1 > v2) {
        mayor =  v1;
    } else {
        mayor = v2;
    }

	return mayor;
}

int main() {
    int n1, n2, mayor;

    printf("Ingrese el primer valor: ");
    scanf("%i", &n1);
    printf("Ingrese el segundo valor: ");
    scanf("%i", &n2);

    mayor = retornarMayor(n1, n2);

    printf("El mayor entre %i y %i es: %i\n", n1, n2, mayor);

    return 0;
}