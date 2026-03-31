#include<stdio.h>

int main () 
{
	int nroCuenta;
	float saldoActual, totalAcreedor = 0;

	do
	{
		printf("Ingrese el numero de cuenta (con numeros negativos finaliza): ");
		scanf("%i",&nroCuenta);

		if (nroCuenta > 0)
		{
			printf("Ingrese el saldo actual:");
			scanf("%f",&saldoActual);

			printf("Nro de Cuenta: %i => ", nroCuenta);

			if (saldoActual > 0)
			{
				printf("Saldo Acreedor \n");
				totalAcreedor = totalAcreedor + saldoActual; //totalAcreedor += saldoActual;
			}
			else if (saldoActual < 0)
			{
				printf("Saldo Deudor \n");
			}
			else
			{
				printf("Saldo Nulo \n");
			}
			
		}
		else if ( nroCuenta == 0)
		{
			printf("Ingrese un numero de cuenta valido.\n");
		}		

	} while (nroCuenta >= 0);
	
	printf("Monto total de los saldos acredores: %.2f", totalAcreedor);

	return 0;
}