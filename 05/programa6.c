#include<stdio.h>

int main()
{
    int num1, num2, num3, num4, suma, promedio;
    printf("Ingrese el primer valor: ");
    scanf("%i",&num1);
    printf("Ingrese el segundo valor: ");
    scanf("%i",&num2);
    printf("Ingrese el tercer valor: ");
    scanf("%i",&num3);
    printf("Ingrese el cuarto valor: ");
    scanf("%i",&num4);
    suma = num1 + num2 + num3 + num4;
    promedio = suma / 4;
    printf("La suma de los cuatro valores es: ");
    printf("%i",suma);
    printf("\n");
    printf("El promedio de los cuatro valores es: ");
    printf("%i",promedio);
    return 0;
}
