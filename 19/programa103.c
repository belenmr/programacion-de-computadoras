#include <stdio.h>

// Función para cargar la palabra
void cargarPalabra(char palabra[40]) {
    printf("Ingrese una palabra (max 40 caracteres): ");
    scanf("%s", palabra); 
}

// Función que cuenta y retorna la cantidad de vocales
int contarVocales(char palabra[40]) {
    int cant = 0;
    int i = 0;
    
    while (palabra[i] != '\0') {
        if (palabra[i] == 'a' || palabra[i] == 'e' || palabra[i] == 'i' || 
            palabra[i] == 'o' || palabra[i] == 'u' ||
            palabra[i] == 'A' || palabra[i] == 'E' || palabra[i] == 'I' || 
            palabra[i] == 'O' || palabra[i] == 'U') 
        {
            cant++;
        }

        i++;
    }
    return cant;
}

int main() {
    char palabra[40];
    int totalVocales;

    cargarPalabra(palabra);
    totalVocales = contarVocales(palabra);

    printf("La palabra '%s' tiene %i vocales.\n", palabra, totalVocales);

    return 0;
}