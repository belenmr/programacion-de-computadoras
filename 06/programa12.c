#include<stdio.h>

int main()
{
    int num;
    printf("Ingrese un numero entero del 1 al 99: ");
	scanf("%i",&num);
	if (num < 10)
    {
        printf("Tiene un digito");
    }
    else
    {
        printf("Tiene dos digitos");
    }
    return 0;
}