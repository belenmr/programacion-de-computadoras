#include <stdio.h>

#define ALUMNOS 5

int main() 
{
    int i;
    float cursoA[ALUMNOS], cursoB[ALUMNOS];
    float sumaA = 0, sumaB = 0, promedioA = 0, promedioB = 0;

    printf("--------------- Ingreso de notas: Curso A ---------------\n");
    for (i = 0; i < ALUMNOS; i++) 
    {
        printf("Ingresar nota: ");
        scanf("%f", &cursoA[i]);
        sumaA += cursoA[i];
    }

    printf("\n--------------- Ingreso de notas: Curso B ---------------\n");
    for (i = 0; i < ALUMNOS; i++) 
    {
        printf("Ingresar nota: ");
        scanf("%f", &cursoB[i]);
        sumaB += cursoB[i];
    }

    promedioA = sumaA / ALUMNOS;
    promedioB = sumaB / ALUMNOS;

    printf("\nPromedio Curso A: %.2f", promedioA);
    printf("\nPromedio Curso B: %.2f", promedioB);
    printf("\n=============================================================");
    printf("\nCurso con mayor promedio general: ");
    
    if (promedioA > promedioB)
    {
        printf("Curso A");
    }
    else if (promedioB > promedioA)
    {
        printf("Curso B");
    }
    else
    {
        printf("Ambos cursos tienen igual promedio");
    }

    printf("\n=============================================================");
    

    return 0;
}