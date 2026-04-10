#include <stdio.h>

int main()
{
    char palabra[50];
    printf("Ingrese una palabra: ");
    gets(palabra);

    if (palabra[0] == 'A' || palabra[0] == 'a')
    {
        printf("La palabra comienza con la vocal A o a");
    }
    else
    {
        printf("La palabra NO comienza con la vocal A o a");
    }

    return 0;
}