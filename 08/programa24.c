#include<stdio.h>

int main()
{
    int coordenadaX, coordenadaY;
    printf("Ingrese la coordenada en eje X (distinta a cero): ");
    scanf("%i",&coordenadaX);
    printf("Ingrese la coordenada en eje Y (distinta a cero): ");
    scanf("%i",&coordenadaY);
	if (coordenadaX > 0 && coordenadaY > 0)
    {
        printf("Se encuentra en el primer cuadrante");
    }
    else
    {
        if (coordenadaX < 0 && coordenadaY > 0)
        {
            printf("Se encuentra en el segundo cuadrante");
        }
        else
        {
            if (coordenadaX < 0 && coordenadaY < 0)
            {
                printf("Se encuentra en el tercer cuadrante");
            }
            else
            {
                printf("Se encuentra en el cuarto cuadrante");
            }
        }
    }
	
	return 0;
}