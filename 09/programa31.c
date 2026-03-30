#include<stdio.h>

int main()
{
    int i, nota, cantNotasMayores, cantNotasMenores;
    i = 1;
    cantNotasMayores = 0;
    cantNotasMenores = 0; 

    while (i <= 10)
    {
        printf("Ingrese la nota: ");
        scanf("%i", &nota);
        if (nota >= 7)
        {
            cantNotasMayores = cantNotasMayores + 1;
        }
        else
        {
            cantNotasMenores = cantNotasMenores + 1;
        }
        i = i + 1;      
    }
    
    printf("Cantidad de alumnos con notas mayores o iguales a 7: ");
    printf("%i",cantNotasMayores);
    printf("\n");
    printf("Cantidad de alumons con notas menores a 7: ");
    printf("%i",cantNotasMenores);

    return 0;
}