#include <stdio.h>

#define TAMANO 40

// Función de carga utilizando sintaxis de punteros
void cargar(char *p) {
    printf("Ingrese una cadena de texto (max %i caracteres): ", TAMANO - 1);
    
    // Al ser un puntero a char, lo pasamos directo a gets
    gets(p); 
}

// Función de impresión utilizando sintaxis de punteros
void imprimir(char *p) {
    printf("\nEl texto ingresado es: %s\n", p);
}

int main() {
    // Definimos el vector de caracteres en el main
    char vector[TAMANO];

    // Al pasar vector, estamos enviando la dirección de memoria de vector[0]
    cargar(vector);
    imprimir(vector);

    return 0;
}


/*
Puntos clave de la resolución:
* No se utiliza el operador `&` dentro de `gets(p)` ni en el `printf("%s", p)` debido a que `p` ya almacena la dirección de memoria del inicio de la cadena.
* Al usar `%s`, el compilador procesa todo el bloque de memoria de forma continua hasta detectar el fin de cadena (`\0`).
*/