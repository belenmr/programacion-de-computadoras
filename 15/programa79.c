#include<stdio.h>
#include<string.h>

int main()
{
	char nombre[31];
	char apellido[31];
	char nombreCompleto[62];

	printf("Ingrese el nombre: ");
	gets(nombre);

	printf("Ingrese el apellido: ");
	gets(apellido);

	strcpy(nombreCompleto,nombre);
	strcat(nombreCompleto," ");
	strcat(nombreCompleto, apellido);
	printf("Nombre y apellido: %s", nombreCompleto);	
	
	return 0;
}