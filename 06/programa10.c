#include<stdio.h>

int main()
{
    int num1, num2;
    printf("Ingrese el primer valor: ");
    scanf("%i",&num1);
    printf("Ingrese el segundo valor: ");
    scanf("%i",&num2);
    if(num1>num2)
    {
        int suma, resta;
        suma = num1 + num2;
        resta = num1 - num2;
        printf("La suma es: ");
        printf("%i",suma);
        printf("\n");
        printf("La diferencia es: ");
        printf("%i",resta);
    }
    else
    {
        int producto, division;
        //float division;
        producto = num1 * num2;
        division = num1 / num2;
        printf("El producto es: ");
        printf("%i",producto);
        printf("\n");
        printf("La parte entera de la division es: ");
        printf("%i",division);
    }
    return 0;
}
