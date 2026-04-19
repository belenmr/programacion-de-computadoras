#include <stdio.h>

#define TAMANO 3

struct fecha
{
    int dd;
    int mm;
    int aa;
};

struct producto
{
    int codigo;
    char descripcion[41];
    float precio;
    struct fecha fechavencimiento;
};


void cargar(struct producto vec[TAMANO])
{
    for (int f = 0; f < TAMANO; f++) {
        printf("--- Producto %i ---\n", f + 1);
        printf("Ingrese codigo: ");
        scanf("%i", &vec[f].codigo);
        getchar(); // Limpieza de buffer

        printf("Ingrese descripcion: ");
        gets(vec[f].descripcion);

        printf("Ingrese precio: ");
        scanf("%f", &vec[f].precio);

        printf("Fecha de vencimiento (dd mm aa): ");
        scanf("%i %i %i", &vec[f].fechavencimiento.dd, 
                          &vec[f].fechavencimiento.mm, 
                          &vec[f].fechavencimiento.aa);
        printf("\n");
    }
}


void imprimir(struct producto vec[TAMANO])
{
    printf("--- LISTADO DE PRODUCTOS ---\n");
    printf("COD\tDESCRIPCION\tPRECIO\tVENCIMIENTO\n");
    for (int f = 0; f < TAMANO; f++) {
        printf("%i\t%s\t\t%.2f\t%02i/%02i/%i\n", 
               vec[f].codigo, 
               vec[f].descripcion, 
               vec[f].precio,
               vec[f].fechavencimiento.dd, 
               vec[f].fechavencimiento.mm, 
               vec[f].fechavencimiento.aa);
    }
}

int main()
{
    struct producto lista[TAMANO];

    cargar(lista);
    imprimir(lista);

    return 0;
}