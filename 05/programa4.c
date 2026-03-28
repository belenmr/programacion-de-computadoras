#include<stdio.h>

int main()
{
    int lado, perimetro;
    printf("Ingrese el valor del lado del cuadrado: ");
    scanf("%i",&lado);
    perimetro = lado * 4;
    printf("El perimetro del cuadrado es: ");
    printf("%i",perimetro);
    return 0;
}
