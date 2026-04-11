#include <stdio.h>
#include <string.h>

int main()
{
	char usuario[40];
	char clave[40];

	printf("Ingrese nombre de usuario: ");
	scanf("%s", usuario);

	printf("Ingrese clave: ");
	scanf("%s", clave);

	if (strcmp(clave, "abc123") == 0)
	{
		printf("\nCorrecto. Bienvenido %s.\n", usuario);
	}
	else
	{
		printf("\nClave incorrecta.\n");
	}

	return 0;
}