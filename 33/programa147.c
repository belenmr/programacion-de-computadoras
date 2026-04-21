#include <stdio.h>

void intercambiar (int *p1, int *p2)
{
    int aux = *p1;
    *p1 = *p2;
    *p2 = aux;
}

int main ()
{
    int x1 = 10;
    int x2 = 20;
    printf("x1 = %i \nx2 = %i \n", x1, x2);

    intercambiar(&x1, &x2);
    printf("x1 = %i \nx2 = %i \n", x1, x2);
    
    return 0;
}