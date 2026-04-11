#include <stdio.h>

// Función para calcular y mostrar la superficie (Lado * Lado)
void calcularSuperficie(int lado) {
    int superficie = lado * lado;
    printf("Lado: %i => Superficie: %i\n", lado, superficie);
}

// Función para calcular y mostrar el perímetro (Lado * 4)
void calcularPerimetro(int lado) {
    int perimetro = lado * 4;
    printf("Lado: %i => Perímetro: %i\n", lado, perimetro);
}

int main ()
{
	for (int i = 0; i <= 20; i++)
	{
		calcularSuperficie(i);
        calcularPerimetro(i);
        printf("------------------------------------\n");
	}
	
	
	return 0;
}