#include <stdio.h>

#define TAM 5

void cargar(float *p)
{
	int f;
	for(f = 0; f < TAM; f++)
	{
		printf("Ingrese elemento:");
		scanf("%f", &p[f]);
	}
}

void imprimir(float *p)
{
	int f;
	for(f = 0; f < TAM; f++)
	{
		printf("%0.2f ", p[f]);
	}
}


int main()
{
	float vec[TAM];
	cargar(vec);
	imprimir(vec);

	return 0;
}