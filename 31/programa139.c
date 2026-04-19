#include <stdio.h>

struct punto
{
    int x;
    int y;
};

struct triangulo
{
    struct punto punto1;
    struct punto punto2;
    struct punto punto3;
};

struct punto cargarPunto (char nombre[])
{
	struct punto p;
	printf("--- Ingreso de coordenadas para el %s: ---\n", nombre);
	printf("X: ");
	scanf("%i", &p.x);
	printf("Y: ");
	scanf("%i", &p.y);

	return p;
}

struct triangulo cargarTriangulo ()
{
	struct triangulo t;
	printf("--- Ingreso puntos del triangulo ---");
	t.punto1 = cargarPunto("Punto 1");
	t.punto2 = cargarPunto("Punto 2");
	t.punto3 = cargarPunto("Punto 3");

	return t;
}

void imprimirTriangulo(struct triangulo t)
{
    printf("\n--- COORDENADAS DEL TRIANGULO ---\n");
    printf("Vertice 1: (%i, %i)\n", t.punto1.x, t.punto1.y);
    printf("Vertice 2: (%i, %i)\n", t.punto2.x, t.punto2.y);
    printf("Vertice 3: (%i, %i)\n", t.punto3.x, t.punto3.y);
}

int main ()
{
	struct triangulo triangulo1;
	triangulo1 = cargarTriangulo();
	imprimirTriangulo(triangulo1);
	
	return 0;
}