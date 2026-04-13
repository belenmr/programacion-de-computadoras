#include <stdio.h>
#include <string.h>

#define CANT_EMPLEADOS 4
#define MESES 3

void cargar (char empleados[CANT_EMPLEADOS][41], float sueldos[CANT_EMPLEADOS][MESES])
{
	for (int f = 0; f < CANT_EMPLEADOS; f++)
	{
        print("Ingrese nombre del empleado: ");
		gets(empleados[f]);

		for(int c = 0;c < MESES; c++)
		{
			printf("Ingrese el sueldo %i de %s: ", (c+1), empleados[f]);
        	scanf("%f", &sueldos[f][c]);
		}		

		getchar();
		printf("\n");
    }
}

void calcularSumaSueldos (float sueldos [CANT_EMPLEADOS][MESES], float total[CANT_EMPLEADOS])
{
	for (int f = 0; f < CANT_EMPLEADOS; f++)
	{
		float suma = 0;

		for (int c = 0; c < MESES; c++)
		{
			suma += sueldos[f][c];
		}

		total[f] = suma;
	}
	
}

void imprimirTotalPagado(char empleados[CANT_EMPLEADOS][41], float total[CANT_EMPLEADOS])
{
    printf("--- Total sueldos pagados por empleado ---\n");
    for (int f = 0; f < CANT_EMPLEADOS; f++)
	{
        printf("%-20s: $ %0.2f\n", empleados[f], total[f]);        
    }
}

void empleadoMayorSueldo(char empleados[CANT_EMPLEADOS][41], float total[CANT_EMPLEADOS])
{
    float mayor = total[0];
    int indiceMayor = 0;

    for (int f = 1; f < CANT_EMPLEADOS; f++)
	{
        if (total[f] > mayor)
		{
            mayor = total[f];
            indiceMayor = f;
        }
    }
    printf("\nEmpleado con mayor ingreso acumulado: %s ($ %0.2f)\n", empleados[indiceMayor], mayor);
}


int main ()
{
	char empleados[CANT_EMPLEADOS][41];
    float sueldos[CANT_EMPLEADOS][MESES];
    float sumatoria3Sueldos[CANT_EMPLEADOS];

    cargar(empleados,sueldos);
    calcularSumaSueldos(sueldos,sumatoria3Sueldos);
    imprimirTotalPagado(empleados,sumatoria3Sueldos);
    empleadoMayorSueldo(empleados,sumatoria3Sueldos);

	return 0;
}