#include <stdio.h>
#include <ctype.h>

// Función que determina si un carácter es vocal o no
void verificarVocal(char letra) {
    // Convertimos la letra a minúscula para simplificar la comparación
    char letraMin = tolower(letra);

    if (letraMin == 'a' || letraMin == 'e' || letraMin == 'i' || letraMin == 'o' || letraMin == 'u') {
        printf("El caracter '%c' es una vocal.\n", letra);
    } else {
        if (letraMin >= 'a' && letraMin <= 'z') {
            printf("El caracter '%c' NO es una vocal.\n", letra);
        } else {
            printf("El caracter '%c' no es una letra.\n", letra);
        }
    }
}

int main() {
    char caracter;

    printf("Ingrese un caracter para verificar si es vocal: ");
    scanf(" %c", &caracter); // El espacio antes de %c es para limpiar el buffer de posibles "Enters"

    verificarVocal(caracter);

    printf("\n--- Pruebas de validacion ---\n");
    verificarVocal('A');
    verificarVocal('e');
    verificarVocal('Z');
	verificarVocal('-');
	for(caracter='A'; caracter<='z'; caracter++)
	{
		verificarVocal(caracter);
	}

    return 0;
}