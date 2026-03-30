#include<stdio.h>

int main()
{
    int numIngresado, num;
    printf("Ingrese un numero positivo: ");
    scanf("%i",&numIngresado);
    num=1;
    
    while (num <= numIngresado)
    {
        printf("%i", num);
        printf(" - ");
        num = num + 1;
    }

    return 0;
}