#include<stdio.h>

int main()
{
    int valor;

    do {
			printf("Ingrese un valor entero entre 0 y 999 (con 0 finaliza):");
			scanf("%i",&valor);

			if (valor >= 100)
			{
				printf("Tiene 3 digitos.\n");
			}
			else
			{
				if (valor >= 10)
				{
					printf("Tiene 2 digitos.\n");
				}
				else
				{
					printf("Tiene 1 digito.\n");
				}
			}
			
     	} while (valor != 0);
	 
	return 0;
}