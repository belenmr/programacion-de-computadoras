#include<stdio.h>

int main()
{
    int cantidad;
    float precio, total;
    printf("Ingrese cantidad del articulo: ");
    scanf("%i",&cantidad);
    printf("Ingrese precio del articulo: ");
    scanf("%f",&precio);
    total = cantidad * precio;
    printf("Monto a abonar: ");
    printf("%f",total);
    return 0;
}
