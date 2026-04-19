#include <stdio.h>

struct punto
{
	int x;
	int y;
};

struct punto cargar ()
{
	struct punto pto;
	printf("Carga de las coordenadas de un punto\n");
	printf("Ingrese el valor de X: ");
    scanf("%i", &pto.x);
	printf("Ingrese el valor de Y: ");
    scanf("%i", &pto.y);

	return pto;
}

void imprimirCuadrante(struct punto p) {
    if (p.x > 0 && p.y > 0) {
        printf("El punto (%i, %i) esta en el Primer Cuadrante.\n", p.x, p.y);
    } else if (p.x < 0 && p.y > 0) {
        printf("El punto (%i, %i) esta en el Segundo Cuadrante.\n", p.x, p.y);
    } else if (p.x < 0 && p.y < 0) {
        printf("El punto (%i, %i) esta en el Tercer Cuadrante.\n", p.x, p.y);
    } else if (p.x > 0 && p.y < 0) {
        printf("El punto (%i, %i) esta en el Cuarto Cuadrante.\n", p.x, p.y);
    } else {
        printf("El punto (%i, %i) esta sobre un eje o en el origen.\n", p.x, p.y);
    }
}

int main ()
{
	struct punto punto1, punto2, punto3;
	punto1 = cargar();
	punto2 = cargar();
	punto3 = cargar();

	printf("--- Resultados ---\n");
    imprimirCuadrante(punto1);
    imprimirCuadrante(punto2);
    imprimirCuadrante(punto3);

	return 0;
}