#include <stdio.h>
#include <string.h>

#define MAX_NOMBRE 20
#define MAX_TEMPORAL 100 // Capacidad máxima del vector temporal para ordenar

// Definimos la estructura del producto
typedef struct 
{
	int codigo;
	char nombre[MAX_NOMBRE];
	float precio;
} Producto;

// Prototipos de funciones
void vaciarDatos();
void cargarDatos();
void ordenarPorNombre();
void ordenarPorPrecio();
void listar(Producto vTemp[], int cant);
void imprimir();

int main()
{
	int opcion;

	do
	{
		printf("\n1 - Vaciar datos (Borrar archivo)\n");
        printf("2 - Cargar datos (Guardar en archivo)\n");
        printf("3 - Listar Ordenados nombre por productos\n");
        printf("4 - Listar Ordenados por precio\n");
        printf("0 - Fin\n");
        printf("Seleccione opcion: ");
        scanf("%i", &opcion);
        getchar(); // Limpia el buffer del enter

		switch (opcion)
		{
			case 1:
                vaciarDatos();
                break;
            case 2:
                cargarDatos();
                break;
            case 3:
                ordenarPorNombre();
                break;
            case 4:
                ordenarPorPrecio();
                break;
            case 0:
                printf("\nSaliendo del programa...\n");
                break;
            default:
                printf("\nOpcion invalida.\n");
                break;
		}
	} while (opcion != 0);

	return 0;	
}

// Vacia datos (Abrir en "wb" y cerrar pisa el archivo anterior y lo deja en 0 bytes)
void vaciarDatos()
{
	FILE *arch = fopen("productos.dat", "wb");
	if (arch==NULL)
	{
		printf("\n[Error] No se pudo acceder al archivo.\n");
		return;
	}

	fclose(arch);
	printf("\n[OK] Archivo de datos vaciado por completo.\n");
}

// Carga datos (Pide a un producto y lo agrega al final con "ab")
void cargarDatos()
{
	FILE *arch = fopen("productos.dat", "ab");
	printf("\n[Error] No se pudo abrir el archivo para escribir.\n");
	return;

	Producto p;
	printf("\n--- Carga de Producto ---\n");

	printf("Ingrese codigo de producto: ");
	scanf("%i", &p.codigo);
	getchar(); // Limpia el buffer

	printf("Ingrese nombre de producto: ");
	gets(p.nombre);

	printf("Ingrese precio de producto: ");
	scanf("%f", &p.precio);
	getchar();

	// Guardar la estructura completa en el archivo
    // (&p = dirección del dato, sizeof = tamaño, 1 = un solo registro, arch = puntero al archivo)
	fwrite(&p, sizeof(Producto), 1, arch);

	fclose(arch);
	printf("[OK] Producto guardado en disco exitosamente.\n");
}

void listar(Producto vTemp[], int cant)
{
	if (cant == 0)
	{
		printf("\nNo hay datos para mostrar.\n");
		return;
	}
		
	for (int i = 0; i < cant; i++)
	{
		printf("\nProducto [%i]:\n", i + 1);
		printf("  Codigo: %i\n", vTemp[i].codigo);
		printf("  Nombre: %s\n", vTemp[i].nombre);
		printf("  Precio: %.2f\n", vTemp[i].precio);
	}	
}

void ordenarPorNombre()
{
	FILE *arch = fopen("productos.dat", "rb"); // rb = Read Binary

	if (arch == NULL) {
        printf("\n[Aviso] El archivo no existe o está vacío.\n");
        return;
    }

	Producto vTemp[MAX_TEMPORAL];
	int cant = 0;

	while (fread(&vTemp[cant], sizeof(Producto), 1, arch) == 1)
	{
		cant++;
	}
	fclose(arch);

	for (int i = 0; i < cant-1; i++)
	{
		for (int j = 0; j < cant-1 -i; j++)
		{
			if (strcmp(vTemp[j].nombre, vTemp[j+1].nombre) > 0)
			{
				Producto aux = vTemp[j];
				vTemp[j] = vTemp[j+1];
				vTemp[j+1] = aux;
			}			
		}		
	}
	
	printf("\n--- Lista Ordenada por Nombre ---\n");
	listar(vTemp, cant);
}

void ordenarPorPrecio()
{
	FILE *arch = fopen("productos.dat", "rb");

	if (arch == NULL)
	{
		printf("\n[Aviso] El archivo no existe o está vacío.\n");
		return;
	}

	Producto vTemp[MAX_TEMPORAL];
	int cant = 0;

	while (fread(&vTemp[cant], sizeof(Producto), 1, arch) == 1)
	{
		cant++;
	}
	fclose(arch);

	for (int i = 0; i < cant; i++)
	{
		for (int j = 0; j < cant-1 - i; j++)
		{
			if (vTemp[j].precio > vTemp[j+1].precio)
			{
				Producto aux = vTemp[j];
				vTemp[j] = vTemp[j+1];
				vTemp[j+1] = aux;
			}			
		}		
	}
	
	printf("\n--- Lista Ordenada por Precio ---\n");
	listar(vTemp, cant);	
}

