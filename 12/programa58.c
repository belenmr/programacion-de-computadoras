#include <stdio.h>

#define EMPLEADOS_POR_TURNO 4 // Definimos una constante para el tamaño de los vectores

int main() 
{
	float turnoManana[EMPLEADOS_POR_TURNO];
	float turnoTarde[EMPLEADOS_POR_TURNO];
	float gastosManana = 0, gastosTarde = 0;
	int i;

	printf("--- Ingreso de sueldos: Turno Manana ---\n");
	for (i = 0; i < EMPLEADOS_POR_TURNO; i++) 
	{
		printf("Ingrese sueldo: ");
		scanf("%f", &turnoManana[i]);
		gastosManana += turnoManana[i];
	}

	printf("\n--- Ingreso de sueldos: Turno Tarde ---\n");
	for (i = 0; i < EMPLEADOS_POR_TURNO; i++) 
	{
		printf("Ingrese sueldo: ");
		scanf("%f", &turnoTarde[i]);
		gastosTarde += turnoTarde[i];
	}

	printf("\n==========================================");
	printf("\nGastos totales Turno Manana: $%.2f", gastosManana);
	printf("\nGastos totales Turno Tarde:  $%.2f", gastosTarde);
	printf("\n==========================================\n");

	return 0;
}