#include <stdio.h>

struct pais
{
	char nombre[40];
	int cantidadHab;
};

void cargar(struct pais *ppais)
{
    printf("Ingrese el nombre del pais: ");
    // gets lee hasta encontrar un Enter
    gets(ppais->nombre); 
    
    printf("Ingrese la cantidad de habitantes de dicho pais: ");
    scanf("%i", &ppais->cantidadHab);
    
    // Limpieza de buffer portátil y efectiva para Windows y Linux
    while (getchar() != '\n'); 
}

void imprimir(struct pais p)
{
    printf("Nombre del pais: %s y la cantidad de habitantes es: %i\n", p.nombre, p.cantidadHab);
}

int main()
{
    struct pais pais1, pais2, pais3;
    
    cargar(&pais1);
    cargar(&pais2);
    cargar(&pais3);
    
    printf("\n--- Datos Procesados ---\n");
    imprimir(pais1);
    imprimir(pais2);
    imprimir(pais3);
    
    return 0;
}
