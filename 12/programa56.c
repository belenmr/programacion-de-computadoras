#include <stdio.h>

int main ()
{
	int i;
	float sueldos[5]; // tipo nombreVector[tamaño]

	// Carga del vector
	for (i = 0; i < 5; i++)
    {
        printf("Ingrese el sueldo del operario %i: ", i + 1);
        scanf("%f", &sueldos[i]);

		// Impresion del vector
		printf("\n--- Lista de Sueldos Guardados ---\n");
		for (i = 0; i < 5; i++)
		{
			printf("Operario %i: $%.2f\n", i + 1, sueldos[i]);
		}
    }
	
	return 0;
}