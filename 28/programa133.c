#include <stdio.h>
#include <string.h>

struct pais
{
    char nombre[41];
    int cantidadHab;
};

void imprimir(struct pais p)
{
    printf("Nombre: %s\n", p.nombre);
    printf("Cantidad de Habitantes: %i\n", p.cantidadHab);
	printf("---------------------------------------------\n");
}

int main ()
{
	struct pais pais1={"Argentina",40000000};
	struct pais pais2={"Brasil",35000000};
	struct pais pais3={"Peru",30000000};
	
	return 0;
}