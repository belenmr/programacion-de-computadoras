#include<stdio.h>

int main()
{
    int nota1, nota2, nota3, promedio;
    printf("Ingrese la primera nota: ");
    scanf("%i",&nota1);
    printf("Ingrese la segunda nota: ");
    scanf("%i",&nota2);
    printf("Ingrese la tercera nota: ");
    scanf("%i",&nota3);
    promedio = (nota1 + nota2 + nota3) /3;
    if(promedio >= 7)
    {
        printf("Promocionado");
    }
    return 0;
}
