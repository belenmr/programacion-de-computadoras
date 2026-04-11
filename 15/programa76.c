#include <stdio.h>
#include <string.h>

int main ()
{
	char palabra[31];
	printf("Ingrese una palabra:");
	gets(palabra);

	// Función strlen: se le pasa como parámetro una variable de tipo cadena de caracteres (vector de tipo char) y nos retorna un entero que representa la cantidad de caracteres almacenados en dicha cadena.
	int cant = strlen(palabra);
	printf("La palabra %s tiene %i letras", palabra, cant);

	return 0;
}