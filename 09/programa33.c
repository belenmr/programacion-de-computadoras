#include<stdio.h>

int main ()
{
    int n, i;
	float sueldo, totalSueldos = 0;
	int contSueldoBajo = 0;
	int contSueldoAlto = 0;
	i = 1;

	printf("Ingrese la cantidad de empleados: ");
    scanf("%i", &n);

	while (i <= n)
	{
		printf("Ingrese el sueldo del empleado %i: ", i);
        scanf("%f", &sueldo);

		
		if (sueldo >= 100 && sueldo <= 500)
		{
			totalSueldos = totalSueldos  + sueldo;
			if (sueldo <= 300)
			{
				contSueldoBajo = contSueldoBajo + 1;
			}
			else
			{
				contSueldoAlto = contSueldoAlto + 1;
			}
			
			i = i + 1;
		}
		else
		{
			printf("Error: El sueldo debe estar entre 100 y 500. Reintente un sueldo valido.\n");
		}		
	}
	
	printf("\n--- Reporte de Sueldos ---\n");
    printf("Empleados que cobran entre $100 y $300: %i\n", contSueldoBajo);
    printf("Empleados que cobran mas de $300: %i\n", contSueldoAlto);
    printf("Importe total que gasta la empresa: $%.2f\n", totalSueldos);

	return 0;    
}