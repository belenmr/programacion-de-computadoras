#include <stdio.h>

struct pais {
    char nombre[40];
    int cantidadHab;
};

int main ()
{
	struct pais p1, p2, p3;
	
    printf("Ingrese nombre del primer pais: ");
    gets(p1.nombre);
    printf("Ingrese cantidad de habitantes: ");
    scanf("%i", &p1.cantidadHab);
    getchar();

    printf("Ingrese nombre del segundo pais: ");
    gets(p2.nombre);
    printf("Ingrese cantidad de habitantes: ");
    scanf("%i", &p2.cantidadHab);
    getchar();
    
    printf("Ingrese nombre del tercer pais: ");
    gets(p3.nombre);
    printf("Ingrese cantidad de habitantes: ");
    scanf("%i", &p3.cantidadHab);
    getchar();

	if (p1.cantidadHab > p2.cantidadHab && p1.cantidadHab > p3.cantidadHab)
	{
		printf("El pais con mayor cantidad de habitantes es: %s", p1.nombre);
	}
	else
	{
		if (p2.cantidadHab > p3.cantidadHab)
		{
			printf("El pais con mayor cantidad de habitantes es: %s", p2.nombre);
		}
		else
		{
			printf("El pais con mayor cantidad de habitantes es: %s", p3.nombre);
		}		
	}
	
	return 0;
}