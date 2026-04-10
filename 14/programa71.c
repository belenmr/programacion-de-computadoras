#include <stdio.h>

int main()
{
    int cant = 0, x = 0;
    char palabra[30];

    printf("Ingrese una palabra en minuscula: ");
    gets(palabra);

    while (palabra[x] != '\0') // el caracter ASCII NULL en el lenguaje C se lo representa por '\0'
    {
        if (palabra[x] == 'a' || palabra[x] == 'e' || palabra[x] == 'i' || palabra[x] == 'o' || palabra[x] == 'u')
        {
            cant++;
        }

        x++;
    }

    printf("Cantidad de vocales que tiene la palabra %s es %i", palabra, cant);

    return 0;
}