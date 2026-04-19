#include <stdio.h>

struct producto
{
	int codigo;
	char descripcion[41];
	float precio;
};

struct producto cargar ()
{
	struct producto pr;
	printf("Ingrese el codigo de producto: ");
    scanf("%i", &pr.codigo);
    getchar(); // Limpieza de buffer
    printf("Ingrese la descripcion: ");
    gets(pr.descripcion);
    printf("Ingrese el precio: ");
    scanf("%f", &pr.precio);

	return pr;
}

void imprimir(struct producto pr)
{
	printf("Datos del producto.\n");
    printf("Codigo del producto:%i\n",pr.codigo);
    printf("Descripcion:%s\n",pr.descripcion);
    printf("precio:%0.2f\n",pr.precio);
}

int main ()
{
	struct producto pro1, pro2;
	pro1 = cargar();
    pro2 = cargar();

	return 0;
}
