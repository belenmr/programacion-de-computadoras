#include <stdio.h>

int main()
{
    int v1, v2;
    char operacion;
    float resultado;

    printf("Ingrese el primer valor entero: ");
    scanf("%i", &v1);
    printf("Ingrese el segundo valor entero: ");
    scanf("%i", &v2);
    printf("Ingrese la operacion (+, -, *, /): ");
    scanf(" %c", &operacion); // El espacio antes de %c es clave para limpiar el buffer del teclado

    switch (operacion)
    {
        case '+':
            resultado = v1 + v2;
            printf("La suma es: %.0f\n", resultado);
            break;

        case '-':
            resultado = v1 - v2;
            printf("La resta es: %.0f\n", resultado);
            break;

        case '*':
            resultado = v1 * v2;
            printf("La multiplicacion es: %.0f\n", resultado);
            break;

        case '/':
            if (v2 != 0)
            {
                resultado = (float)v1 / v2;
                printf("La division es: %.2f\n", resultado);
            }
            else
            {
                printf("Error: No se puede dividir por cero.\n");
            }
            break;

        default:
            printf("Operacion no valida.\n");
            break;
    }

    return 0;
}