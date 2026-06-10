#include <stdio.h>

struct producto
{
	int codigo;
	char descripcion[41];
	float precio;
};

void cargar (struct producto *pprod)
{
	printf("Ingrese codigo: ");
	scanf("%i", &pprod->codigo);  // scanf("%i", &(*pprod).codigo);
	getchar();

	printf("Ingrese descripcion: ");
	gets(pprod->descripcion);  // gets((*pprod).descripcion);

	printf("Ingrese precio: ");
	scanf("%f", &pprod->precio);  // scanf("%f", &(*pprod).precio);
}

void imprimir (struct producto prod)
{
	printf("-----------------------------------\n");
	printf("Codigo:%i\n",prod.codigo);
    printf("Descripcion:%s\n",prod.descripcion);
    printf("Precio:%0.2f\n",prod.precio);
	printf("-----------------------------------\n");
}

int main ()
{
	struct producto prod;
	cargar(&prod);
	imprimir(prod);

	return 0;
}