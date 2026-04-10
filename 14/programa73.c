#include <stdio.h>

int main ()
{
	char oracion[201]; // 200 caracteres + el nulo
	int i = 0;
	int espacios = 0;

	printf("Ingrese una oracion (max 200 carac.): ");
    gets(oracion);

	while (oracion[i] != '\0')
	{
		if (oracion[i] == ' ')
		{
			espacios++;
		}
		
		i++;
	}
	
	if (i > 0) 
    {
        printf("La cantidad de palabras es: %i\n", espacios + 1);
    }
    else 
    {
        printf("No se ingreso ninguna palabra.\n");
    }
	
	return 0;
}