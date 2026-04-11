#include <stdio.h>

void mostrarGenero(char genero) {
    if (genero == 'h') {
        printf("Hombre\n");
    } else if (genero == 'm') {
        printf("Mujer\n");
    } else {
        printf("Caracter no reconocido\n");
    }
}

int main ()
{
	printf("Llamada 1: ");
    mostrarGenero('h');

	printf("Llamada 2: ");
    mostrarGenero('m');

	return 0;
}