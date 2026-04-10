#include <stdio.h>

int main()
{
    int i = 0;
    char palabra[50];
    printf("Ingrese una palabra: ");
    gets(palabra);

    while (palabra[i]!='\0')
    {
        i++;
    }

    printf("La palabra %s tiene %i caracteres", palabra, i);
    
    return 0;
}