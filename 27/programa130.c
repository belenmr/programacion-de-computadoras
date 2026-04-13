#include <stdio.h>

struct producto
{
	int codigo;
	char descripcion[41];
	float precio;
};

int main ()
{
	struct producto prod1,prod2;

	printf("Carga Producto 1\n");
	printf("Ingrese el codigo del producto: ");
	scanf("%i", &prod1.codigo);
	//fflush(stdin);
	getchar();

	printf("Ingrese la descripcion: ");
	gets(prod1.descripcion);

	printf("Ingrese el precio del producto: ");
	scanf("%f", &prod1.precio);

	printf("---------------------------------\n");

	printf("Carga Producto 2\n");
	printf("Ingrese el codigo del producto: ");
	scanf("%i", &prod2.codigo);
	//fflush(stdin);
	getchar();

	printf("Ingrese la descripcion: ");
	gets(prod2.descripcion);

	printf("Ingrese el precio del producto: ");
	scanf("%f", &prod2.precio);

	printf("---------------------------------\n");
	printf("El producto que tiene mayor precio es: ");
	if (prod1.precio > prod2.precio)
	{
		printf("%s", prod1.descripcion);
	}
	else
	{
		if (prod2.precio > prod1.precio)
		{
			printf("%s", prod2.descripcion);
		}
		else
		{
			printf("Tienen igual precio");
		}
		
	}	

	return 0;
}