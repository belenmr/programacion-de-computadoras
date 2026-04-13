#include <stdio.h>

#define TAMANO 5
#define MENSAJE_FIN "Proceso finalizado con exito."

void cargarSueldos(float sueldos[TAMANO])
{
    int f;

    for (f = 0; f < TAMANO; f++)
	{
        printf("Ingrese el sueldo del operario [%i]: ", f + 1);
        scanf("%f", &sueldos[f]);
    }
}

void imprimirSueldos(float sueldos[TAMANO])
{
    int f;
    printf("\n--- Listado de sueldos ---\n");

    for (f = 0; f < TAMANO; f++)
	{        
        printf("Operario [%i]: $%0.2f\n", f + 1, sueldos[f]);
    }
}

int main()
{
    // Definimos el vector usando la macro
    float sueldos[TAMANO];

    cargarSueldos(sueldos);
    imprimirSueldos(sueldos);

	printf(MENSAJE_FIN);

    return 0;	
}