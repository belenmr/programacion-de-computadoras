#include<stdio.h>

#define TAMANO 4

struct producto {
    int codigo;
    char descripcion[41];
    float precio;
};

void cargar(struct producto vec[TAMANO])
{
    int f;

    for(f = 0; f < TAMANO; f++)
    {
        printf("Ingrese el codigo del producto: ");
        scanf("%i", &vec[f].codigo);
        fflush(stdin);
        printf("Ingrese la descripcion: ");
        gets(vec[f].descripcion);
        printf("Ingrese el precio: ");
        scanf("%f", &vec[f].precio);
    }
}

void imprimir(struct producto vec[TAMANO])
{
    int f;

    for(f = 0; f < TAMANO; f++)
    {
        printf("%i %s %0.2f\n", vec[f].codigo, vec[f].descripcion, vec[f].precio);
    }
}

void precioMayor(struct producto vec[TAMANO])
{
    int f;
    int pos = 0;

    for(f = 1; f < TAMANO; f++)
    {
        if (vec[f].precio > vec[pos].precio)
        {
            pos = f;
        }
    }
	
    printf("Producto mas caro: %s", vec[pos].descripcion);
}


int main()
{
    struct producto vector[TAMANO];

    cargar(vector);
    imprimir(vector);
    precioMayor(vector);

    return 0;
}