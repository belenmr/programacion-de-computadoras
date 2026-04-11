#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char nombre1[40];
	char nombre2[40];
	int i = 0;

	printf("Ingrese el primer nombre: ");
	scanf("%s", nombre1);

	printf("Ingrese el segundo nombre: ");
	scanf("%s", nombre2);

	while (nombre1[i] != '\0') {
		nombre1[i] = toupper(nombre1[i]);
		i++;
	}

	printf("Nombre 1 normalizado: %s \n", nombre1);
	i = 0;

	while (nombre2[i] != '\0') {
		nombre2[i] = toupper(nombre2[i]);
		i++;
	}

	printf("Nombre 2 normalizado: %s \n", nombre2);
	

	printf("Nombres ordenados alfabeticamente:\n");

	if (strcmp(nombre1, nombre2) < 0)
	{
		printf("%s\n", nombre1);
		printf("%s\n", nombre2);
	}
	else
	{
		printf("%s\n", nombre2);
		printf("%s\n", nombre1);
	}

	return 0;
}