#include<stdio.h>

int main()
{
    int num1,num2,num3;
    printf("Ingrese el primer numero: ");
    scanf("%i",&num1);
    printf("Ingrese el segundo numero: ");
    scanf("%i",&num2);
    printf("Ingrese el tercer numero: ");
    scanf("%i",&num3);
	if (num1 == num2 && num1  == num3)
	{
		int suma = num1 + num2;
        printf("La suma del primero y segundo es: ");
        printf("%i",suma);
        printf("\n");
        int producto = suma * num3;
        printf("El producto del tercero por la suma del primero y segundo es: ");
        printf("%i",producto);
	}
	
	return 0;
}