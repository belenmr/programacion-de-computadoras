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
	if (num1 < 10 || num2 < 10 || num3 < 10)
	{
        printf("Algunos de los numeros es menor a diez");        
	}
	
	return 0;
}