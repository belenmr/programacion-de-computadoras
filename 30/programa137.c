#include <stdio.h>
#include <string.h>

#define CANT 4

struct libro
{
	int codigo;
    char titulo[40];
    char autor[40];
};

void cargar(struct libro vec[CANT])
{
    for (int f = 0; f < CANT; f++)
	{
        printf("Ingrese codigo del libro: ");
        scanf("%i", &vec[f].codigo);
        getchar(); // Limpiamos el buffer del enter anterior
        
        printf("Ingrese titulo: ");
        gets(vec[f].titulo);
        
        printf("Ingrese autor: ");
        gets(vec[f].autor);
        printf("---------------------------\n");
    }
}

void listar(struct libro vec[CANT])
{
    printf("\n--- LISTADO DE LIBROS ---\n");
    for (int f = 0; f < CANT; f++)
	{
        printf("%i - %s (Autor: %s)\n", vec[f].codigo, vec[f].titulo, vec[f].autor);
    }
}

void buscarPorAutor(struct libro vec[CANT])
{
    char buscador[40];
    int existe = 0;
    
    printf("\nIngrese el nombre del autor a buscar: ");
    gets(buscador);
    
    printf("Libros de %s:\n", buscador);
    for (int f = 0; f < CANT; f++)
	{

        if (strcmp(vec[f].autor, buscador) == 0)
		{
            printf("- %s\n", vec[f].titulo);
            existe = 1;
        }
    }
    
    if (!existe)
	{
        printf("No se encontraron libros de ese autor.\n");
    }
}


int main ()
{
	struct libro biblioteca[CANT];

	cargar(biblioteca);
    listar(biblioteca);
    buscarPorAutor(biblioteca);

	return 0;
}