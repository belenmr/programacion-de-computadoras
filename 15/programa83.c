#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char nombre1[31], nombre2[31], nombre3[31];
	char auxNombre1[31], auxNombre2[31], auxNombre3[31];
	char cadenaFinal[100];
	int i;

	printf("Ingrese el primer nombre: ");
	gets(nombre1);
	printf("Ingrese el segundo nombre: ");
	gets(nombre2);
	printf("Ingrese el tercer nombre: ");
	gets(nombre3);

	// Creamos copias para normalizar sin perder los originales
	strcpy(auxNombre1, nombre1);
	strcpy(auxNombre2, nombre2);
	strcpy(auxNombre3, nombre3);

	// Normalizamos las copias a mayusculas para comprar correctamente
	for (i = 0; auxNombre1[i]; i++) auxNombre1[i] = toupper(auxNombre1[i]);
	for (i = 0; auxNombre2[i]; i++) auxNombre2[i] = toupper(auxNombre2[i]);
	for (i = 0; auxNombre3[i]; i++) auxNombre3[i] = toupper(auxNombre3[i]);

	// Buscamos si auxNombre1 es el primero
	if (strcmp(auxNombre1, auxNombre2) < 0 && strcmp(auxNombre1, auxNombre3) < 0) {
		strcpy(cadenaFinal, nombre1);

		if (strcmp(auxNombre2, auxNombre3) < 0) {
			strcat(cadenaFinal, ", "); strcat(cadenaFinal, nombre2);
			strcat(cadenaFinal, ", "); strcat(cadenaFinal, nombre3);
		} else {
			strcat(cadenaFinal, ", "); strcat(cadenaFinal, nombre3);
			strcat(cadenaFinal, ", "); strcat(cadenaFinal, nombre2);
		}
	} 
	// Buscamos si auxNombre2 es el primero
	else if (strcmp(auxNombre2, auxNombre1) < 0 && strcmp(auxNombre2, auxNombre3) < 0) {
		strcpy(cadenaFinal, nombre2);

		if (strcmp(auxNombre1, auxNombre3) < 0) {
			strcat(cadenaFinal, ", "); strcat(cadenaFinal, nombre1);
			strcat(cadenaFinal, ", "); strcat(cadenaFinal, nombre3);
		} else {
			strcat(cadenaFinal, ", "); strcat(cadenaFinal, nombre3);
			strcat(cadenaFinal, ", "); strcat(cadenaFinal, nombre1);
		}
	} 
	// Si no, auxNombre3 es el primero
	else {
		strcpy(cadenaFinal, nombre3);
		
		if (strcmp(auxNombre1, auxNombre2) < 0) {
			strcat(cadenaFinal, ", "); strcat(cadenaFinal, nombre1);
			strcat(cadenaFinal, ", "); strcat(cadenaFinal, nombre2);
		} else {
			strcat(cadenaFinal, ", "); strcat(cadenaFinal, nombre2);
			strcat(cadenaFinal, ", "); strcat(cadenaFinal, nombre1);
		}
	}

	printf("\nNombres ordenados alfabéticamente: %s\n", cadenaFinal);

	return 0;
}