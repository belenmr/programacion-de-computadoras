#include <stdio.h>

int main()
{
    char palabra[50];
    int i = 0;

    printf("Ingrese una palabra en minuscula: ");
    gets(palabra);

    while (palabra[i] != '\0')
    {
        if (palabra[i] == 'a' || palabra[i] == 'e' || palabra[i] == 'i' || 
            palabra[i] == 'o' || palabra[i] == 'u')
        {
            palabra[i] = '-';
        }

        i++;
    }

    printf("\nPalabra modificada: %s\n", palabra);

    return 0;
}