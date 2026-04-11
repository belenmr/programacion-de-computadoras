#include <stdio.h>
#include <string.h>

int main ()
{
	char nombre1[40];
    char nombre2[40];	

	printf("Ingrese el primer nombre: ");
    scanf("%s", nombre1);

    printf("Ingrese el segundo nombre: ");
    scanf("%s", nombre2);

	int cantNombre1 = strlen(nombre1);
	int cantNombre2 = strlen(nombre2);

	printf("Nombres ordenados por cantidad de caracteres:\n");
	
	if (cantNombre1 > cantNombre2)
	{
		printf("%s\n", nombre1);
        printf("%s\n", nombre2);
	}
	else if (cantNombre1 < cantNombre2)
	{
		printf("%s\n", nombre2);
        printf("%s\n", nombre1);
	}
	else
	{
		printf("Tienen igual cantidad de caracteres: %s y %s ", nombre1, nombre2);
	}
	
	return 0;
	
}