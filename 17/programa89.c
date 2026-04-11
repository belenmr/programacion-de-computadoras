#include <stdio.h>

// Función que recibe el costo y las horas, calcula el total y lo muestra
void mostrarSueldo(float costoHora, int cantidadHoras) {
    float sueldoTotal;
    sueldoTotal = costoHora * cantidadHoras;
    printf("El sueldo total a pagar es: $%0.2f\n", sueldoTotal);
    printf("------------------------------------------\n");
}

int main() {
    float costo;
    int horas;
    char opcion;

	do {
        printf("Ingrese el pago por hora: ");
        scanf("%f", &costo);
        
        printf("Ingrese la cantidad de horas trabajadas: ");
        scanf("%i", &horas);

		// Llamada a la función pasando los datos cargados
        mostrarSueldo(costo, horas);

        printf("Desea calcular los datos de otro empleado [s/n]:");
        scanf(" %c", &opcion);
    } while (opcion == 's' || opcion == 'S');

    printf("\n=====================================\n");
    return 0;
}