#include<stdio.h>

int main()
{
    int num1, num2;
    printf("Ingrese el primer valor: ");
    scanf("%i",&num1);
    printf("Ingrese el segundo valor: ");
    scanf("%i",&num2);
    printf("El mayor es: ");
    if(num1>num2)
    {
       printf("%i",num1);
    }
    else
    {
       printf("%i",num2);
    }
    return 0;
}
