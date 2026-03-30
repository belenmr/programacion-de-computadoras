#include<stdio.h>

int main ()
{
    int i, termino;
    i = 1;
    termino = 11;

    while (i <= 25)
    {
        printf("%i", termino);
        printf(" - ");
        i = i + 1;
        termino = termino + 11;
    }

	return 0;
}